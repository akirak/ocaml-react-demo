let href = route => Js.Json.string(App_routes.path(route));

module Layout = {
  let [@react.component] make =
    (~children) =>
      <div className="shell">
        <header className="site-header">
          <nav className="site-nav" ariaLabel="Primary navigation">
            <Inertia_react.Link href={href(App_routes.home())}>
              {React.string("React.ml Inertia Demo")}
            </Inertia_react.Link>
            <div className="site-links">
              <Inertia_react.Link href={href(App_routes.home())}>
                {React.string("Components")}
              </Inertia_react.Link>
              <Inertia_react.Link href={href(App_routes.about())}>
                {React.string("About")}
              </Inertia_react.Link>
              <Inertia_react.Link href={href(App_routes.greet("Inertia"))}>
                {React.string("Greeting")}
              </Inertia_react.Link>
            </div>
          </nav>
        </header>
        <main className="page"> children </main>
      </div>;
};
