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

