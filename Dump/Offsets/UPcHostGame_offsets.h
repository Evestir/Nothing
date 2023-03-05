namespace offsets
{
	namespace UPcHostGame
	{
			constexpr auto gameId = 0x30; // Size: 16, Type: struct FString
			constexpr auto gameSettings = 0x40; // Size: 8, Type: struct UObject*
			constexpr auto players = 0x48; // Size: 16, Type: struct TArray<struct FHostGamePlayer>
			constexpr auto sessionAPIEndpoint = 0x58; // Size: 16, Type: struct FString
			constexpr auto sessionAPIKey = 0x68; // Size: 16, Type: struct FString
			constexpr auto sessionAPIAuthToken = 0x78; // Size: 16, Type: struct FString
			constexpr auto redisChannelName = 0x88; // Size: 16, Type: struct FString
			constexpr auto ETC = 0x98; // Size: 8, Type: struct UObject*
			constexpr auto isSpectator = 0xa0; // Size: 1, Type: bool
	}
} 
