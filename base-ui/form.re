module Form = {
  /* https://base-ui.com/react/components/form */

  type state = {empty: unit};

  [@mel.module "@base-ui/react/form"] [@react.component]
  external make:
    (
      ~errors: Js.Json.t=?,
      ~actionsRef: Js.Json.t=?,
      ~onFormSubmit: Js.Json.t=?,
      ~validationMode: string=?,
      ~className: Js.Json.t=?,
      ~style: Js.Json.t=?,
      ~render: Js.Json.t=?,
      ~children: React.element=?,
    ) => React.element = "Form";
};
