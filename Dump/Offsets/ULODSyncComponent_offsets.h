namespace offsets
{
	namespace ULODSyncComponent
	{
			constexpr auto NumLODs = 0xb0; // Size: 4, Type: int32_t
			constexpr auto ForcedLOD = 0xb4; // Size: 4, Type: int32_t
			constexpr auto ComponentsToSync = 0xb8; // Size: 16, Type: struct TArray<struct FComponentSync>
			constexpr auto CustomLODMapping = 0xc8; // Size: 80, Type: struct TMap<struct FName, struct FLODMappingData>
			constexpr auto CurrentLOD = 0x118; // Size: 4, Type: int32_t
			constexpr auto CurrentNumLODs = 0x11c; // Size: 4, Type: int32_t
			constexpr auto DriveComponents = 0x120; // Size: 16, Type: struct TArray<struct UPrimitiveComponent*>
			constexpr auto SubComponents = 0x130; // Size: 16, Type: struct TArray<struct UPrimitiveComponent*>
	}
} 
