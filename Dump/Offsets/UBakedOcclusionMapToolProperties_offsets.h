namespace offsets
{
	namespace UBakedOcclusionMapToolProperties
	{
			constexpr auto preview = 0x60; // Size: 4, Type: enum class EOcclusionMapPreview
			constexpr auto OcclusionRays = 0x64; // Size: 4, Type: int32_t
			constexpr auto MaxDistance = 0x68; // Size: 4, Type: float
			constexpr auto SpreadAngle = 0x6c; // Size: 4, Type: float
			constexpr auto Distribution = 0x70; // Size: 4, Type: enum class EOcclusionMapDistribution
			constexpr auto bGaussianBlur = 0x74; // Size: 1, Type: bool
			constexpr auto BlurRadius = 0x78; // Size: 4, Type: float
			constexpr auto BiasAngle = 0x7c; // Size: 4, Type: float
			constexpr auto NormalSpace = 0x80; // Size: 4, Type: enum class ENormalMapSpace
	}
} 
