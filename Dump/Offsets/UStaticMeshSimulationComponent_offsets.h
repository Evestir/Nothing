namespace offsets
{
	namespace UStaticMeshSimulationComponent
	{
			constexpr auto Simulating = 0xb8; // Size: 1, Type: bool
			constexpr auto bNotifyCollisions = 0xb9; // Size: 1, Type: bool
			constexpr auto ObjectType = 0xba; // Size: 1, Type: enum class EObjectStateTypeEnum
			constexpr auto Mass = 0xbc; // Size: 4, Type: float
			constexpr auto CollisionType = 0xc0; // Size: 1, Type: enum class ECollisionTypeEnum
			constexpr auto ImplicitType = 0xc1; // Size: 1, Type: enum class EImplicitTypeEnum
			constexpr auto MinLevelSetResolution = 0xc4; // Size: 4, Type: int32_t
			constexpr auto MaxLevelSetResolution = 0xc8; // Size: 4, Type: int32_t
			constexpr auto InitialVelocityType = 0xcc; // Size: 1, Type: enum class EInitialVelocityTypeEnum
			constexpr auto InitialLinearVelocity = 0xd0; // Size: 12, Type: struct FVector
			constexpr auto InitialAngularVelocity = 0xdc; // Size: 12, Type: struct FVector
			constexpr auto DamageThreshold = 0xe8; // Size: 4, Type: float
			constexpr auto PhysicalMaterial = 0xf0; // Size: 8, Type: struct UChaosPhysicalMaterial*
			constexpr auto ChaosSolverActor = 0xf8; // Size: 8, Type: struct AChaosSolverActor*
			constexpr auto OnChaosPhysicsCollision = 0x100; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto SimulatedComponents = 0x120; // Size: 16, Type: struct TArray<struct UPrimitiveComponent*>
	}
} 
