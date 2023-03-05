namespace offsets
{
	namespace UStreamableRenderAsset
	{
			constexpr auto ForceMipLevelsToBeResidentTimestamp = 0x40; // Size: 8, Type: double
			constexpr auto NumCinematicMipLevels = 0x48; // Size: 4, Type: int32_t
			constexpr auto StreamingIndex = 0x4c; // Size: 4, Type: int32_t
			constexpr auto CachedCombinedLODBias = 0x50; // Size: 4, Type: int32_t
			constexpr auto NeverStream = 0x54; // Size: 1, Type: char
			constexpr auto bGlobalForceMipLevelsToBeResident = 0x54; // Size: 1, Type: char
			constexpr auto bHasStreamingUpdatePending = 0x54; // Size: 1, Type: char
			constexpr auto bForceMiplevelsToBeResident = 0x54; // Size: 1, Type: char
			constexpr auto bIgnoreStreamingMipBias = 0x54; // Size: 1, Type: char
			constexpr auto bUseCinematicMipLevels = 0x54; // Size: 1, Type: char
	}
} 
