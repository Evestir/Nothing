namespace offsets
{
	namespace UMovieSceneSubSection
	{
			constexpr auto Parameters = 0xe8; // Size: 36, Type: struct FMovieSceneSectionParameters
			constexpr auto StartOffset = 0x10c; // Size: 4, Type: float
			constexpr auto TimeScale = 0x110; // Size: 4, Type: float
			constexpr auto PrerollTime = 0x114; // Size: 4, Type: float
			constexpr auto NetworkMask = 0x118; // Size: 1, Type: char
			constexpr auto SubSequence = 0x120; // Size: 8, Type: struct UMovieSceneSequence*
			constexpr auto ActorToRecord = 0x128; // Size: 28, Type: 
			constexpr auto TargetSequenceName = 0x148; // Size: 16, Type: struct FString
			constexpr auto TargetPathToRecordTo = 0x158; // Size: 16, Type: struct FDirectoryPath
	}
} 
