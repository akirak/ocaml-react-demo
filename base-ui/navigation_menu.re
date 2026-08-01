module NavigationMenu = {
  /* https://base-ui.com/react/components/navigation-menu */

  module Root = {
    type state = {
      open_: bool,
      nested: bool,
    };

    [@mel.module "@base-ui/react/navigation-menu"] [@react.component]
    external make:
      (
        ~defaultValue: Js.Json.t=?,
        ~value: Js.Json.t=?,
        ~onValueChange: Js.Json.t=?,
        ~actionsRef: Js.Json.t=?,
        ~onOpenChangeComplete: Js.Json.t=?,
        ~delay: int=?,
        ~closeDelay: int=?,
        ~orientation: string=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module Trigger = {
    type state = {open_: bool};

    [@mel.module "@base-ui/react/navigation-menu"] [@react.component]
    external make:
      (
        ~nativeButton: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Trigger";
  };

  module Icon = {
    type state = {open_: bool};

    [@mel.module "@base-ui/react/navigation-menu"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Icon";
  };

  module List = {
    type state = {open_: bool};

    [@mel.module "@base-ui/react/navigation-menu"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "List";
  };

  module Portal = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/navigation-menu"] [@react.component]
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

  module Backdrop = {
    type state = {
      open_: bool,
      transitionStatus: string,
    };

    [@mel.module "@base-ui/react/navigation-menu"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Backdrop";
  };

  module Positioner = {
    type state = {
      open_: bool,
      side: string,
      align: string,
      anchorHidden: bool,
      instant: option(string),
    };

    [@mel.module "@base-ui/react/navigation-menu"] [@react.component]
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
      open_: bool,
      side: string,
      align: string,
      instant: option(string),
      transitionStatus: string,
    };

    [@mel.module "@base-ui/react/navigation-menu"] [@react.component]
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
      open_: bool,
      side: string,
      align: string,
      uncentered: bool,
      instant: option(string),
    };

    [@mel.module "@base-ui/react/navigation-menu"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Arrow";
  };

  module Item = {
    type state = {open_: bool};

    [@mel.module "@base-ui/react/navigation-menu"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Item";
  };

  module Content = {
    type state = {
      open_: bool,
      transitionStatus: string,
    };

    [@mel.module "@base-ui/react/navigation-menu"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Content";
  };

  module Viewport = {
    type state = {
      open_: bool,
      transitionStatus: string,
    };

    [@mel.module "@base-ui/react/navigation-menu"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Viewport";
  };

  module Link = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/navigation-menu"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Link";
  };
};
