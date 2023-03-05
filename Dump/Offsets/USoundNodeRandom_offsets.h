namespace offsets
{
	namespace USoundNodeRandom
	{
			constexpr auto Weights = 0x48; // Size: 16, Type: struct TArray<float>
			constexpr auto HasBeenUsed = 0x58; // Size: 16, Type: struct TArray<bool>
			constexpr auto NumRandomUsed = 0x68; // Size: 4, Type: int32_t
			constexpr auto PreselectAtLevelLoad = 0x6c; // Size: 4, Type: int32_t
			constexpr auto bShouldExcludeFromBranchCulling = 0x70; // Size: 1, Type: char
			constexpr auto bSoundCueExcludedFromBranchCulling = 0x70; // Size: 1, Type: char
			constexpr auto bRandomizeWithoutReplacement = 0x70; // Size: 1, Type: char
	}
} 
