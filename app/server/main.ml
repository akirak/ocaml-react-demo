open Crista

let port =
  ref
    ( match Sys.getenv_opt "PORT" with
    | Some port -> int_of_string port
    | None -> 8080 )

let bind = ref "127.0.0.1"

let router =
  Routes.one_of
    Routes.
      [ Home.path () @--> Home.handle
      ; About.path () @--> About.handle
      ; Greet.path () @--> Greet.handle ]

let handler request =
  match Routes.match' router ~target:(Request.path request) with
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
