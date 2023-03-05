namespace offsets
{
	namespace UMoviePipelineMasterConfig
	{
			constexpr auto PerShotConfigMapping = 0x50; // Size: 80, Type: struct TMap<struct FString, struct UMoviePipelineShotConfig*>
			constexpr auto OutputSetting = 0xa0; // Size: 8, Type: struct UMoviePipelineOutputSetting*
			constexpr auto TransientSettings = 0xa8; // Size: 16, Type: struct TArray<struct UMoviePipelineSetting*>
	}
} 
