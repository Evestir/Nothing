namespace offsets
{
	namespace UPrimaryAssetLabel
	{
			constexpr auto Rules = 0x30; // Size: 12, Type: struct FPrimaryAssetRules
			constexpr auto bLabelAssetsInMyDirectory = 0x3c; // Size: 1, Type: char
			constexpr auto bIsRuntimeLabel = 0x3c; // Size: 1, Type: char
			constexpr auto ExplicitAssets = 0x40; // Size: 16, Type: struct TArray<struct TSoftObjectPtr<UObject>>
			constexpr auto ExplicitBlueprints = 0x50; // Size: 16, Type: struct TArray<struct TSoftClassPtr<UObject>>
			constexpr auto AssetCollection = 0x60; // Size: 8, Type: struct FCollectionReference
	}
} 
