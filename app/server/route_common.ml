open Crista

module Json = struct
  type t =
    | Null
    | Int of int
    | String of string
    | Object of (string * t) list

  let escape value =
    let buffer = Buffer.create (String.length value + 8) in
    String.iter
      (function
        | '"' -> Buffer.add_string buffer "\\\""
        | '\\' -> Buffer.add_string buffer "\\\\"
        | '\b' -> Buffer.add_string buffer "\\b"
        | '\012' -> Buffer.add_string buffer "\\f"
        | '\n' -> Buffer.add_string buffer "\\n"
        | '\r' -> Buffer.add_string buffer "\\r"
        | '\t' -> Buffer.add_string buffer "\\t"
        | character when Char.code character < 0x20 ->
            Printf.bprintf buffer "\\u%04x" (Char.code character)
        | character -> Buffer.add_char buffer character )
      value ;
    Buffer.contents buffer

  let rec to_string = function
    | Null -> "null"
    | Int value -> string_of_int value
    | String value -> Printf.sprintf "\"%s\"" (escape value)
    | Object fields ->
        fields
        |> List.map (fun (name, value) ->
            Printf.sprintf "\"%s\":%s" (escape name) (to_string value) )
        |> String.concat "," |> Printf.sprintf "{%s}"
end

module Query = struct
  let get name parameters = List.assoc_opt name parameters
end

let request_url request =
  match Request.query request with
  | None -> Request.path request
  | Some query -> Request.path request ^ "?" ^ query

let route_props : type params props.
    (params, props) App_routes.route -> props -> (string * Json.t) list =
 fun route props ->
  match route with
  | Home -> []
  | About -> [("systemVersion", Json.String props.system_version)]
  | Greet -> [("name", Json.String props.name)]
  | Search ->
      [("query", Json.String props.query); ("page", Json.Int props.page)]

let page_json request route props =
  Json.to_string
    (Object
       [ ("component", String (App_routes.component route))
       ; ( "props"
         , Object (route_props route props @ [("errors", Json.Object [])]) )
       ; ("url", String (request_url request))
       ; ("version", Null) ] )

let client_entrypoint () =
  match Sys.getenv_opt "CLIENT_ENTRYPOINT" with
  | Some entrypoint -> entrypoint
  | None -> "http://localhost:5173/main.js"

let document page_json page_title =
  let open Pure_html in
  let open HTML in
  (* Inertia 3 reads the initial page from an application/json script. Escape
     slashes so a prop containing [</script>] cannot terminate that
     element. *)
  let embedded_page_json =
    String.concat "\\/" (String.split_on_char '/' page_json)
  in
  html
    [lang "en"]
    [ head []
        [ meta [charset "UTF-8"]
        ; meta
            [name "viewport"; content "width=device-width, initial-scale=1.0"]
        ; title [] "%s" page_title ]
    ; body []
        [ script
            [string_attr "data-page" "app"; type_ "application/json"]
            "%s" embedded_page_json
        ; div [id "app"] []
        ; script [type_ "module"; src "%s" (client_entrypoint ())] "" ] ]
  |> to_string

let inertia_headers = Headers.of_list [("vary", "X-Inertia")]

let inertia_response request ~route ~props ~title =
  let json = page_json request route props in
  match Request.header "x-inertia" request with
  | Some value when String.equal (String.lowercase_ascii value) "true" ->
      Response.json
        ~headers:(Headers.add "x-inertia" "true" inertia_headers)
        json
  | _ -> Response.html ~headers:inertia_headers (document json title)

let require_get request handler =
  match request.Request.meth with
  | "GET" | "HEAD" -> handler ()
  | _ ->
      Response.text
        ~headers:(Headers.of_list [("allow", "GET, HEAD")])
        ~status:405 "Method not allowed\n"
