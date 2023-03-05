namespace offsets
{
	namespace UTMIRaceDataList
	{
			constexpr auto UniqueIdentifier = 0x28; // Size: 16, Type: struct FString
			constexpr auto TMIRaceData = 0x38; // Size: 16, Type: struct TArray<struct FTMIRaceData>
			constexpr auto TMIItemModeData = 0x48; // Size: 80, Type: struct TMap<char, struct FTMIItemModeData>
			constexpr auto TMIItemEventData = 0x98; // Size: 16, Type: struct TArray<struct FTMIItemEventData>
			constexpr auto TMIRaceEventData = 0xa8; // Size: 28, Type: struct FTMIRaceEventData
			constexpr auto UserCollision = 0xc8; // Size: 16, Type: struct TArray<struct FRecordUserCollisionInfo>
			constexpr auto boosterstats = 0xd8; // Size: 20, Type: struct FTMIBoosterStats
	}
} 
