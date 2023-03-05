namespace offsets
{
	namespace ALODActor
	{
			constexpr auto StaticMeshComponent = 0x220; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto InstancedStaticMeshComponents = 0x228; // Size: 80, Type: struct TMap<struct FHLODInstancingKey, struct UInstancedStaticMeshComponent*>
			constexpr auto Proxy = 0x278; // Size: 8, Type: struct UHLODProxy*
			constexpr auto Key = 0x280; // Size: 8, Type: struct FName
			constexpr auto LODDrawDistance = 0x288; // Size: 4, Type: float
			constexpr auto LODLevel = 0x28c; // Size: 4, Type: int32_t
			constexpr auto SubActors = 0x290; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto CachedNumHLODLevels = 0x2a0; // Size: 1, Type: char
	}
} 
