namespace offsets
{
	namespace ARotatableCameraActor
	{
			constexpr auto CameraBoomViewTransition = 0xa70; // Size: 68, Type: struct FRoatableCameraViewTransition
			constexpr auto PitchMin = 0xab4; // Size: 4, Type: float
			constexpr auto PitchMax = 0xab8; // Size: 4, Type: float
			constexpr auto PitchScale = 0xabc; // Size: 4, Type: float
			constexpr auto YawMin = 0xac0; // Size: 4, Type: float
			constexpr auto YawMax = 0xac4; // Size: 4, Type: float
			constexpr auto YawScale = 0xac8; // Size: 4, Type: float
			constexpr auto RollMin = 0xacc; // Size: 4, Type: float
			constexpr auto RollMax = 0xad0; // Size: 4, Type: float
			constexpr auto RollScale = 0xad4; // Size: 4, Type: float
			constexpr auto BaseTurnRate = 0xad8; // Size: 4, Type: float
			constexpr auto BaseLookUpRate = 0xadc; // Size: 4, Type: float
			constexpr auto ZoomMin = 0xae0; // Size: 4, Type: float
			constexpr auto ZoomMax = 0xae4; // Size: 4, Type: float
			constexpr auto ZoomScale = 0xae8; // Size: 4, Type: float
			constexpr auto ZoomRate = 0xaec; // Size: 4, Type: float
			constexpr auto MobilePinchScale = 0xaf0; // Size: 4, Type: float
			constexpr auto bUsePinchInverse = 0xaf4; // Size: 1, Type: bool
			constexpr auto TargetArmOriginalLength = 0xaf8; // Size: 4, Type: float
			constexpr auto OriginalCameraBoomLocation = 0xafc; // Size: 12, Type: struct FVector
			constexpr auto CameraOriginalRotation = 0xb08; // Size: 12, Type: struct FRotator
			constexpr auto CameraBoom = 0xb18; // Size: 8, Type: struct USpringArmComponent*
			constexpr auto BeforeTouchLocation = 0xb20; // Size: 12, Type: struct FVector
			constexpr auto TouchSensitivityX = 0xb2c; // Size: 4, Type: float
			constexpr auto TouchSensitivityY = 0xb30; // Size: 4, Type: float
			constexpr auto BeforePinchValue = 0xb34; // Size: 4, Type: float
			constexpr auto bTouchMove = 0xb38; // Size: 1, Type: bool
			constexpr auto bPauseCameraInput = 0xb39; // Size: 1, Type: bool
	}
} 
