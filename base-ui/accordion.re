module Accordion = {
  /* https://base-ui.com/react/components/accordion */

  module Root = {
    type state = {
      value: array(Js.Json.t),
      disabled: bool,
      orientation: string,
    };

    [@mel.module "@base-ui/react/accordion"] [@react.component]
    external make:
      (
        ~defaultValue: array(Js.Json.t)=?,
        ~value: array(Js.Json.t)=?,
        ~onValueChange: Js.Json.t=?,
        ~hiddenUntilFound: bool=?,
        ~multiple: bool=?,
        ~disabled: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~keepMounted: bool=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module Item = {
    type state = {
      hidden: bool,
      index: int,
      open: bool,
      value: array(Js.Json.t),
      disabled: bool,
      orientation: string,
    };

    [@mel.module "@base-ui/react/accordion"] [@react.component]
    external make:
      (
        ~value: Js.Json.t=?,
        ~onOpenChange: Js.Json.t=?,
        ~disabled: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Item";
  };

  module Header = {
    type state = {
      hidden: bool,
      index: int,
      open: bool,
      value: array(Js.Json.t),
      disabled: bool,
      orientation: string,
    };

    [@mel.module "@base-ui/react/accordion"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Header";
  };

  module Trigger = {
    type state = {
      hidden: bool,
      index: int,
      open: bool,
      value: array(Js.Json.t),
      disabled: bool,
      orientation: string,
    };

    [@mel.module "@base-ui/react/accordion"] [@react.component]
    external make:
      (
        ~nativeButton: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Trigger";
  };

  module Panel = {
    type state = {
      transitionStatus: string,
      hidden: bool,
      index: int,
      open: bool,
      value: array(Js.Json.t),
      disabled: bool,
      orientation: string,
    };

    [@mel.module "@base-ui/react/accordion"] [@react.component]
    external make:
      (
        ~hiddenUntilFound: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~keepMounted: bool=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Panel";
  };
};

