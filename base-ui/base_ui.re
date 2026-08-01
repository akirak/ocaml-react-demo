/* These modules are faithful bindings for the APIs documented in docs/src/app/(docs)/react/components/\*/types.md. */

module Button = {
  /* https://base-ui.com/react/components/button */

  type buttonState = {disabled: bool};
  type state = buttonState;

  /* These values are JavaScript objects supplied by React/Base UI. */
  type cssProperties;
  type htmlProps;
  type buttonProps;

  type className =
    [ | `String(string)
      | `Function(buttonState => option(string))
    ];

  type style =
    [ | `Properties(cssProperties)
      | `Function(buttonState => option(cssProperties))
    ];

  type render =
    [ | `Element(React.element)
      | `Function((htmlProps, buttonState) => React.element)
    ];

  type props = buttonProps;

  [@mel.module "@base-ui/react/button"] [@react.component]
  external make:
    (
      ~focusableWhenDisabled: bool=?,
      ~nativeButton: bool=?,
      ~className: Js.Json.t=?,
      ~style: Js.Json.t=?,
      ~render: Js.Json.t=?,
      ~children: React.element=?,
    ) => React.element = "Button";
};

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

module AlertDialog = {
  /* https://base-ui.com/react/components/alert-dialog */

  module Root = {
    type state = {};

    [@mel.module "@base-ui/react/alert-dialog"] [@react.component]
    external make:
      (
        ~defaultOpen: bool=?,
        ~open: bool=?,
        ~onOpenChange: Js.Json.t=?,
        ~actionsRef: Js.Json.t=?,
        ~defaultTriggerId: string=?,
        ~handle: Js.Json.t=?,
        ~onOpenChangeComplete: Js.Json.t=?,
        ~triggerId: string=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module Trigger = {
    type state = {
      disabled: bool,
      open: bool,
    };

    [@mel.module "@base-ui/react/alert-dialog"] [@react.component]
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
    type state = {};

    [@mel.module "@base-ui/react/alert-dialog"] [@react.component]
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
      open: bool,
      transitionStatus: string,
    };

    [@mel.module "@base-ui/react/alert-dialog"] [@react.component]
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
      open: bool,
      transitionStatus: string,
      nested: bool,
      nestedDialogOpen: bool,
    };

    [@mel.module "@base-ui/react/alert-dialog"] [@react.component]
    external make:
      (
        ~initialFocus: Js.Json.t=?,
        ~finalFocus: Js.Json.t=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Popup";
  };

  module Title = {
    type state = {};

    [@mel.module "@base-ui/react/alert-dialog"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Title";
  };

  module Description = {
    type state = {};

    [@mel.module "@base-ui/react/alert-dialog"] [@react.component]
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

    [@mel.module "@base-ui/react/alert-dialog"] [@react.component]
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
      open: bool,
      transitionStatus: string,
      nested: bool,
      nestedDialogOpen: bool,
    };

    [@mel.module "@base-ui/react/alert-dialog"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Viewport";
  };
};

module Avatar = {
  /* https://base-ui.com/react/components/avatar */

  module Root = {
    type state = {imageLoadingStatus: string};

