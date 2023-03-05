namespace offsets
{
	namespace UInterpTrack
	{
			constexpr auto SubTracks = 0x38; // Size: 16, Type: struct TArray<struct UInterpTrack*>
			constexpr auto TrackInstClass = 0x48; // Size: 8, Type: UInterpTrackInst*
			constexpr auto ActiveCondition = 0x50; // Size: 1, Type: enum class ETrackActiveCondition
			constexpr auto TrackTitle = 0x58; // Size: 16, Type: struct FString
			constexpr auto bOnePerGroup = 0x68; // Size: 1, Type: char
			constexpr auto bDirGroupOnly = 0x68; // Size: 1, Type: char
			constexpr auto bDisableTrack = 0x68; // Size: 1, Type: char
			constexpr auto bIsSelected = 0x68; // Size: 1, Type: char
			constexpr auto bIsAnimControlTrack = 0x68; // Size: 1, Type: char
			constexpr auto bSubTrackOnly = 0x68; // Size: 1, Type: char
			constexpr auto bVisible = 0x68; // Size: 1, Type: char
			constexpr auto bIsRecording = 0x68; // Size: 1, Type: char
	}
} 
