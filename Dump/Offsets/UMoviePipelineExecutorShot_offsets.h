namespace offsets
{
	namespace UMoviePipelineExecutorShot
	{
			constexpr auto bEnabled = 0x28; // Size: 1, Type: bool
			constexpr auto OuterName = 0x30; // Size: 16, Type: struct FString
			constexpr auto InnerName = 0x40; // Size: 16, Type: struct FString
			constexpr auto Progress = 0xe8; // Size: 4, Type: float
			constexpr auto StatusMessage = 0xf0; // Size: 16, Type: struct FString
			constexpr auto ShotOverrideConfig = 0x100; // Size: 8, Type: struct UMoviePipelineShotConfig*
			constexpr auto ShotOverridePresetOrigin = 0x108; // Size: 40, Type: struct TSoftObjectPtr<UMoviePipelineShotConfig>
	}
} 
