namespace offsets
{
	namespace UEditableTextBox
	{
			constexpr auto Text = 0x108; // Size: 24, Type: struct FText
			constexpr auto TextDelegate = 0x120; // Size: 16, Type: struct FDelegate
			constexpr auto WidgetStyle = 0x130; // Size: 2040, Type: struct FEditableTextBoxStyle
			constexpr auto Style = 0x928; // Size: 8, Type: struct USlateWidgetStyleAsset*
			constexpr auto HintText = 0x930; // Size: 24, Type: struct FText
			constexpr auto HintTextDelegate = 0x948; // Size: 16, Type: struct FDelegate
			constexpr auto Font = 0x958; // Size: 88, Type: struct FSlateFontInfo
			constexpr auto ForegroundColor = 0x9b0; // Size: 16, Type: struct FLinearColor
			constexpr auto BackgroundColor = 0x9c0; // Size: 16, Type: struct FLinearColor
			constexpr auto ReadOnlyForegroundColor = 0x9d0; // Size: 16, Type: struct FLinearColor
			constexpr auto IsReadOnly = 0x9e0; // Size: 1, Type: bool
			constexpr auto IsPassword = 0x9e1; // Size: 1, Type: bool
			constexpr auto MinimumDesiredWidth = 0x9e4; // Size: 4, Type: float
			constexpr auto Padding = 0x9e8; // Size: 16, Type: struct FMargin
			constexpr auto IsCaretMovedWhenGainFocus = 0x9f8; // Size: 1, Type: bool
			constexpr auto SelectAllTextWhenFocused = 0x9f9; // Size: 1, Type: bool
			constexpr auto RevertTextOnEscape = 0x9fa; // Size: 1, Type: bool
			constexpr auto ClearKeyboardFocusOnCommit = 0x9fb; // Size: 1, Type: bool
			constexpr auto SelectAllTextOnCommit = 0x9fc; // Size: 1, Type: bool
			constexpr auto AllowContextMenu = 0x9fd; // Size: 1, Type: bool
			constexpr auto KeyboardType = 0x9fe; // Size: 1, Type: enum class EVirtualKeyboardType
			constexpr auto VirtualKeyboardOptions = 0x9ff; // Size: 1, Type: struct FVirtualKeyboardOptions
			constexpr auto VirtualKeyboardTrigger = 0xa00; // Size: 1, Type: enum class EVirtualKeyboardTrigger
			constexpr auto VirtualKeyboardDismissAction = 0xa01; // Size: 1, Type: enum class EVirtualKeyboardDismissAction
			constexpr auto Justification = 0xa02; // Size: 1, Type: enum class ETextJustify
			constexpr auto ShapedTextOptions = 0xa03; // Size: 3, Type: struct FShapedTextOptions
			constexpr auto OnTextChanged = 0xa08; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTextCommitted = 0xa18; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
