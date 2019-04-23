[@react.component]
let make =
    (
      ~accessible=?,
      ~accessibilityHint=?,
      ~accessibilityLabel=?,
      ~allowFontScaling=?,
      ~ellipsizeMode=?,
      ~numberOfLines=?,
      ~onLayout=?,
      ~onLongPress=?,
      ~onPress=?,
      ~pressRetentionOffset=?,
      ~selectable=?,
      ~style=?,
      ~testID=?,
      ~selectionColor=?,
      ~textBreakStrategy=?,
      ~adjustsFontSizeToFit=?,
      ~minimumFontScale=?,
      ~suppressHighlighting=?,
      ~value=?,
      ~children=?,
      _,
    ) =>
  <ReactNative.Text
    ?accessible
    ?accessibilityHint
    ?accessibilityLabel
    ?allowFontScaling
    ?ellipsizeMode
    ?numberOfLines
    ?onLayout
    ?onLongPress
    ?onPress
    ?pressRetentionOffset
    ?selectable
    ?style
    ?testID
    ?selectionColor
    ?textBreakStrategy
    ?adjustsFontSizeToFit
    ?minimumFontScale
    ?suppressHighlighting
    ?value>
    {children->Belt.Option.getWithDefault(React.null)}
  </ReactNative.Text>;
