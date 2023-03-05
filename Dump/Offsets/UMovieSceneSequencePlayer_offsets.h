namespace offsets
{
	namespace UMovieSceneSequencePlayer
	{
			constexpr auto OnPlay = 0x260; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPlayReverse = 0x270; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnStop = 0x280; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPause = 0x290; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnFinished = 0x2a0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto status = 0x2b0; // Size: 1, Type: enum class EMovieScenePlayerStatus
			constexpr auto bReversePlayback = 0x2b4; // Size: 1, Type: char
			constexpr auto Sequence = 0x2b8; // Size: 8, Type: struct UMovieSceneSequence*
			constexpr auto StartTime = 0x2c0; // Size: 4, Type: struct FFrameNumber
			constexpr auto DurationFrames = 0x2c4; // Size: 4, Type: int32_t
			constexpr auto DurationSubFrames = 0x2c8; // Size: 4, Type: float
			constexpr auto CurrentNumLoops = 0x2cc; // Size: 4, Type: int32_t
			constexpr auto PlaybackSettings = 0x2d0; // Size: 20, Type: struct FMovieSceneSequencePlaybackSettings
			constexpr auto RootTemplateInstance = 0x2e8; // Size: 232, Type: struct FMovieSceneRootEvaluationTemplateInstance
			constexpr auto NetSyncProps = 0x438; // Size: 16, Type: struct FMovieSceneSequenceReplProperties
			constexpr auto PlaybackClient = 0x448; // Size: 16, Type: struct TScriptInterface<IMovieScenePlaybackClient>
			constexpr auto TickManager = 0x458; // Size: 8, Type: struct UMovieSceneSequenceTickManager*
	}
} 
