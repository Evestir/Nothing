namespace offsets
{
	namespace UButton
	{
			constexpr auto Style = 0x120; // Size: 8, Type: struct USlateWidgetStyleAsset*
			constexpr auto WidgetStyle = 0x128; // Size: 632, Type: struct FButtonStyle
			constexpr auto ColorAndOpacity = 0x3a0; // Size: 16, Type: struct FLinearColor
			constexpr auto BackgroundColor = 0x3b0; // Size: 16, Type: struct FLinearColor
			constexpr auto ClickMethod = 0x3c0; // Size: 1, Type: enum class EButtonClickMethod
			constexpr auto TouchMethod = 0x3c1; // Size: 1, Type: enum class EButtonTouchMethod
			constexpr auto PressMethod = 0x3c2; // Size: 1, Type: enum class EButtonPressMethod
			constexpr auto IsFocusable = 0x3c3; // Size: 1, Type: bool
			constexpr auto OnClicked = 0x3c8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPressed = 0x3d8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnReleased = 0x3e8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnHovered = 0x3f8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnUnHovered = 0x408; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
