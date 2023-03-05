namespace offsets
{
	namespace UAssetManagerSettings
	{
			constexpr auto PrimaryAssetTypesToScan = 0x38; // Size: 16, Type: struct TArray<struct FPrimaryAssetTypeInfo>
			constexpr auto DirectoriesToExclude = 0x48; // Size: 16, Type: struct TArray<struct FDirectoryPath>
			constexpr auto PrimaryAssetRules = 0x58; // Size: 16, Type: struct TArray<struct FPrimaryAssetRulesOverride>
			constexpr auto CustomPrimaryAssetRules = 0x68; // Size: 16, Type: struct TArray<struct FPrimaryAssetRulesCustomOverride>
			constexpr auto bOnlyCookProductionAssets = 0x78; // Size: 1, Type: bool
			constexpr auto bShouldManagerDetermineTypeAndName = 0x79; // Size: 1, Type: bool
			constexpr auto bShouldGuessTypeAndNameInEditor = 0x7a; // Size: 1, Type: bool
			constexpr auto bShouldAcquireMissingChunksOnLoad = 0x7b; // Size: 1, Type: bool
			constexpr auto PrimaryAssetIdRedirects = 0x80; // Size: 16, Type: struct TArray<struct FAssetManagerRedirect>
			constexpr auto PrimaryAssetTypeRedirects = 0x90; // Size: 16, Type: struct TArray<struct FAssetManagerRedirect>
			constexpr auto AssetPathRedirects = 0xa0; // Size: 16, Type: struct TArray<struct FAssetManagerRedirect>
			constexpr auto MetaDataTagsForAssetRegistry = 0xb0; // Size: 80, Type: struct TSet<struct FName>
	}
} 
