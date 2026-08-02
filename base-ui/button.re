module Button = {
  /* https://base-ui.com/react/components/button */

  type buttonState = {disabled: bool};
  type state = buttonState;

  /* These values are JavaScript objects supplied by React/Base UI. */
  type cssProperties;
  type htmlProps;
  type buttonProps;

  type className =
    [ | `String(string)
      | `Function(buttonState => option(string))
    ];

  type style =
    [ | `Properties(cssProperties)
      | `Function(buttonState => option(cssProperties))
    ];

  type render =
    [ | `Element(React.element)
      | `Function((htmlProps, buttonState) => React.element)
    ];

  type props = buttonProps;

  [@mel.module "@base-ui/react/button"] [@react.component]
  external make:
    (
      ~focusableWhenDisabled: bool=?,
      ~nativeButton: bool=?,
      ~className: Js.Json.t=?,
      ~style: Js.Json.t=?,
      ~render: Js.Json.t=?,
      ~children: React.element=?,
    ) => React.element = "Button";
};
