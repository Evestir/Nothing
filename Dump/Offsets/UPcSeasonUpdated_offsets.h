namespace offsets
{
	namespace UPcSeasonUpdated
	{
			constexpr auto seasonInfo = 0x30; // Size: 32, Type: struct FKtSeasonInfo
			constexpr auto seasonStaticInfo = 0x50; // Size: 56, Type: struct FKtSeasonStaticInfo
			constexpr auto seasonUpdatedType = 0x88; // Size: 1, Type: enum class ESeasonUpdatedType
			constexpr auto inventoryDataSeason = 0x90; // Size: 16, Type: struct TArray<struct FKtItem>
			constexpr auto questSetDataDaily = 0xa0; // Size: 80, Type: struct FKtQuestSetData
			constexpr auto questSetDataWeekly = 0xf0; // Size: 80, Type: struct FKtQuestSetData
	}
} 
