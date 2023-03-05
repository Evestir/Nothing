namespace offsets
{
	namespace UItemSlotWidget
	{
			constexpr auto SlotId = 0x260; // Size: 4, Type: int32_t
			constexpr auto ItemSlot = 0x268; // Size: 8, Type: struct UImage*
			constexpr auto ItemSlotBG = 0x270; // Size: 8, Type: struct UImage*
			constexpr auto ItemOutgoing = 0x278; // Size: 8, Type: struct UImage*
			constexpr auto ItemTransitOut = 0x280; // Size: 8, Type: struct UImage*
			constexpr auto ActiveItemAnimation = 0x288; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto SpawnItemAnimation = 0x290; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto DeactiveItemAnimation = 0x298; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto SlideInAnimation = 0x2a0; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto SlideOutAnimation = 0x2a8; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto BoostIconTransition = 0x2b0; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto AssistGuideAnimation = 0x2b8; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto AimAnimation = 0x2c0; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto BackgroundEmpty = 0x2c8; // Size: 8, Type: struct UWidget*
			constexpr auto BackgroundOccupied = 0x2d0; // Size: 8, Type: struct UWidget*
			constexpr auto LastItemSlotImage = 0x2d8; // Size: 8, Type: struct UTexture2D*
			constexpr auto Focus = 0x2e0; // Size: 8, Type: struct UImage*
			constexpr auto SlotLockImage = 0x2e8; // Size: 8, Type: struct UImage*
			constexpr auto SlotOverlay = 0x2f0; // Size: 8, Type: struct UOverlay*
			constexpr auto SlotItem = 0x2f8; // Size: 1, Type: enum class EItemType
	}
} 
