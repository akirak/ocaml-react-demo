type about_props = {system_version: string}

type greet_props = {name: string}

type search_params = {query: string; page: int}

type (_, _) route =
  | Home : (unit, unit) route
  | About : (unit, about_props) route
  | Greet : (string, greet_props) route
  | Search : (search_params, search_params) route

type destination

type packed_route = Any : ('params, 'props) route -> packed_route

val home : unit -> destination

val about : unit -> destination

val greet : string -> destination

val search : ?query:string -> ?page:int -> unit -> destination

val component : ('params, 'props) route -> string

val route_of_component : string -> packed_route option

val path : destination -> string
