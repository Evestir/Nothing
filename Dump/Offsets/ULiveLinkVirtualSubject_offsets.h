namespace offsets
{
	namespace ULiveLinkVirtualSubject
	{
			constexpr auto Role = 0x30; // Size: 8, Type: ULiveLinkRole*
			constexpr auto Subjects = 0x38; // Size: 16, Type: struct TArray<struct FLiveLinkSubjectName>
			constexpr auto FrameTranslators = 0x48; // Size: 16, Type: struct TArray<struct ULiveLinkFrameTranslator*>
			constexpr auto bRebroadcastSubject = 0x58; // Size: 1, Type: bool
	}
} 
