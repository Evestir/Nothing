namespace offsets
{
	namespace UParticleModuleOrbit
	{
			constexpr auto ChainMode = 0x38; // Size: 1, Type: enum class EOrbitChainMode
			constexpr auto OffsetAmount = 0x40; // Size: 72, Type: struct FRawDistributionVector
			constexpr auto OffsetOptions = 0x88; // Size: 4, Type: struct FOrbitOptions
			constexpr auto RotationAmount = 0x90; // Size: 72, Type: struct FRawDistributionVector
			constexpr auto RotationOptions = 0xd8; // Size: 4, Type: struct FOrbitOptions
			constexpr auto RotationRateAmount = 0xe0; // Size: 72, Type: struct FRawDistributionVector
			constexpr auto RotationRateOptions = 0x128; // Size: 4, Type: struct FOrbitOptions
	}
} 
