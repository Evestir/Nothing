namespace offsets
{
	namespace UInterpTrackEvent
	{
			constexpr auto EventTrack = 0x70; // Size: 16, Type: struct TArray<struct FEventTrackKey>
			constexpr auto bFireEventsWhenForwards = 0x80; // Size: 1, Type: char
			constexpr auto bFireEventsWhenBackwards = 0x80; // Size: 1, Type: char
			constexpr auto bFireEventsWhenJumpingForwards = 0x80; // Size: 1, Type: char
			constexpr auto bUseCustomEventName = 0x80; // Size: 1, Type: char
	}
} 
