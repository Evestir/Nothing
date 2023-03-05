namespace offsets
{
	namespace UMonoWaveTableSynthPreset
	{
			constexpr auto PresetName = 0x28; // Size: 16, Type: struct FString
			constexpr auto bLockKeyframesToGridBool = 0x38; // Size: 1, Type: char
			constexpr auto LockKeyframesToGrid = 0x3c; // Size: 4, Type: int32_t
			constexpr auto WaveTableResolution = 0x40; // Size: 4, Type: int32_t
			constexpr auto WaveTable = 0x48; // Size: 16, Type: struct TArray<struct FRuntimeFloatCurve>
			constexpr auto bNormalizeWaveTables = 0x58; // Size: 1, Type: char
	}
} 
