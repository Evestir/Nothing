namespace offsets
{
	namespace UDrawPolygonToolSnapProperties
	{
			constexpr auto bEnableSnapping = 0x60; // Size: 1, Type: bool
			constexpr auto bSnapToWorldGrid = 0x61; // Size: 1, Type: bool
			constexpr auto bSnapToVertices = 0x62; // Size: 1, Type: bool
			constexpr auto bSnapToEdges = 0x63; // Size: 1, Type: bool
			constexpr auto bSnapToAngles = 0x64; // Size: 1, Type: bool
			constexpr auto bSnapToLengths = 0x65; // Size: 1, Type: bool
			constexpr auto SegmentLength = 0x68; // Size: 4, Type: float
			constexpr auto bHitSceneObjects = 0x6c; // Size: 1, Type: bool
			constexpr auto HitNormalOffset = 0x70; // Size: 4, Type: float
	}
} 
