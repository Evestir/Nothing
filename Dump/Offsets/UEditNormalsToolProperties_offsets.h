namespace offsets
{
	namespace UEditNormalsToolProperties
	{
			constexpr auto bRecomputeNormals = 0x60; // Size: 1, Type: bool
			constexpr auto NormalCalculationMethod = 0x61; // Size: 1, Type: enum class ENormalCalculationMethod
			constexpr auto bFixInconsistentNormals = 0x62; // Size: 1, Type: bool
			constexpr auto bInvertNormals = 0x63; // Size: 1, Type: bool
			constexpr auto SplitNormalMethod = 0x64; // Size: 1, Type: enum class ESplitNormalMethod
			constexpr auto SharpEdgeAngleThreshold = 0x68; // Size: 4, Type: float
			constexpr auto bAllowSharpVertices = 0x6c; // Size: 1, Type: bool
	}
} 
