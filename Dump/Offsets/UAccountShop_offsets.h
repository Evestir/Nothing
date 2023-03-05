namespace offsets
{
	namespace UAccountShop
	{
			constexpr auto ShopStockItemProducts = 0x30; // Size: 80, Type: struct TMap<enum class EShopItemType, struct FShopStockItemProducts>
			constexpr auto ShopStockItemPlatformProductIds = 0x80; // Size: 80, Type: struct TMap<struct FString, struct FString>
			constexpr auto SelectedShopStockInfo = 0xd0; // Size: 72, Type: struct FShopPurchasingInfo
			constexpr auto AccountShopPlatform = 0x158; // Size: 8, Type: struct UAccountShopPlatform*
	}
} 
