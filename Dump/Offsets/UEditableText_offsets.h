namespace offsets
{
	namespace UEditableText
	{
			constexpr auto Text = 0x108; // Size: 24, Type: struct FText
			constexpr auto TextDelegate = 0x120; // Size: 16, Type: struct FDelegate
			constexpr auto HintText = 0x130; // Size: 24, Type: struct FText
			constexpr auto HintTextDelegate = 0x148; // Size: 16, Type: struct FDelegate
			constexpr auto WidgetStyle = 0x158; // Size: 544, Type: struct FEditableTextStyle
			constexpr auto Style = 0x378; // Size: 8, Type: struct USlateWidgetStyleAsset*
			constexpr auto BackgroundImageSelected = 0x380; // Size: 8, Type: struct USlateBrushAsset*
			constexpr auto BackgroundImageComposing = 0x388; // Size: 8, Type: struct USlateBrushAsset*
			constexpr auto CaretImage = 0x390; // Size: 8, Type: struct USlateBrushAsset*
			constexpr auto Font = 0x398; // Size: 88, Type: struct FSlateFontInfo
			constexpr auto ColorAndOpacity = 0x3f0; // Size: 40, Type: struct FSlateColor
			constexpr auto IsReadOnly = 0x418; // Size: 1, Type: bool
			constexpr auto IsPassword = 0x419; // Size: 1, Type: bool
			constexpr auto MinimumDesiredWidth = 0x41c; // Size: 4, Type: float
			constexpr auto IsCaretMovedWhenGainFocus = 0x420; // Size: 1, Type: bool
			constexpr auto SelectAllTextWhenFocused = 0x421; // Size: 1, Type: bool
			constexpr auto RevertTextOnEscape = 0x422; // Size: 1, Type: bool
			constexpr auto ClearKeyboardFocusOnCommit = 0x423; // Size: 1, Type: bool
			constexpr auto SelectAllTextOnCommit = 0x424; // Size: 1, Type: bool
			constexpr auto AllowContextMenu = 0x425; // Size: 1, Type: bool
			constexpr auto KeyboardType = 0x426; // Size: 1, Type: enum class EVirtualKeyboardType
			constexpr auto VirtualKeyboardOptions = 0x427; // Size: 1, Type: struct FVirtualKeyboardOptions
			constexpr auto VirtualKeyboardTrigger = 0x428; // Size: 1, Type: enum class EVirtualKeyboardTrigger
			constexpr auto VirtualKeyboardDismissAction = 0x429; // Size: 1, Type: enum class EVirtualKeyboardDismissAction
			constexpr auto Justification = 0x42a; // Size: 1, Type: enum class ETextJustify
			constexpr auto ShapedTextOptions = 0x42b; // Size: 3, Type: struct FShapedTextOptions
			constexpr auto OnTextChanged = 0x430; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTextCommitted = 0x440; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
