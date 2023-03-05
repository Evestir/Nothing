namespace offsets
{
	namespace UMovieScene
	{
			constexpr auto Spawnables = 0x50; // Size: 16, Type: struct TArray<struct FMovieSceneSpawnable>
			constexpr auto Possessables = 0x60; // Size: 16, Type: struct TArray<struct FMovieScenePossessable>
			constexpr auto ObjectBindings = 0x70; // Size: 16, Type: struct TArray<struct FMovieSceneBinding>
			constexpr auto BindingGroups = 0x80; // Size: 80, Type: struct TMap<struct FName, struct FMovieSceneObjectBindingIDs>
			constexpr auto MasterTracks = 0xd0; // Size: 16, Type: struct TArray<struct UMovieSceneTrack*>
			constexpr auto CameraCutTrack = 0xe0; // Size: 8, Type: struct UMovieSceneTrack*
			constexpr auto SelectionRange = 0xe8; // Size: 16, Type: struct FMovieSceneFrameRange
			constexpr auto PlaybackRange = 0xf8; // Size: 16, Type: struct FMovieSceneFrameRange
			constexpr auto TickResolution = 0x108; // Size: 8, Type: struct FFrameRate
			constexpr auto DisplayRate = 0x110; // Size: 8, Type: struct FFrameRate
			constexpr auto EvaluationType = 0x118; // Size: 1, Type: enum class EMovieSceneEvaluationType
			constexpr auto ClockSource = 0x119; // Size: 1, Type: enum class EUpdateClockSource
			constexpr auto CustomClockSourcePath = 0x120; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto MarkedFrames = 0x138; // Size: 16, Type: struct TArray<struct FMovieSceneMarkedFrame>
	}
} 
