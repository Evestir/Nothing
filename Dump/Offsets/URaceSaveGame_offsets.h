namespace offsets
{
	namespace URaceSaveGame
	{
			constexpr auto LevelName = 0x28; // Size: 16, Type: struct FString
			constexpr auto ModeName = 0x38; // Size: 16, Type: struct FString
			constexpr auto RecorderName = 0x48; // Size: 16, Type: struct FString
			constexpr auto TotalPlayTime = 0x58; // Size: 4, Type: float
			constexpr auto DateTime = 0x60; // Size: 8, Type: struct FDateTime
			constexpr auto PawnRecordContainer = 0x68; // Size: 80, Type: struct TMap<int32_t, struct FPawnRecordData>
	}
} 
