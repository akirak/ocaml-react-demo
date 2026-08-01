module Tooltip = {
  /* https://base-ui.com/react/components/tooltip */

  module Root = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/tooltip"] [@react.component]
    external make:
      (
        ~defaultOpen: bool=?,
        ~open_: bool=?,
        ~onOpenChange: Js.Json.t=?,
        ~actionsRef: Js.Json.t=?,
        ~defaultTriggerId: string=?,
        ~handle: Js.Json.t=?,
        ~onOpenChangeComplete: Js.Json.t=?,
        ~triggerId: string=?,
        ~trackCursorAxis: string=?,
        ~disabled: bool=?,
        ~disableHoverablePopup: bool=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module Provider = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/tooltip"] [@react.component]
    external make:
      (
        ~delay: int=?,
        ~closeDelay: int=?,
        ~timeout: int=?,
        ~children: React.element=?,
      ) => React.element = "Provider";
  };

  module Trigger = {
    type state = {open_: bool};

    [@mel.module "@base-ui/react/tooltip"] [@react.component]
    external make:
      (
        ~closeOnClick: bool=?,
        ~handle: Js.Json.t=?,
        ~payload: Js.Json.t=?,
        ~disabled: bool=?,
        ~delay: int=?,
        ~closeDelay: int=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Trigger";
  };

  module Portal = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/tooltip"] [@react.component]
    external make:
      (
        ~container: Js.Json.t=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~keepMounted: bool=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Portal";
  };

  module Positioner = {
    type state = {
      [@mel.as "open"] open_: bool,
      side: string,
      align: string,
      anchorHidden: bool,
      instant: option(string),
    };

    [@mel.module "@base-ui/react/tooltip"] [@react.component]
    external make:
      (
        ~disableAnchorTracking: bool=?,
        ~align: string=?,
        ~alignOffset: Js.Json.t=?,
        ~side: string=?,
        ~sideOffset: Js.Json.t=?,
        ~arrowPadding: int=?,
        ~anchor: Js.Json.t=?,
        ~collisionAvoidance: Js.Json.t=?,
        ~collisionBoundary: Js.Json.t=?,
        ~collisionPadding: Js.Json.t=?,
        ~sticky: bool=?,
        ~positionMethod: string=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Positioner";
  };

  module Popup = {
    type state = {
      [@mel.as "open"] open_: bool,
      side: string,
      align: string,
      instant: option(string),
      transitionStatus: string,
    };

    [@mel.module "@base-ui/react/tooltip"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Popup";
  };

  module Arrow = {
    type state = {
      [@mel.as "open"] open_: bool,
      side: string,
      align: string,
      uncentered: bool,
      instant: option(string),
    };

    [@mel.module "@base-ui/react/tooltip"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Arrow";
  };

  module Viewport = {
    type state = {
      activationDirection: option(string),
      transitioning: bool,
      instant: option(string),
    };

    [@mel.module "@base-ui/react/tooltip"] [@react.component]
    external make:
      (
        ~children: React.element=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Viewport";
  };
};
