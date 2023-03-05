namespace offsets
{
	namespace UKtSessionHackChecked
	{
			constexpr auto playerId = 0x30; // Size: 16, Type: struct FString
			constexpr auto riderName = 0x40; // Size: 16, Type: struct FString
			constexpr auto raceMode = 0x50; // Size: 1, Type: enum class ERaceMode
			constexpr auto trackId = 0x58; // Size: 16, Type: struct FString
			constexpr auto gameId = 0x68; // Size: 16, Type: struct FString
			constexpr auto blockedLap = 0x78; // Size: 4, Type: int32_t
			constexpr auto blockedLapTime = 0x7c; // Size: 4, Type: int32_t
			constexpr auto TotalLapTime = 0x80; // Size: 4, Type: int32_t
			constexpr auto hackCheckLapTime = 0x84; // Size: 4, Type: int32_t
			constexpr auto hackCheckTotalTime = 0x88; // Size: 4, Type: int32_t
	}
} 
