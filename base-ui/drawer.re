module Drawer = {
  /* https://base-ui.com/react/components/drawer */

  module Root = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/drawer"] [@react.component]
    external make:
      (
        ~defaultOpen: bool=?,
        ~open_: bool=?,
        ~onOpenChange: Js.Json.t=?,
        ~snapPoints: array(Js.Json.t)=?,
        ~defaultSnapPoint: Js.Json.t=?,
        ~snapPoint: Js.Json.t=?,
        ~onSnapPointChange: Js.Json.t=?,
        ~actionsRef: Js.Json.t=?,
        ~defaultTriggerId: string=?,
        ~disablePointerDismissal: bool=?,
        ~handle: Js.Json.t=?,
        ~modal: Js.Json.t=?,
        ~onOpenChangeComplete: Js.Json.t=?,
        ~snapToSequentialPoints: bool=?,
        ~swipeDirection: string=?,
        ~triggerId: string=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module Provider = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/drawer"] [@react.component]
    external make:
      (~children: React.element=?) => React.element = "Provider";
  };

  module Trigger = {
    type state = {
      disabled: bool,
      [@mel.as "open"] open_: bool,
    };

    [@mel.module "@base-ui/react/drawer"] [@react.component]
    external make:
      (
        ~handle: Js.Json.t=?,
        ~nativeButton: bool=?,
        ~payload: Js.Json.t=?,
        ~id: string=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Trigger";
  };

  module Portal = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/drawer"] [@react.component]
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
      [@mel.as "open"] open_: bool,
      transitionStatus: string,
    };

    [@mel.module "@base-ui/react/drawer"] [@react.component]
    external make:
      (
        ~forceRender: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Backdrop";
  };

  module Popup = {
    type state = {
      [@mel.as "open"] open_: bool,
      transitionStatus: string,
    };

    [@mel.module "@base-ui/react/drawer"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Popup";
  };

  module Content = {
    type state = {
      [@mel.as "open"] open_: bool,
      transitionStatus: string,
    };

    [@mel.module "@base-ui/react/drawer"] [@react.component]
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

    [@mel.module "@base-ui/react/drawer"] [@react.component]
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

    [@mel.module "@base-ui/react/drawer"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Description";
  };

  module Close = {
    type state = {disabled: bool};

    [@mel.module "@base-ui/react/drawer"] [@react.component]
    external make:
      (
        ~nativeButton: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Close";
  };

  module Viewport = {
    type state = {
      [@mel.as "open"] open_: bool,
      transitionStatus: string,
    };

    [@mel.module "@base-ui/react/drawer"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Viewport";
  };

  module Handle = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/drawer"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Handle";
  };

  module Indent = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/drawer"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Indent";
  };

  module IndentBackground = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/drawer"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "IndentBackground";
  };

  module SwipeArea = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/drawer"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "SwipeArea";
  };

  module VirtualKeyboardProvider = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/drawer"] [@react.component]
    external make:
      (~children: React.element=?) => React.element = "VirtualKeyboardProvider";
  };
};
