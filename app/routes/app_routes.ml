type about_props = {system_version: string}

type greet_props = {name: string}

type search_params = {query: string; page: int}

type (_, _) route =
  | Home : (unit, unit) route
  | About : (unit, about_props) route
  | Greet : (string, greet_props) route
  | Search : (search_params, search_params) route

type destination =
  | Destination : ('params, 'props) route * 'params -> destination

type packed_route = Any : ('params, 'props) route -> packed_route

let component : type params props. (params, props) route -> string = function
  | Home -> "home"
  | About -> "about"
  | Greet -> "greet"
  | Search -> "search"

let route_of_component = function
  | "home" -> Some (Any Home)
  | "about" -> Some (Any About)
  | "greet" -> Some (Any Greet)
  | "search" -> Some (Any Search)
  | _ -> None

let home () = Destination (Home, ())

let about () = Destination (About, ())

let greet name = Destination (Greet, name)

let percent_encode value =
  let hexadecimal = "0123456789ABCDEF" in
  let encoded = Buffer.create (String.length value) in
  let add_character character =
    let code = Char.code character in
    Buffer.add_char encoded '%' ;
    Buffer.add_char encoded hexadecimal.[code lsr 4] ;
    Buffer.add_char encoded hexadecimal.[code land 0x0f]
  in
  String.iter
    (function
      | ('A' .. 'Z' | 'a' .. 'z' | '0' .. '9' | '-' | '.' | '_' | '~') as
        character ->
          Buffer.add_char encoded character
      | character -> add_character character )
    value ;
  Buffer.contents encoded

let positive_page page = max 1 page

let search ?(query = "") ?(page = 1) () =
  Destination (Search, {query; page= positive_page page})

let search_path {query; page} =
  let page = positive_page page in
  let parameters =
    (if String.equal query "" then [] else ["q=" ^ percent_encode query])
    @ if page = 1 then [] else ["page=" ^ string_of_int page]
  in
  match parameters with
  | [] -> "/search"
  | parameters -> "/search?" ^ String.concat "&" parameters

let path (Destination (route, parameters)) =
  match route with
  | Home -> "/"
  | About -> "/about"
  | Greet -> "/greet/" ^ percent_encode parameters
  | Search -> search_path parameters
