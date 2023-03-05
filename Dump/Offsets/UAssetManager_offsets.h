namespace offsets
{
	namespace UAssetManager
	{
			constexpr auto ObjectReferenceList = 0x2e0; // Size: 16, Type: struct TArray<struct UObject*>
			constexpr auto bIsGlobalAsyncScanEnvironment = 0x2f0; // Size: 1, Type: bool
			constexpr auto bShouldGuessTypeAndName = 0x2f1; // Size: 1, Type: bool
			constexpr auto bShouldUseSynchronousLoad = 0x2f2; // Size: 1, Type: bool
			constexpr auto bIsLoadingFromPakFiles = 0x2f3; // Size: 1, Type: bool
			constexpr auto bShouldAcquireMissingChunksOnLoad = 0x2f4; // Size: 1, Type: bool
			constexpr auto bOnlyCookProductionAssets = 0x2f5; // Size: 1, Type: bool
			constexpr auto bIsBulkScanning = 0x2f6; // Size: 1, Type: bool
			constexpr auto bIsPrimaryAssetDirectoryCurrent = 0x2f7; // Size: 1, Type: bool
			constexpr auto bIsManagementDatabaseCurrent = 0x2f8; // Size: 1, Type: bool
			constexpr auto bUpdateManagementDatabaseAfterScan = 0x2f9; // Size: 1, Type: bool
			constexpr auto bIncludeOnlyOnDiskAssets = 0x2fa; // Size: 1, Type: bool
			constexpr auto bHasCompletedInitialScan = 0x2fb; // Size: 1, Type: bool
			constexpr auto NumberOfSpawnedNotifications = 0x2fc; // Size: 4, Type: int32_t
	}
} 
