namespace offsets
{
	namespace UMoviePipelineExecutorJob
	{
			constexpr auto JobName = 0x28; // Size: 16, Type: struct FString
			constexpr auto Sequence = 0x38; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto Map = 0x50; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto Author = 0x68; // Size: 16, Type: struct FString
			constexpr auto ShotInfo = 0x78; // Size: 16, Type: struct TArray<struct UMoviePipelineExecutorShot*>
			constexpr auto UserData = 0x88; // Size: 16, Type: struct FString
			constexpr auto StatusMessage = 0x98; // Size: 16, Type: struct FString
			constexpr auto StatusProgress = 0xa8; // Size: 4, Type: float
			constexpr auto bIsConsumed = 0xac; // Size: 1, Type: bool
			constexpr auto Configuration = 0xb0; // Size: 8, Type: struct UMoviePipelineMasterConfig*
			constexpr auto PresetOrigin = 0xb8; // Size: 40, Type: struct TSoftObjectPtr<UMoviePipelineMasterConfig>
	}
} 
