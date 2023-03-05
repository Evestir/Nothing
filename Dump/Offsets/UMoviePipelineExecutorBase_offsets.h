namespace offsets
{
	namespace UMoviePipelineExecutorBase
	{
			constexpr auto OnExecutorFinishedDelegate = 0x28; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnExecutorErroredDelegate = 0x50; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto SocketMessageRecievedDelegate = 0x80; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto HTTPResponseRecievedDelegate = 0x90; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto DebugWidgetClass = 0xa0; // Size: 8, Type: UMovieRenderDebugWidget*
			constexpr auto UserData = 0xa8; // Size: 16, Type: struct FString
			constexpr auto TargetPipelineClass = 0xb8; // Size: 8, Type: UMoviePipeline*
	}
} 
