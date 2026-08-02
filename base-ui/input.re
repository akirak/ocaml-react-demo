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
