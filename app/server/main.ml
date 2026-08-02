open Crista

let port =
  ref
    ( match Sys.getenv_opt "PORT" with
    | Some port -> int_of_string port
    | None -> 8080 )

let bind = ref "127.0.0.1"

let cors_headers =
  Headers.of_list
    [ ("access-control-allow-origin", "*")
    ; ("access-control-allow-methods", "GET, HEAD, POST, OPTIONS")
    ; ("access-control-allow-headers", "content-type")
    ; ("access-control-allow-private-network", "true")
    ; ("access-control-expose-headers", "x-crista-method")
    ; ("cache-control", "no-store") ]

let handler request =
  match Request.path request with
  | "/" -> Response.text "crista is alive\n"
  | _ -> Response.text ~headers:cors_headers ~status:404 "Not found\n"

let () =
  let address =
    try Unix.inet_addr_of_string !bind
    with Failure _ ->
      prerr_endline ("Invalid numeric bind address: " ^ !bind) ;
      exit 2
  in
  Printf.eprintf "Listening on http://%s:%d\n%!" !bind !port ;
  Miou_server.run ~address ~port:!port handler
