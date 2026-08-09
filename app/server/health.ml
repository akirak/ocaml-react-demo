open Crista

let path () = Routes.(s "health" /? nil)

let handle request =
  Route_common.require_get request (fun () ->
      Response.json "{\"status\":\"ok\"}" )
