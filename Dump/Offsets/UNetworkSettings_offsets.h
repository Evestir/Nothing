namespace offsets
{
	namespace UNetworkSettings
	{
			constexpr auto bVerifyPeer = 0x38; // Size: 1, Type: char
			constexpr auto bEnableMultiplayerWorldOriginRebasing = 0x38; // Size: 1, Type: char
			constexpr auto MaxRepArraySize = 0x3c; // Size: 4, Type: int32_t
			constexpr auto MaxRepArrayMemory = 0x40; // Size: 4, Type: int32_t
			constexpr auto NetworkEmulationProfiles = 0x48; // Size: 16, Type: struct TArray<struct FNetworkEmulationProfileDescription>
	}
} 
