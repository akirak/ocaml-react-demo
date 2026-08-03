open Crista

let path () = Routes.(s "search" /? nil)

let page_number parameters =
  match Route_common.Query.get "page" parameters with
  | Some value -> (
    match int_of_string_opt value with
    | Some page when page > 0 -> page
    | _ -> 1 )
  | None -> 1

let handle request =
  Route_common.require_get request (fun () ->
      let parameters = Request.search_params request in
      let query =
        Route_common.Query.get "q" parameters |> Option.value ~default:""
      in
      let page = page_number parameters in
      Route_common.inertia_response request
        { route= App_routes.search ~query ~page ()
        ; props=
            [ ("query", Route_common.Json.String query)
            ; ("page", Route_common.Json.Int page)
            ; ("errors", Route_common.Json.Object []) ]
        ; title= "Search" } )
