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
