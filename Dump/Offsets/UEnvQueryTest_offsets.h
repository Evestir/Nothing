namespace offsets
{
	namespace UEnvQueryTest
	{
			constexpr auto TestOrder = 0x30; // Size: 4, Type: int32_t
			constexpr auto TestPurpose = 0x34; // Size: 1, Type: enum class EEnvTestPurpose
			constexpr auto TestComment = 0x38; // Size: 16, Type: struct FString
			constexpr auto MultipleContextFilterOp = 0x48; // Size: 1, Type: enum class EEnvTestFilterOperator
			constexpr auto MultipleContextScoreOp = 0x49; // Size: 1, Type: enum class EEnvTestScoreOperator
			constexpr auto FilterType = 0x4a; // Size: 1, Type: enum class EEnvTestFilterType
			constexpr auto BoolValue = 0x50; // Size: 56, Type: struct FAIDataProviderBoolValue
			constexpr auto FloatValueMin = 0x88; // Size: 56, Type: struct FAIDataProviderFloatValue
			constexpr auto FloatValueMax = 0xc0; // Size: 56, Type: struct FAIDataProviderFloatValue
			constexpr auto ScoringEquation = 0xf9; // Size: 1, Type: enum class EEnvTestScoreEquation
			constexpr auto ClampMinType = 0xfa; // Size: 1, Type: enum class EEnvQueryTestClamping
			constexpr auto ClampMaxType = 0xfb; // Size: 1, Type: enum class EEnvQueryTestClamping
			constexpr auto NormalizationType = 0xfc; // Size: 1, Type: enum class EEQSNormalizationType
			constexpr auto ScoreClampMin = 0x100; // Size: 56, Type: struct FAIDataProviderFloatValue
			constexpr auto ScoreClampMax = 0x138; // Size: 56, Type: struct FAIDataProviderFloatValue
			constexpr auto ScoringFactor = 0x170; // Size: 56, Type: struct FAIDataProviderFloatValue
			constexpr auto ReferenceValue = 0x1a8; // Size: 56, Type: struct FAIDataProviderFloatValue
			constexpr auto bDefineReferenceValue = 0x1e0; // Size: 1, Type: bool
			constexpr auto bWorkOnFloatValues = 0x1f0; // Size: 1, Type: char
	}
} 
