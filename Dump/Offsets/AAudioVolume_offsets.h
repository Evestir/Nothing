namespace offsets
{
	namespace AAudioVolume
	{
			constexpr auto Priority = 0x258; // Size: 4, Type: float
			constexpr auto bEnabled = 0x25c; // Size: 1, Type: char
			constexpr auto Settings = 0x260; // Size: 32, Type: struct FReverbSettings
			constexpr auto AmbientZoneSettings = 0x280; // Size: 36, Type: struct FInteriorSettings
			constexpr auto SubmixSendSettings = 0x2a8; // Size: 16, Type: struct TArray<struct FAudioVolumeSubmixSendSettings>
			constexpr auto SubmixOverrideSettings = 0x2b8; // Size: 16, Type: struct TArray<struct FAudioVolumeSubmixOverrideSettings>
	}
} 
