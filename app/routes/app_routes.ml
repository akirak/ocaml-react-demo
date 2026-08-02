type page = Home | About | Greet

type t = {page: page; path: string}

let component = function
  | Home -> "home"
  | About -> "about"
  | Greet -> "greet"

let page route = route.page

let page_of_component = function
  | "home" -> Some Home
  | "about" -> Some About
  | "greet" -> Some Greet
  | _ -> None

let home () = {page= Home; path= "/"}

let about () = {page= About; path= "/about"}

let greet name = {page= Greet; path= "/greet/" ^ name}

let path route = route.path
