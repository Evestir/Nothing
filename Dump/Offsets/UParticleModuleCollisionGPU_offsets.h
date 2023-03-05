namespace offsets
{
	namespace UParticleModuleCollisionGPU
	{
			constexpr auto Resilience = 0x30; // Size: 48, Type: struct FRawDistributionFloat
			constexpr auto ResilienceScaleOverLife = 0x60; // Size: 48, Type: struct FRawDistributionFloat
			constexpr auto Friction = 0x90; // Size: 4, Type: float
			constexpr auto RandomSpread = 0x94; // Size: 4, Type: float
			constexpr auto RandomDistribution = 0x98; // Size: 4, Type: float
			constexpr auto RadiusScale = 0x9c; // Size: 4, Type: float
			constexpr auto RadiusBias = 0xa0; // Size: 4, Type: float
			constexpr auto Response = 0xa4; // Size: 1, Type: enum class EParticleCollisionResponse
			constexpr auto CollisionMode = 0xa5; // Size: 1, Type: enum class EParticleCollisionMode
	}
} 
