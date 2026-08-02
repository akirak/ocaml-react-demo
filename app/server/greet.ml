open Crista

let path () = Routes.(s "greet" / str /? nil)

let handle name request =
  Route_common.require_get request (fun () ->
      Route_common.inertia_response request
        { route= App_routes.greet name
        ; props=
            [ ("name", Route_common.Json.String name)
            ; ("errors", Route_common.Json.Object []) ]
        ; title= "Greet" } )
