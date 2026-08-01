module Toolbar = {
  /* https://base-ui.com/react/components/toolbar */

  module Root = {
    type state = {
      disabled: bool,
      orientation: string,
    };

    [@mel.module "@base-ui/react/toolbar"] [@react.component]
    external make:
      (
        ~loopFocus: bool=?,
        ~disabled: bool=?,
        ~orientation: string=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module Input = {
    type state = {
      disabled: bool,
      focusable: bool,
      orientation: string,
    };

    [@mel.module "@base-ui/react/toolbar"] [@react.component]
    external make:
      (
        ~defaultValue: Js.Json.t=?,
        ~focusableWhenDisabled: bool=?,
        ~disabled: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Input";
  };

  module Group = {
    type state = {
      disabled: bool,
      orientation: string,
    };

    [@mel.module "@base-ui/react/toolbar"] [@react.component]
    external make:
      (
        ~disabled: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Group";
  };

  module Separator = {
    type state = {orientation: string};

    [@mel.module "@base-ui/react/toolbar"] [@react.component]
    external make:
      (
        ~orientation: string=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Separator";
  };

  module Button = {
    type state = {
      disabled: bool,
      focusable: bool,
      orientation: string,
    };

    [@mel.module "@base-ui/react/toolbar"] [@react.component]
    external make:
      (
        ~focusableWhenDisabled: bool=?,
        ~nativeButton: bool=?,
        ~disabled: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Button";
  };

  module Link = {
    type state = {
      disabled: bool,
      focusable: bool,
      orientation: string,
    };

    [@mel.module "@base-ui/react/toolbar"] [@react.component]
    external make:
      (
        ~focusableWhenDisabled: bool=?,
        ~disabled: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Link";
  };
};
