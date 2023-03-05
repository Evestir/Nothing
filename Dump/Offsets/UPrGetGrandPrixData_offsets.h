namespace offsets
{
	namespace UPrGetGrandPrixData
	{
			constexpr auto grandPrixId = 0x48; // Size: 16, Type: struct FString
			constexpr auto gpp = 0x58; // Size: 4, Type: int32_t
			constexpr auto tier = 0x5c; // Size: 1, Type: enum class EKtGrandPrixSubTier
			constexpr auto statRank1 = 0x60; // Size: 4, Type: int32_t
			constexpr auto statRank2 = 0x64; // Size: 4, Type: int32_t
			constexpr auto statRank3 = 0x68; // Size: 4, Type: int32_t
			constexpr auto statTeamWin = 0x6c; // Size: 4, Type: int32_t
			constexpr auto statTeamLose = 0x70; // Size: 4, Type: int32_t
			constexpr auto statTeamDraw = 0x74; // Size: 4, Type: int32_t
			constexpr auto statRetire = 0x78; // Size: 4, Type: int32_t
			constexpr auto statRaceCount = 0x7c; // Size: 4, Type: int32_t
			constexpr auto myRank = 0x80; // Size: 56, Type: struct FKtRankerInfo
			constexpr auto percentage = 0xb8; // Size: 4, Type: float
	}
} 
