module Progress = {
  /* https://base-ui.com/react/components/progress */

  module Root = {
    type state = {status: string};

    [@mel.module "@base-ui/react/progress"] [@mel.scope "Progress"] [@react.component]
    external make:
      (
        ~value: Js.Json.t,
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
    type state = {status: string};

    [@mel.module "@base-ui/react/progress"] [@mel.scope "Progress"] [@react.component]
    external make:
      (
        ~children: Js.Json.t=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Value";
  };

  module Indicator = {
    type state = {status: string};

    [@mel.module "@base-ui/react/progress"] [@mel.scope "Progress"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Indicator";
  };

  module Track = {
    type state = {status: string};

    [@mel.module "@base-ui/react/progress"] [@mel.scope "Progress"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Track";
  };

  module Label = {
    type state = {status: string};

    [@mel.module "@base-ui/react/progress"] [@mel.scope "Progress"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Label";
  };
};
