namespace offsets
{
	namespace USceneCaptureComponent
	{
			constexpr auto PrimitiveRenderMode = 0x208; // Size: 1, Type: enum class ESceneCapturePrimitiveRenderMode
			constexpr auto CaptureSource = 0x209; // Size: 1, Type: enum class ESceneCaptureSource
			constexpr auto bCaptureEveryFrame = 0x20a; // Size: 1, Type: char
			constexpr auto bCaptureOnMovement = 0x20a; // Size: 1, Type: char
			constexpr auto bAlwaysPersistRenderingState = 0x20b; // Size: 1, Type: bool
			constexpr auto HiddenComponents = 0x210; // Size: 16, Type: struct TArray<struct TWeakObjectPtr<UPrimitiveComponent>>
			constexpr auto HiddenActors = 0x220; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto ShowOnlyComponents = 0x230; // Size: 16, Type: struct TArray<struct TWeakObjectPtr<UPrimitiveComponent>>
			constexpr auto ShowOnlyActors = 0x240; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto LODDistanceFactor = 0x250; // Size: 4, Type: float
			constexpr auto MaxViewDistanceOverride = 0x254; // Size: 4, Type: float
			constexpr auto CaptureSortPriority = 0x258; // Size: 4, Type: int32_t
			constexpr auto bUseRayTracingIfEnabled = 0x25c; // Size: 1, Type: bool
			constexpr auto ShowFlagSettings = 0x260; // Size: 16, Type: struct TArray<struct FEngineShowFlagsSetting>
			constexpr auto ProfilingEventName = 0x2a0; // Size: 16, Type: struct FString
	}
} 
