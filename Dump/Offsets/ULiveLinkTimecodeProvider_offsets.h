namespace offsets
{
	namespace ULiveLinkTimecodeProvider
	{
			constexpr auto SubjectKey = 0x30; // Size: 24, Type: struct FLiveLinkSubjectKey
			constexpr auto Evaluation = 0x48; // Size: 4, Type: enum class ELiveLinkTimecodeProviderEvaluationType
			constexpr auto bOverrideFrameRate = 0x4c; // Size: 1, Type: bool
			constexpr auto OverrideFrameRate = 0x50; // Size: 8, Type: struct FFrameRate
			constexpr auto BufferSize = 0x58; // Size: 4, Type: int32_t
	}
} 
