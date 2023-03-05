namespace offsets
{
	namespace UCheckBox
	{
			constexpr auto CheckedState = 0x120; // Size: 1, Type: enum class ECheckBoxState
			constexpr auto CheckedStateDelegate = 0x124; // Size: 16, Type: struct FDelegate
			constexpr auto WidgetStyle = 0x138; // Size: 1408, Type: struct FCheckBoxStyle
			constexpr auto Style = 0x6b8; // Size: 8, Type: struct USlateWidgetStyleAsset*
			constexpr auto UncheckedImage = 0x6c0; // Size: 8, Type: struct USlateBrushAsset*
			constexpr auto UncheckedHoveredImage = 0x6c8; // Size: 8, Type: struct USlateBrushAsset*
			constexpr auto UncheckedPressedImage = 0x6d0; // Size: 8, Type: struct USlateBrushAsset*
			constexpr auto CheckedImage = 0x6d8; // Size: 8, Type: struct USlateBrushAsset*
			constexpr auto CheckedHoveredImage = 0x6e0; // Size: 8, Type: struct USlateBrushAsset*
			constexpr auto CheckedPressedImage = 0x6e8; // Size: 8, Type: struct USlateBrushAsset*
			constexpr auto UndeterminedImage = 0x6f0; // Size: 8, Type: struct USlateBrushAsset*
			constexpr auto UndeterminedHoveredImage = 0x6f8; // Size: 8, Type: struct USlateBrushAsset*
			constexpr auto UndeterminedPressedImage = 0x700; // Size: 8, Type: struct USlateBrushAsset*
			constexpr auto HorizontalAlignment = 0x708; // Size: 1, Type: enum class EHorizontalAlignment
			constexpr auto Padding = 0x70c; // Size: 16, Type: struct FMargin
			constexpr auto BorderBackgroundColor = 0x720; // Size: 40, Type: struct FSlateColor
			constexpr auto ClickMethod = 0x748; // Size: 1, Type: enum class EButtonClickMethod
			constexpr auto TouchMethod = 0x749; // Size: 1, Type: enum class EButtonTouchMethod
			constexpr auto PressMethod = 0x74a; // Size: 1, Type: enum class EButtonPressMethod
			constexpr auto IsFocusable = 0x74b; // Size: 1, Type: bool
			constexpr auto OnCheckStateChanged = 0x750; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
