namespace offsets
{
	namespace APlayerCameraManager
	{
			constexpr auto PCOwner = 0x220; // Size: 8, Type: struct APlayerController*
			constexpr auto TransformComponent = 0x228; // Size: 8, Type: struct USceneComponent*
			constexpr auto DefaultFOV = 0x238; // Size: 4, Type: float
			constexpr auto DefaultOrthoWidth = 0x240; // Size: 4, Type: float
			constexpr auto DefaultAspectRatio = 0x248; // Size: 4, Type: float
			constexpr auto CameraCache = 0x290; // Size: 1664, Type: struct FCameraCacheEntry
			constexpr auto LastFrameCameraCache = 0x910; // Size: 1664, Type: struct FCameraCacheEntry
			constexpr auto ViewTarget = 0xf90; // Size: 1680, Type: struct FTViewTarget
			constexpr auto PendingViewTarget = 0x1620; // Size: 1680, Type: struct FTViewTarget
			constexpr auto CameraCachePrivate = 0x1ce0; // Size: 1664, Type: struct FCameraCacheEntry
			constexpr auto LastFrameCameraCachePrivate = 0x2360; // Size: 1664, Type: struct FCameraCacheEntry
			constexpr auto ModifierList = 0x29e0; // Size: 16, Type: struct TArray<struct UCameraModifier*>
			constexpr auto DefaultModifiers = 0x29f0; // Size: 16, Type: struct TArray<UCameraModifier*>
			constexpr auto FreeCamDistance = 0x2a00; // Size: 4, Type: float
			constexpr auto FreeCamOffset = 0x2a04; // Size: 12, Type: struct FVector
			constexpr auto ViewTargetOffset = 0x2a10; // Size: 12, Type: struct FVector
			constexpr auto OnAudioFadeChangeEvent = 0x2a20; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto CameraLensEffects = 0x2a40; // Size: 16, Type: struct TArray<struct AEmitterCameraLensEffectBase*>
			constexpr auto CachedCameraShakeMod = 0x2a50; // Size: 8, Type: struct UCameraModifier_CameraShake*
			constexpr auto AnimInstPool[8] = 0x2a58; // Size: 64, Type: struct UCameraAnimInst*
			constexpr auto PostProcessBlendCache = 0x2a98; // Size: 16, Type: struct TArray<struct FPostProcessSettings>
			constexpr auto ActiveAnims = 0x2ab8; // Size: 16, Type: struct TArray<struct UCameraAnimInst*>
			constexpr auto FreeAnims = 0x2ac8; // Size: 16, Type: struct TArray<struct UCameraAnimInst*>
			constexpr auto AnimCameraActor = 0x2ad8; // Size: 8, Type: struct ACameraActor*
			constexpr auto bIsOrthographic = 0x2ae0; // Size: 1, Type: char
			constexpr auto bDefaultConstrainAspectRatio = 0x2ae0; // Size: 1, Type: char
			constexpr auto bClientSimulatingViewTarget = 0x2ae0; // Size: 1, Type: char
			constexpr auto bUseClientSideCameraUpdates = 0x2ae0; // Size: 1, Type: char
			constexpr auto bGameCameraCutThisFrame = 0x2ae1; // Size: 1, Type: char
			constexpr auto ViewPitchMin = 0x2ae4; // Size: 4, Type: float
			constexpr auto ViewPitchMax = 0x2ae8; // Size: 4, Type: float
			constexpr auto ViewYawMin = 0x2aec; // Size: 4, Type: float
			constexpr auto ViewYawMax = 0x2af0; // Size: 4, Type: float
			constexpr auto ViewRollMin = 0x2af4; // Size: 4, Type: float
			constexpr auto ViewRollMax = 0x2af8; // Size: 4, Type: float
			constexpr auto ServerUpdateCameraTimeout = 0x2b00; // Size: 4, Type: float
	}
} 
