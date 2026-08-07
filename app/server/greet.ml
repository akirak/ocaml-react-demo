open Crista

let path () = Routes.(s "greet" / str /? nil)

let handle name request =
  Route_common.require_get request (fun () ->
      let props = App_routes.{name} in
      Route_common.inertia_response request ~route:App_routes.Greet ~props
        ~title:"Greet" )
