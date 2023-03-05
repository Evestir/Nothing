namespace offsets
{
	namespace URevolveProperties
	{
			constexpr auto RevolutionDegrees = 0x60; // Size: 8, Type: double
			constexpr auto RevolutionDegreesOffset = 0x68; // Size: 8, Type: double
			constexpr auto steps = 0x70; // Size: 4, Type: int32_t
			constexpr auto bReverseRevolutionDirection = 0x74; // Size: 1, Type: bool
			constexpr auto bFlipMesh = 0x75; // Size: 1, Type: bool
			constexpr auto bProfileIsCrossSectionOfSide = 0x76; // Size: 1, Type: bool
			constexpr auto PolygroupMode = 0x77; // Size: 1, Type: enum class ERevolvePropertiesPolygroupMode
			constexpr auto QuadSplitMode = 0x78; // Size: 1, Type: enum class ERevolvePropertiesQuadSplit
			constexpr auto DiagonalProportionTolerance = 0x80; // Size: 8, Type: double
			constexpr auto CapFillMode = 0x88; // Size: 1, Type: enum class ERevolvePropertiesCapFillMode
			constexpr auto bWeldFullRevolution = 0x89; // Size: 1, Type: bool
			constexpr auto bWeldVertsOnAxis = 0x8a; // Size: 1, Type: bool
			constexpr auto AxisWeldTolerance = 0x90; // Size: 8, Type: double
			constexpr auto bSharpNormals = 0x98; // Size: 1, Type: bool
			constexpr auto SharpNormalAngleTolerance = 0xa0; // Size: 8, Type: double
			constexpr auto bFlipVs = 0xa8; // Size: 1, Type: bool
			constexpr auto bUVsSkipFullyWeldedEdges = 0xa9; // Size: 1, Type: bool
	}
} 
