module Avatar = {
  /* https://base-ui.com/react/components/avatar */

  module Root = {
    type state = {imageLoadingStatus: string};

    [@mel.module "@base-ui/react/avatar"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module Image = {
    type state = {
      transitionStatus: string,
      imageLoadingStatus: string,
    };

    [@mel.module "@base-ui/react/avatar"] [@react.component]
    external make:
      (
        ~onLoadingStatusChange: Js.Json.t=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Image";
  };

  module Fallback = {
    type state = {imageLoadingStatus: string};

    [@mel.module "@base-ui/react/avatar"] [@react.component]
    external make:
      (
        ~delay: int=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Fallback";
  };
};
