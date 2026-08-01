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

    [@mel.module "@base-ui/react/switch"] [@mel.scope "Switch"] [@react.component]
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

    [@mel.module "@base-ui/react/switch"] [@mel.scope "Switch"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Thumb";
  };
};
