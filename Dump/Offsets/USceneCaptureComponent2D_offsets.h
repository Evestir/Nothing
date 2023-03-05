namespace offsets
{
	namespace USceneCaptureComponent2D
	{
			constexpr auto ProjectionType = 0x2c8; // Size: 1, Type: enum class ECameraProjectionMode
			constexpr auto FOVAngle = 0x2cc; // Size: 4, Type: float
			constexpr auto OrthoWidth = 0x2d0; // Size: 4, Type: float
			constexpr auto TextureTarget = 0x2d8; // Size: 8, Type: struct UTextureRenderTarget2D*
			constexpr auto CompositeMode = 0x2e0; // Size: 1, Type: enum class ESceneCaptureCompositeMode
			constexpr auto PostProcessSettings = 0x2f0; // Size: 1488, Type: struct FPostProcessSettings
			constexpr auto PostProcessBlendWeight = 0x8c0; // Size: 4, Type: float
			constexpr auto bOverride_CustomNearClippingPlane = 0x8c4; // Size: 1, Type: char
			constexpr auto CustomNearClippingPlane = 0x8c8; // Size: 4, Type: float
			constexpr auto bUseCustomProjectionMatrix = 0x8cc; // Size: 1, Type: bool
			constexpr auto CustomProjectionMatrix = 0x8d0; // Size: 64, Type: struct FMatrix
			constexpr auto bEnableClipPlane = 0x910; // Size: 1, Type: bool
			constexpr auto ClipPlaneBase = 0x914; // Size: 12, Type: struct FVector
			constexpr auto ClipPlaneNormal = 0x920; // Size: 12, Type: struct FVector
			constexpr auto UpdateFrame = 0x92c; // Size: 4, Type: float
			constexpr auto RenderDetailMode = 0x930; // Size: 1, Type: enum class EDetailMode
			constexpr auto RenderMirrorDetailLevel = 0x934; // Size: 4, Type: int32_t
			constexpr auto bUseCustomAA = 0x938; // Size: 1, Type: bool
			constexpr auto CustomAAMethod = 0x939; // Size: 1, Type: enum class EAntiAliasingMethod
			constexpr auto CustomAAQuality = 0x93c; // Size: 4, Type: int32_t
			constexpr auto bUseFXAAGreenAsLuma = 0x940; // Size: 1, Type: bool
			constexpr auto bCameraCutThisFrame = 0x944; // Size: 1, Type: char
			constexpr auto bConsiderUnrenderedOpaquePixelAsFullyTranslucent = 0x944; // Size: 1, Type: char
			constexpr auto MaxCascadeDynamicShadows = 0x948; // Size: 4, Type: int32_t
			constexpr auto MaxCascadeStaticShadows = 0x94c; // Size: 4, Type: int32_t
			constexpr auto StaticViewDistanceScale = 0x950; // Size: 4, Type: float
			constexpr auto MovableViewDistanceScale = 0x954; // Size: 4, Type: float
			constexpr auto bIsMirror = 0x958; // Size: 1, Type: bool
			constexpr auto bDisableFlipCopyGLES = 0x959; // Size: 1, Type: bool
			constexpr auto bMakeOpacityFinalColorLDR = 0x95a; // Size: 1, Type: bool
			constexpr auto bTrimEdgeLDRColor = 0x95b; // Size: 1, Type: bool
			constexpr auto bUseAlphaFXAA = 0x95c; // Size: 1, Type: bool
			constexpr auto bSkipBrightnessContrastAdjustment = 0x95d; // Size: 1, Type: bool
	}
} 
