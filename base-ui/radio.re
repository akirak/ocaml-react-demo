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

