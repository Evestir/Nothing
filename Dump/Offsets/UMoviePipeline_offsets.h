namespace offsets
{
	namespace UMoviePipeline
	{
			constexpr auto OnMoviePipelineFinishedDelegate = 0x28; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMoviePipelineWorkFinishedDelegate = 0x38; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMoviePipelineShotWorkFinishedDelegate = 0x48; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto CustomTimeStep = 0x58; // Size: 8, Type: struct UMoviePipelineCustomTimeStep*
			constexpr auto CachedPrevCustomTimeStep = 0x70; // Size: 8, Type: struct UEngineCustomTimeStep*
			constexpr auto TargetSequence = 0x78; // Size: 8, Type: struct ULevelSequence*
			constexpr auto LevelSequenceActor = 0x80; // Size: 8, Type: struct ALevelSequenceActor*
			constexpr auto DebugWidget = 0x88; // Size: 8, Type: struct UMovieRenderDebugWidget*
			constexpr auto PreviewTexture = 0x90; // Size: 8, Type: struct UTexture*
			constexpr auto DebugWidgetClass = 0x2a0; // Size: 8, Type: UMovieRenderDebugWidget*
			constexpr auto CurrentJob = 0x2a8; // Size: 8, Type: struct UMoviePipelineExecutorJob*
	}
} 
