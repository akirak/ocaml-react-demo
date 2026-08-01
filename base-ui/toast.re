module Toast = {
  /* https://base-ui.com/react/components/toast */

  module Root = {
    type state = {
      transitionStatus: string,
      expanded: bool,
      limited: bool,
      type_: option(string),
      swiping: bool,
      swipeDirection: option(string),
    };

    [@mel.module "@base-ui/react/toast"] [@react.component]
    external make:
      (
        ~swipeDirection: Js.Json.t=?,
        ~toast: Js.Json.t,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module Provider = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/toast"] [@react.component]
    external make:
      (
        ~limit: int=?,
        ~toastManager: Js.Json.t=?,
        ~timeout: int=?,
        ~children: React.element=?,
      ) => React.element = "Provider";
  };

  module Portal = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/toast"] [@react.component]
    external make:
      (
        ~container: Js.Json.t=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
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

    [@mel.module "@base-ui/react/toast"] [@react.component]
    external make:
      (
        ~disableAnchorTracking: bool=?,
        ~toast: Js.Json.t,
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

  module Arrow = {
    type state = {
      [@mel.as "open"] open_: bool,
      side: string,
      align: string,
      uncentered: bool,
      instant: option(string),
    };

    [@mel.module "@base-ui/react/toast"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Arrow";
  };

  module Content = {
    type state = {
      transitionStatus: string,
      expanded: bool,
      limited: bool,
      type_: option(string),
    };

    [@mel.module "@base-ui/react/toast"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Content";
  };

  module Title = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/toast"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Title";
  };

  module Description = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/toast"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Description";
  };

  module Close = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/toast"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Close";
  };

  module Action = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/toast"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Action";
  };

  module Viewport = {
    type state = {
      activationDirection: option(string),
      transitioning: bool,
      instant: option(string),
    };

    [@mel.module "@base-ui/react/toast"] [@react.component]
    external make:
      (
        ~children: React.element=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Viewport";
  };
};
