module NumberField = {
  /* https://base-ui.com/react/components/number-field */

  module Root = {
    type state = {
      value: option(float),
      inputValue: string,
      required: bool,
      disabled: bool,
      readOnly: bool,
      scrubbing: bool,
      touched: bool,
      dirty: bool,
      valid: option(bool),
      filled: bool,
      focused: bool,
    };

    [@mel.module "@base-ui/react/number-field"] [@react.component]
    external make:
      (
        ~name: string=?,
        ~defaultValue: float=?,
        ~value: Js.Json.t=?,
        ~onValueChange: Js.Json.t=?,
        ~onValueCommitted: Js.Json.t=?,
        ~allowOutOfRange: bool=?,
        ~form: string=?,
        ~locale: Js.Json.t=?,
        ~snapOnStep: bool=?,
        ~step: Js.Json.t=?,
        ~smallStep: float=?,
        ~largeStep: float=?,
        ~min: float=?,
        ~max: float=?,
        ~allowWheelScrub: bool=?,
        ~format: Js.Json.t=?,
        ~disabled: bool=?,
        ~readOnly: bool=?,
        ~required: bool=?,
        ~inputRef: Js.Json.t=?,
        ~id: string=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module Input = {
    type state = {
      value: option(float),
      inputValue: string,
      required: bool,
      disabled: bool,
      readOnly: bool,
      scrubbing: bool,
      touched: bool,
      dirty: bool,
      valid: option(bool),
      filled: bool,
      focused: bool,
    };

    [@mel.module "@base-ui/react/number-field"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Input";
  };

  module Group = {
    type state = {
      value: option(float),
      inputValue: string,
      required: bool,
      disabled: bool,
      readOnly: bool,
      scrubbing: bool,
      touched: bool,
      dirty: bool,
      valid: option(bool),
      filled: bool,
      focused: bool,
    };

    [@mel.module "@base-ui/react/number-field"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Group";
  };

  module ScrubArea = {
    type state = {
      value: option(float),
      inputValue: string,
      required: bool,
      disabled: bool,
      readOnly: bool,
      scrubbing: bool,
    };

    [@mel.module "@base-ui/react/number-field"] [@react.component]
    external make:
      (
        ~direction: string=?,
        ~pixelSensitivity: int=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "ScrubArea";
  };

  module ScrubAreaCursor = {
    type state = {
      value: option(float),
      inputValue: string,
      required: bool,
      disabled: bool,
      readOnly: bool,
      scrubbing: bool,
    };

    [@mel.module "@base-ui/react/number-field"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "ScrubAreaCursor";
  };

  module Decrement = {
    type state = {
      value: option(float),
      inputValue: string,
      required: bool,
      disabled: bool,
      readOnly: bool,
    };

    [@mel.module "@base-ui/react/number-field"] [@react.component]
    external make:
      (
        ~nativeButton: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Decrement";
  };

  module Increment = {
    type state = {
      value: option(float),
      inputValue: string,
      required: bool,
      disabled: bool,
      readOnly: bool,
    };

    [@mel.module "@base-ui/react/number-field"] [@react.component]
    external make:
      (
        ~nativeButton: bool=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Increment";
  };
};
