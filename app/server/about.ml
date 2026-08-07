open Crista

let path () = Routes.(s "about" /? nil)

let handle request =
  Route_common.require_get request (fun () ->
      let props = App_routes.{system_version= Sys.ocaml_version} in
      Route_common.inertia_response request ~route:App_routes.About ~props
        ~title:"About" )
