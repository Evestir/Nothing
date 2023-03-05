namespace offsets
{
	namespace UCameraModifier
	{
			constexpr auto bDebug = 0x28; // Size: 1, Type: char
			constexpr auto bExclusive = 0x28; // Size: 1, Type: char
			constexpr auto Priority = 0x2c; // Size: 1, Type: char
			constexpr auto CameraOwner = 0x30; // Size: 8, Type: struct APlayerCameraManager*
			constexpr auto AlphaInTime = 0x38; // Size: 4, Type: float
			constexpr auto AlphaOutTime = 0x3c; // Size: 4, Type: float
			constexpr auto Alpha = 0x40; // Size: 4, Type: float
	}
} 
