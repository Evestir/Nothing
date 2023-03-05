namespace offsets
{
	namespace ACameraRig_Rail
	{
			constexpr auto CurrentPositionOnRail = 0x220; // Size: 4, Type: float
			constexpr auto bLockOrientationToRail = 0x224; // Size: 1, Type: bool
			constexpr auto TransformComponent = 0x228; // Size: 8, Type: struct USceneComponent*
			constexpr auto RailSplineComponent = 0x230; // Size: 8, Type: struct USplineComponent*
			constexpr auto RailCameraMount = 0x238; // Size: 8, Type: struct USceneComponent*
	}
} 
