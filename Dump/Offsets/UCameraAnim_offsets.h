namespace offsets
{
	namespace UCameraAnim
	{
			constexpr auto CameraInterpGroup = 0x28; // Size: 8, Type: struct UInterpGroup*
			constexpr auto AnimLength = 0x30; // Size: 4, Type: float
			constexpr auto BoundingBox = 0x34; // Size: 28, Type: struct FBox
			constexpr auto bRelativeToInitialTransform = 0x50; // Size: 1, Type: char
			constexpr auto bRelativeToInitialFOV = 0x50; // Size: 1, Type: char
			constexpr auto BaseFOV = 0x54; // Size: 4, Type: float
			constexpr auto BasePostProcessSettings = 0x60; // Size: 1488, Type: struct FPostProcessSettings
			constexpr auto BasePostProcessBlendWeight = 0x630; // Size: 4, Type: float
	}
} 
