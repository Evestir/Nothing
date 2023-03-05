namespace offsets
{
	namespace URichTextBlock
	{
			constexpr auto Text = 0x128; // Size: 24, Type: struct FText
			constexpr auto TextStyleSet = 0x140; // Size: 8, Type: struct UDataTable*
			constexpr auto DecoratorClasses = 0x148; // Size: 16, Type: struct TArray<URichTextBlockDecorator*>
			constexpr auto bOverrideDefaultStyle = 0x158; // Size: 1, Type: bool
			constexpr auto DefaultTextStyleOverride = 0x160; // Size: 624, Type: struct FTextBlockStyle
			constexpr auto MinDesiredWidth = 0x3d0; // Size: 4, Type: float
			constexpr auto TextTransformPolicy = 0x3d4; // Size: 1, Type: enum class ETextTransformPolicy
			constexpr auto DefaultTextStyle = 0x3d8; // Size: 624, Type: struct FTextBlockStyle
			constexpr auto InstanceDecorators = 0x648; // Size: 16, Type: struct TArray<struct URichTextBlockDecorator*>
	}
} 
