open Crista

let path () = Routes.(s "about" /? nil)

let handle request =
  Route_common.require_get request (fun () ->
      Route_common.inertia_response request
        { route= App_routes.about ()
        ; props=
            [ ("systemVersion", Route_common.Json.String Sys.ocaml_version)
            ; ("errors", Route_common.Json.Object []) ]
        ; title= "About" } )
