namespace offsets
{
	namespace UMovieSceneTrackInstance
	{
			constexpr auto AnimatedObject = 0x28; // Size: 8, Type: struct UObject*
			constexpr auto bIsMasterTrackInstance = 0x30; // Size: 1, Type: bool
			constexpr auto Linker = 0x38; // Size: 8, Type: struct UMovieSceneEntitySystemLinker*
			constexpr auto Inputs = 0x40; // Size: 16, Type: struct TArray<struct FMovieSceneTrackInstanceInput>
	}
} 
