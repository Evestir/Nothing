namespace offsets
{
	namespace USoundSubmix
	{
			constexpr auto bMuteWhenBackgrounded = 0x40; // Size: 1, Type: char
			constexpr auto SubmixEffectChain = 0x48; // Size: 16, Type: struct TArray<struct USoundEffectSubmixPreset*>
			constexpr auto AmbisonicsPluginSettings = 0x58; // Size: 8, Type: struct USoundfieldEncodingSettingsBase*
			constexpr auto EnvelopeFollowerAttackTime = 0x60; // Size: 4, Type: int32_t
			constexpr auto EnvelopeFollowerReleaseTime = 0x64; // Size: 4, Type: int32_t
			constexpr auto GainMode = 0x68; // Size: 1, Type: enum class EGainParamMode
			constexpr auto OutputVolume = 0x6c; // Size: 4, Type: float
			constexpr auto WetLevel = 0x70; // Size: 4, Type: float
			constexpr auto DryLevel = 0x74; // Size: 4, Type: float
			constexpr auto OutputVolumeModulation = 0x78; // Size: 16, Type: struct FSoundModulationDestinationSettings
			constexpr auto WetLevelModulation = 0x88; // Size: 16, Type: struct FSoundModulationDestinationSettings
			constexpr auto DryLevelModulation = 0x98; // Size: 16, Type: struct FSoundModulationDestinationSettings
			constexpr auto OnSubmixRecordedFileDone = 0xa8; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
