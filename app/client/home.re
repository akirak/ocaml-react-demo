module Button = Base_ui.Button;
module Checkbox = Base_ui.Checkbox;
module Input = Base_ui.Input;
module Progress = Base_ui.Progress;
module Slider = Base_ui.Slider;
module Switch = Base_ui.Switch;
module Tabs = Base_ui.Tabs;

let [@react.component] make =
  () => {
    let content =
      <>
        <Inertia_react.Head title="React.ml Inertia Demo" />
        <div className="stack">
          <section className="hero">
            <p className="eyebrow"> {React.string("OCaml + Melange")} </p>
            <h1> {React.string("An Inertia-powered component gallery")} </h1>
            <p>
              {React.string(
                 "This page is selected by the OCaml server and rendered by React without a separate client-side router.",
               )}
            </p>
          </section>
          <section className="panel">
            <h2> {React.string("Button")} </h2>
            <Button nativeButton=true> {React.string("Click me")} </Button>
          </section>
          <section className="panel">
            <h2> {React.string("Input")} </h2>
            <Input />
          </section>
          <section className="panel">
            <h2> {React.string("Checkbox")} </h2>
            <Checkbox.Root defaultChecked=true>
              <Checkbox.Indicator />
              {React.string("Accept terms")}
            </Checkbox.Root>
          </section>
          <section className="panel">
            <h2> {React.string("Switch")} </h2>
            <Switch.Root defaultChecked=true> <Switch.Thumb /> </Switch.Root>
          </section>
          <section className="panel">
            <h2> {React.string("Slider")} </h2>
            <Slider.Root
              defaultValue={Js.Json.array([|Js.Json.number(40.0)|])}
              min=0.0
              max=100.0>
              <Slider.Control>
                <Slider.Track> <Slider.Indicator /> </Slider.Track>
                <Slider.Thumb />
              </Slider.Control>
            </Slider.Root>
          </section>
          <section className="panel">
            <h2> {React.string("Progress")} </h2>
            <Progress.Root value={Js.Json.number(65.0)}>
              <Progress.Track> <Progress.Indicator /> </Progress.Track>
            </Progress.Root>
          </section>
          <section className="panel">
            <h2> {React.string("Tabs")} </h2>
            <Tabs.Root defaultValue={Js.Json.string("one")}>
              <Tabs.List>
                <Tabs.Tab value={Js.Json.string("one")}>
                  {React.string("First")}
                </Tabs.Tab>
                <Tabs.Tab value={Js.Json.string("two")}>
                  {React.string("Second")}
                </Tabs.Tab>
              </Tabs.List>
              <Tabs.Panel value={Js.Json.string("one")}>
                {React.string("Content of the first tab.")}
              </Tabs.Panel>
              <Tabs.Panel value={Js.Json.string("two")}>
                {React.string("Content of the second tab.")}
              </Tabs.Panel>
            </Tabs.Root>
          </section>
        </div>
      </>;
    Route_common.Layout.make(~children=content);
  };
