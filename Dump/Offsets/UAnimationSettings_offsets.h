namespace offsets
{
	namespace UAnimationSettings
	{
			constexpr auto CompressCommandletVersion = 0x38; // Size: 4, Type: int32_t
			constexpr auto KeyEndEffectorsMatchNameArray = 0x40; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto ForceRecompression = 0x50; // Size: 1, Type: bool
			constexpr auto bForceBelowThreshold = 0x51; // Size: 1, Type: bool
			constexpr auto bFirstRecompressUsingCurrentOrDefault = 0x52; // Size: 1, Type: bool
			constexpr auto bRaiseMaxErrorToExisting = 0x53; // Size: 1, Type: bool
			constexpr auto bEnablePerformanceLog = 0x54; // Size: 1, Type: bool
			constexpr auto bStripAnimationDataOnDedicatedServer = 0x55; // Size: 1, Type: bool
			constexpr auto bTickAnimationOnSkeletalMeshInit = 0x56; // Size: 1, Type: bool
			constexpr auto BoneCustomAttributesNames = 0x58; // Size: 16, Type: struct TArray<struct FCustomAttributeSetting>
			constexpr auto BoneNamesWithCustomAttributes = 0x68; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto AttributeBlendModes = 0x78; // Size: 80, Type: struct TMap<struct FName, enum class ECustomAttributeBlendType>
			constexpr auto DefaultAttributeBlendMode = 0xc8; // Size: 1, Type: enum class ECustomAttributeBlendType
	}
} 
