module Fieldset = {
  /* https://base-ui.com/react/components/fieldset */

  module Root = {
    type state = {disabled: bool};

    [@mel.module "@base-ui/react/fieldset"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module Legend = {
    type state = {disabled: bool};

    [@mel.module "@base-ui/react/fieldset"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Legend";
  };
};
