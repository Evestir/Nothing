namespace offsets
{
	namespace UTimelineTemplate
	{
			constexpr auto TimelineLength = 0x28; // Size: 4, Type: float
			constexpr auto LengthMode = 0x2c; // Size: 1, Type: enum class ETimelineLengthMode
			constexpr auto bAutoPlay = 0x2d; // Size: 1, Type: char
			constexpr auto bLoop = 0x2d; // Size: 1, Type: char
			constexpr auto bReplicated = 0x2d; // Size: 1, Type: char
			constexpr auto bIgnoreTimeDilation = 0x2d; // Size: 1, Type: char
			constexpr auto EventTracks = 0x30; // Size: 16, Type: struct TArray<struct FTTEventTrack>
			constexpr auto FloatTracks = 0x40; // Size: 16, Type: struct TArray<struct FTTFloatTrack>
			constexpr auto VectorTracks = 0x50; // Size: 16, Type: struct TArray<struct FTTVectorTrack>
			constexpr auto LinearColorTracks = 0x60; // Size: 16, Type: struct TArray<struct FTTLinearColorTrack>
			constexpr auto MetaDataArray = 0x70; // Size: 16, Type: struct TArray<struct FBPVariableMetaDataEntry>
			constexpr auto TimelineGuid = 0x80; // Size: 16, Type: struct FGuid
			constexpr auto TimelineTickGroup = 0x90; // Size: 1, Type: enum class ETickingGroup
			constexpr auto VariableName = 0x94; // Size: 8, Type: struct FName
			constexpr auto DirectionPropertyName = 0x9c; // Size: 8, Type: struct FName
			constexpr auto UpdateFunctionName = 0xa4; // Size: 8, Type: struct FName
			constexpr auto FinishedFunctionName = 0xac; // Size: 8, Type: struct FName
	}
} 
