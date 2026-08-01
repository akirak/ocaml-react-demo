module Slider = {
  /* https://base-ui.com/react/components/slider */

  module Root = {
    type state = {
      activeThumbIndex: int,
      disabled: bool,
      dragging: bool,
      max: float,
      min: float,
      minStepsBetweenValues: float,
      orientation: string,
      step: float,
      values: array(float),
      touched: bool,
      dirty: bool,
      valid: option(bool),
      filled: bool,
      focused: bool,
    };

    [@mel.module "@base-ui/react/slider"] [@mel.scope "Slider"] [@react.component]
    external make:
      (
        ~name: string=?,
        ~defaultValue: Js.Json.t=?,
        ~value: Js.Json.t=?,
        ~onValueChange: Js.Json.t=?,
        ~onValueCommitted: Js.Json.t=?,
        ~form: string=?,
        ~locale: Js.Json.t=?,
        ~thumbAlignment: string=?,
        ~thumbCollisionBehavior: string=?,
        ~step: float=?,
        ~largeStep: float=?,
        ~minStepsBetweenValues: float=?,
        ~min: float=?,
        ~max: float=?,
        ~format: Js.Json.t=?,
        ~disabled: bool=?,
        ~orientation: string=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Root";
  };

  module Value = {
    type state = {
      activeThumbIndex: int,
      disabled: bool,
      dragging: bool,
      max: float,
      min: float,
      minStepsBetweenValues: float,
      orientation: string,
      step: float,
      values: array(float),
      touched: bool,
      dirty: bool,
      valid: option(bool),
      filled: bool,
      focused: bool,
    };

    [@mel.module "@base-ui/react/slider"] [@mel.scope "Slider"] [@react.component]
    external make:
      (
        ~children: Js.Json.t=?,
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Value";
  };

  module Indicator = {
    type state = {
      activeThumbIndex: int,
      disabled: bool,
      dragging: bool,
      max: float,
      min: float,
      minStepsBetweenValues: float,
      orientation: string,
      step: float,
      values: array(float),
      touched: bool,
      dirty: bool,
      valid: option(bool),
      filled: bool,
      focused: bool,
    };

    [@mel.module "@base-ui/react/slider"] [@mel.scope "Slider"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
      ) => React.element = "Indicator";
  };

  module Track = {
    type state = {
      activeThumbIndex: int,
      disabled: bool,
      dragging: bool,
      max: float,
      min: float,
      minStepsBetweenValues: float,
      orientation: string,
      step: float,
      values: array(float),
      touched: bool,
      dirty: bool,
      valid: option(bool),
      filled: bool,
      focused: bool,
    };

    [@mel.module "@base-ui/react/slider"] [@mel.scope "Slider"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Track";
  };

  module Thumb = {
    type state = {
      activeThumbIndex: int,
      disabled: bool,
      dragging: bool,
      max: float,
      min: float,
      minStepsBetweenValues: float,
      orientation: string,
      step: float,
      values: array(float),
      index: int,
      touchingEdge: bool,
      touched: bool,
      dirty: bool,
      valid: option(bool),
      filled: bool,
      focused: bool,
    };

    [@mel.module "@base-ui/react/slider"] [@mel.scope "Slider"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Thumb";
  };

  module Control = {
    type state = {
      activeThumbIndex: int,
      disabled: bool,
      dragging: bool,
      max: float,
      min: float,
      minStepsBetweenValues: float,
      orientation: string,
      step: float,
      values: array(float),
      touched: bool,
      dirty: bool,
      valid: option(bool),
      filled: bool,
      focused: bool,
    };

    [@mel.module "@base-ui/react/slider"] [@mel.scope "Slider"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Control";
  };

  module Label = {
    type state = {
      activeThumbIndex: int,
      disabled: bool,
      dragging: bool,
      max: float,
      min: float,
      minStepsBetweenValues: float,
      orientation: string,
      step: float,
      values: array(float),
      touched: bool,
      dirty: bool,
      valid: option(bool),
      filled: bool,
      focused: bool,
    };

    [@mel.module "@base-ui/react/slider"] [@mel.scope "Slider"] [@react.component]
    external make:
      (
        ~className: Js.Json.t=?,
        ~style: Js.Json.t=?,
        ~render: Js.Json.t=?,
        ~children: React.element=?,
      ) => React.element = "Label";
  };
};
