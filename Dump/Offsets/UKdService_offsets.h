namespace offsets
{
	namespace UKdService
	{
			constexpr auto DevRiderName = 0x30; // Size: 16, Type: struct FString
			constexpr auto KdServerList = 0x40; // Size: 8, Type: struct UKdServerList*
			constexpr auto MyKOAccount = 0x50; // Size: 8, Type: struct UKdAccount*
			constexpr auto LastHostGameRequest = 0xa0; // Size: 8, Type: struct UPcHostGame*
			constexpr auto LastMainMenuState = 0x108; // Size: 16, Type: struct FString
			constexpr auto PlatformSessionUpdater = 0x168; // Size: 8, Type: struct UPlatformSessionUpdater*
			constexpr auto LiveryServerRequester = 0x178; // Size: 8, Type: struct ULiveryServerRequester*
			constexpr auto AccountFuncLibImpl = 0x198; // Size: 8, Type: struct UAccountFuncLibImpl*
			constexpr auto HttpRequester = 0x1a0; // Size: 8, Type: struct UHttpRequester*
			constexpr auto Patcher = 0x1b0; // Size: 8, Type: struct UPatcherInterface*
			constexpr auto PatcherClass = 0x1b8; // Size: 40, Type: struct TSoftClassPtr<UObject>
	}
} 
