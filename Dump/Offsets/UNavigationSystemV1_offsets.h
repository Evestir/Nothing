namespace offsets
{
	namespace UNavigationSystemV1
	{
			constexpr auto MainNavData = 0x28; // Size: 8, Type: struct ANavigationData*
			constexpr auto AbstractNavData = 0x30; // Size: 8, Type: struct ANavigationData*
			constexpr auto DefaultAgentName = 0x38; // Size: 8, Type: struct FName
			constexpr auto CrowdManagerClass = 0x40; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto bAutoCreateNavigationData = 0x68; // Size: 1, Type: char
			constexpr auto bSpawnNavDataInNavBoundsLevel = 0x68; // Size: 1, Type: char
			constexpr auto bAllowClientSideNavigation = 0x68; // Size: 1, Type: char
			constexpr auto bShouldDiscardSubLevelNavData = 0x68; // Size: 1, Type: char
			constexpr auto bTickWhilePaused = 0x68; // Size: 1, Type: char
			constexpr auto bSupportRebuilding = 0x68; // Size: 1, Type: char
			constexpr auto bInitialBuildingLocked = 0x68; // Size: 1, Type: char
			constexpr auto bSkipAgentHeightCheckWhenPickingNavData = 0x69; // Size: 1, Type: char
			constexpr auto bGenerateNavigationOnlyAroundNavigationInvokers = 0x69; // Size: 1, Type: char
			constexpr auto ActiveTilesUpdateInterval = 0x6c; // Size: 4, Type: float
			constexpr auto DataGatheringMode = 0x70; // Size: 1, Type: enum class ENavDataGatheringModeConfig
			constexpr auto DirtyAreaWarningSizeThreshold = 0x74; // Size: 4, Type: float
			constexpr auto SupportedAgents = 0x78; // Size: 16, Type: struct TArray<struct FNavDataConfig>
			constexpr auto SupportedAgentsMask = 0x88; // Size: 4, Type: struct FNavAgentSelector
			constexpr auto NavDataSet = 0x90; // Size: 16, Type: struct TArray<struct ANavigationData*>
			constexpr auto NavDataRegistrationQueue = 0xa0; // Size: 16, Type: struct TArray<struct ANavigationData*>
			constexpr auto OnNavDataRegisteredEvent = 0xc0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnNavigationGenerationFinishedDelegate = 0xd0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OperationMode = 0x1bc; // Size: 1, Type: enum class FNavigationSystemRunMode
			constexpr auto DirtyAreasUpdateFreq = 0x15bc; // Size: 4, Type: float
	}
} 
