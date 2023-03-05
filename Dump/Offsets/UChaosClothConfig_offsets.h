namespace offsets
{
	namespace UChaosClothConfig
	{
			constexpr auto MassMode = 0x28; // Size: 1, Type: enum class EClothMassMode
			constexpr auto UniformMass = 0x2c; // Size: 4, Type: float
			constexpr auto TotalMass = 0x30; // Size: 4, Type: float
			constexpr auto Density = 0x34; // Size: 4, Type: float
			constexpr auto MinPerParticleMass = 0x38; // Size: 4, Type: float
			constexpr auto EdgeStiffness = 0x3c; // Size: 4, Type: float
			constexpr auto BendingStiffness = 0x40; // Size: 4, Type: float
			constexpr auto bUseBendingElements = 0x44; // Size: 1, Type: bool
			constexpr auto AreaStiffness = 0x48; // Size: 4, Type: float
			constexpr auto VolumeStiffness = 0x4c; // Size: 4, Type: float
			constexpr auto TetherStiffness = 0x50; // Size: 8, Type: struct FChaosClothWeightedValue
			constexpr auto LimitScale = 0x58; // Size: 4, Type: float
			constexpr auto bUseGeodesicDistance = 0x5c; // Size: 1, Type: bool
			constexpr auto ShapeTargetStiffness = 0x60; // Size: 4, Type: float
			constexpr auto CollisionThickness = 0x64; // Size: 4, Type: float
			constexpr auto FrictionCoefficient = 0x68; // Size: 4, Type: float
			constexpr auto bUseCCD = 0x6c; // Size: 1, Type: bool
			constexpr auto bUseSelfCollisions = 0x6d; // Size: 1, Type: bool
			constexpr auto SelfCollisionThickness = 0x70; // Size: 4, Type: float
			constexpr auto bUseLegacyBackstop = 0x74; // Size: 1, Type: bool
			constexpr auto DampingCoefficient = 0x78; // Size: 4, Type: float
			constexpr auto bUsePointBasedWindModel = 0x7c; // Size: 1, Type: bool
			constexpr auto DragCoefficient = 0x80; // Size: 4, Type: float
			constexpr auto LiftCoefficient = 0x84; // Size: 4, Type: float
			constexpr auto bUseGravityOverride = 0x88; // Size: 1, Type: bool
			constexpr auto GravityScale = 0x8c; // Size: 4, Type: float
			constexpr auto Gravity = 0x90; // Size: 12, Type: struct FVector
			constexpr auto AnimDriveStiffness = 0x9c; // Size: 8, Type: struct FChaosClothWeightedValue
			constexpr auto AnimDriveDamping = 0xa4; // Size: 8, Type: struct FChaosClothWeightedValue
			constexpr auto LinearVelocityScale = 0xac; // Size: 12, Type: struct FVector
			constexpr auto AngularVelocityScale = 0xb8; // Size: 4, Type: float
			constexpr auto FictitiousAngularScale = 0xbc; // Size: 4, Type: float
			constexpr auto bUseTetrahedralConstraints = 0xc0; // Size: 1, Type: bool
			constexpr auto bUseThinShellVolumeConstraints = 0xc1; // Size: 1, Type: bool
			constexpr auto bUseContinuousCollisionDetection = 0xc2; // Size: 1, Type: bool
	}
} 
