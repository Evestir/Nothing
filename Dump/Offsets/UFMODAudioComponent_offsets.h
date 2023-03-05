namespace offsets
{
	namespace UFMODAudioComponent
	{
			constexpr auto Event = 0x208; // Size: 8, Type: struct UFMODEvent*
			constexpr auto ParameterCache = 0x210; // Size: 80, Type: struct TMap<struct FName, float>
			constexpr auto ProgrammerSoundName = 0x268; // Size: 16, Type: struct FString
			constexpr auto bEnableTimelineCallbacks = 0x278; // Size: 1, Type: char
			constexpr auto bAutoDestroy = 0x290; // Size: 1, Type: char
			constexpr auto bStopWhenOwnerDestroyed = 0x290; // Size: 1, Type: char
			constexpr auto OnEventStopped = 0x298; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTimelineMarker = 0x2c0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTimelineBeat = 0x2d0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto AttenuationDetails = 0x2e0; // Size: 12, Type: struct FFMODAttenuationDetails
			constexpr auto OcclusionDetails = 0x2ec; // Size: 3, Type: struct FFMODOcclusionDetails
	}
} 
