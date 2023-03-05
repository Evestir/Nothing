namespace offsets
{
	namespace USetCollisionGeometryToolProperties
	{
			constexpr auto GeometryType = 0x60; // Size: 4, Type: enum class ECollisionGeometryType
			constexpr auto InputMode = 0x64; // Size: 4, Type: enum class ESetCollisionGeometryInputMode
			constexpr auto bUseWorldSpace = 0x68; // Size: 1, Type: bool
			constexpr auto bRemoveContained = 0x69; // Size: 1, Type: bool
			constexpr auto bEnableMaxCount = 0x6a; // Size: 1, Type: bool
			constexpr auto MaxCount = 0x6c; // Size: 4, Type: int32_t
			constexpr auto MinThickness = 0x70; // Size: 4, Type: float
			constexpr auto bDetectBoxes = 0x74; // Size: 1, Type: bool
			constexpr auto bDetectSpheres = 0x75; // Size: 1, Type: bool
			constexpr auto bDetectCapsules = 0x76; // Size: 1, Type: bool
			constexpr auto bSimplifyHulls = 0x77; // Size: 1, Type: bool
			constexpr auto HullTargetFaceCount = 0x78; // Size: 4, Type: int32_t
			constexpr auto bSimplifyPolygons = 0x7c; // Size: 1, Type: bool
			constexpr auto HullTolerance = 0x80; // Size: 4, Type: float
			constexpr auto SweepAxis = 0x84; // Size: 4, Type: enum class EProjectedHullAxis
			constexpr auto bAppendToExisting = 0x88; // Size: 1, Type: bool
			constexpr auto SetCollisionType = 0x8c; // Size: 4, Type: enum class ECollisionGeometryMode
	}
} 
