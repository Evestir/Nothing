namespace offsets
{
	namespace UPcInventoryUpdated
	{
			constexpr auto inventoryDataDiff = 0x30; // Size: 16, Type: struct TArray<struct FKtItemDiff>
			constexpr auto inventoryDataDiffSeason = 0x40; // Size: 16, Type: struct TArray<struct FKtItemDiff>
			constexpr auto inventoryDataDiffDefaultParts = 0x50; // Size: 16, Type: struct TArray<struct FKtItemDiff>
			constexpr auto inventoryDataDiffCash = 0x60; // Size: 16, Type: struct TArray<struct FKtItemDiff>
	}
} 
