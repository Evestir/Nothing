namespace offsets
{
	namespace UWorld
	{
			constexpr auto PersistentLevel = 0x30; // Size: 8, Type: struct ULevel*
			constexpr auto NetDriver = 0x38; // Size: 8, Type: struct UNetDriver*
			constexpr auto LineBatcher = 0x40; // Size: 8, Type: struct ULineBatchComponent*
			constexpr auto PersistentLineBatcher = 0x48; // Size: 8, Type: struct ULineBatchComponent*
			constexpr auto ForegroundLineBatcher = 0x50; // Size: 8, Type: struct ULineBatchComponent*
			constexpr auto NetworkManager = 0x58; // Size: 8, Type: struct AGameNetworkManager*
			constexpr auto PhysicsCollisionHandler = 0x60; // Size: 8, Type: struct UPhysicsCollisionHandler*
			constexpr auto ExtraReferencedObjects = 0x68; // Size: 16, Type: struct TArray<struct UObject*>
			constexpr auto PerModuleDataObjects = 0x78; // Size: 16, Type: struct TArray<struct UObject*>
			constexpr auto StreamingLevels = 0x88; // Size: 16, Type: struct TArray<struct ULevelStreaming*>
			constexpr auto StreamingLevelsToConsider = 0x98; // Size: 40, Type: struct FStreamingLevelsToConsider
			constexpr auto StreamingLevelsPrefix = 0xc0; // Size: 16, Type: struct FString
			constexpr auto CurrentLevelPendingVisibility = 0xd0; // Size: 8, Type: struct ULevel*
			constexpr auto CurrentLevelPendingInvisibility = 0xd8; // Size: 8, Type: struct ULevel*
			constexpr auto DemoNetDriver = 0xe0; // Size: 8, Type: struct UDemoNetDriver*
			constexpr auto MyParticleEventManager = 0xe8; // Size: 8, Type: struct AParticleEventManager*
			constexpr auto DefaultPhysicsVolume = 0xf0; // Size: 8, Type: struct APhysicsVolume*
			constexpr auto bAreConstraintsDirty = 0x10e; // Size: 1, Type: char
			constexpr auto NavigationSystem = 0x110; // Size: 8, Type: struct UNavigationSystemBase*
			constexpr auto AuthorityGameMode = 0x118; // Size: 8, Type: struct AGameModeBase*
			constexpr auto GameState = 0x120; // Size: 8, Type: struct AGameStateBase*
			constexpr auto AISystem = 0x128; // Size: 8, Type: struct UAISystemBase*
			constexpr auto AvoidanceManager = 0x130; // Size: 8, Type: struct UAvoidanceManager*
			constexpr auto Levels = 0x138; // Size: 16, Type: struct TArray<struct ULevel*>
			constexpr auto LevelCollections = 0x148; // Size: 16, Type: struct TArray<struct FLevelCollection>
			constexpr auto OwningGameInstance = 0x180; // Size: 8, Type: struct UGameInstance*
			constexpr auto ParameterCollectionInstances = 0x188; // Size: 16, Type: struct TArray<struct UMaterialParameterCollectionInstance*>
			constexpr auto CanvasForRenderingToTarget = 0x198; // Size: 8, Type: struct UCanvas*
			constexpr auto CanvasForDrawMaterialToRenderTarget = 0x1a0; // Size: 8, Type: struct UCanvas*
			constexpr auto PhysicsField = 0x1f8; // Size: 8, Type: struct UPhysicsFieldComponent*
			constexpr auto ComponentsThatNeedPreEndOfFrameSync = 0x200; // Size: 80, Type: struct TSet<struct UActorComponent*>
			constexpr auto ComponentsThatNeedEndOfFrameUpdate = 0x250; // Size: 16, Type: struct TArray<struct UActorComponent*>
			constexpr auto ComponentsThatNeedEndOfFrameUpdate_OnGameThread = 0x260; // Size: 16, Type: struct TArray<struct UActorComponent*>
			constexpr auto WorldComposition = 0x5e0; // Size: 8, Type: struct UWorldComposition*
			constexpr auto PSCPool = 0x678; // Size: 88, Type: struct FWorldPSCPool
	}
} 
