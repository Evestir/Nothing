namespace offsets
{
	namespace UAudioSettings
	{
			constexpr auto DefaultSoundClassName = 0x38; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto DefaultMediaSoundClassName = 0x50; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto DefaultSoundConcurrencyName = 0x68; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto DefaultBaseSoundMix = 0x80; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto VoiPSoundClass = 0x98; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto MasterSubmix = 0xb0; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto BaseDefaultSubmix = 0xc8; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto ReverbSubmix = 0xe0; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto EQSubmix = 0xf8; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto VoiPSampleRate = 0x110; // Size: 4, Type: enum class EVoiceSampleRate
			constexpr auto DefaultReverbSendLevel = 0x114; // Size: 4, Type: float
			constexpr auto MaximumConcurrentStreams = 0x118; // Size: 4, Type: int32_t
			constexpr auto GlobalMinPitchScale = 0x11c; // Size: 4, Type: float
			constexpr auto GlobalMaxPitchScale = 0x120; // Size: 4, Type: float
			constexpr auto QualityLevels = 0x128; // Size: 16, Type: struct TArray<struct FAudioQualitySettings>
			constexpr auto bAllowPlayWhenSilent = 0x138; // Size: 1, Type: char
			constexpr auto bDisableMasterEQ = 0x138; // Size: 1, Type: char
			constexpr auto bAllowCenterChannel3DPanning = 0x138; // Size: 1, Type: char
			constexpr auto NumStoppingSources = 0x13c; // Size: 4, Type: uint32_t
			constexpr auto PanningMethod = 0x140; // Size: 1, Type: enum class EPanningMethod
			constexpr auto MonoChannelUpmixMethod = 0x141; // Size: 1, Type: enum class EMonoChannelUpmixMethod
			constexpr auto DialogueFilenameFormat = 0x148; // Size: 16, Type: struct FString
			constexpr auto DebugSounds = 0x158; // Size: 16, Type: struct TArray<struct FSoundDebugEntry>
			constexpr auto DefaultAudioBuses = 0x168; // Size: 16, Type: struct TArray<struct FDefaultAudioBusSettings>
			constexpr auto DefaultSoundClass = 0x178; // Size: 8, Type: struct USoundClass*
			constexpr auto DefaultMediaSoundClass = 0x180; // Size: 8, Type: struct USoundClass*
			constexpr auto DefaultSoundConcurrency = 0x188; // Size: 8, Type: struct USoundConcurrency*
	}
} 
