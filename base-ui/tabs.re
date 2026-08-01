module Tabs = {
  /* https://base-ui.com/react/components/tabs */

  module Root = {
    type state = {
      orientation: string,
      tabActivationDirection: string,
    };

    [@mel.module "@base-ui/react/tabs"] [@react.component]
    external make:
      (
        ~defaultValue: Js.Json.t=?,
        ~value: Js.Json.t=?,
        ~onValueChange: Js.Json.t=?,
        ~orientation: string=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module List = {
    type state = {
      orientation: string,
      tabActivationDirection: string,
    };

    [@mel.module "@base-ui/react/tabs"] [@react.component]
    external make:
      (
        ~activateOnFocus: bool=?,
        ~loopFocus: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "List";
  };

  module Tab = {
    type state = {
      disabled: bool,
      active: bool,
      orientation: string,
      tabActivationDirection: string,
    };

    [@mel.module "@base-ui/react/tabs"] [@react.component]
    external make:
      (
        ~value: Js.Json.t,
        ~nativeButton: bool=?,
        ~disabled: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Tab";
  };

  module Panel = {
    type state = {
      hidden: bool,
      transitionStatus: string,
      orientation: string,
      tabActivationDirection: string,
    };

    [@mel.module "@base-ui/react/tabs"] [@react.component]
    external make:
      (
        ~value: Js.Json.t,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~keepMounted: bool=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Panel";
  };

  module Indicator = {
    type state = {
      activeTabPosition: Js.Json.t,
      activeTabSize: Js.Json.t,
      orientation: string,
      tabActivationDirection: string,
    };

    [@mel.module "@base-ui/react/tabs"] [@react.component]
    external make:
      (
        ~renderBeforeHydration: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Indicator";
  };
};

