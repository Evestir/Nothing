namespace offsets
{
	namespace ULiveryShapeEntryObject
	{
			constexpr auto RestrictionExpireTime = 0x30; // Size: 8, Type: struct FDateTime
			constexpr auto bEmptyItem = 0x38; // Size: 1, Type: bool
			constexpr auto Category = 0x39; // Size: 1, Type: enum class ELiveryWrappingCategory
			constexpr auto FileIndex = 0x3c; // Size: 4, Type: int32_t
			constexpr auto ListIndex = 0x40; // Size: 4, Type: int32_t
			constexpr auto bMySticker = 0x44; // Size: 1, Type: bool
			constexpr auto bColorOverride = 0x45; // Size: 1, Type: bool
			constexpr auto StickerName = 0x48; // Size: 24, Type: struct FText
			constexpr auto StickerGrade = 0x60; // Size: 1, Type: enum class EKtItemGrade
			constexpr auto ItemNum = 0x64; // Size: 4, Type: int32_t
			constexpr auto ItemId = 0x68; // Size: 16, Type: struct FString
			constexpr auto ShapePath = 0x78; // Size: 16, Type: struct FString
			constexpr auto CanvasResolution = 0x90; // Size: 4, Type: int32_t
			constexpr auto bLoaded = 0x94; // Size: 1, Type: bool
			constexpr auto PageNum = 0x98; // Size: 4, Type: int32_t
			constexpr auto LiveryItemInfo = 0xa0; // Size: 72, Type: struct FLiveryItemInfo
	}
} 
