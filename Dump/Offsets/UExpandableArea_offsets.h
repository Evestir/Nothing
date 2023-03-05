namespace offsets
{
	namespace UExpandableArea
	{
			constexpr auto Style = 0x110; // Size: 288, Type: struct FExpandableAreaStyle
			constexpr auto BorderBrush = 0x230; // Size: 136, Type: struct FSlateBrush
			constexpr auto BorderColor = 0x2b8; // Size: 40, Type: struct FSlateColor
			constexpr auto bIsExpanded = 0x2e0; // Size: 1, Type: bool
			constexpr auto MaxHeight = 0x2e4; // Size: 4, Type: float
			constexpr auto HeaderPadding = 0x2e8; // Size: 16, Type: struct FMargin
			constexpr auto AreaPadding = 0x2f8; // Size: 16, Type: struct FMargin
			constexpr auto OnExpansionChanged = 0x308; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto HeaderContent = 0x318; // Size: 8, Type: struct UWidget*
			constexpr auto BodyContent = 0x320; // Size: 8, Type: struct UWidget*
	}
} 
