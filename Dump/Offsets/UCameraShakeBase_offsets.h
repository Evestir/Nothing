namespace offsets
{
	namespace UCameraShakeBase
	{
			constexpr auto bSingleInstance = 0x28; // Size: 1, Type: bool
			constexpr auto ShakeScale = 0x2c; // Size: 4, Type: float
			constexpr auto RootShakePattern = 0x30; // Size: 8, Type: struct UCameraShakePattern*
			constexpr auto CameraManager = 0x38; // Size: 8, Type: struct APlayerCameraManager*
	}
} 
