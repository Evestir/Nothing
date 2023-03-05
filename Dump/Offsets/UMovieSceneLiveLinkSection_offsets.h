namespace offsets
{
	namespace UMovieSceneLiveLinkSection
	{
			constexpr auto SubjectPreset = 0xe8; // Size: 56, Type: struct FLiveLinkSubjectPreset
			constexpr auto ChannelMask = 0x120; // Size: 16, Type: struct TArray<bool>
			constexpr auto SubSections = 0x130; // Size: 16, Type: struct TArray<struct UMovieSceneLiveLinkSubSection*>
			constexpr auto SubjectName = 0x150; // Size: 8, Type: struct FName
			constexpr auto TemplateToPush = 0x158; // Size: 144, Type: struct FLiveLinkFrameData
			constexpr auto RefSkeleton = 0x1e8; // Size: 32, Type: struct FLiveLinkRefSkeleton
			constexpr auto CurveNames = 0x208; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto PropertyFloatChannels = 0x218; // Size: 16, Type: struct TArray<struct FMovieSceneFloatChannel>
	}
} 
