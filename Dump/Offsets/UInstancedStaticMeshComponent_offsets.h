namespace offsets
{
	namespace UInstancedStaticMeshComponent
	{
			constexpr auto PerInstanceSMData = 0x518; // Size: 16, Type: struct TArray<struct FInstancedStaticMeshInstanceData>
			constexpr auto NumCustomDataFloats = 0x528; // Size: 4, Type: int32_t
			constexpr auto PerInstanceSMCustomData = 0x530; // Size: 16, Type: struct TArray<float>
			constexpr auto InstancingRandomSeed = 0x540; // Size: 4, Type: int32_t
			constexpr auto LODScaleFactor = 0x544; // Size: 4, Type: float
			constexpr auto bUseFullPrecision = 0x548; // Size: 1, Type: bool
			constexpr auto InstanceStartCullDistance = 0x54c; // Size: 4, Type: int32_t
			constexpr auto InstanceEndCullDistance = 0x550; // Size: 4, Type: int32_t
			constexpr auto InstanceReorderTable = 0x558; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto NumPendingLightmaps = 0x5b0; // Size: 4, Type: int32_t
			constexpr auto CachedMappings = 0x5b8; // Size: 16, Type: struct TArray<struct FInstancedStaticMeshMappingInfo>
	}
} 
