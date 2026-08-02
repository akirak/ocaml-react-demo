/*
 * Implementation of the @inertiajs/react bindings.
 *
 * This lives in a helper module because the public re-export is named React.
 * The React JSX PPX must be able to resolve the dependency named React while
 * compiling component bindings.
 */

type value = Js.Json.t;
type promise('a) = Js.Promise.t('a);

module App = {
  [@mel.module "@inertiajs/react"] [@react.component]
  external make:
    (
      ~initialPage: value,
      ~initialComponent: value=?,
      ~resolveComponent: value=?,
      ~titleCallback: value=?,
      ~onHeadUpdate: value=?,
      ~defaultLayout: value=?,
      ~serverHead: value=?,
      ~children: React.element=?
    ) => React.element = "App";
};

module Deferred = {
  [@mel.module "@inertiajs/react"] [@react.component]
  external make:
    (
      ~children: React.element,
      ~data: value,
      ~fallback: React.element,
      ~rescue: React.element=?
    ) => React.element = "Deferred";
};

module Form = {
  [@mel.module "@inertiajs/react"] [@react.component]
  external make:
    (
      ~action: string=?,
      ~method: string=?,
      ~headers: value=?,
      ~data: value=?,
      ~transform: value=?,
      ~options: value=?,
      ~onBefore: value=?,
      ~onStart: value=?,
      ~onProgress: value=?,
      ~onSuccess: value=?,
      ~onError: value=?,
      ~onCancel: value=?,
      ~onFinish: value=?,
      ~onCancelToken: value=?,
      ~onPrefetching: value=?,
      ~onPrefetched: value=?,
      ~remember: bool=?,
      ~resetOnError: bool=?,
      ~resetOnSuccess: bool=?,
      ~setDefaultsOnSuccess: bool=?,
      ~errorBag: string=?,
      ~queryStringArrayFormat: string=?,
      ~children: React.element
    ) => React.element = "Form";

  [@mel.module "@inertiajs/react"]
  external useFormContext: unit => value = "useFormContext";
};

module Head = {
  [@mel.module "@inertiajs/react"] [@react.component]
  external make:
    (~title: string=?, ~children: React.element=?) => React.element = "Head";
};

module InfiniteScroll = {
  [@mel.module "@inertiajs/react"] [@react.component]
  external make:
    (
      ~children: React.element=?,
      ~startElement: value=?,
      ~endElement: value=?,
      ~itemsElement: value=?,
      ~previous: React.element=?,
      ~next: React.element=?,
      ~loading: React.element=?,
      ~params: value=?,
      ~onlyNext: bool=?,
      ~onlyPrevious: bool=?,
      ~data: value=?,
      ~buffer: int=?,
      ~as_: string=?,
      ~className: string=?,
      ~id: string=?,
      ~style: value=?
    ) => React.element = "InfiniteScroll";
};

module Link = {
  [@mel.module "@inertiajs/react"] [@react.component]
  external make:
    (
      ~href: value,
      ~method: string=?,
      ~data: value=?,
      ~replace: bool=?,
      ~preserveState: value=?,
      ~preserveScroll: value=?,
      ~only: value=?,
      ~except: value=?,
      ~headers: value=?,
      ~errorBag: string=?,
      ~queryStringArrayFormat: string=?,
      ~async: bool=?,
      ~prefetch: value=?,
      ~cacheFor: value=?,
      ~onCancelToken: value=?,
      ~onBefore: value=?,
      ~onStart: value=?,
      ~onProgress: value=?,
      ~onSuccess: value=?,
      ~onError: value=?,
      ~onCancel: value=?,
      ~onFinish: value=?,
      ~onPrefetching: value=?,
      ~onPrefetched: value=?,
      ~as_: string=?,
      ~children: React.element=?
    ) => React.element = "Link";
};

module WhenVisible = {
  [@mel.module "@inertiajs/react"] [@react.component]
  external make:
    (
      ~children: React.element,
      ~fallback: React.element,
      ~data: value=?,
      ~params: value=?,
      ~buffer: int=?,
      ~as_: string=?,
      ~always: bool=?
    ) => React.element = "WhenVisible";
};

module Server = {
  /* The package's ./server subpath re-exports the Inertia server renderer. */
  [@mel.module "@inertiajs/react/server"]
  external make: value = "default";
};

[@mel.module "@inertiajs/react"]
external createInertiaApp: value => promise(value) = "createInertiaApp";

[@mel.module "@inertiajs/react"]
external http: value = "http";

[@mel.module "@inertiajs/react"]
external progress: value = "progress";

[@mel.module "@inertiajs/react"]
external router: value = "router";

[@mel.module "@inertiajs/react"]
external config: value = "config";

[@mel.module "@inertiajs/react"]
external resetLayoutProps: unit => unit = "resetLayoutProps";

[@mel.module "@inertiajs/react"]
external useFormContext: unit => value = "useFormContext";

[@mel.module "@inertiajs/react"]
external setLayoutProps: value => unit = "setLayoutProps";

[@mel.module "@inertiajs/react"]
external setNamedLayoutProps: (string, value) => unit = "setLayoutProps";

[@mel.module "@inertiajs/react"]
external useForm: value => value = "useForm";

[@mel.module "@inertiajs/react"]
external useFormEmpty: unit => value = "useForm";

[@mel.module "@inertiajs/react"]
external useFormWithMethod: (value, value, value) => value = "useForm";

[@mel.module "@inertiajs/react"]
external useHttp: value => value = "useHttp";

[@mel.module "@inertiajs/react"]
external useHttpEmpty: unit => value = "useHttp";

[@mel.module "@inertiajs/react"]
external useHttpWithMethod: (value, value, value) => value = "useHttp";

[@mel.module "@inertiajs/react"]
external usePage: unit => value = "usePage";

[@mel.module "@inertiajs/react"]
external usePoll: (int, ~requestOptions: value=?, ~options: value=?) => value =
  "usePoll";

[@mel.module "@inertiajs/react"]
external usePrefetch: (~options: value=?, unit) => value = "usePrefetch";

[@mel.module "@inertiajs/react"]
external useRemember:
  ('state, ~key: string=?, ~excludeKeysRef: value=?) => ('state, value) =
  "useRemember";
