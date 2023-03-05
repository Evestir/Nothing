namespace offsets
{
	namespace UMultiLineEditableTextBox
	{
			constexpr auto Text = 0x128; // Size: 24, Type: struct FText
			constexpr auto HintText = 0x140; // Size: 24, Type: struct FText
			constexpr auto HintTextDelegate = 0x158; // Size: 16, Type: struct FDelegate
			constexpr auto WidgetStyle = 0x168; // Size: 2040, Type: struct FEditableTextBoxStyle
			constexpr auto TextStyle = 0x960; // Size: 624, Type: struct FTextBlockStyle
			constexpr auto bIsReadOnly = 0xbd0; // Size: 1, Type: bool
			constexpr auto AllowContextMenu = 0xbd1; // Size: 1, Type: bool
			constexpr auto VirtualKeyboardOptions = 0xbd2; // Size: 1, Type: struct FVirtualKeyboardOptions
			constexpr auto VirtualKeyboardDismissAction = 0xbd3; // Size: 1, Type: enum class EVirtualKeyboardDismissAction
			constexpr auto Style = 0xbd8; // Size: 8, Type: struct USlateWidgetStyleAsset*
			constexpr auto Font = 0xbe0; // Size: 88, Type: struct FSlateFontInfo
			constexpr auto ForegroundColor = 0xc38; // Size: 16, Type: struct FLinearColor
			constexpr auto BackgroundColor = 0xc48; // Size: 16, Type: struct FLinearColor
			constexpr auto ReadOnlyForegroundColor = 0xc58; // Size: 16, Type: struct FLinearColor
			constexpr auto OnTextChanged = 0xc68; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTextCommitted = 0xc78; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
