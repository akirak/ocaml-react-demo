type setup_args;

[@mel.get] external setup_element: setup_args => Dom.element = "el";
[@mel.get] external setup_app: setup_args => Js.Json.t = "App";
[@mel.get] external setup_props: setup_args => Js.Json.t = "props";
[@mel.get] external about_version: Js.Json.t => string = "systemVersion";
[@mel.get] external greet_name: Js.Json.t => string = "name";
[@mel.get] external search_query: Js.Json.t => string = "query";
[@mel.get] external search_page: Js.Json.t => int = "page";

[@mel.obj]
external options:
  (~resolve: string => Js.Json.t, ~setup: setup_args => unit, unit) =>
  Js.Json.t;

let resolve = name =>
  switch (App_routes.page_of_component(name)) {
  | Some(Home) => Obj.magic((_: Js.Json.t) => Home.make())
  | Some(About) =>
      Obj.magic((props: Js.Json.t) =>
        About.make(~systemVersion=about_version(props)))
  | Some(Greet) =>
      Obj.magic((props: Js.Json.t) => Greet.make(~name=greet_name(props)))
  | Some(Search) =>
      Obj.magic((props: Js.Json.t) =>
        Search.make(~query=search_query(props), ~page=search_page(props)))
  | None => failwith("Unknown Inertia page: " ++ name)
  };

let setup = args => {
  let root = ReactDOM.Client.createRoot(setup_element(args));
  let app =
    React.createElement(
      Obj.magic(setup_app(args)),
      Obj.magic(setup_props(args)),
    );
  ReactDOM.Client.render(root, <div className="root"> app </div>);
};

let () =
  ignore(Inertia_react.createInertiaApp(options(~resolve, ~setup, ())));
