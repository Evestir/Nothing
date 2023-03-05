namespace offsets
{
	namespace URaceProfilerComponent
	{
			constexpr auto RecordGame = 0xb8; // Size: 8, Type: struct UPacketSaveGame*
			constexpr auto SkillScoreArray = 0xc0; // Size: 16, Type: struct TArray<struct FSkillScoreData>
			constexpr auto BoostAccumTime = 0xf0; // Size: 80, Type: struct TMap<enum class EBoostKind, float>
	}
} 
