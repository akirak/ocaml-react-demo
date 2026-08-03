type page = Home | About | Greet | Search

type t

val home : unit -> t

val about : unit -> t

val greet : string -> t

val search : ?query:string -> ?page:int -> unit -> t

val page : t -> page

val component : page -> string

val page_of_component : string -> page option

val path : t -> string
