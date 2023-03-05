namespace offsets
{
	namespace AMajorPodiumSequencePoint
	{
			constexpr auto PreCacheAssetContainer = 0x260; // Size: 80, Type: struct TSet<struct UObject*>
			constexpr auto AssetContainer = 0x2c0; // Size: 80, Type: struct TMap<enum class EMajorPodiumSequenceType, struct TSoftObjectPtr<ULevelSequence>>
			constexpr auto PodiumKartPrefix = 0x310; // Size: 16, Type: struct FString
			constexpr auto PodiumCharacterPrefix = 0x320; // Size: 16, Type: struct FString
			constexpr auto LoserCharacterPrefix = 0x330; // Size: 16, Type: struct FString
			constexpr auto MediaWall = 0x340; // Size: 8, Type: struct AMajorPodiumMediaWall*
			constexpr auto SequenceKartContainer = 0x348; // Size: 16, Type: struct TArray<struct AKdSequenceKart*>
			constexpr auto PodiumSequenceCharacterContainer = 0x358; // Size: 16, Type: struct TArray<struct AKdSequenceCharacter*>
			constexpr auto SequenceCharacterNameTagContainer = 0x368; // Size: 16, Type: struct TArray<struct UPodiumRiderNameTagComponent*>
			constexpr auto LoseSequenceCharacterContainer = 0x378; // Size: 16, Type: struct TArray<struct AKdSequenceCharacter*>
	}
} 
