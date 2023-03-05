namespace offsets
{
	namespace UParticleModuleCollision
	{
			constexpr auto DampingFactor = 0x30; // Size: 72, Type: struct FRawDistributionVector
			constexpr auto DampingFactorRotation = 0x78; // Size: 72, Type: struct FRawDistributionVector
			constexpr auto MaxCollisions = 0xc0; // Size: 48, Type: struct FRawDistributionFloat
			constexpr auto CollisionCompletionOption = 0xf0; // Size: 1, Type: enum class EParticleCollisionComplete
			constexpr auto CollisionTypes = 0xf8; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto bApplyPhysics = 0x110; // Size: 1, Type: char
			constexpr auto bIgnoreTriggerVolumes = 0x110; // Size: 1, Type: char
			constexpr auto ParticleMass = 0x118; // Size: 48, Type: struct FRawDistributionFloat
			constexpr auto DirScalar = 0x148; // Size: 4, Type: float
			constexpr auto bPawnsDoNotDecrementCount = 0x14c; // Size: 1, Type: char
			constexpr auto bOnlyVerticalNormalsDecrementCount = 0x14c; // Size: 1, Type: char
			constexpr auto VerticalFudgeFactor = 0x150; // Size: 4, Type: float
			constexpr auto DelayAmount = 0x158; // Size: 48, Type: struct FRawDistributionFloat
			constexpr auto bDropDetail = 0x188; // Size: 1, Type: char
			constexpr auto bCollideOnlyIfVisible = 0x188; // Size: 1, Type: char
			constexpr auto bIgnoreSourceActor = 0x188; // Size: 1, Type: char
			constexpr auto MaxCollisionDistance = 0x18c; // Size: 4, Type: float
	}
} 
