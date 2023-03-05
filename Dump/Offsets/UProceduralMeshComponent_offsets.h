namespace offsets
{
	namespace UProceduralMeshComponent
	{
			constexpr auto bUseComplexAsSimpleCollision = 0x4b0; // Size: 1, Type: bool
			constexpr auto bUseAsyncCooking = 0x4b1; // Size: 1, Type: bool
			constexpr auto ProcMeshBodySetup = 0x4b8; // Size: 8, Type: struct UBodySetup*
			constexpr auto ProcMeshSections = 0x4c0; // Size: 16, Type: struct TArray<struct FProcMeshSection>
			constexpr auto CollisionConvexElems = 0x4d0; // Size: 16, Type: struct TArray<struct FKConvexElem>
			constexpr auto LocalBounds = 0x4e0; // Size: 28, Type: struct FBoxSphereBounds
			constexpr auto AsyncBodySetupQueue = 0x500; // Size: 16, Type: struct TArray<struct UBodySetup*>
	}
} 
