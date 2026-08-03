type page = Home | About | Greet | Search

type t = {page: page; path: string}

let component = function
  | Home -> "home"
  | About -> "about"
  | Greet -> "greet"
  | Search -> "search"

let page route = route.page

let page_of_component = function
  | "home" -> Some Home
  | "about" -> Some About
  | "greet" -> Some Greet
  | "search" -> Some Search
  | _ -> None

let home () = {page= Home; path= "/"}

let about () = {page= About; path= "/about"}

let greet name = {page= Greet; path= "/greet/" ^ name}

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

let search ?(query = "") ?(page = 1) () =
  let parameters =
    (if String.equal query "" then [] else ["q=" ^ percent_encode query])
    @ if page = 1 then [] else ["page=" ^ string_of_int page]
  in
  let path =
    match parameters with
    | [] -> "/search"
    | parameters -> "/search?" ^ String.concat "&" parameters
  in
  {page= Search; path}

let path route = route.path
