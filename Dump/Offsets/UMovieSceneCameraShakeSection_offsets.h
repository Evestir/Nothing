namespace offsets
{
	namespace UMovieSceneCameraShakeSection
	{
			constexpr auto ShakeData = 0xe8; // Size: 32, Type: struct FMovieSceneCameraShakeSectionData
			constexpr auto ShakeClass = 0x108; // Size: 8, Type: UCameraShakeBase*
			constexpr auto PlayScale = 0x110; // Size: 4, Type: float
			constexpr auto PlaySpace = 0x114; // Size: 1, Type: enum class ECameraShakePlaySpace
			constexpr auto UserDefinedPlaySpace = 0x118; // Size: 12, Type: struct FRotator
	}
} 
