namespace offsets
{
	namespace UParticleModuleSpawn
	{
			constexpr auto Rate = 0x38; // Size: 48, Type: struct FRawDistributionFloat
			constexpr auto RateScale = 0x68; // Size: 48, Type: struct FRawDistributionFloat
			constexpr auto ParticleBurstMethod = 0x98; // Size: 1, Type: enum class EParticleBurstMethod
			constexpr auto BurstList = 0xa0; // Size: 16, Type: struct TArray<struct FParticleBurst>
			constexpr auto BurstScale = 0xb0; // Size: 48, Type: struct FRawDistributionFloat
			constexpr auto bApplyGlobalSpawnRateScale = 0xe0; // Size: 1, Type: char
	}
} 
