type insets = ReactNative.Types.edgeInsets;

type touchResponderHandlers = {
  onMoveShouldSetResponder: option(RNEvent.NativeEvent.t => bool),
  onMoveShouldSetResponderCapture: option(RNEvent.NativeEvent.t => bool),
  onResponderGrant: option(RNEvent.NativeEvent.t => unit),
  onResponderMove: option(RNEvent.NativeEvent.t => unit),
  onResponderReject: option(RNEvent.NativeEvent.t => unit),
  onResponderRelease: option(RNEvent.NativeEvent.t => unit),
  onResponderTerminate: option(RNEvent.NativeEvent.t => unit),
  onResponderTerminationRequest: option(RNEvent.NativeEvent.t => unit),
  onStartShouldSetResponder: option(RNEvent.NativeEvent.t => bool),
  onStartShouldSetResponderCapture: option(RNEvent.NativeEvent.t => bool),
};

[@bs.deriving {jsConverter: newType}]
type pointerEvents = [
  | `auto
  | `none
  | [@bs.as "box-none"] `boxNone
  | [@bs.as "box-only"] `boxOnly
];

/* deprecated : Please use accessibilityRole and accessibilityState instead */
[@bs.deriving {jsConverter: newType}]
type accessibilityComponentType = [
  | `none
  | `button
  | `radiobutton_checked
  | `radiobutton_unchecked
];

/* deprecated : Please use accessibilityRole and accessibilityState instead */
type accessibilityTrait = ReactNative.AccessibilityTrait.t;

[@bs.deriving {jsConverter: newType}]
type accessibilityLiveRegion = [ | `none | `polite | `assertive];

[@bs.deriving {jsConverter: newType}]
type importantForAccessibility = [
  | `auto
  | `yes
  | `no
  | [@bs.as "no-hide-descendants"] `noHideDescendants
];

[@bs.deriving {jsConverter: newType}]
type accessibilityRole = [
  | `none
  | `button
  | `link
  | `search
  | `image
  | `keyboardkey
  | `text
  | `adjustable
  | `header
  | `summary
  | `imagebutton
];

type accessibilityState = ReactNative.AccessibilityState.t;
