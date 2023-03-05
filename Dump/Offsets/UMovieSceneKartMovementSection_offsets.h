namespace offsets
{
	namespace UMovieSceneKartMovementSection
	{
			constexpr auto Translation[3] = 0xf0; // Size: 480, Type: struct FMovieSceneFloatChannel
			constexpr auto Rotation[3] = 0x2d0; // Size: 480, Type: struct FMovieSceneFloatChannel
			constexpr auto Accel = 0x4b0; // Size: 144, Type: struct FMovieSceneBoolChannel
			constexpr auto Brake = 0x540; // Size: 144, Type: struct FMovieSceneBoolChannel
			constexpr auto SteerLeft = 0x5d0; // Size: 144, Type: struct FMovieSceneBoolChannel
			constexpr auto SteerRight = 0x660; // Size: 144, Type: struct FMovieSceneBoolChannel
			constexpr auto DriftKeyPressing = 0x6f0; // Size: 144, Type: struct FMovieSceneBoolChannel
			constexpr auto BoostKind = 0x780; // Size: 144, Type: struct FMovieSceneIntegerChannel
			constexpr auto BoostLeft = 0x810; // Size: 160, Type: struct FMovieSceneFloatChannel
			constexpr auto DriveState = 0x8b0; // Size: 144, Type: struct FMovieSceneIntegerChannel
			constexpr auto SlipStream = 0x940; // Size: 144, Type: struct FMovieSceneBoolChannel
			constexpr auto draft = 0x9d0; // Size: 144, Type: struct FMovieSceneBoolChannel
			constexpr auto Speed = 0xa60; // Size: 160, Type: struct FMovieSceneFloatChannel
			constexpr auto DriftGauge = 0xb00; // Size: 160, Type: struct FMovieSceneFloatChannel
			constexpr auto DriftProgress = 0xba0; // Size: 160, Type: struct FMovieSceneFloatChannel
	}
} 
