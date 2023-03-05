namespace offsets
{
	namespace USpringArmComponent
	{
			constexpr auto TargetArmLength = 0x208; // Size: 4, Type: float
			constexpr auto SocketOffset = 0x20c; // Size: 12, Type: struct FVector
			constexpr auto TargetOffset = 0x218; // Size: 12, Type: struct FVector
			constexpr auto ProbeSize = 0x224; // Size: 4, Type: float
			constexpr auto ProbeChannel = 0x228; // Size: 1, Type: enum class ECollisionChannel
			constexpr auto bDoCollisionTest = 0x22c; // Size: 1, Type: char
			constexpr auto bUsePawnControlRotation = 0x22c; // Size: 1, Type: char
			constexpr auto bInheritPitch = 0x22c; // Size: 1, Type: char
			constexpr auto bInheritYaw = 0x22c; // Size: 1, Type: char
			constexpr auto bInheritRoll = 0x22c; // Size: 1, Type: char
			constexpr auto bEnableCameraLag = 0x22c; // Size: 1, Type: char
			constexpr auto bEnableCameraRotationLag = 0x22c; // Size: 1, Type: char
			constexpr auto bUseCameraLagSubstepping = 0x22c; // Size: 1, Type: char
			constexpr auto bDrawDebugLagMarkers = 0x22d; // Size: 1, Type: char
			constexpr auto CameraLagSpeed = 0x230; // Size: 4, Type: float
			constexpr auto CameraRotationLagSpeed = 0x234; // Size: 4, Type: float
			constexpr auto CameraLagMaxTimeStep = 0x238; // Size: 4, Type: float
			constexpr auto CameraLagMaxDistance = 0x23c; // Size: 4, Type: float
	}
} 
