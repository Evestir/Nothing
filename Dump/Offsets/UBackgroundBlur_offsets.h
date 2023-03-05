namespace offsets
{
	namespace UBackgroundBlur
	{
			constexpr auto Padding = 0x120; // Size: 16, Type: struct FMargin
			constexpr auto HorizontalAlignment = 0x130; // Size: 1, Type: enum class EHorizontalAlignment
			constexpr auto VerticalAlignment = 0x131; // Size: 1, Type: enum class EVerticalAlignment
			constexpr auto bApplyAlphaToBlur = 0x132; // Size: 1, Type: bool
			constexpr auto BlurStrength = 0x134; // Size: 4, Type: float
			constexpr auto bOverrideAutoRadiusCalculation = 0x138; // Size: 1, Type: bool
			constexpr auto BlurRadius = 0x13c; // Size: 4, Type: int32_t
			constexpr auto LowQualityFallbackBrush = 0x140; // Size: 136, Type: struct FSlateBrush
	}
} 
