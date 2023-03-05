namespace offsets
{
	namespace AItem
	{
			constexpr auto SceneComponent = 0x228; // Size: 8, Type: struct USceneComponent*
			constexpr auto ItemType = 0x230; // Size: 1, Type: enum class EItemType
			constexpr auto ItemIcon = 0x238; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
			constexpr auto ItemBackground = 0x260; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInstance>
			constexpr auto GoItemUniqueID = 0x288; // Size: 4, Type: int32_t
			constexpr auto AuthAttacker = 0x320; // Size: 8, Type: struct UItemComponent*
			constexpr auto LocalAttacker = 0x338; // Size: 8, Type: struct UItemComponent*
			constexpr auto OwnerItemSlot = 0x340; // Size: 8, Type: struct UItemSlotComponent*
			constexpr auto ItemSequence = 0x348; // Size: 4, Type: int32_t
			constexpr auto bNeedRegisterToSlot = 0x34c; // Size: 1, Type: bool
			constexpr auto bChangeItemOnSlot = 0x34d; // Size: 1, Type: bool
			constexpr auto ChangingItemIndex = 0x350; // Size: 4, Type: int32_t
	}
} 
