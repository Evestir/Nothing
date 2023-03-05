namespace offsets
{
	namespace UHierarchicalInstancedStaticMeshComponent
	{
			constexpr auto SortedInstances = 0x5d8; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto NumBuiltInstances = 0x5e8; // Size: 4, Type: int32_t
			constexpr auto BuiltInstanceBounds = 0x5f0; // Size: 28, Type: struct FBox
			constexpr auto UnbuiltInstanceBounds = 0x60c; // Size: 28, Type: struct FBox
			constexpr auto UnbuiltInstanceBoundsList = 0x628; // Size: 16, Type: struct TArray<struct FBox>
			constexpr auto bEnableDensityScaling = 0x638; // Size: 1, Type: char
			constexpr auto OcclusionLayerNumNodes = 0x640; // Size: 4, Type: int32_t
			constexpr auto CacheMeshExtendedBounds = 0x644; // Size: 28, Type: struct FBoxSphereBounds
			constexpr auto bDisableCollision = 0x660; // Size: 1, Type: bool
			constexpr auto InstanceCountToRender = 0x664; // Size: 4, Type: int32_t
	}
} 
