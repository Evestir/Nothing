namespace offsets
{
	namespace UBakedCurvatureMapToolProperties
	{
			constexpr auto CurvatureType = 0x60; // Size: 4, Type: enum class EBakedCurvatureTypeMode
			constexpr auto ColorMode = 0x64; // Size: 4, Type: enum class EBakedCurvatureColorMode
			constexpr auto RangeMultiplier = 0x68; // Size: 4, Type: float
			constexpr auto MinRangeMultiplier = 0x6c; // Size: 4, Type: float
			constexpr auto Clamping = 0x70; // Size: 4, Type: enum class EBakedCurvatureClampMode
			constexpr auto bGaussianBlur = 0x74; // Size: 1, Type: bool
			constexpr auto BlurRadius = 0x78; // Size: 4, Type: float
	}
} 
