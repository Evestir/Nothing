namespace offsets
{
	namespace UParticleModuleBeamNoise
	{
			constexpr auto bLowFreq_Enabled = 0x30; // Size: 1, Type: char
			constexpr auto Frequency = 0x34; // Size: 4, Type: int32_t
			constexpr auto Frequency_LowRange = 0x38; // Size: 4, Type: int32_t
			constexpr auto NoiseRange = 0x40; // Size: 72, Type: struct FRawDistributionVector
			constexpr auto NoiseRangeScale = 0x88; // Size: 48, Type: struct FRawDistributionFloat
			constexpr auto bNRScaleEmitterTime = 0xb8; // Size: 1, Type: char
			constexpr auto NoiseSpeed = 0xc0; // Size: 72, Type: struct FRawDistributionVector
			constexpr auto bSmooth = 0x108; // Size: 1, Type: char
			constexpr auto NoiseLockRadius = 0x10c; // Size: 4, Type: float
			constexpr auto bNoiseLock = 0x110; // Size: 1, Type: char
			constexpr auto bOscillate = 0x110; // Size: 1, Type: char
			constexpr auto NoiseLockTime = 0x114; // Size: 4, Type: float
			constexpr auto NoiseTension = 0x118; // Size: 4, Type: float
			constexpr auto bUseNoiseTangents = 0x11c; // Size: 1, Type: char
			constexpr auto NoiseTangentStrength = 0x120; // Size: 48, Type: struct FRawDistributionFloat
			constexpr auto NoiseTessellation = 0x150; // Size: 4, Type: int32_t
			constexpr auto bTargetNoise = 0x154; // Size: 1, Type: char
			constexpr auto FrequencyDistance = 0x158; // Size: 4, Type: float
			constexpr auto bApplyNoiseScale = 0x15c; // Size: 1, Type: char
			constexpr auto NoiseScale = 0x160; // Size: 48, Type: struct FRawDistributionFloat
	}
} 
