namespace offsets
{
	namespace UGameplayKeyGuide
	{
			constexpr auto KeyGuideType = 0x270; // Size: 1, Type: enum class EGamplayKeyGuideType
			constexpr auto v_TextBlock = 0x278; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto v_KeyIcon = 0x280; // Size: 8, Type: struct UKeyIconWidget*
			constexpr auto Anim_FlickerKey = 0x288; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Anim_FlickerRelease = 0x290; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto ItemSlotComponent = 0x2e8; // Size: 8, Type: struct UItemSlotComponent*
			constexpr auto Movement = 0x2f0; // Size: 8, Type: struct UKartMovementComponent*
			constexpr auto Assist = 0x2f8; // Size: 8, Type: struct UMovementAssistComponent*
			constexpr auto ItemTypes = 0x300; // Size: 16, Type: struct TArray<enum class EItemType>
			constexpr auto bCounterSteerPositive = 0x310; // Size: 1, Type: bool
	}
} 
