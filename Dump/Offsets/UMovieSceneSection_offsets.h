namespace offsets
{
	namespace UMovieSceneSection
	{
			constexpr auto EvalOptions = 0x50; // Size: 2, Type: struct FMovieSceneSectionEvalOptions
			constexpr auto Easing = 0x58; // Size: 56, Type: struct FMovieSceneEasingSettings
			constexpr auto SectionRange = 0x90; // Size: 16, Type: struct FMovieSceneFrameRange
			constexpr auto PreRollFrames = 0xa0; // Size: 4, Type: struct FFrameNumber
			constexpr auto PostRollFrames = 0xa4; // Size: 4, Type: struct FFrameNumber
			constexpr auto RowIndex = 0xa8; // Size: 4, Type: int32_t
			constexpr auto OverlapPriority = 0xac; // Size: 4, Type: int32_t
			constexpr auto bIsActive = 0xb0; // Size: 1, Type: char
			constexpr auto bIsLocked = 0xb0; // Size: 1, Type: char
			constexpr auto StartTime = 0xb4; // Size: 4, Type: float
			constexpr auto EndTime = 0xb8; // Size: 4, Type: float
			constexpr auto PrerollTime = 0xbc; // Size: 4, Type: float
			constexpr auto PostrollTime = 0xc0; // Size: 4, Type: float
			constexpr auto bIsInfinite = 0xc4; // Size: 1, Type: char
			constexpr auto bSupportsInfiniteRange = 0xc8; // Size: 1, Type: bool
			constexpr auto BlendType = 0xc9; // Size: 2, Type: struct FOptionalMovieSceneBlendType
	}
} 
