namespace offsets
{
	namespace UDrawPolygonToolStandardProperties
	{
			constexpr auto PolygonType = 0x60; // Size: 1, Type: enum class EDrawPolygonDrawMode
			constexpr auto OutputMode = 0x61; // Size: 1, Type: enum class EDrawPolygonOutputMode
			constexpr auto FeatureSizeRatio = 0x64; // Size: 4, Type: float
			constexpr auto ExtrudeHeight = 0x68; // Size: 4, Type: float
			constexpr auto steps = 0x6c; // Size: 4, Type: int32_t
			constexpr auto bAllowSelfIntersections = 0x70; // Size: 1, Type: bool
			constexpr auto bShowGizmo = 0x71; // Size: 1, Type: bool
	}
} 
