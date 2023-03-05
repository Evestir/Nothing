namespace offsets
{
	namespace AGameSession
	{
			constexpr auto MaxSpectators = 0x220; // Size: 4, Type: int32_t
			constexpr auto MaxPlayers = 0x224; // Size: 4, Type: int32_t
			constexpr auto MaxPartySize = 0x228; // Size: 4, Type: int32_t
			constexpr auto MaxSplitscreensPerConnection = 0x22c; // Size: 1, Type: char
			constexpr auto bRequiresPushToTalk = 0x22d; // Size: 1, Type: bool
			constexpr auto SessionName = 0x230; // Size: 8, Type: struct FName
	}
} 
