namespace offsets
{
	namespace AWorldSettings
	{
			constexpr auto VisibilityCellSize = 0x228; // Size: 4, Type: int32_t
			constexpr auto VisibilityAggressiveness = 0x22c; // Size: 1, Type: enum class EVisibilityAggressiveness
			constexpr auto bPrecomputeVisibility = 0x22d; // Size: 1, Type: char
			constexpr auto bPlaceCellsOnlyAlongCameraTracks = 0x22d; // Size: 1, Type: char
			constexpr auto bEnableWorldBoundsChecks = 0x22d; // Size: 1, Type: char
			constexpr auto bEnableNavigationSystem = 0x22d; // Size: 1, Type: char
			constexpr auto bEnableAISystem = 0x22d; // Size: 1, Type: char
			constexpr auto bEnableWorldComposition = 0x22d; // Size: 1, Type: char
			constexpr auto bUseClientSideLevelStreamingVolumes = 0x22d; // Size: 1, Type: char
			constexpr auto bEnableWorldOriginRebasing = 0x22d; // Size: 1, Type: char
			constexpr auto bWorldGravitySet = 0x22e; // Size: 1, Type: char
			constexpr auto bGlobalGravitySet = 0x22e; // Size: 1, Type: char
			constexpr auto bMinimizeBSPSections = 0x22e; // Size: 1, Type: char
			constexpr auto bForceNoPrecomputedLighting = 0x22e; // Size: 1, Type: char
			constexpr auto bHighPriorityLoading = 0x22e; // Size: 1, Type: char
			constexpr auto bHighPriorityLoadingLocal = 0x22e; // Size: 1, Type: char
			constexpr auto bOverrideDefaultBroadphaseSettings = 0x22e; // Size: 1, Type: char
			constexpr auto NavigationSystemConfig = 0x230; // Size: 8, Type: struct UNavigationSystemConfig*
			constexpr auto NavigationSystemConfigOverride = 0x238; // Size: 8, Type: struct UNavigationSystemConfig*
			constexpr auto WorldToMeters = 0x240; // Size: 4, Type: float
			constexpr auto KillZ = 0x244; // Size: 4, Type: float
			constexpr auto KillZDamageType = 0x248; // Size: 8, Type: UDamageType*
			constexpr auto WorldGravityZ = 0x250; // Size: 4, Type: float
			constexpr auto GlobalGravityZ = 0x254; // Size: 4, Type: float
			constexpr auto DefaultPhysicsVolumeClass = 0x258; // Size: 8, Type: ADefaultPhysicsVolume*
			constexpr auto PhysicsCollisionHandlerClass = 0x260; // Size: 8, Type: UPhysicsCollisionHandler*
			constexpr auto DefaultGameMode = 0x268; // Size: 8, Type: AGameModeBase*
			constexpr auto GameNetworkManagerClass = 0x270; // Size: 8, Type: AGameNetworkManager*
			constexpr auto PackedLightAndShadowMapTextureSize = 0x278; // Size: 4, Type: int32_t
			constexpr auto MaxRGBMLimitationInReflectionCaptureForAutoDetection = 0x27c; // Size: 4, Type: float
			constexpr auto DefaultColorScale = 0x280; // Size: 12, Type: struct FVector
			constexpr auto DefaultMaxDistanceFieldOcclusionDistance = 0x28c; // Size: 4, Type: float
			constexpr auto GlobalDistanceFieldViewDistance = 0x290; // Size: 4, Type: float
			constexpr auto DynamicIndirectShadowsSelfShadowingIntensity = 0x294; // Size: 4, Type: float
			constexpr auto DefaultReverbSettings = 0x298; // Size: 32, Type: struct FReverbSettings
			constexpr auto DefaultAmbientZoneSettings = 0x2b8; // Size: 36, Type: struct FInteriorSettings
			constexpr auto DefaultBaseSoundMix = 0x2e0; // Size: 8, Type: struct USoundMix*
			constexpr auto TimeDilation = 0x2e8; // Size: 4, Type: float
			constexpr auto MatineeTimeDilation = 0x2ec; // Size: 4, Type: float
			constexpr auto DemoPlayTimeDilation = 0x2f0; // Size: 4, Type: float
			constexpr auto MinGlobalTimeDilation = 0x2f4; // Size: 4, Type: float
			constexpr auto MaxGlobalTimeDilation = 0x2f8; // Size: 4, Type: float
			constexpr auto MinUndilatedFrameTime = 0x2fc; // Size: 4, Type: float
			constexpr auto MaxUndilatedFrameTime = 0x300; // Size: 4, Type: float
			constexpr auto BroadphaseSettings = 0x304; // Size: 64, Type: struct FBroadphaseSettings
			constexpr auto Pauser = 0x348; // Size: 8, Type: struct APlayerState*
			constexpr auto ReplicationViewers = 0x350; // Size: 16, Type: struct TArray<struct FNetViewer>
			constexpr auto AssetUserData = 0x360; // Size: 16, Type: struct TArray<struct UAssetUserData*>
			constexpr auto PauserPlayerState = 0x370; // Size: 8, Type: struct APlayerState*
			constexpr auto MaxNumberOfBookmarks = 0x378; // Size: 4, Type: int32_t
			constexpr auto DefaultBookmarkClass = 0x380; // Size: 8, Type: UBookmarkBase*
			constexpr auto BookmarkArray = 0x388; // Size: 16, Type: struct TArray<struct UBookmarkBase*>
			constexpr auto LastBookmarkClass = 0x398; // Size: 8, Type: UBookmarkBase*
	}
} 
