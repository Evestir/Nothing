namespace offsets
{
	namespace UItemTacticalRowWidget
	{
			constexpr auto UniqueId = 0x260; // Size: 4, Type: int32_t
			constexpr auto V_ItemImage = 0x268; // Size: 8, Type: struct UImage*
			constexpr auto V_ItemImageSmall = 0x270; // Size: 8, Type: struct UImage*
			constexpr auto V_NameText = 0x278; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_ItemImageRight = 0x280; // Size: 8, Type: struct UImage*
			constexpr auto V_RightSizeBox = 0x288; // Size: 8, Type: struct USizeBox*
			constexpr auto V_LeftSizeBox = 0x290; // Size: 8, Type: struct USizeBox*
			constexpr auto V_TacticalStateText = 0x298; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto Anim_In = 0x2a0; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Anim_Out = 0x2a8; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Anim_SlideUp = 0x2b0; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto TacticalStateTextContainer = 0x2b8; // Size: 80, Type: struct TMap<enum class EHitState, struct FText>
			constexpr auto TacticalStateTextColorContainer = 0x308; // Size: 80, Type: struct TMap<enum class EHitState, struct FLinearColor>
	}
} 