    [@mel.module "@base-ui/react/avatar"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module Image = {
    type state = {
      transitionStatus: string,
      imageLoadingStatus: string,
    };

    [@mel.module "@base-ui/react/avatar"] [@react.component]
    external make:
      (
        ~onLoadingStatusChange: Js.Json.t=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Image";
  };

  module Fallback = {
    type state = {imageLoadingStatus: string};

    [@mel.module "@base-ui/react/avatar"] [@react.component]
    external make:
      (
        ~delay: int=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Fallback";
  };
};

module Checkbox = {
  /* https://base-ui.com/react/components/checkbox */

  module Root = {
    type state = {
      checked: bool,
      disabled: bool,
      readOnly: bool,
      required: bool,
      indeterminate: bool,
      touched: bool,
      dirty: bool,
      valid: option(bool),
      filled: bool,
      focused: bool,
    };

    [@mel.module "@base-ui/react/checkbox"] [@react.component]
    external make:
      (
        ~name: string=?,
        ~defaultChecked: bool=?,
        ~checked: bool=?,
        ~onCheckedChange: Js.Json.t=?,
        ~indeterminate: bool=?,
        ~value: string=?,
        ~form: string=?,
        ~nativeButton: bool=?,
        ~parent: bool=?,
        ~uncheckedValue: string=?,
        ~disabled: bool=?,
        ~readOnly: bool=?,
        ~required: bool=?,
        ~inputRef: Js.Json.t=?,
        ~id: string=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module Indicator = {
    type state = {
      transitionStatus: string,
      checked: bool,
      disabled: bool,
      readOnly: bool,
      required: bool,
      indeterminate: bool,
      touched: bool,
      dirty: bool,
      valid: option(bool),
      filled: bool,
      focused: bool,
    };

    [@mel.module "@base-ui/react/checkbox"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~keepMounted: bool=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Indicator";
  };
};

module CheckboxGroup = {
  /* https://base-ui.com/react/components/checkbox-group */

  type state = {
    disabled: bool,
    touched: bool,
    dirty: bool,
    valid: option(bool),
    filled: bool,
    focused: bool,
  };

  [@mel.module "@base-ui/react/checkbox-group"] [@react.component]
  external make:
    (
      ~defaultValue: array(string)=?,
      ~value: array(string)=?,
      ~onValueChange: Js.Json.t=?,
      ~allValues: array(string)=?,
      ~disabled: bool=?,
      ~className: Js.Json.t=?,
      ~style: Js.Json.t=?,
      ~render: Js.Json.t=?,
      ~children: React.element=?,
    ) => React.element = "CheckboxGroup";
};

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

module Dialog = {
  /* https://base-ui.com/react/components/dialog */

  module Root = {
    type state = {};

    [@mel.module "@base-ui/react/dialog"] [@react.component]
    external make:
      (
        ~defaultOpen: bool=?,
        ~open: bool=?,
        ~onOpenChange: Js.Json.t=?,
        ~actionsRef: Js.Json.t=?,
        ~defaultTriggerId: string=?,
        ~disablePointerDismissal: bool=?,
        ~handle: Js.Json.t=?,
        ~modal: Js.Json.t=?,
        ~onOpenChangeComplete: Js.Json.t=?,
        ~triggerId: string=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module Trigger = {
    type state = {
      disabled: bool,
      open: bool,
    };

    [@mel.module "@base-ui/react/dialog"] [@react.component]
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
    type state = {};

    [@mel.module "@base-ui/react/dialog"] [@react.component]
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
      open: bool,
      transitionStatus: string,
    };

    [@mel.module "@base-ui/react/dialog"] [@react.component]
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
      open: bool,
      transitionStatus: string,
      nested: bool,
      nestedDialogOpen: bool,
    };

    [@mel.module "@base-ui/react/dialog"] [@react.component]
    external make:
      (
        ~initialFocus: Js.Json.t=?,
        ~finalFocus: Js.Json.t=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Popup";
  };

  module Title = {
    type state = {};

    [@mel.module "@base-ui/react/dialog"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Title";
  };

  module Description = {
    type state = {};

    [@mel.module "@base-ui/react/dialog"] [@react.component]
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

    [@mel.module "@base-ui/react/dialog"] [@react.component]
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
      open: bool,
      transitionStatus: string,
      nested: bool,
      nestedDialogOpen: bool,
    };

    [@mel.module "@base-ui/react/dialog"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Viewport";
  };
};

module Input = {
  /* https://base-ui.com/react/components/input */

  type state = {
    disabled: bool,
    touched: bool,
    dirty: bool,
    valid: option(bool),
    filled: bool,
    focused: bool,
  };

  [@mel.module "@base-ui/react/input"] [@react.component]
  external make:
    (
      ~defaultValue: Js.Json.t=?,
      ~value: Js.Json.t=?,
      ~onValueChange: Js.Json.t=?,
      ~className: Js.Json.t=?,
      ~style: Js.Json.t=?,
      ~render: Js.Json.t=?,
    ) => React.element = "Input";
};

module Meter = {
  /* https://base-ui.com/react/components/meter */

  module Root = {
    type state = {};

    [@mel.module "@base-ui/react/meter"] [@react.component]
    external make:
      (
        ~value: float,
        ~ariaValuetext: string=?,
        ~getAriaValueText: Js.Json.t=?,
        ~locale: Js.Json.t=?,
        ~min: float=?,
        ~max: float=?,
        ~format: Js.Json.t=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module Value = {
    type state = {};

    [@mel.module "@base-ui/react/meter"] [@react.component]
    external make:
      (
        ~children: Js.Json.t=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Value";
  };

  module Indicator = {
    type state = {};

    [@mel.module "@base-ui/react/meter"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Indicator";
  };

  module Track = {
    type state = {};

    [@mel.module "@base-ui/react/meter"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Track";
  };

  module Label = {
    type state = {};

    [@mel.module "@base-ui/react/meter"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Label";
  };
};

module Popover = {
  /* https://base-ui.com/react/components/popover */

  module Root = {
    type state = {};

    [@mel.module "@base-ui/react/popover"] [@react.component]
    external make:
      (
        ~defaultOpen: bool=?,
        ~open: bool=?,
        ~onOpenChange: Js.Json.t=?,
        ~actionsRef: Js.Json.t=?,
        ~defaultTriggerId: string=?,
        ~handle: Js.Json.t=?,
        ~modal: Js.Json.t=?,
        ~onOpenChangeComplete: Js.Json.t=?,
        ~triggerId: string=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module Trigger = {
    type state = {
      disabled: bool,
      open: bool,
    };

    [@mel.module "@base-ui/react/popover"] [@react.component]
    external make:
      (
        ~handle: Js.Json.t=?,
        ~nativeButton: bool=?,
        ~payload: Js.Json.t=?,
        ~openOnHover: bool=?,
        ~delay: int=?,
        ~closeDelay: int=?,
        ~id: string=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Trigger";
  };

  module Portal = {
    type state = {};

    [@mel.module "@base-ui/react/popover"] [@react.component]
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
      open: bool,
      transitionStatus: string,
    };

    [@mel.module "@base-ui/react/popover"] [@react.component]
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
      open: bool,
      side: string,
      align: string,
      anchorHidden: bool,
      instant: option(string),
    };

    [@mel.module "@base-ui/react/popover"] [@react.component]
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
      open: bool,
      side: string,
      align: string,
      instant: option(string),
      transitionStatus: string,
    };

    [@mel.module "@base-ui/react/popover"] [@react.component]
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
      open: bool,
      side: string,
      align: string,
      uncentered: bool,
      instant: option(string),
    };

    [@mel.module "@base-ui/react/popover"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Arrow";
  };

  module Close = {
    type state = {disabled: bool};

    [@mel.module "@base-ui/react/popover"] [@react.component]
    external make:
      (
        ~nativeButton: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Close";
  };
};

module Progress = {
  /* https://base-ui.com/react/components/progress */

  module Root = {
    type state = {status: string};

    [@mel.module "@base-ui/react/progress"] [@react.component]
    external make:
      (
        ~value: Js.Json.t,
        ~ariaValuetext: string=?,
        ~getAriaValueText: Js.Json.t=?,
        ~locale: Js.Json.t=?,
        ~min: float=?,
        ~max: float=?,
        ~format: Js.Json.t=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module Value = {
    type state = {status: string};

    [@mel.module "@base-ui/react/progress"] [@react.component]
    external make:
      (
        ~children: Js.Json.t=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Value";
  };

  module Indicator = {
    type state = {status: string};

    [@mel.module "@base-ui/react/progress"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Indicator";
  };

  module Track = {
    type state = {status: string};

    [@mel.module "@base-ui/react/progress"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Track";
  };

  module Label = {
    type state = {status: string};

    [@mel.module "@base-ui/react/progress"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Label";
  };
};

module Radio = {
  /* https://base-ui.com/react/components/radio */

  module Root = {
    type state = {
      checked: bool,
      disabled: bool,
      readOnly: bool,
      required: bool,
      touched: bool,
      dirty: bool,
      valid: option(bool),
      filled: bool,
      focused: bool,
    };

    [@mel.module "@base-ui/react/radio"] [@react.component]
    external make:
      (
        ~value: Js.Json.t,
        ~nativeButton: bool=?,
        ~disabled: bool=?,
        ~readOnly: bool=?,
        ~required: bool=?,
        ~inputRef: Js.Json.t=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module Indicator = {
    type state = {
      transitionStatus: string,
      checked: bool,
      disabled: bool,
      readOnly: bool,
      required: bool,
      touched: bool,
      dirty: bool,
      valid: option(bool),
      filled: bool,
      focused: bool,
    };

    [@mel.module "@base-ui/react/radio"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~keepMounted: bool=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Indicator";
  };
};

module RadioGroup = {
  /* https://base-ui.com/react/components/radio-group */

  type state = {
    readOnly: bool,
    required: bool,
    disabled: bool,
    touched: bool,
    dirty: bool,
    valid: option(bool),
    filled: bool,
    focused: bool,
  };

  [@mel.module "@base-ui/react/radio-group"] [@react.component]
  external make:
    (
      ~name: string=?,
      ~defaultValue: Js.Json.t=?,
      ~value: Js.Json.t=?,
      ~onValueChange: Js.Json.t=?,
      ~form: string=?,
      ~disabled: bool=?,
      ~readOnly: bool=?,
      ~required: bool=?,
      ~inputRef: Js.Json.t=?,
      ~className: Js.Json.t=?,
      ~style: Js.Json.t=?,
      ~render: Js.Json.t=?,
      ~children: React.element=?,
    ) => React.element = "RadioGroup";
};

module Separator = {
  /* https://base-ui.com/react/components/separator */

  type state = {orientation: string};

  [@mel.module "@base-ui/react/separator"] [@react.component]
  external make:
    (
      ~orientation: string=?,
      ~className: Js.Json.t=?,
      ~style: Js.Json.t=?,
      ~render: Js.Json.t=?,
    ) => React.element = "Separator";
};

module Switch = {
  /* https://base-ui.com/react/components/switch */

  module Root = {
    type state = {
      checked: bool,
      disabled: bool,
      readOnly: bool,
      required: bool,
      touched: bool,
      dirty: bool,
      valid: option(bool),
      filled: bool,
      focused: bool,
    };

    [@mel.module "@base-ui/react/switch"] [@react.component]
    external make:
      (
        ~name: string=?,
        ~defaultChecked: bool=?,
        ~checked: bool=?,
        ~onCheckedChange: Js.Json.t=?,
        ~value: string=?,
        ~form: string=?,
        ~nativeButton: bool=?,
        ~uncheckedValue: string=?,
        ~disabled: bool=?,
        ~readOnly: bool=?,
        ~required: bool=?,
        ~inputRef: Js.Json.t=?,
        ~id: string=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module Thumb = {
    type state = {
      checked: bool,
      disabled: bool,
      readOnly: bool,
      required: bool,
      touched: bool,
      dirty: bool,
      valid: option(bool),
      filled: bool,
      focused: bool,
    };

    [@mel.module "@base-ui/react/switch"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Thumb";
  };
};

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

module Toggle = {
  /* https://base-ui.com/react/components/toggle */

  type state = {
    pressed: bool,
    disabled: bool,
  };

  [@mel.module "@base-ui/react/toggle"] [@react.component]
  external make:
    (
      ~value: string=?,
      ~defaultPressed: bool=?,
      ~pressed: bool=?,
      ~onPressedChange: Js.Json.t=?,
      ~nativeButton: bool=?,
      ~disabled: bool=?,
      ~className: Js.Json.t=?,
      ~style: Js.Json.t=?,
      ~render: Js.Json.t=?,
      ~children: React.element=?,
    ) => React.element = "Toggle";
};

module Tooltip = {
  /* https://base-ui.com/react/components/tooltip */

  module Root = {
    type state = {};

    [@mel.module "@base-ui/react/tooltip"] [@react.component]
    external make:
      (
        ~defaultOpen: bool=?,
        ~open: bool=?,
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
    type state = {};

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
    type state = {open: bool};

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
    type state = {};

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
      open: bool,
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
      open: bool,
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
      open: bool,
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
