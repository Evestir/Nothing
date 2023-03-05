namespace offsets
{
	namespace UInterpTrackVisibility
	{
			constexpr auto VisibilityTrack = 0x70; // Size: 16, Type: struct TArray<struct FVisibilityTrackKey>
			constexpr auto bFireEventsWhenForwards = 0x80; // Size: 1, Type: char
			constexpr auto bFireEventsWhenBackwards = 0x80; // Size: 1, Type: char
			constexpr auto bFireEventsWhenJumpingForwards = 0x80; // Size: 1, Type: char
	}
} 
