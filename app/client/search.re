let [@react.component] make =
  (~query, ~page) => {
    let displayedQuery = query == "" ? "(none)" : query;
    let content =
      <>
        <Inertia_react.Head title="Search" />
        <div className="stack">
          <section className="hero">
            <p className="eyebrow"> {React.string("Search parameters")} </p>
            <h1> {React.string("Search route")} </h1>
            <p>
              {React.string(
                 "The server decoded q and page from the URL and sent them as typed page props.",
               )}
            </p>
          </section>
          <section className="panel">
            <h2> {React.string("Current parameters")} </h2>
            <dl>
              <dt> {React.string("q")} </dt>
              <dd> {React.string(displayedQuery)} </dd>
              <dt> {React.string("page")} </dt>
              <dd> {React.int(page)} </dd>
            </dl>
            <p>
              <Inertia_react.Link
                href={Route_common.href(
                  App_routes.search(
                    ~query="react router",
                    ~page=page + 1,
                    (),
                  ),
                )}>
                {React.string("Try the next page with a space in the query")}
              </Inertia_react.Link>
            </p>
          </section>
        </div>
      </>;
    Route_common.Layout.make(~children=content);
  };
