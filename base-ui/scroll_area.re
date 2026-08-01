module ScrollArea = {
  /* https://base-ui.com/react/components/scroll-area */

  module Root = {
    type state = {
      scrolling: bool,
      hasOverflowX: bool,
      hasOverflowY: bool,
      overflowXStart: bool,
      overflowXEnd: bool,
      overflowYStart: bool,
      overflowYEnd: bool,
      cornerHidden: bool,
    };

    [@mel.module "@base-ui/react/scroll-area"] [@react.component]
    external make:
      (
        ~overflowEdgeThreshold: Js.Json.t=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module Content = {
    type state = {
      scrolling: bool,
      hasOverflowX: bool,
      hasOverflowY: bool,
      overflowXStart: bool,
      overflowXEnd: bool,
      overflowYStart: bool,
      overflowYEnd: bool,
      cornerHidden: bool,
    };

    [@mel.module "@base-ui/react/scroll-area"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Content";
  };

  module Viewport = {
    type state = {
      scrolling: bool,
      hasOverflowX: bool,
      hasOverflowY: bool,
      overflowXStart: bool,
      overflowXEnd: bool,
      overflowYStart: bool,
      overflowYEnd: bool,
      cornerHidden: bool,
    };

    [@mel.module "@base-ui/react/scroll-area"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Viewport";
  };

  module Thumb = {
    type state = {
      scrolling: bool,
      orientation: string,
    };

    [@mel.module "@base-ui/react/scroll-area"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Thumb";
  };

  module Scrollbar = {
    type state = {
      scrolling: bool,
      orientation: string,
      hasOverflowX: bool,
      hasOverflowY: bool,
      overflowXStart: bool,
      overflowXEnd: bool,
      overflowYStart: bool,
      overflowYEnd: bool,
      hovering: bool,
    };

    [@mel.module "@base-ui/react/scroll-area"] [@react.component]
    external make:
      (
        ~orientation: string=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~keepMounted: bool=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Scrollbar";
  };

  module Corner = {
    type state = {empty: unit};

    [@mel.module "@base-ui/react/scroll-area"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Corner";
  };
};
