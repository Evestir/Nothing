namespace offsets
{
	namespace UInterpTrackToggle
	{
			constexpr auto ToggleTrack = 0x70; // Size: 16, Type: struct TArray<struct FToggleTrackKey>
			constexpr auto bActivateSystemEachUpdate = 0x80; // Size: 1, Type: char
			constexpr auto bActivateWithJustAttachedFlag = 0x80; // Size: 1, Type: char
			constexpr auto bFireEventsWhenForwards = 0x80; // Size: 1, Type: char
			constexpr auto bFireEventsWhenBackwards = 0x80; // Size: 1, Type: char
			constexpr auto bFireEventsWhenJumpingForwards = 0x80; // Size: 1, Type: char
	}
} 
