namespace offsets
{
	namespace ULicenseRewardListEntry
	{
			constexpr auto StockIndex = 0x28; // Size: 4, Type: int32_t
			constexpr auto stockId = 0x30; // Size: 16, Type: struct FString
			constexpr auto StockItemId = 0x40; // Size: 16, Type: struct FString
			constexpr auto OpenContentName = 0x50; // Size: 24, Type: struct FText
			constexpr auto OpenContentImage = 0x68; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
			constexpr auto bReceive = 0x90; // Size: 1, Type: bool
	}
} 
