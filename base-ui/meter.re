module Meter = {
  /* https://base-ui.com/react/components/meter */

  module Root = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/meter"] [@react.component]
    external make:
      (
        ~value: float,
        ~ariaValuetext: string=?,
        ~getAriaValueText: Js.Json.t=?,
        ~locale: Js.Json.t=?,
        ~min: float=?,
        ~max: float=?,
        ~format: Js.Json.t=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module Value = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/meter"] [@react.component]
    external make:
      (
        ~children: Js.Json.t=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Value";
  };

  module Indicator = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/meter"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Indicator";
  };

  module Track = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/meter"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Track";
  };

  module Label = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/meter"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Label";
  };
};
