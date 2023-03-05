namespace offsets
{
	namespace UShadowPlaySetupComponent
	{
			constexpr auto PlayerPawn = 0xb0; // Size: 8, Type: struct AKdPawn*
			constexpr auto ShadowPawn = 0xb8; // Size: 8, Type: struct AKdPawn*
			constexpr auto PawnSpawner = 0xc0; // Size: 8, Type: struct UKdPawnSpawner*
			constexpr auto Barrier = 0xc8; // Size: 8, Type: struct UDelegateBarrierMany*
			constexpr auto ShadowSaveGame = 0xd0; // Size: 8, Type: struct FRaceSaveGameLatestPtr
	}
} 
