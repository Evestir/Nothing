namespace offsets
{
	namespace USoundCue
	{
			constexpr auto bPrimeOnLoad = 0x170; // Size: 1, Type: char
			constexpr auto FirstNode = 0x178; // Size: 8, Type: struct USoundNode*
			constexpr auto VolumeMultiplier = 0x180; // Size: 4, Type: float
			constexpr auto PitchMultiplier = 0x184; // Size: 4, Type: float
			constexpr auto AttenuationOverrides = 0x188; // Size: 928, Type: struct FSoundAttenuationSettings
			constexpr auto SubtitlePriority = 0x528; // Size: 4, Type: float
			constexpr auto bOverrideAttenuation = 0x530; // Size: 1, Type: char
			constexpr auto bExcludeFromRandomNodeBranchCulling = 0x530; // Size: 1, Type: char
			constexpr auto CookedQualityIndex = 0x534; // Size: 4, Type: int32_t
			constexpr auto bHasPlayWhenSilent = 0x538; // Size: 1, Type: char
	}
} 
