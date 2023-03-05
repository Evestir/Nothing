namespace offsets
{
	namespace UMovieSceneTrack
	{
			constexpr auto EvalOptions = 0x50; // Size: 4, Type: struct FMovieSceneTrackEvalOptions
			constexpr auto bIsEvalDisabled = 0x55; // Size: 1, Type: bool
			constexpr auto RowsDisabled = 0x58; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto EvaluationFieldGuid = 0x6c; // Size: 16, Type: struct FGuid
			constexpr auto EvaluationField = 0x80; // Size: 16, Type: struct FMovieSceneTrackEvaluationField
	}
} 
