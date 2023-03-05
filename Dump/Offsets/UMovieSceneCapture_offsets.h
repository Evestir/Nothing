namespace offsets
{
	namespace UMovieSceneCapture
	{
			constexpr auto ImageCaptureProtocolType = 0x38; // Size: 24, Type: struct FSoftClassPath
			constexpr auto AudioCaptureProtocolType = 0x50; // Size: 24, Type: struct FSoftClassPath
			constexpr auto ImageCaptureProtocol = 0x68; // Size: 8, Type: struct UMovieSceneImageCaptureProtocolBase*
			constexpr auto AudioCaptureProtocol = 0x70; // Size: 8, Type: struct UMovieSceneAudioCaptureProtocolBase*
			constexpr auto Settings = 0x78; // Size: 112, Type: struct FMovieSceneCaptureSettings
			constexpr auto bUseSeparateProcess = 0xe8; // Size: 1, Type: bool
			constexpr auto bCloseEditorWhenCaptureStarts = 0xe9; // Size: 1, Type: bool
			constexpr auto AdditionalCommandLineArguments = 0xf0; // Size: 16, Type: struct FString
			constexpr auto InheritedCommandLineArguments = 0x100; // Size: 16, Type: struct FString
	}
} 
