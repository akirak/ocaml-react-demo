module Menubar = {
  /* https://base-ui.com/react/components/menubar */

  type state = {
    orientation: string,
    modal: bool,
    hasSubmenuOpen: bool,
  };

  [@mel.module "@base-ui/react/menubar"] [@react.component]
  external make:
    (
      ~loopFocus: bool=?,
      ~modal: bool=?,
      ~disabled: bool=?,
      ~orientation: string=?,
      ~className: Js.Json.t=?,
      ~style: Js.Json.t=?,
      ~render: Js.Json.t=?,
      ~children: React.element=?,
    ) => React.element = "Menubar";
};
