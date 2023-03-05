namespace offsets
{
	namespace UBorder
	{
			constexpr auto HorizontalAlignment = 0x120; // Size: 1, Type: enum class EHorizontalAlignment
			constexpr auto VerticalAlignment = 0x121; // Size: 1, Type: enum class EVerticalAlignment
			constexpr auto bShowEffectWhenDisabled = 0x122; // Size: 1, Type: char
			constexpr auto ContentColorAndOpacity = 0x124; // Size: 16, Type: struct FLinearColor
			constexpr auto ContentColorAndOpacityDelegate = 0x134; // Size: 16, Type: struct FDelegate
			constexpr auto Padding = 0x144; // Size: 16, Type: struct FMargin
			constexpr auto Background = 0x158; // Size: 136, Type: struct FSlateBrush
			constexpr auto BackgroundDelegate = 0x1e0; // Size: 16, Type: struct FDelegate
			constexpr auto BrushColor = 0x1f0; // Size: 16, Type: struct FLinearColor
			constexpr auto BrushColorDelegate = 0x200; // Size: 16, Type: struct FDelegate
			constexpr auto DesiredSizeScale = 0x210; // Size: 8, Type: struct FVector2D
			constexpr auto bFlipForRightToLeftFlowDirection = 0x218; // Size: 1, Type: bool
			constexpr auto OnMouseButtonDownEvent = 0x21c; // Size: 16, Type: struct FDelegate
			constexpr auto OnMouseButtonUpEvent = 0x22c; // Size: 16, Type: struct FDelegate
			constexpr auto OnMouseMoveEvent = 0x23c; // Size: 16, Type: struct FDelegate
			constexpr auto OnMouseDoubleClickEvent = 0x24c; // Size: 16, Type: struct FDelegate
	}
} 
