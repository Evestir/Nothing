namespace offsets
{
	namespace UClothConfigNv
	{
			constexpr auto ClothingWindMethod = 0x28; // Size: 1, Type: enum class EClothingWindMethodNv
			constexpr auto VerticalConstraint = 0x2c; // Size: 16, Type: struct FClothConstraintSetupNv
			constexpr auto HorizontalConstraint = 0x3c; // Size: 16, Type: struct FClothConstraintSetupNv
			constexpr auto BendConstraint = 0x4c; // Size: 16, Type: struct FClothConstraintSetupNv
			constexpr auto ShearConstraint = 0x5c; // Size: 16, Type: struct FClothConstraintSetupNv
			constexpr auto SelfCollisionRadius = 0x6c; // Size: 4, Type: float
			constexpr auto SelfCollisionStiffness = 0x70; // Size: 4, Type: float
			constexpr auto SelfCollisionCullScale = 0x74; // Size: 4, Type: float
			constexpr auto Damping = 0x78; // Size: 12, Type: struct FVector
			constexpr auto Friction = 0x84; // Size: 4, Type: float
			constexpr auto WindDragCoefficient = 0x88; // Size: 4, Type: float
			constexpr auto WindLiftCoefficient = 0x8c; // Size: 4, Type: float
			constexpr auto LinearDrag = 0x90; // Size: 12, Type: struct FVector
			constexpr auto AngularDrag = 0x9c; // Size: 12, Type: struct FVector
			constexpr auto LinearInertiaScale = 0xa8; // Size: 12, Type: struct FVector
			constexpr auto AngularInertiaScale = 0xb4; // Size: 12, Type: struct FVector
			constexpr auto CentrifugalInertiaScale = 0xc0; // Size: 12, Type: struct FVector
			constexpr auto SolverFrequency = 0xcc; // Size: 4, Type: float
			constexpr auto StiffnessFrequency = 0xd0; // Size: 4, Type: float
			constexpr auto GravityScale = 0xd4; // Size: 4, Type: float
			constexpr auto GravityOverride = 0xd8; // Size: 12, Type: struct FVector
			constexpr auto bUseGravityOverride = 0xe4; // Size: 1, Type: bool
			constexpr auto TetherStiffness = 0xe8; // Size: 4, Type: float
			constexpr auto TetherLimit = 0xec; // Size: 4, Type: float
			constexpr auto CollisionThickness = 0xf0; // Size: 4, Type: float
			constexpr auto AnimDriveSpringStiffness = 0xf4; // Size: 4, Type: float
			constexpr auto AnimDriveDamperStiffness = 0xf8; // Size: 4, Type: float
			constexpr auto WindMethod = 0xfc; // Size: 1, Type: enum class EClothingWindMethod_Legacy
			constexpr auto VerticalConstraintConfig = 0x100; // Size: 16, Type: struct FClothConstraintSetup_Legacy
			constexpr auto HorizontalConstraintConfig = 0x110; // Size: 16, Type: struct FClothConstraintSetup_Legacy
			constexpr auto BendConstraintConfig = 0x120; // Size: 16, Type: struct FClothConstraintSetup_Legacy
			constexpr auto ShearConstraintConfig = 0x130; // Size: 16, Type: struct FClothConstraintSetup_Legacy
	}
} 
