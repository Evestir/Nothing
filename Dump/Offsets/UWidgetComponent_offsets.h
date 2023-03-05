namespace offsets
{
	namespace UWidgetComponent
	{
			constexpr auto Space = 0x4a8; // Size: 1, Type: enum class EWidgetSpace
			constexpr auto TimingPolicy = 0x4a9; // Size: 1, Type: enum class EWidgetTimingPolicy
			constexpr auto WidgetClass = 0x4b0; // Size: 8, Type: UUserWidget*
			constexpr auto DrawSize = 0x4b8; // Size: 8, Type: struct FIntPoint
			constexpr auto bManuallyRedraw = 0x4c0; // Size: 1, Type: bool
			constexpr auto bRedrawRequested = 0x4c1; // Size: 1, Type: bool
			constexpr auto RedrawTime = 0x4c4; // Size: 4, Type: float
			constexpr auto CurrentDrawSize = 0x4d0; // Size: 8, Type: struct FIntPoint
			constexpr auto bDrawAtDesiredSize = 0x4d8; // Size: 1, Type: bool
			constexpr auto Pivot = 0x4dc; // Size: 8, Type: struct FVector2D
			constexpr auto bReceiveHardwareInput = 0x4e4; // Size: 1, Type: bool
			constexpr auto bWindowFocusable = 0x4e5; // Size: 1, Type: bool
			constexpr auto WindowVisibility = 0x4e6; // Size: 1, Type: enum class EWindowVisibility
			constexpr auto bApplyGammaCorrection = 0x4e7; // Size: 1, Type: bool
			constexpr auto OwnerPlayer = 0x4e8; // Size: 8, Type: struct ULocalPlayer*
			constexpr auto BackgroundColor = 0x4f0; // Size: 16, Type: struct FLinearColor
			constexpr auto TintColorAndOpacity = 0x500; // Size: 16, Type: struct FLinearColor
			constexpr auto OpacityFromTexture = 0x510; // Size: 4, Type: float
			constexpr auto BlendMode = 0x514; // Size: 1, Type: enum class EWidgetBlendMode
			constexpr auto bIsTwoSided = 0x515; // Size: 1, Type: bool
			constexpr auto TickWhenOffscreen = 0x516; // Size: 1, Type: bool
			constexpr auto BodySetup = 0x518; // Size: 8, Type: struct UBodySetup*
			constexpr auto TranslucentMaterial = 0x520; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto TranslucentMaterial_OneSided = 0x528; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto OpaqueMaterial = 0x530; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto OpaqueMaterial_OneSided = 0x538; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto MaskedMaterial = 0x540; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto MaskedMaterial_OneSided = 0x548; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto RenderTarget = 0x550; // Size: 8, Type: struct UTextureRenderTarget2D*
			constexpr auto MaterialInstance = 0x558; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto bAddedToScreen = 0x560; // Size: 1, Type: bool
			constexpr auto bEditTimeUsable = 0x561; // Size: 1, Type: bool
			constexpr auto SharedLayerName = 0x564; // Size: 8, Type: struct FName
			constexpr auto LayerZOrder = 0x56c; // Size: 4, Type: int32_t
			constexpr auto GeometryMode = 0x570; // Size: 1, Type: enum class EWidgetGeometryMode
			constexpr auto CylinderArcAngle = 0x574; // Size: 4, Type: float
			constexpr auto TickMode = 0x578; // Size: 1, Type: enum class ETickMode
			constexpr auto Widget = 0x5a0; // Size: 8, Type: struct UUserWidget*
	}
} 
