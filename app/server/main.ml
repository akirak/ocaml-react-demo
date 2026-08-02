open Crista

module Json = struct
  type t = Null | String of string | Object of (string * t) list

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
    | String value -> Printf.sprintf "\"%s\"" (escape value)
    | Object fields ->
        fields
        |> List.map (fun (name, value) ->
            Printf.sprintf "\"%s\":%s" (escape name) (to_string value) )
        |> String.concat "," |> Printf.sprintf "{%s}"
end

type page = {component: string; props: (string * Json.t) list; title: string}

let port =
  ref
    ( match Sys.getenv_opt "PORT" with
    | Some port -> int_of_string port
    | None -> 8080 )

let bind = ref "127.0.0.1"

let request_url request =
  match Request.query request with
  | None -> Request.path request
  | Some query -> Request.path request ^ "?" ^ query

let page_json request page =
  Json.to_string
    (Object
       [ ("component", String page.component)
       ; ("props", Object page.props)
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

let inertia_response request page =
  let json = page_json request page in
  match Request.header "x-inertia" request with
  | Some value when String.equal (String.lowercase_ascii value) "true" ->
      Response.json
        ~headers:(Headers.add "x-inertia" "true" inertia_headers)
        json
  | _ -> Response.html ~headers:inertia_headers (document json page.title)

let require_get request handler =
  match request.Request.meth with
  | "GET" | "HEAD" -> handler ()
  | _ ->
      Response.text
        ~headers:(Headers.of_list [("allow", "GET, HEAD")])
        ~status:405 "Method not allowed\n"

let home request =
  require_get request (fun () ->
      inertia_response request
        { component= "home"
        ; props= [("errors", Json.Object [])]
        ; title= "React.ml Inertia Demo" } )

let about request =
  require_get request (fun () ->
      inertia_response request
        { component= "about"
        ; props=
            [ ("systemVersion", Json.String Sys.ocaml_version)
            ; ("errors", Json.Object []) ]
        ; title= "About" } )

let greet name request =
  require_get request (fun () ->
      inertia_response request
        { component= "greet"
        ; props= [("name", Json.String name); ("errors", Json.Object [])]
        ; title= "Greet" } )

module App_routes = struct
  let home_path () = Routes.nil

  let about_path () = Routes.(s "about" /? nil)

  let greet_path () = Routes.(s "greet" / str /? nil)

  let router =
    Routes.one_of
      Routes.
        [ home_path () @--> home
        ; about_path () @--> about
        ; greet_path () @--> greet ]
end

let handler request =
  match Routes.match' App_routes.router ~target:(Request.path request) with
  | FullMatch route -> route request
  | MatchWithTrailingSlash _ ->
      let path = Request.path request in
      let canonical_path = String.sub path 0 (String.length path - 1) in
      let location =
        match Request.query request with
        | None -> canonical_path
        | Some query -> canonical_path ^ "?" ^ query
      in
      Response.redirect location
  | NoMatch -> Response.text ~status:404 "Not found\n"

let () =
  let address =
    try Unix.inet_addr_of_string !bind
    with Failure _ ->
      prerr_endline ("Invalid numeric bind address: " ^ !bind) ;
      exit 2
  in
  Printf.eprintf "Listening on http://%s:%d\n%!" !bind !port ;
  Miou_server.run ~address ~port:!port handler
