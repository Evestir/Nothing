namespace offsets
{
	namespace UQuestListEntryObject
	{
			constexpr auto MissionIdx = 0x28; // Size: 4, Type: int32_t
			constexpr auto MissionName = 0x30; // Size: 16, Type: struct FString
			constexpr auto MissionCategory = 0x40; // Size: 16, Type: struct FString
			constexpr auto MissionTitle = 0x50; // Size: 16, Type: struct FString
			constexpr auto MissionConditions = 0x60; // Size: 16, Type: struct FString
			constexpr auto MissionDef = 0x70; // Size: 280, Type: struct FKtClientMissionDef
	}
} 
