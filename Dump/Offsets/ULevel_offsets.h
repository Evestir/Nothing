namespace offsets
{
	namespace ULevel
	{
			constexpr auto OwningWorld = 0xb8; // Size: 8, Type: struct UWorld*
			constexpr auto Model = 0xc0; // Size: 8, Type: struct UModel*
			constexpr auto ModelComponents = 0xc8; // Size: 16, Type: struct TArray<struct UModelComponent*>
			constexpr auto ActorCluster = 0xd8; // Size: 8, Type: struct ULevelActorContainer*
			constexpr auto NumTextureStreamingUnbuiltComponents = 0xe0; // Size: 4, Type: int32_t
			constexpr auto NumTextureStreamingDirtyResources = 0xe4; // Size: 4, Type: int32_t
			constexpr auto LevelScriptActor = 0xe8; // Size: 8, Type: struct ALevelScriptActor*
			constexpr auto NavListStart = 0xf0; // Size: 8, Type: struct ANavigationObjectBase*
			constexpr auto NavListEnd = 0xf8; // Size: 8, Type: struct ANavigationObjectBase*
			constexpr auto NavDataChunks = 0x100; // Size: 16, Type: struct TArray<struct UNavigationDataChunk*>
			constexpr auto LightmapTotalSize = 0x110; // Size: 4, Type: float
			constexpr auto ShadowmapTotalSize = 0x114; // Size: 4, Type: float
			constexpr auto StaticNavigableGeometry = 0x118; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto StreamingTextureGuids = 0x128; // Size: 16, Type: struct TArray<struct FGuid>
			constexpr auto LevelBuildDataId = 0x1d0; // Size: 16, Type: struct FGuid
			constexpr auto MapBuildData = 0x1e0; // Size: 8, Type: struct UMapBuildDataRegistry*
			constexpr auto LightBuildLevelOffset = 0x1e8; // Size: 12, Type: struct FIntVector
			constexpr auto bIsLightingScenario = 0x1f4; // Size: 1, Type: char
			constexpr auto bTextureStreamingRotationChanged = 0x1f4; // Size: 1, Type: char
			constexpr auto bStaticComponentsRegisteredInStreamingManager = 0x1f4; // Size: 1, Type: char
			constexpr auto bIsVisible = 0x1f4; // Size: 1, Type: char
			constexpr auto WorldSettings = 0x258; // Size: 8, Type: struct AWorldSettings*
			constexpr auto LightMapCooking = 0x268; // Size: 1, Type: enum class ELightMapCooking
			constexpr auto AssetUserData = 0x270; // Size: 16, Type: struct TArray<struct UAssetUserData*>
			constexpr auto DestroyedReplicatedStaticActors = 0x290; // Size: 16, Type: struct TArray<struct FReplicatedStaticActorDestructionInfo>
	}
} 
