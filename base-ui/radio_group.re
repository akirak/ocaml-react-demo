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

