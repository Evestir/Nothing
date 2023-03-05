namespace offsets
{
	namespace UMultiLineEditableText
	{
			constexpr auto Text = 0x128; // Size: 24, Type: struct FText
			constexpr auto HintText = 0x140; // Size: 24, Type: struct FText
			constexpr auto HintTextDelegate = 0x158; // Size: 16, Type: struct FDelegate
			constexpr auto WidgetStyle = 0x168; // Size: 624, Type: struct FTextBlockStyle
			constexpr auto bIsReadOnly = 0x3d8; // Size: 1, Type: bool
			constexpr auto Font = 0x3e0; // Size: 88, Type: struct FSlateFontInfo
			constexpr auto SelectAllTextWhenFocused = 0x438; // Size: 1, Type: bool
			constexpr auto ClearTextSelectionOnFocusLoss = 0x439; // Size: 1, Type: bool
			constexpr auto RevertTextOnEscape = 0x43a; // Size: 1, Type: bool
			constexpr auto ClearKeyboardFocusOnCommit = 0x43b; // Size: 1, Type: bool
			constexpr auto AllowContextMenu = 0x43c; // Size: 1, Type: bool
			constexpr auto VirtualKeyboardOptions = 0x43d; // Size: 1, Type: struct FVirtualKeyboardOptions
			constexpr auto VirtualKeyboardDismissAction = 0x43e; // Size: 1, Type: enum class EVirtualKeyboardDismissAction
			constexpr auto OnTextChanged = 0x440; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTextCommitted = 0x450; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
