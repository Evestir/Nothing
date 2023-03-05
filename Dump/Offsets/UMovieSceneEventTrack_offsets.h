namespace offsets
{
	namespace UMovieSceneEventTrack
	{
			constexpr auto bFireEventsWhenForwards = 0xa0; // Size: 1, Type: char
			constexpr auto bFireEventsWhenBackwards = 0xa0; // Size: 1, Type: char
			constexpr auto EventPosition = 0xa4; // Size: 1, Type: enum class EFireEventsAtPosition
			constexpr auto Sections = 0xa8; // Size: 16, Type: struct TArray<struct UMovieSceneSection*>
	}
} 
