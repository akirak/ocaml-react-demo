module Select = {
  /* https://base-ui.com/react/components/select */

  module Root = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/select"] [@react.component]
    external make:
      (
        ~name: string=?,
        ~defaultValue: Js.Json.t=?,
        ~value: Js.Json.t=?,
        ~onValueChange: Js.Json.t=?,
        ~defaultOpen: bool=?,
        ~open_: bool=?,
        ~onOpenChange: Js.Json.t=?,
        ~highlightItemOnHover: bool=?,
        ~actionsRef: Js.Json.t=?,
        ~autoComplete: string=?,
        ~form: string=?,
        ~isItemEqualToValue: Js.Json.t=?,
        ~itemToStringLabel: Js.Json.t=?,
        ~itemToStringValue: Js.Json.t=?,
        ~items: Js.Json.t=?,
        ~modal: bool=?,
        ~multiple: bool=?,
        ~onOpenChangeComplete: Js.Json.t=?,
        ~disabled: bool=?,
        ~readOnly: bool=?,
        ~required: bool=?,
        ~inputRef: Js.Json.t=?,
        ~id: string=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module Trigger = {
    type state = {
      [@mel.as "open"] open_: bool,
      readOnly: bool,
      popupSide: option(string),
      value: Js.Json.t,
      placeholder: bool,
      disabled: bool,
      touched: bool,
      dirty: bool,
      valid: option(bool),
      filled: bool,
      focused: bool,
    };

    [@mel.module "@base-ui/react/select"] [@react.component]
    external make:
      (
        ~nativeButton: bool=?,
        ~disabled: bool=?,
        ~children: React.element=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Trigger";
  };

  module Value = {
    type state = {
      [@mel.as "open"] open_: bool,
      readOnly: bool,
      popupSide: option(string),
      value: Js.Json.t,
      placeholder: bool,
      disabled: bool,
      touched: bool,
      dirty: bool,
      valid: option(bool),
      filled: bool,
      focused: bool,
    };

    [@mel.module "@base-ui/react/select"] [@react.component]
    external make:
      (
        ~placeholder: React.element=?,
        ~children: Js.Json.t=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Value";
  };

  module Icon = {
    type state = {
      [@mel.as "open"] open_: bool,
      readOnly: bool,
      popupSide: option(string),
      value: Js.Json.t,
      placeholder: bool,
      disabled: bool,
      touched: bool,
      dirty: bool,
      valid: option(bool),
      filled: bool,
      focused: bool,
    };

    [@mel.module "@base-ui/react/select"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Icon";
  };

  module List = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/select"] [@react.component]
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

    [@mel.module "@base-ui/react/select"] [@react.component]
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

    [@mel.module "@base-ui/react/select"] [@react.component]
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
      instant: option(string),
    };

    [@mel.module "@base-ui/react/select"] [@react.component]
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

    [@mel.module "@base-ui/react/select"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Popup";
  };

  module Item = {
    type state = {
      disabled: bool,
      highlighted: bool,
      selected: bool,
    };

    [@mel.module "@base-ui/react/select"] [@react.component]
    external make:
      (
        ~value: Js.Json.t,
        ~label: Js.Json.t=?,
        ~disabled: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Item";
  };

  module ItemText = {
    type state = {
      disabled: bool,
      highlighted: bool,
      selected: bool,
    };

    [@mel.module "@base-ui/react/select"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "ItemText";
  };

  module ItemIndicator = {
    type state = {
      disabled: bool,
      highlighted: bool,
      selected: bool,
      transitionStatus: string,
    };

    [@mel.module "@base-ui/react/select"] [@react.component]
    external make:
      (
        ~keepMounted: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "ItemIndicator";
  };

  module Separator = {
    type state = {orientation: string};

    [@mel.module "@base-ui/react/select"] [@react.component]
    external make:
      (
        ~orientation: string=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Separator";
  };

  module Group = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/select"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Group";
  };

  module GroupLabel = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/select"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "GroupLabel";
  };
};
