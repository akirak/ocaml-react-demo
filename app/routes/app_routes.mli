type page = Home | About | Greet

type t

val home : unit -> t

val about : unit -> t

val greet : string -> t

val page : t -> page

val component : page -> string

val page_of_component : string -> page option

val path : t -> string
