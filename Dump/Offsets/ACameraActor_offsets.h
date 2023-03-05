namespace offsets
{
	namespace ACameraActor
	{
			constexpr auto AutoActivateForPlayer = 0x220; // Size: 1, Type: enum class EAutoReceiveInput
			constexpr auto CameraComponent = 0x228; // Size: 8, Type: struct UCameraComponent*
			constexpr auto SceneComponent = 0x230; // Size: 8, Type: struct USceneComponent*
			constexpr auto bConstrainAspectRatio = 0x240; // Size: 1, Type: char
			constexpr auto AspectRatio = 0x244; // Size: 4, Type: float
			constexpr auto FOVAngle = 0x248; // Size: 4, Type: float
			constexpr auto PostProcessBlendWeight = 0x24c; // Size: 4, Type: float
			constexpr auto PostProcessSettings = 0x250; // Size: 1488, Type: struct FPostProcessSettings
	}
} 
