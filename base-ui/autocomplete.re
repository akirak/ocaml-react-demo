module Autocomplete = {
  /* https://base-ui.com/react/components/autocomplete */

  module Root = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/autocomplete"] [@react.component]
    external make:
      (
        ~name: string=?,
        ~defaultValue: Js.Json.t=?,
        ~value: Js.Json.t=?,
        ~onValueChange: Js.Json.t=?,
        ~defaultOpen: bool=?,
        ~open_: bool=?,
        ~onOpenChange: Js.Json.t=?,
        ~autoHighlight: Js.Json.t=?,
        ~keepHighlight: bool=?,
        ~highlightItemOnHover: bool=?,
        ~actionsRef: Js.Json.t=?,
        ~filter: Js.Json.t=?,
        ~filteredItems: Js.Json.t=?,
        ~form: string=?,
        ~grid: bool=?,
        ~inline: bool=?,
        ~itemToStringValue: Js.Json.t=?,
        ~items: Js.Json.t=?,
        ~limit: int=?,
        ~locale: Js.Json.t=?,
        ~loopFocus: bool=?,
        ~modal: bool=?,
        ~mode: string=?,
        ~onItemHighlighted: Js.Json.t=?,
        ~onOpenChangeComplete: Js.Json.t=?,
        ~openOnInputClick: bool=?,
        ~submitOnItemClick: bool=?,
        ~virtualized: bool=?,
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
      disabled: bool,
      popupSide: option(string),
      listEmpty: bool,
      touched: bool,
      dirty: bool,
      valid: option(bool),
      filled: bool,
      focused: bool,
    };

    [@mel.module "@base-ui/react/autocomplete"] [@react.component]
    external make:
      (
        ~nativeButton: bool=?,
        ~disabled: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Trigger";
  };

  module Value = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/autocomplete"] [@react.component]
    external make:
      (~children: Js.Json.t=?) => React.element = "Value";
  };

  module Input = {
    type state = {
      [@mel.as "open"] open_: bool,
      disabled: bool,
      popupSide: option(string),
      listEmpty: bool,
      touched: bool,
      dirty: bool,
      valid: option(bool),
      filled: bool,
      focused: bool,
    };

    [@mel.module "@base-ui/react/autocomplete"] [@react.component]
    external make:
      (
        ~disabled: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Input";
  };

  module Icon = {
    type state = {
      [@mel.as "open"] open_: bool,
      disabled: bool,
      popupSide: option(string),
      listEmpty: bool,
    };

    [@mel.module "@base-ui/react/autocomplete"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Icon";
  };

  module Clear = {
    type state = {
      [@mel.as "open"] open_: bool,
      disabled: bool,
    };

    [@mel.module "@base-ui/react/autocomplete"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Clear";
  };

  module List = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/autocomplete"] [@react.component]
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

    [@mel.module "@base-ui/react/autocomplete"] [@react.component]
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

    [@mel.module "@base-ui/react/autocomplete"] [@react.component]
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

    [@mel.module "@base-ui/react/autocomplete"] [@react.component]
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

    [@mel.module "@base-ui/react/autocomplete"] [@react.component]
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

    [@mel.module "@base-ui/react/autocomplete"] [@react.component]
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
      selected: bool,
    };

    [@mel.module "@base-ui/react/autocomplete"] [@react.component]
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

  module Group = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/autocomplete"] [@react.component]
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

    [@mel.module "@base-ui/react/autocomplete"] [@react.component]
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

    [@mel.module "@base-ui/react/autocomplete"] [@react.component]
    external make:
      (
        ~orientation: string=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Separator";
  };

  module Status = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/autocomplete"] [@react.component]
    external make:
      (
        ~children: Js.Json.t=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Status";
  };

  module Empty = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/autocomplete"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Empty";
  };

  module Collection = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/autocomplete"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Collection";
  };

  module Row = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/autocomplete"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Row";
  };

  module InputGroup = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/autocomplete"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "InputGroup";
  };
};
