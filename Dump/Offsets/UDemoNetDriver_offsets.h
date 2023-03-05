namespace offsets
{
	namespace UDemoNetDriver
	{
			constexpr auto RollbackNetStartupActors = 0x858; // Size: 80, Type: struct TMap<struct FString, struct FRollbackNetStartupActorInfo>
			constexpr auto CheckpointSaveMaxMSPerFrame = 0xa04; // Size: 4, Type: float
			constexpr auto MulticastRecordOptions = 0xa28; // Size: 16, Type: struct TArray<struct FMulticastRecordOptions>
			constexpr auto bIsLocalReplay = 0xa38; // Size: 1, Type: bool
			constexpr auto SpectatorControllers = 0xa40; // Size: 16, Type: struct TArray<struct APlayerController*>
	}
} 
