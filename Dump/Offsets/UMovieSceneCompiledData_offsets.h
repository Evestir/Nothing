namespace offsets
{
	namespace UMovieSceneCompiledData
	{
			constexpr auto EvaluationTemplate = 0x28; // Size: 352, Type: struct FMovieSceneEvaluationTemplate
			constexpr auto Hierarchy = 0x188; // Size: 280, Type: struct FMovieSceneSequenceHierarchy
			constexpr auto EntityComponentField = 0x2a0; // Size: 240, Type: struct FMovieSceneEntityComponentField
			constexpr auto TrackTemplateField = 0x390; // Size: 48, Type: struct FMovieSceneEvaluationField
			constexpr auto DeterminismFences = 0x3c0; // Size: 16, Type: struct TArray<struct FFrameTime>
			constexpr auto CompiledSignature = 0x3d0; // Size: 16, Type: struct FGuid
			constexpr auto CompilerVersion = 0x3e0; // Size: 16, Type: struct FGuid
			constexpr auto AccumulatedMask = 0x3f0; // Size: 1, Type: struct FMovieSceneSequenceCompilerMaskStruct
			constexpr auto AllocatedMask = 0x3f1; // Size: 1, Type: struct FMovieSceneSequenceCompilerMaskStruct
			constexpr auto AccumulatedFlags = 0x3f2; // Size: 1, Type: enum class EMovieSceneSequenceFlags
	}
} 
