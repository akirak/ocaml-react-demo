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

