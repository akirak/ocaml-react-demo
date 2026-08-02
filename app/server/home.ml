open Crista

let path () = Routes.nil

let handle request =
  Route_common.require_get request (fun () ->
      Route_common.inertia_response request
        { route= App_routes.home ()
        ; props= [("errors", Route_common.Json.Object [])]
        ; title= "React.ml Inertia Demo" } )
