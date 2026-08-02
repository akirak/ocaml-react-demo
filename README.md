# OCaml React Demo

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

Set `PORT` to change the server port. `CLIENT_ENTRYPOINT` can override the
client module URL when the frontend assets are served somewhere other than the
default Vite development server.

## Based on

- https://github.com/lessp/react-ml-minimal-template/
- https://github.com/melange-re/melange-nextjs-starter/
