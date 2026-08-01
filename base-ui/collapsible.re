module Collapsible = {
  /* https://base-ui.com/react/components/collapsible */

  module Root = {
    type state = {
      open: bool,
      disabled: bool,
      transitionStatus: string,
    };

    [@mel.module "@base-ui/react/collapsible"] [@react.component]
    external make:
      (
        ~defaultOpen: bool=?,
        ~open: bool=?,
        ~onOpenChange: Js.Json.t=?,
        ~disabled: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module Trigger = {
    type state = {
      open: bool,
      disabled: bool,
      transitionStatus: string,
    };

    [@mel.module "@base-ui/react/collapsible"] [@react.component]
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
      open: bool,
      disabled: bool,
    };

    [@mel.module "@base-ui/react/collapsible"] [@react.component]
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

