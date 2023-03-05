namespace offsets
{
	namespace UCsRaceGame
	{
			constexpr auto Track = 0x30; // Size: 16, Type: struct FString
			constexpr auto raceType = 0x40; // Size: 1, Type: enum class ERaceType
			constexpr auto teamMemberCount = 0x44; // Size: 4, Type: int32_t
			constexpr auto teamCount = 0x48; // Size: 4, Type: int32_t
			constexpr auto Lap = 0x4c; // Size: 4, Type: int32_t
			constexpr auto levelOption = 0x50; // Size: 16, Type: struct FString
	}
} 
