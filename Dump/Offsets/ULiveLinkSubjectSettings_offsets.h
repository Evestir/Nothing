namespace offsets
{
	namespace ULiveLinkSubjectSettings
	{
			constexpr auto PreProcessors = 0x28; // Size: 16, Type: struct TArray<struct ULiveLinkFramePreProcessor*>
			constexpr auto InterpolationProcessor = 0x38; // Size: 8, Type: struct ULiveLinkFrameInterpolationProcessor*
			constexpr auto Translators = 0x40; // Size: 16, Type: struct TArray<struct ULiveLinkFrameTranslator*>
			constexpr auto Role = 0x50; // Size: 8, Type: ULiveLinkRole*
			constexpr auto FrameRate = 0x58; // Size: 8, Type: struct FFrameRate
			constexpr auto bRebroadcastSubject = 0x60; // Size: 1, Type: bool
	}
} 
