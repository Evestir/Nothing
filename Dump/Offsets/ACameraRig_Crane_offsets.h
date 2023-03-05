namespace offsets
{
	namespace ACameraRig_Crane
	{
			constexpr auto CranePitch = 0x220; // Size: 4, Type: float
			constexpr auto CraneYaw = 0x224; // Size: 4, Type: float
			constexpr auto CraneArmLength = 0x228; // Size: 4, Type: float
			constexpr auto bLockMountPitch = 0x22c; // Size: 1, Type: bool
			constexpr auto bLockMountYaw = 0x22d; // Size: 1, Type: bool
			constexpr auto TransformComponent = 0x230; // Size: 8, Type: struct USceneComponent*
			constexpr auto CraneYawControl = 0x238; // Size: 8, Type: struct USceneComponent*
			constexpr auto CranePitchControl = 0x240; // Size: 8, Type: struct USceneComponent*
			constexpr auto CraneCameraMount = 0x248; // Size: 8, Type: struct USceneComponent*
	}
} 
