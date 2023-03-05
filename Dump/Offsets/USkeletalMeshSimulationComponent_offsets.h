namespace offsets
{
	namespace USkeletalMeshSimulationComponent
	{
			constexpr auto PhysicalMaterial = 0xb8; // Size: 8, Type: struct UChaosPhysicalMaterial*
			constexpr auto ChaosSolverActor = 0xc0; // Size: 8, Type: struct AChaosSolverActor*
			constexpr auto OverridePhysicsAsset = 0xc8; // Size: 8, Type: struct UPhysicsAsset*
			constexpr auto bSimulating = 0xd0; // Size: 1, Type: bool
			constexpr auto bNotifyCollisions = 0xd1; // Size: 1, Type: bool
			constexpr auto ObjectType = 0xd2; // Size: 1, Type: enum class EObjectStateTypeEnum
			constexpr auto Density = 0xd4; // Size: 4, Type: float
			constexpr auto MinMass = 0xd8; // Size: 4, Type: float
			constexpr auto MaxMass = 0xdc; // Size: 4, Type: float
			constexpr auto CollisionType = 0xe0; // Size: 1, Type: enum class ECollisionTypeEnum
			constexpr auto ImplicitShapeParticlesPerUnitArea = 0xe4; // Size: 4, Type: float
			constexpr auto ImplicitShapeMinNumParticles = 0xe8; // Size: 4, Type: int32_t
			constexpr auto ImplicitShapeMaxNumParticles = 0xec; // Size: 4, Type: int32_t
			constexpr auto MinLevelSetResolution = 0xf0; // Size: 4, Type: int32_t
			constexpr auto MaxLevelSetResolution = 0xf4; // Size: 4, Type: int32_t
			constexpr auto CollisionGroup = 0xf8; // Size: 4, Type: int32_t
			constexpr auto InitialVelocityType = 0xfc; // Size: 1, Type: enum class EInitialVelocityTypeEnum
			constexpr auto InitialLinearVelocity = 0x100; // Size: 12, Type: struct FVector
			constexpr auto InitialAngularVelocity = 0x10c; // Size: 12, Type: struct FVector
			constexpr auto OnChaosPhysicsCollision = 0x118; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
