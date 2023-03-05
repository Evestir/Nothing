namespace offsets
{
	namespace ULiveryItemEntryObject
	{
			constexpr auto RestrictionExpireTime = 0x30; // Size: 8, Type: struct FDateTime
			constexpr auto ItemIndex = 0x38; // Size: 4, Type: int32_t
			constexpr auto liveryId = 0x3c; // Size: 4, Type: int32_t
			constexpr auto KartID = 0x40; // Size: 16, Type: struct FString
			constexpr auto bEquipped = 0x50; // Size: 1, Type: bool
			constexpr auto BtnType = 0x51; // Size: 1, Type: enum class ELiveryManagingBtnType
			constexpr auto GroupItemTexture = 0x58; // Size: 8, Type: struct UTexture2D*
			constexpr auto MaterialIcon = 0x60; // Size: 8, Type: struct TWeakObjectPtr<UMaterialInstance>
	}
} 
