namespace offsets
{
	namespace URemoveOccludedTrianglesToolProperties
	{
			constexpr auto OcclusionTestMethod = 0x60; // Size: 1, Type: enum class EOcclusionCalculationUIMode
			constexpr auto TriangleSampling = 0x61; // Size: 1, Type: enum class EOcclusionTriangleSamplingUIMode
			constexpr auto WindingIsoValue = 0x68; // Size: 8, Type: double
			constexpr auto AddRandomRays = 0x70; // Size: 4, Type: int32_t
			constexpr auto AddTriangleSamples = 0x74; // Size: 4, Type: int32_t
			constexpr auto bOnlySelfOcclude = 0x78; // Size: 1, Type: bool
	}
} 
