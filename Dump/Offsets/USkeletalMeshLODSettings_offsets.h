namespace offsets
{
	namespace USkeletalMeshLODSettings
	{
			constexpr auto MinLOD = 0x30; // Size: 4, Type: struct FPerPlatformInt
			constexpr auto DisableBelowMinLodStripping = 0x34; // Size: 1, Type: struct FPerPlatformBool
			constexpr auto bOverrideLODStreamingSettings = 0x35; // Size: 1, Type: bool
			constexpr auto bSupportLODStreaming = 0x36; // Size: 1, Type: struct FPerPlatformBool
			constexpr auto MaxNumStreamedLODs = 0x38; // Size: 4, Type: struct FPerPlatformInt
			constexpr auto MaxNumOptionalLODs = 0x3c; // Size: 4, Type: struct FPerPlatformInt
			constexpr auto LODGroups = 0x40; // Size: 16, Type: struct TArray<struct FSkeletalMeshLODGroupSettings>
	}
} 
