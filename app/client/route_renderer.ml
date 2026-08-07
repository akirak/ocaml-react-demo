external about_version : Js.Json.t -> string = "systemVersion" [@@mel.get]

external greet_name : Js.Json.t -> string = "name" [@@mel.get]

external search_query : Js.Json.t -> string = "query" [@@mel.get]

external search_page : Js.Json.t -> int = "page" [@@mel.get]

let decode_props : type params props.
    (params, props) App_routes.route -> Js.Json.t -> props =
 fun route json ->
  match route with
  | Home -> ()
  | About -> App_routes.{system_version= about_version json}
  | Greet -> App_routes.{name= greet_name json}
  | Search -> App_routes.{query= search_query json; page= search_page json}

let render : type params props.
    (params, props) App_routes.route -> props -> React.element =
 fun route props ->
  match route with
  | Home -> Home.make ()
  | About -> About.make ~systemVersion:props.system_version
  | Greet -> Greet.make ~name:props.name
  | Search -> Search.make ~query:props.query ~page:props.page

let component route json = render route (decode_props route json)

let resolve name : Js.Json.t =
  match App_routes.route_of_component name with
  | Some (Any route) -> Obj.magic (component route)
  | None -> failwith ("Unknown Inertia page: " ^ name)
