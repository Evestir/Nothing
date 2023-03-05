namespace offsets
{
	namespace UPerlinNoiseCameraShakePattern
	{
			constexpr auto LocationAmplitudeMultiplier = 0x38; // Size: 4, Type: float
			constexpr auto LocationFrequencyMultiplier = 0x3c; // Size: 4, Type: float
			constexpr auto X = 0x40; // Size: 8, Type: struct FPerlinNoiseShaker
			constexpr auto Y = 0x48; // Size: 8, Type: struct FPerlinNoiseShaker
			constexpr auto Z = 0x50; // Size: 8, Type: struct FPerlinNoiseShaker
			constexpr auto RotationAmplitudeMultiplier = 0x58; // Size: 4, Type: float
			constexpr auto RotationFrequencyMultiplier = 0x5c; // Size: 4, Type: float
			constexpr auto Pitch = 0x60; // Size: 8, Type: struct FPerlinNoiseShaker
			constexpr auto Yaw = 0x68; // Size: 8, Type: struct FPerlinNoiseShaker
			constexpr auto Roll = 0x70; // Size: 8, Type: struct FPerlinNoiseShaker
			constexpr auto FOV = 0x78; // Size: 8, Type: struct FPerlinNoiseShaker
	}
} 
