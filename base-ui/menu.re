module Menu = {
  /* https://base-ui.com/react/components/menu */

  module Root = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/menu"] [@react.component]
    external make:
      (
        ~defaultOpen: bool=?,
        ~open_: bool=?,
        ~onOpenChange: Js.Json.t=?,
        ~highlightItemOnHover: bool=?,
        ~actionsRef: Js.Json.t=?,
        ~closeParentOnEsc: bool=?,
        ~defaultTriggerId: string=?,
        ~handle: Js.Json.t=?,
        ~loopFocus: bool=?,
        ~modal: bool=?,
        ~onOpenChangeComplete: Js.Json.t=?,
        ~triggerId: string=?,
        ~disabled: bool=?,
        ~orientation: string=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module Trigger = {
    type state = {
      [@mel.as "open"] open_: bool,
      disabled: bool,
    };

    [@mel.module "@base-ui/react/menu"] [@react.component]
    external make:
      (
        ~handle: Js.Json.t=?,
        ~nativeButton: bool=?,
        ~payload: Js.Json.t=?,
        ~disabled: bool=?,
        ~openOnHover: bool=?,
        ~delay: int=?,
        ~closeDelay: int=?,
        ~children: React.element=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Trigger";
  };

  module Portal = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/menu"] [@react.component]
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

    [@mel.module "@base-ui/react/menu"] [@react.component]
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
      [@mel.as "open"] open_: bool,
      side: string,
      align: string,
      anchorHidden: bool,
      nested: bool,
      instant: option(string),
    };

    [@mel.module "@base-ui/react/menu"] [@react.component]
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
      transitionStatus: string,
      side: string,
      align: string,
      [@mel.as "open"] open_: bool,
      nested: bool,
      instant: option(string),
    };

    [@mel.module "@base-ui/react/menu"] [@react.component]
    external make:
      (
        ~finalFocus: Js.Json.t=?,
        ~children: React.element=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Popup";
  };

  module Arrow = {
    type state = {
      [@mel.as "open"] open_: bool,
      side: string,
      align: string,
      uncentered: bool,
    };

    [@mel.module "@base-ui/react/menu"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Arrow";
  };

  module Item = {
    type state = {
      disabled: bool,
      highlighted: bool,
    };

    [@mel.module "@base-ui/react/menu"] [@react.component]
    external make:
      (
        ~label: string=?,
        ~onClick: Js.Json.t=?,
        ~closeOnClick: bool=?,
        ~nativeButton: bool=?,
        ~disabled: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Item";
  };

  module Viewport = {
    type state = {
      activationDirection: option(string),
      transitioning: bool,
      instant: option(string),
    };

    [@mel.module "@base-ui/react/menu"] [@react.component]
    external make:
      (
        ~children: React.element=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Viewport";
  };

  module Group = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/menu"] [@react.component]
    external make:
      (
        ~children: React.element=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Group";
  };

  module GroupLabel = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/menu"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "GroupLabel";
  };

  module Separator = {
    type state = {orientation: string};

    [@mel.module "@base-ui/react/menu"] [@react.component]
    external make:
      (
        ~orientation: string=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Separator";
  };

  module SubmenuRoot = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/menu"] [@react.component]
    external make:
      (
        ~defaultOpen: bool=?,
        ~open_: bool=?,
        ~onOpenChange: Js.Json.t=?,
        ~highlightItemOnHover: bool=?,
        ~actionsRef: Js.Json.t=?,
        ~closeParentOnEsc: bool=?,
        ~loopFocus: bool=?,
        ~onOpenChangeComplete: Js.Json.t=?,
        ~disabled: bool=?,
        ~orientation: string=?,
        ~children: React.element=?,
      ) => React.element = "SubmenuRoot";
  };

  module SubmenuTrigger = {
    type state = {
      disabled: bool,
      highlighted: bool,
      [@mel.as "open"] open_: bool,
    };

    [@mel.module "@base-ui/react/menu"] [@react.component]
    external make:
      (
        ~label: string=?,
        ~onClick: Js.Json.t=?,
        ~nativeButton: bool=?,
        ~disabled: bool=?,
        ~openOnHover: bool=?,
        ~delay: int=?,
        ~closeDelay: int=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "SubmenuTrigger";
  };

  module RadioGroup = {
    type state = {disabled: bool};

    [@mel.module "@base-ui/react/menu"] [@react.component]
    external make:
      (
        ~defaultValue: Js.Json.t=?,
        ~value: Js.Json.t=?,
        ~onValueChange: Js.Json.t=?,
        ~disabled: bool=?,
        ~children: React.element=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "RadioGroup";
  };

  module RadioItem = {
    type state = {
      disabled: bool,
      highlighted: bool,
      checked: bool,
    };

    [@mel.module "@base-ui/react/menu"] [@react.component]
    external make:
      (
        ~label: string=?,
        ~value: Js.Json.t,
        ~onClick: Js.Json.t=?,
        ~closeOnClick: bool=?,
        ~nativeButton: bool=?,
        ~disabled: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "RadioItem";
  };

  module RadioItemIndicator = {
    type state = {
      checked: bool,
      disabled: bool,
      highlighted: bool,
      transitionStatus: string,
    };

    [@mel.module "@base-ui/react/menu"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~keepMounted: bool=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "RadioItemIndicator";
  };

  module CheckboxItem = {
    type state = {
      disabled: bool,
      highlighted: bool,
      checked: bool,
    };

    [@mel.module "@base-ui/react/menu"] [@react.component]
    external make:
      (
        ~label: string=?,
        ~defaultChecked: bool=?,
        ~checked: bool=?,
        ~onCheckedChange: Js.Json.t=?,
        ~onClick: Js.Json.t=?,
        ~closeOnClick: bool=?,
        ~nativeButton: bool=?,
        ~disabled: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "CheckboxItem";
  };

  module CheckboxItemIndicator = {
    type state = {
      checked: bool,
      disabled: bool,
      highlighted: bool,
      transitionStatus: string,
    };

    [@mel.module "@base-ui/react/menu"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~keepMounted: bool=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "CheckboxItemIndicator";
  };

  module LinkItem = {
    type state = {highlighted: bool};

    [@mel.module "@base-ui/react/menu"] [@react.component]
    external make:
      (
        ~label: string=?,
        ~closeOnClick: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "LinkItem";
  };
};
