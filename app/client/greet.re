let [@react.component] make =
  (~name) => {
    let content =
      <>
        <Inertia_react.Head title="Greet" />
        <section className="hero">
          <p className="eyebrow"> {React.string("Typed dynamic route")} </p>
          <h1> {React.string("Hey there, " ++ name ++ "!")} </h1>
        </section>
      </>;
    Route_common.Layout.make(~children=content);
  };
