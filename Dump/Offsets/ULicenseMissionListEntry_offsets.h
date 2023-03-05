namespace offsets
{
	namespace ULicenseMissionListEntry
	{
			constexpr auto ListIndex = 0x28; // Size: 4, Type: int32_t
			constexpr auto GroupID = 0x30; // Size: 16, Type: struct FString
			constexpr auto missionId = 0x40; // Size: 16, Type: struct FString
			constexpr auto MissionTitle = 0x50; // Size: 24, Type: struct FText
			constexpr auto rewardStockIdList = 0x68; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto starScoreList = 0x78; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto CompletedStarCount = 0x88; // Size: 1, Type: char
			constexpr auto ItemTypeList = 0x90; // Size: 16, Type: struct TArray<enum class EItemType>
			constexpr auto ScoreType = 0xa0; // Size: 1, Type: enum class ELicenseMissionScoreType
			constexpr auto MissionTip = 0xa8; // Size: 24, Type: struct FText
	}
} 
