[@react.component]
let make =
    (
      ~accessible=?,
      ~accessibilityLabel=?,
      ~accessibilityComponentType=?,
      ~accessibilityTraits=?,
      ~accessibilityRole=?,
      ~accessibilityStates=?,
      ~accessibilityHint=?,
      ~accessibilityIgnoresInvertColors=?,
      ~delayLongPress=?,
      ~delayPressIn=?,
      ~delayPressOut=?,
      ~disabled=?,
      ~hitSlop=?,
      ~onLayout=?,
      ~onLongPress=?,
      ~onPress=?,
      ~onPressIn=?,
      ~onPressOut=?,
      ~pressRetentionOffset=?,
      ~testID=?,
      ~children=?,
      _,
    ) =>
  <ReactNative.TouchableWithoutFeedback
    ?accessible
    ?accessibilityLabel
    ?delayLongPress
    ?delayPressIn
    ?delayPressOut
    ?disabled
    ?hitSlop
    ?onLayout
    ?onLongPress
    ?onPress
    ?onPressIn
    ?onPressOut
    ?pressRetentionOffset
    ?accessibilityComponentType
    accessibilityTraits=?{
      accessibilityTraits->Belt.Option.map(Belt.List.toArray)
    }
    ?accessibilityRole
    accessibilityStates=?{
      accessibilityStates->Belt.Option.map(Belt.List.toArray)
    }
    ?accessibilityHint
    ?accessibilityIgnoresInvertColors
    ?testID>
    {children->Belt.Option.getWithDefault(React.null)}
  </ReactNative.TouchableWithoutFeedback>;
