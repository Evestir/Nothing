namespace offsets
{
	namespace AGameModeBase
	{
			constexpr auto OptionsString = 0x220; // Size: 16, Type: struct FString
			constexpr auto GameSessionClass = 0x230; // Size: 8, Type: AGameSession*
			constexpr auto GameStateClass = 0x238; // Size: 8, Type: AGameStateBase*
			constexpr auto PlayerControllerClass = 0x240; // Size: 8, Type: APlayerController*
			constexpr auto PlayerStateClass = 0x248; // Size: 8, Type: APlayerState*
			constexpr auto HUDClass = 0x250; // Size: 8, Type: AHUD*
			constexpr auto DefaultPawnClass = 0x258; // Size: 8, Type: APawn*
			constexpr auto SpectatorClass = 0x260; // Size: 8, Type: ASpectatorPawn*
			constexpr auto ReplaySpectatorPlayerControllerClass = 0x268; // Size: 8, Type: APlayerController*
			constexpr auto ServerStatReplicatorClass = 0x270; // Size: 8, Type: AServerStatReplicator*
			constexpr auto GameSession = 0x278; // Size: 8, Type: struct AGameSession*
			constexpr auto GameState = 0x280; // Size: 8, Type: struct AGameStateBase*
			constexpr auto ServerStatReplicator = 0x288; // Size: 8, Type: struct AServerStatReplicator*
			constexpr auto DefaultPlayerName = 0x290; // Size: 24, Type: struct FText
			constexpr auto bUseSeamlessTravel = 0x2a8; // Size: 1, Type: char
			constexpr auto bStartPlayersAsSpectators = 0x2a8; // Size: 1, Type: char
			constexpr auto bPauseable = 0x2a8; // Size: 1, Type: char
	}
} 
