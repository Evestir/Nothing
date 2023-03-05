namespace offsets
{
	namespace UMovieScene3DTransformSection
	{
			constexpr auto TransformMask = 0xf0; // Size: 4, Type: struct FMovieSceneTransformMask
			constexpr auto Translation[3] = 0xf8; // Size: 480, Type: struct FMovieSceneFloatChannel
			constexpr auto Rotation[3] = 0x2d8; // Size: 480, Type: struct FMovieSceneFloatChannel
			constexpr auto Scale[3] = 0x4b8; // Size: 480, Type: struct FMovieSceneFloatChannel
			constexpr auto ManualWeight = 0x698; // Size: 160, Type: struct FMovieSceneFloatChannel
			constexpr auto bUseQuaternionInterpolation = 0x738; // Size: 1, Type: bool
	}
} 
