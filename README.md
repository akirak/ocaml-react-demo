# OCaml React Demo

This is a demo repository for a full-stack OCaml application built with Melange,
Reason, and [crista](https://github.com/akirak/crista). It also provides OCaml
bindings for React-related packages used by the application.

It features:

- Type-safe routing in native OCaml/ReasonML.
- Integrations with the common frontend toolchain and libraries

## Development
You can make dependencies available through Nix.

Use `process-compose` to start processes:

``` shell
process-compose
```

Then open <http://127.0.0.1:8000>. The OCaml server owns the routes and
returns either the initial HTML document or an Inertia JSON page response;
Vite serves the Melange-generated client module during development.

The application routes are:

- `/` — the component gallery
- `/about` — server-provided OCaml version information
- `/greet/:name` — a typed dynamic route
- `/search?q=ocaml&page=2` — decoded search parameters with typed page props

Set `PORT` to change the server port. `CLIENT_ENTRYPOINT` can override the
client module URL when the frontend assets are served somewhere other than the
default Vite development server.

## Based on

- https://github.com/lessp/react-ml-minimal-template/
- https://github.com/melange-re/melange-nextjs-starter/
