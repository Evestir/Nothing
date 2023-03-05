namespace offsets
{
	namespace USoundWave
	{
			constexpr auto CompressionQuality = 0x170; // Size: 4, Type: int32_t
			constexpr auto StreamingPriority = 0x174; // Size: 4, Type: int32_t
			constexpr auto SampleRateQuality = 0x178; // Size: 1, Type: enum class ESoundwaveSampleRateSettings
			constexpr auto SoundGroup = 0x17a; // Size: 1, Type: enum class ESoundGroup
			constexpr auto bLooping = 0x17b; // Size: 1, Type: char
			constexpr auto bStreaming = 0x17b; // Size: 1, Type: char
			constexpr auto bSeekableStreaming = 0x17b; // Size: 1, Type: char
			constexpr auto LoadingBehavior = 0x17c; // Size: 1, Type: enum class ESoundWaveLoadingBehavior
			constexpr auto bMature = 0x17d; // Size: 1, Type: char
			constexpr auto bManualWordWrap = 0x17d; // Size: 1, Type: char
			constexpr auto bSingleLine = 0x17e; // Size: 1, Type: char
			constexpr auto bIsAmbisonics = 0x17e; // Size: 1, Type: char
			constexpr auto ModulationSettings = 0x180; // Size: 72, Type: struct FSoundModulationDefaultRoutingSettings
			constexpr auto FrequenciesToAnalyze = 0x1c8; // Size: 16, Type: struct TArray<float>
			constexpr auto CookedSpectralTimeData = 0x1d8; // Size: 16, Type: struct TArray<struct FSoundWaveSpectralTimeData>
			constexpr auto CookedEnvelopeTimeData = 0x1e8; // Size: 16, Type: struct TArray<struct FSoundWaveEnvelopeTimeData>
			constexpr auto InitialChunkSize = 0x1f8; // Size: 4, Type: int32_t
			constexpr auto SpokenText = 0x240; // Size: 16, Type: struct FString
			constexpr auto SubtitlePriority = 0x250; // Size: 4, Type: float
			constexpr auto Volume = 0x254; // Size: 4, Type: float
			constexpr auto Pitch = 0x258; // Size: 4, Type: float
			constexpr auto NumChannels = 0x25c; // Size: 4, Type: int32_t
			constexpr auto SampleRate = 0x260; // Size: 4, Type: int32_t
			constexpr auto Subtitles = 0x270; // Size: 16, Type: struct TArray<struct FSubtitleCue>
			constexpr auto Curves = 0x280; // Size: 8, Type: struct UCurveTable*
			constexpr auto InternalCurves = 0x288; // Size: 8, Type: struct UCurveTable*
	}
} 
