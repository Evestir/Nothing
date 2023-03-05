namespace offsets
{
	namespace UProjectileMovementComponent
	{
			constexpr auto InitialSpeed = 0xf0; // Size: 4, Type: float
			constexpr auto MaxSpeed = 0xf4; // Size: 4, Type: float
			constexpr auto bRotationFollowsVelocity = 0xf8; // Size: 1, Type: char
			constexpr auto bRotationRemainsVertical = 0xf8; // Size: 1, Type: char
			constexpr auto bShouldBounce = 0xf8; // Size: 1, Type: char
			constexpr auto bInitialVelocityInLocalSpace = 0xf8; // Size: 1, Type: char
			constexpr auto bForceSubStepping = 0xf8; // Size: 1, Type: char
			constexpr auto bSimulationEnabled = 0xf8; // Size: 1, Type: char
			constexpr auto bSweepCollision = 0xf8; // Size: 1, Type: char
			constexpr auto bIsHomingProjectile = 0xf8; // Size: 1, Type: char
			constexpr auto bBounceAngleAffectsFriction = 0xf9; // Size: 1, Type: char
			constexpr auto bIsSliding = 0xf9; // Size: 1, Type: char
			constexpr auto bInterpMovement = 0xf9; // Size: 1, Type: char
			constexpr auto bInterpRotation = 0xf9; // Size: 1, Type: char
			constexpr auto PreviousHitTime = 0xfc; // Size: 4, Type: float
			constexpr auto PreviousHitNormal = 0x100; // Size: 12, Type: struct FVector
			constexpr auto ProjectileGravityScale = 0x10c; // Size: 4, Type: float
			constexpr auto Buoyancy = 0x110; // Size: 4, Type: float
			constexpr auto Bounciness = 0x114; // Size: 4, Type: float
			constexpr auto Friction = 0x118; // Size: 4, Type: float
			constexpr auto BounceVelocityStopSimulatingThreshold = 0x11c; // Size: 4, Type: float
			constexpr auto MinFrictionFraction = 0x120; // Size: 4, Type: float
			constexpr auto OnProjectileBounce = 0x128; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnProjectileStop = 0x138; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto HomingAccelerationMagnitude = 0x148; // Size: 4, Type: float
			constexpr auto HomingTargetComponent = 0x14c; // Size: 8, Type: struct TWeakObjectPtr<USceneComponent>
			constexpr auto MaxSimulationTimeStep = 0x154; // Size: 4, Type: float
			constexpr auto MaxSimulationIterations = 0x158; // Size: 4, Type: int32_t
			constexpr auto BounceAdditionalIterations = 0x15c; // Size: 4, Type: int32_t
			constexpr auto InterpLocationTime = 0x160; // Size: 4, Type: float
			constexpr auto InterpRotationTime = 0x164; // Size: 4, Type: float
			constexpr auto InterpLocationMaxLagDistance = 0x168; // Size: 4, Type: float
			constexpr auto InterpLocationSnapToTargetDistance = 0x16c; // Size: 4, Type: float
	}
} 
