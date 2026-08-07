let check_path expected destination =
  let actual = App_routes.path destination in
  if not (String.equal expected actual) then
    failwith (Printf.sprintf "expected path %S, got %S" expected actual)

let check_component (App_routes.Any route) =
  let component = App_routes.component route in
  match App_routes.route_of_component component with
  | Some (App_routes.Any decoded) ->
      let decoded_component = App_routes.component decoded in
      if not (String.equal component decoded_component) then
        failwith
          (Printf.sprintf "component %S decoded as %S" component
             decoded_component )
  | None -> failwith (Printf.sprintf "component %S did not decode" component)

let () =
  check_path "/" (App_routes.home ()) ;
  check_path "/about" (App_routes.about ()) ;
  check_path "/greet/Ada%20Lovelace%2FOCaml%3Fx%23y"
    (App_routes.greet "Ada Lovelace/OCaml?x#y") ;
  check_path "/greet/%C3%A9" (App_routes.greet "é") ;
  check_path "/search" (App_routes.search ()) ;
  check_path "/search?q=a%20b%26c&page=2"
    (App_routes.search ~query:"a b&c" ~page:2 ()) ;
  check_path "/search" (App_routes.search ~page:0 ()) ;
  List.iter check_component
    [ App_routes.Any App_routes.Home
    ; App_routes.Any App_routes.About
    ; App_routes.Any App_routes.Greet
    ; App_routes.Any App_routes.Search ] ;
  match App_routes.route_of_component "missing" with
  | None -> ()
  | Some _ -> failwith "an unknown component decoded successfully"
