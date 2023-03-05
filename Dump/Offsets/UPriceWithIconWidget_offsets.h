namespace offsets
{
	namespace UPriceWithIconWidget
	{
			constexpr auto Image_Icon = 0x260; // Size: 8, Type: struct UKdImage*
			constexpr auto TextBlock_Price = 0x268; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto PriceType = 0x270; // Size: 1, Type: enum class EPRICE_TYPE
			constexpr auto ImageSize = 0x274; // Size: 8, Type: struct FVector2D
			constexpr auto Font = 0x280; // Size: 88, Type: struct FSlateFontInfo
			constexpr auto TextHorizontalAlignment = 0x2d8; // Size: 1, Type: enum class EHorizontalAlignment
			constexpr auto PriceInfo = 0x2e0; // Size: 80, Type: struct TMap<enum class EPRICE_TYPE, struct FPriceInfo>
	}
} 
