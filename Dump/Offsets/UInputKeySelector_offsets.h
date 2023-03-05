namespace offsets
{
	namespace UInputKeySelector
	{
			constexpr auto WidgetStyle = 0x108; // Size: 632, Type: struct FButtonStyle
			constexpr auto TextStyle = 0x380; // Size: 624, Type: struct FTextBlockStyle
			constexpr auto SelectedKey = 0x5f0; // Size: 32, Type: struct FInputChord
			constexpr auto Font = 0x610; // Size: 88, Type: struct FSlateFontInfo
			constexpr auto Margin = 0x668; // Size: 16, Type: struct FMargin
			constexpr auto ColorAndOpacity = 0x678; // Size: 16, Type: struct FLinearColor
			constexpr auto KeySelectionText = 0x688; // Size: 24, Type: struct FText
			constexpr auto NoKeySpecifiedText = 0x6a0; // Size: 24, Type: struct FText
			constexpr auto bAllowModifierKeys = 0x6b8; // Size: 1, Type: bool
			constexpr auto bAllowGamepadKeys = 0x6b9; // Size: 1, Type: bool
			constexpr auto EscapeKeys = 0x6c0; // Size: 16, Type: struct TArray<struct FKey>
			constexpr auto OnKeySelected = 0x6d0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnIsSelectingKeyChanged = 0x6e0; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
