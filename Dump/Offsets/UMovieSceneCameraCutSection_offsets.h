namespace offsets
{
	namespace UMovieSceneCameraCutSection
	{
			constexpr auto bLockPreviousCamera = 0xf0; // Size: 1, Type: bool
			constexpr auto bDontResetTAABuffer = 0xf1; // Size: 1, Type: bool
			constexpr auto CameraGuid = 0xf4; // Size: 16, Type: struct FGuid
			constexpr auto CameraBindingID = 0x104; // Size: 24, Type: struct FMovieSceneObjectBindingID
			constexpr auto InitialCameraCutTransform = 0x120; // Size: 48, Type: struct FTransform
			constexpr auto bHasInitialCameraCutTransform = 0x150; // Size: 1, Type: bool
	}
} 
