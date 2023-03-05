namespace offsets
{
	namespace UBodySetup
	{
			constexpr auto AggGeom = 0x48; // Size: 88, Type: struct FKAggregateGeom
			constexpr auto bAlwaysFullAnimWeight = 0xa0; // Size: 1, Type: char
			constexpr auto bConsiderForBounds = 0xa0; // Size: 1, Type: char
			constexpr auto bMeshCollideAll = 0xa0; // Size: 1, Type: char
			constexpr auto bDoubleSidedGeometry = 0xa0; // Size: 1, Type: char
			constexpr auto bGenerateNonMirroredCollision = 0xa0; // Size: 1, Type: char
			constexpr auto bSharedCookedData = 0xa0; // Size: 1, Type: char
			constexpr auto bGenerateMirroredCollision = 0xa0; // Size: 1, Type: char
			constexpr auto bSupportUVsAndFaceRemap = 0xa0; // Size: 1, Type: char
			constexpr auto PhysMaterial = 0xa8; // Size: 8, Type: struct UPhysicalMaterial*
			constexpr auto WalkableSlopeOverride = 0xb0; // Size: 16, Type: struct FWalkableSlopeOverride
			constexpr auto DefaultInstance = 0x128; // Size: 344, Type: struct FBodyInstance
			constexpr auto BuildScale3D = 0x288; // Size: 12, Type: struct FVector
	}
} 
