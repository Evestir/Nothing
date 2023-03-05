namespace offsets
{
	namespace UGameplayTagsSettings
	{
			constexpr auto ImportTagsFromConfig = 0x48; // Size: 1, Type: bool
			constexpr auto WarnOnInvalidTags = 0x49; // Size: 1, Type: bool
			constexpr auto ClearInvalidTags = 0x4a; // Size: 1, Type: bool
			constexpr auto FastReplication = 0x4b; // Size: 1, Type: bool
			constexpr auto InvalidTagCharacters = 0x50; // Size: 16, Type: struct FString
			constexpr auto CategoryRemapping = 0x60; // Size: 16, Type: struct TArray<struct FGameplayTagCategoryRemap>
			constexpr auto GameplayTagTableList = 0x70; // Size: 16, Type: struct TArray<struct FSoftObjectPath>
			constexpr auto GameplayTagRedirects = 0x80; // Size: 16, Type: struct TArray<struct FGameplayTagRedirect>
			constexpr auto CommonlyReplicatedTags = 0x90; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto NumBitsForContainerSize = 0xa0; // Size: 4, Type: int32_t
			constexpr auto NetIndexFirstBitSegment = 0xa4; // Size: 4, Type: int32_t
			constexpr auto RestrictedConfigFiles = 0xa8; // Size: 16, Type: struct TArray<struct FRestrictedConfigInfo>
	}
} 
