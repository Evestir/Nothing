namespace offsets
{
	namespace UStreamingSettings
	{
			constexpr auto AsyncLoadingThreadEnabled = 0x38; // Size: 1, Type: char
			constexpr auto WarnIfTimeLimitExceeded = 0x38; // Size: 1, Type: char
			constexpr auto TimeLimitExceededMultiplier = 0x3c; // Size: 4, Type: float
			constexpr auto TimeLimitExceededMinTime = 0x40; // Size: 4, Type: float
			constexpr auto MinBulkDataSizeForAsyncLoading = 0x44; // Size: 4, Type: int32_t
			constexpr auto UseBackgroundLevelStreaming = 0x48; // Size: 1, Type: char
			constexpr auto AsyncLoadingUseFullTimeLimit = 0x48; // Size: 1, Type: char
			constexpr auto AsyncLoadingTimeLimit = 0x4c; // Size: 4, Type: float
			constexpr auto PriorityAsyncLoadingExtraTime = 0x50; // Size: 4, Type: float
			constexpr auto LevelStreamingActorsUpdateTimeLimit = 0x54; // Size: 4, Type: float
			constexpr auto PriorityLevelStreamingActorsUpdateExtraTime = 0x58; // Size: 4, Type: float
			constexpr auto LevelStreamingComponentsRegistrationGranularity = 0x5c; // Size: 4, Type: int32_t
			constexpr auto LevelStreamingUnregisterComponentsTimeLimit = 0x60; // Size: 4, Type: float
			constexpr auto LevelStreamingComponentsUnregistrationGranularity = 0x64; // Size: 4, Type: int32_t
			constexpr auto FlushStreamingOnExit = 0x68; // Size: 1, Type: char
			constexpr auto EventDrivenLoaderEnabled = 0x68; // Size: 1, Type: char
	}
} 
