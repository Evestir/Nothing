namespace offsets
{
	namespace UKtSessionCreateRace
	{
			constexpr auto Track = 0x88; // Size: 16, Type: struct FString
			constexpr auto GameType = 0x98; // Size: 1, Type: enum class EGameType
			constexpr auto raceType = 0x99; // Size: 1, Type: enum class ERaceType
			constexpr auto raceMode = 0x9a; // Size: 1, Type: enum class ERaceMode
			constexpr auto observerMode = 0x9b; // Size: 1, Type: bool
			constexpr auto channelParam = 0x9c; // Size: 72, Type: struct FKtKartChannelParam
			constexpr auto teams = 0xe4; // Size: 4, Type: int32_t
			constexpr auto teammembers = 0xe8; // Size: 4, Type: int32_t
			constexpr auto Lap = 0xec; // Size: 4, Type: int32_t
			constexpr auto hideKart = 0xf0; // Size: 1, Type: bool
			constexpr auto hideCharacter = 0xf1; // Size: 1, Type: bool
			constexpr auto teamNames = 0xf8; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto sessionAPIEndpoint = 0x108; // Size: 16, Type: struct FString
			constexpr auto sessionAPIKey = 0x118; // Size: 16, Type: struct FString
			constexpr auto sessionAPIAuthToken = 0x128; // Size: 16, Type: struct FString
			constexpr auto redisChannelName = 0x138; // Size: 16, Type: struct FString
			constexpr auto players = 0x148; // Size: 16, Type: struct TArray<struct FKtSessionRacePlayerRequest>
			constexpr auto observers = 0x158; // Size: 16, Type: struct TArray<struct FKtSessionRaceObserverRequest>
			constexpr auto packEncKeys = 0x168; // Size: 80, Type: struct TMap<struct FString, struct FString>
			constexpr auto party = 0x1b8; // Size: 80, Type: struct TMap<struct FString, int32_t>
			constexpr auto raceLog = 0x208; // Size: 1, Type: bool
			constexpr auto nxlogServiceId = 0x210; // Size: 16, Type: struct FString
			constexpr auto nxlogCountPerPack = 0x220; // Size: 4, Type: int32_t
			constexpr auto nxlogMatchType = 0x228; // Size: 16, Type: struct FString
			constexpr auto grandPrixId = 0x238; // Size: 16, Type: struct FString
	}
} 
