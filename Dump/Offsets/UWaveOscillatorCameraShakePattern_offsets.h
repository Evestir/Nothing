namespace offsets
{
	namespace UWaveOscillatorCameraShakePattern
	{
			constexpr auto LocationAmplitudeMultiplier = 0x38; // Size: 4, Type: float
			constexpr auto LocationFrequencyMultiplier = 0x3c; // Size: 4, Type: float
			constexpr auto X = 0x40; // Size: 12, Type: struct FWaveOscillator
			constexpr auto Y = 0x4c; // Size: 12, Type: struct FWaveOscillator
			constexpr auto Z = 0x58; // Size: 12, Type: struct FWaveOscillator
			constexpr auto RotationAmplitudeMultiplier = 0x64; // Size: 4, Type: float
			constexpr auto RotationFrequencyMultiplier = 0x68; // Size: 4, Type: float
			constexpr auto Pitch = 0x6c; // Size: 12, Type: struct FWaveOscillator
			constexpr auto Yaw = 0x78; // Size: 12, Type: struct FWaveOscillator
			constexpr auto Roll = 0x84; // Size: 12, Type: struct FWaveOscillator
			constexpr auto FOV = 0x90; // Size: 12, Type: struct FWaveOscillator
	}
} 
