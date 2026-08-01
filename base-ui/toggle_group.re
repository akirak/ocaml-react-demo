module ToggleGroup = {
  /* https://base-ui.com/react/components/toggle-group */

  type state = {
    disabled: bool,
    multiple: bool,
    orientation: string,
  };

  [@mel.module "@base-ui/react/toggle-group"] [@react.component]
  external make:
    (
      ~defaultValue: array(string)=?,
      ~value: array(string)=?,
      ~onValueChange: Js.Json.t=?,
      ~loopFocus: bool=?,
      ~multiple: bool=?,
      ~disabled: bool=?,
      ~orientation: string=?,
      ~className: Js.Json.t=?,
      ~style: Js.Json.t=?,
      ~render: Js.Json.t=?,
      ~children: React.element=?,
    ) => React.element = "ToggleGroup";
};
