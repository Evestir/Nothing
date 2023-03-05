namespace offsets
{
	namespace UMovieScene2DTransformSection
	{
			constexpr auto TransformMask = 0xf0; // Size: 4, Type: struct FMovieScene2DTransformMask
			constexpr auto Translation[2] = 0xf8; // Size: 320, Type: struct FMovieSceneFloatChannel
			constexpr auto Rotation = 0x238; // Size: 160, Type: struct FMovieSceneFloatChannel
			constexpr auto Scale[2] = 0x2d8; // Size: 320, Type: struct FMovieSceneFloatChannel
			constexpr auto Shear[2] = 0x418; // Size: 320, Type: struct FMovieSceneFloatChannel
	}
} 
