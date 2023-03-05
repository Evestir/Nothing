namespace offsets
{
	namespace UWidgetInteractionComponent
	{
			constexpr auto OnHoveredWidgetChanged = 0x208; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto VirtualUserIndex = 0x228; // Size: 4, Type: int32_t
			constexpr auto PointerIndex = 0x22c; // Size: 4, Type: int32_t
			constexpr auto TraceChannel = 0x230; // Size: 1, Type: enum class ECollisionChannel
			constexpr auto InteractionDistance = 0x234; // Size: 4, Type: float
			constexpr auto InteractionSource = 0x238; // Size: 1, Type: enum class EWidgetInteractionSource
			constexpr auto bEnableHitTesting = 0x239; // Size: 1, Type: bool
			constexpr auto bShowDebug = 0x23a; // Size: 1, Type: bool
			constexpr auto DebugSphereLineThickness = 0x23c; // Size: 4, Type: float
			constexpr auto DebugLineThickness = 0x240; // Size: 4, Type: float
			constexpr auto DebugColor = 0x244; // Size: 16, Type: struct FLinearColor
			constexpr auto CustomHitResult = 0x2d0; // Size: 136, Type: struct FHitResult
			constexpr auto LocalHitLocation = 0x358; // Size: 8, Type: struct FVector2D
			constexpr auto LastLocalHitLocation = 0x360; // Size: 8, Type: struct FVector2D
			constexpr auto HoveredWidgetComponent = 0x368; // Size: 8, Type: struct UWidgetComponent*
			constexpr auto LastHitResult = 0x370; // Size: 136, Type: struct FHitResult
			constexpr auto bIsHoveredWidgetInteractable = 0x3f8; // Size: 1, Type: bool
			constexpr auto bIsHoveredWidgetFocusable = 0x3f9; // Size: 1, Type: bool
			constexpr auto bIsHoveredWidgetHitTestVisible = 0x3fa; // Size: 1, Type: bool
	}
} 
