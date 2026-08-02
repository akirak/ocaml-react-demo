module Separator = {
  /* https://base-ui.com/react/components/separator */

  type state = {orientation: string};

  [@mel.module "@base-ui/react/separator"] [@react.component]
  external make:
    (
      ~orientation: string=?,
      ~className: Js.Json.t=?,
      ~style: Js.Json.t=?,
      ~render: Js.Json.t=?,
    ) => React.element = "Separator";
};
