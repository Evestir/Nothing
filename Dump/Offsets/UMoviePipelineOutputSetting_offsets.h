namespace offsets
{
	namespace UMoviePipelineOutputSetting
	{
			constexpr auto OutputDirectory = 0x48; // Size: 16, Type: struct FDirectoryPath
			constexpr auto FileNameFormat = 0x58; // Size: 16, Type: struct FString
			constexpr auto OutputResolution = 0x68; // Size: 8, Type: struct FIntPoint
			constexpr auto bUseCustomFrameRate = 0x70; // Size: 1, Type: bool
			constexpr auto OutputFrameRate = 0x74; // Size: 8, Type: struct FFrameRate
			constexpr auto bOverrideExistingOutput = 0x80; // Size: 1, Type: bool
			constexpr auto HandleFrameCount = 0x84; // Size: 4, Type: int32_t
			constexpr auto OutputFrameStep = 0x88; // Size: 4, Type: int32_t
			constexpr auto bUseCustomPlaybackRange = 0x8c; // Size: 1, Type: bool
			constexpr auto CustomStartFrame = 0x90; // Size: 4, Type: int32_t
			constexpr auto CustomEndFrame = 0x94; // Size: 4, Type: int32_t
			constexpr auto VersionNumber = 0x98; // Size: 4, Type: int32_t
			constexpr auto bAutoVersion = 0x9c; // Size: 1, Type: bool
			constexpr auto ZeroPadFrameNumbers = 0xa0; // Size: 4, Type: int32_t
			constexpr auto FrameNumberOffset = 0xa4; // Size: 4, Type: int32_t
			constexpr auto bFlushDiskWritesPerShot = 0xa8; // Size: 1, Type: bool
	}
} 
