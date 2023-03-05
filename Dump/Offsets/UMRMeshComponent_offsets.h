namespace offsets
{
	namespace UMRMeshComponent
	{
			constexpr auto Material = 0x480; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto WireframeMaterial = 0x488; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto bCreateMeshProxySections = 0x490; // Size: 1, Type: bool
			constexpr auto bUpdateNavMeshOnMeshUpdate = 0x491; // Size: 1, Type: bool
			constexpr auto bNeverCreateCollisionMesh = 0x492; // Size: 1, Type: bool
			constexpr auto CachedBodySetup = 0x498; // Size: 8, Type: struct UBodySetup*
			constexpr auto BodySetups = 0x4a0; // Size: 16, Type: struct TArray<struct UBodySetup*>
	}
} 
