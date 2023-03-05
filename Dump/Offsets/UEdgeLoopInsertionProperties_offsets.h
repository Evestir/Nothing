namespace offsets
{
	namespace UEdgeLoopInsertionProperties
	{
			constexpr auto PositionMode = 0x60; // Size: 4, Type: enum class EEdgeLoopPositioningMode
			constexpr auto InsertionMode = 0x64; // Size: 4, Type: enum class EEdgeLoopInsertionMode
			constexpr auto NumLoops = 0x68; // Size: 4, Type: int32_t
			constexpr auto ProportionOffset = 0x70; // Size: 8, Type: double
			constexpr auto DistanceOffset = 0x78; // Size: 8, Type: double
			constexpr auto bInteractive = 0x80; // Size: 1, Type: bool
			constexpr auto bFlipOffsetDirection = 0x81; // Size: 1, Type: bool
			constexpr auto bWireframe = 0x82; // Size: 1, Type: bool
			constexpr auto VertexTolerance = 0x88; // Size: 8, Type: double
	}
} 
