namespace offsets
{
	namespace AGameMode
	{
			constexpr auto MatchState = 0x2c0; // Size: 8, Type: struct FName
			constexpr auto bDelayedStart = 0x2c8; // Size: 1, Type: char
			constexpr auto NumSpectators = 0x2cc; // Size: 4, Type: int32_t
			constexpr auto NumPlayers = 0x2d0; // Size: 4, Type: int32_t
			constexpr auto NumBots = 0x2d4; // Size: 4, Type: int32_t
			constexpr auto MinRespawnDelay = 0x2d8; // Size: 4, Type: float
			constexpr auto NumTravellingPlayers = 0x2dc; // Size: 4, Type: int32_t
			constexpr auto EngineMessageClass = 0x2e0; // Size: 8, Type: ULocalMessage*
			constexpr auto InactivePlayerArray = 0x2e8; // Size: 16, Type: struct TArray<struct APlayerState*>
			constexpr auto InactivePlayerStateLifeSpan = 0x2f8; // Size: 4, Type: float
			constexpr auto MaxInactivePlayers = 0x2fc; // Size: 4, Type: int32_t
			constexpr auto bHandleDedicatedServerReplays = 0x300; // Size: 1, Type: bool
	}
} 
