module OTPField = {
  /* https://base-ui.com/react/components/otp-field */

  module Root = {
    type state = {
      complete: bool,
      disabled: bool,
      length: int,
      readOnly: bool,
      required: bool,
      value: string,
      touched: bool,
      dirty: bool,
      valid: option(bool),
      filled: bool,
      focused: bool,
    };

    [@mel.module "@base-ui/react/otp-field"] [@react.component]
    external make:
      (
        ~name: string=?,
        ~defaultValue: string=?,
        ~value: string=?,
        ~onValueChange: Js.Json.t=?,
        ~autoComplete: string=?,
        ~autoSubmit: bool=?,
        ~form: string=?,
        ~inputMode: string=?,
        ~length: int,
        ~mask: bool=?,
        ~normalizeValue: Js.Json.t=?,
        ~onValueComplete: Js.Json.t=?,
        ~onValueInvalid: Js.Json.t=?,
        ~validationType: string=?,
        ~disabled: bool=?,
        ~readOnly: bool=?,
        ~required: bool=?,
        ~id: string=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Root";
  };

  module Input = {
    type state = {
      filled: bool,
      index: int,
      value: string,
      disabled: bool,
      length: int,
      required: bool,
      readOnly: bool,
      complete: bool,
      touched: bool,
      dirty: bool,
      valid: option(bool),
      focused: bool,
    };

    [@mel.module "@base-ui/react/otp-field"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Input";
  };

  module Separator = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/otp-field"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Separator";
  };
};
