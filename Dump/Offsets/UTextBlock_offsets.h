namespace offsets
{
	namespace UTextBlock
	{
			constexpr auto Text = 0x128; // Size: 24, Type: struct FText
			constexpr auto TextDelegate = 0x140; // Size: 16, Type: struct FDelegate
			constexpr auto ColorAndOpacity = 0x150; // Size: 40, Type: struct FSlateColor
			constexpr auto ColorAndOpacityDelegate = 0x178; // Size: 16, Type: struct FDelegate
			constexpr auto Font = 0x188; // Size: 88, Type: struct FSlateFontInfo
			constexpr auto StrikeBrush = 0x1e0; // Size: 136, Type: struct FSlateBrush
			constexpr auto ShadowOffset = 0x268; // Size: 8, Type: struct FVector2D
			constexpr auto ShadowColorAndOpacity = 0x270; // Size: 16, Type: struct FLinearColor
			constexpr auto ShadowColorAndOpacityDelegate = 0x280; // Size: 16, Type: struct FDelegate
			constexpr auto MinDesiredWidth = 0x290; // Size: 4, Type: float
			constexpr auto bWrapWithInvalidationPanel = 0x294; // Size: 1, Type: bool
			constexpr auto bAutoWrapText = 0x295; // Size: 1, Type: bool
			constexpr auto TextTransformPolicy = 0x296; // Size: 1, Type: enum class ETextTransformPolicy
			constexpr auto bSimpleTextMode = 0x297; // Size: 1, Type: bool
	}
} 
