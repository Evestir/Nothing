namespace offsets
{
	namespace UCharacterMovementComponent
	{
			constexpr auto CharacterOwner = 0x148; // Size: 8, Type: struct ACharacter*
			constexpr auto GravityScale = 0x150; // Size: 4, Type: float
			constexpr auto MaxStepHeight = 0x154; // Size: 4, Type: float
			constexpr auto JumpZVelocity = 0x158; // Size: 4, Type: float
			constexpr auto JumpOffJumpZFactor = 0x15c; // Size: 4, Type: float
			constexpr auto WalkableFloorAngle = 0x160; // Size: 4, Type: float
			constexpr auto WalkableFloorZ = 0x164; // Size: 4, Type: float
			constexpr auto MovementMode = 0x168; // Size: 1, Type: enum class EMovementMode
			constexpr auto CustomMovementMode = 0x169; // Size: 1, Type: char
			constexpr auto NetworkSmoothingMode = 0x16a; // Size: 1, Type: enum class ENetworkSmoothingMode
			constexpr auto GroundFriction = 0x16c; // Size: 4, Type: float
			constexpr auto MaxWalkSpeed = 0x18c; // Size: 4, Type: float
			constexpr auto MaxWalkSpeedCrouched = 0x190; // Size: 4, Type: float
			constexpr auto MaxSwimSpeed = 0x194; // Size: 4, Type: float
			constexpr auto MaxFlySpeed = 0x198; // Size: 4, Type: float
			constexpr auto MaxCustomMovementSpeed = 0x19c; // Size: 4, Type: float
			constexpr auto MaxAcceleration = 0x1a0; // Size: 4, Type: float
			constexpr auto MinAnalogWalkSpeed = 0x1a4; // Size: 4, Type: float
			constexpr auto BrakingFrictionFactor = 0x1a8; // Size: 4, Type: float
			constexpr auto BrakingFriction = 0x1ac; // Size: 4, Type: float
			constexpr auto BrakingSubStepTime = 0x1b0; // Size: 4, Type: float
			constexpr auto BrakingDecelerationWalking = 0x1b4; // Size: 4, Type: float
			constexpr auto BrakingDecelerationFalling = 0x1b8; // Size: 4, Type: float
			constexpr auto BrakingDecelerationSwimming = 0x1bc; // Size: 4, Type: float
			constexpr auto BrakingDecelerationFlying = 0x1c0; // Size: 4, Type: float
			constexpr auto AirControl = 0x1c4; // Size: 4, Type: float
			constexpr auto AirControlBoostMultiplier = 0x1c8; // Size: 4, Type: float
			constexpr auto AirControlBoostVelocityThreshold = 0x1cc; // Size: 4, Type: float
			constexpr auto FallingLateralFriction = 0x1d0; // Size: 4, Type: float
			constexpr auto CrouchedHalfHeight = 0x1d4; // Size: 4, Type: float
			constexpr auto Buoyancy = 0x1d8; // Size: 4, Type: float
			constexpr auto PerchRadiusThreshold = 0x1dc; // Size: 4, Type: float
			constexpr auto PerchAdditionalHeight = 0x1e0; // Size: 4, Type: float
			constexpr auto RotationRate = 0x1e4; // Size: 12, Type: struct FRotator
			constexpr auto bUseSeparateBrakingFriction = 0x1f0; // Size: 1, Type: char
			constexpr auto bApplyGravityWhileJumping = 0x1f0; // Size: 1, Type: char
			constexpr auto bUseControllerDesiredRotation = 0x1f0; // Size: 1, Type: char
			constexpr auto bOrientRotationToMovement = 0x1f0; // Size: 1, Type: char
			constexpr auto bSweepWhileNavWalking = 0x1f0; // Size: 1, Type: char
			constexpr auto bMovementInProgress = 0x1f0; // Size: 1, Type: char
			constexpr auto bEnableScopedMovementUpdates = 0x1f0; // Size: 1, Type: char
			constexpr auto bEnableServerDualMoveScopedMovementUpdates = 0x1f1; // Size: 1, Type: char
			constexpr auto bForceMaxAccel = 0x1f1; // Size: 1, Type: char
			constexpr auto bRunPhysicsWithNoController = 0x1f1; // Size: 1, Type: char
			constexpr auto bForceNextFloorCheck = 0x1f1; // Size: 1, Type: char
			constexpr auto bShrinkProxyCapsule = 0x1f1; // Size: 1, Type: char
			constexpr auto bCanWalkOffLedges = 0x1f1; // Size: 1, Type: char
			constexpr auto bCanWalkOffLedgesWhenCrouching = 0x1f1; // Size: 1, Type: char
			constexpr auto bNetworkSkipProxyPredictionOnNetUpdate = 0x1f2; // Size: 1, Type: char
			constexpr auto bNetworkAlwaysReplicateTransformUpdateTimestamp = 0x1f2; // Size: 1, Type: char
			constexpr auto bDeferUpdateMoveComponent = 0x1f2; // Size: 1, Type: char
			constexpr auto bEnablePhysicsInteraction = 0x1f2; // Size: 1, Type: char
			constexpr auto bTouchForceScaledToMass = 0x1f2; // Size: 1, Type: char
			constexpr auto bPushForceScaledToMass = 0x1f2; // Size: 1, Type: char
			constexpr auto bPushForceUsingZOffset = 0x1f2; // Size: 1, Type: char
			constexpr auto bScalePushForceToVelocity = 0x1f3; // Size: 1, Type: char
			constexpr auto DeferredUpdatedMoveComponent = 0x1f8; // Size: 8, Type: struct USceneComponent*
			constexpr auto MaxOutOfWaterStepHeight = 0x200; // Size: 4, Type: float
			constexpr auto OutofWaterZ = 0x204; // Size: 4, Type: float
			constexpr auto Mass = 0x208; // Size: 4, Type: float
			constexpr auto StandingDownwardForceScale = 0x20c; // Size: 4, Type: float
			constexpr auto InitialPushForceFactor = 0x210; // Size: 4, Type: float
			constexpr auto PushForceFactor = 0x214; // Size: 4, Type: float
			constexpr auto PushForcePointZOffsetFactor = 0x218; // Size: 4, Type: float
			constexpr auto TouchForceFactor = 0x21c; // Size: 4, Type: float
			constexpr auto MinTouchForce = 0x220; // Size: 4, Type: float
			constexpr auto MaxTouchForce = 0x224; // Size: 4, Type: float
			constexpr auto RepulsionForce = 0x228; // Size: 4, Type: float
			constexpr auto Acceleration = 0x22c; // Size: 12, Type: struct FVector
			constexpr auto LastUpdateRotation = 0x240; // Size: 16, Type: struct FQuat
			constexpr auto LastUpdateLocation = 0x250; // Size: 12, Type: struct FVector
			constexpr auto LastUpdateVelocity = 0x25c; // Size: 12, Type: struct FVector
			constexpr auto ServerLastTransformUpdateTimeStamp = 0x268; // Size: 4, Type: float
			constexpr auto ServerLastClientGoodMoveAckTime = 0x26c; // Size: 4, Type: float
			constexpr auto ServerLastClientAdjustmentTime = 0x270; // Size: 4, Type: float
			constexpr auto PendingImpulseToApply = 0x274; // Size: 12, Type: struct FVector
			constexpr auto PendingForceToApply = 0x280; // Size: 12, Type: struct FVector
			constexpr auto AnalogInputModifier = 0x28c; // Size: 4, Type: float
			constexpr auto MaxSimulationTimeStep = 0x29c; // Size: 4, Type: float
			constexpr auto MaxSimulationIterations = 0x2a0; // Size: 4, Type: int32_t
			constexpr auto MaxJumpApexAttemptsPerSimulation = 0x2a4; // Size: 4, Type: int32_t
			constexpr auto MaxDepenetrationWithGeometry = 0x2a8; // Size: 4, Type: float
			constexpr auto MaxDepenetrationWithGeometryAsProxy = 0x2ac; // Size: 4, Type: float
			constexpr auto MaxDepenetrationWithPawn = 0x2b0; // Size: 4, Type: float
			constexpr auto MaxDepenetrationWithPawnAsProxy = 0x2b4; // Size: 4, Type: float
			constexpr auto NetworkSimulatedSmoothLocationTime = 0x2b8; // Size: 4, Type: float
			constexpr auto NetworkSimulatedSmoothRotationTime = 0x2bc; // Size: 4, Type: float
			constexpr auto ListenServerNetworkSimulatedSmoothLocationTime = 0x2c0; // Size: 4, Type: float
			constexpr auto ListenServerNetworkSimulatedSmoothRotationTime = 0x2c4; // Size: 4, Type: float
			constexpr auto NetProxyShrinkRadius = 0x2c8; // Size: 4, Type: float
			constexpr auto NetProxyShrinkHalfHeight = 0x2cc; // Size: 4, Type: float
			constexpr auto NetworkMaxSmoothUpdateDistance = 0x2d0; // Size: 4, Type: float
			constexpr auto NetworkNoSmoothUpdateDistance = 0x2d4; // Size: 4, Type: float
			constexpr auto NetworkMinTimeBetweenClientAckGoodMoves = 0x2d8; // Size: 4, Type: float
			constexpr auto NetworkMinTimeBetweenClientAdjustments = 0x2dc; // Size: 4, Type: float
			constexpr auto NetworkMinTimeBetweenClientAdjustmentsLargeCorrection = 0x2e0; // Size: 4, Type: float
			constexpr auto NetworkLargeClientCorrectionDistance = 0x2e4; // Size: 4, Type: float
			constexpr auto LedgeCheckThreshold = 0x2e8; // Size: 4, Type: float
			constexpr auto JumpOutOfWaterPitch = 0x2ec; // Size: 4, Type: float
			constexpr auto CurrentFloor = 0x2f0; // Size: 148, Type: struct FFindFloorResult
			constexpr auto DefaultLandMovementMode = 0x384; // Size: 1, Type: enum class EMovementMode
			constexpr auto DefaultWaterMovementMode = 0x385; // Size: 1, Type: enum class EMovementMode
			constexpr auto GroundMovementMode = 0x386; // Size: 1, Type: enum class EMovementMode
			constexpr auto bMaintainHorizontalGroundVelocity = 0x387; // Size: 1, Type: char
			constexpr auto bImpartBaseVelocityX = 0x387; // Size: 1, Type: char
			constexpr auto bImpartBaseVelocityY = 0x387; // Size: 1, Type: char
			constexpr auto bImpartBaseVelocityZ = 0x387; // Size: 1, Type: char
			constexpr auto bImpartBaseAngularVelocity = 0x387; // Size: 1, Type: char
			constexpr auto bJustTeleported = 0x387; // Size: 1, Type: char
			constexpr auto bNetworkUpdateReceived = 0x387; // Size: 1, Type: char
			constexpr auto bNetworkMovementModeChanged = 0x387; // Size: 1, Type: char
			constexpr auto bIgnoreClientMovementErrorChecksAndCorrection = 0x388; // Size: 1, Type: char
			constexpr auto bServerAcceptClientAuthoritativePosition = 0x388; // Size: 1, Type: char
			constexpr auto bNotifyApex = 0x388; // Size: 1, Type: char
			constexpr auto bCheatFlying = 0x388; // Size: 1, Type: char
			constexpr auto bWantsToCrouch = 0x388; // Size: 1, Type: char
			constexpr auto bCrouchMaintainsBaseLocation = 0x388; // Size: 1, Type: char
			constexpr auto bIgnoreBaseRotation = 0x388; // Size: 1, Type: char
			constexpr auto bFastAttachedMove = 0x388; // Size: 1, Type: char
			constexpr auto bAlwaysCheckFloor = 0x389; // Size: 1, Type: char
			constexpr auto bUseFlatBaseForFloorChecks = 0x389; // Size: 1, Type: char
			constexpr auto bPerformingJumpOff = 0x389; // Size: 1, Type: char
			constexpr auto bWantsToLeaveNavWalking = 0x389; // Size: 1, Type: char
			constexpr auto bUseRVOAvoidance = 0x389; // Size: 1, Type: char
			constexpr auto bRequestedMoveUseAcceleration = 0x389; // Size: 1, Type: char
			constexpr auto bWasSimulatingRootMotion = 0x389; // Size: 1, Type: char
			constexpr auto bAllowPhysicsRotationDuringAnimRootMotion = 0x38a; // Size: 1, Type: char
			constexpr auto bHasRequestedVelocity = 0x38a; // Size: 1, Type: char
			constexpr auto bRequestedMoveWithMaxSpeed = 0x38a; // Size: 1, Type: char
			constexpr auto bWasAvoidanceUpdated = 0x38a; // Size: 1, Type: char
			constexpr auto bProjectNavMeshWalking = 0x38a; // Size: 1, Type: char
			constexpr auto bProjectNavMeshOnBothWorldChannels = 0x38a; // Size: 1, Type: char
			constexpr auto AvoidanceConsiderationRadius = 0x39c; // Size: 4, Type: float
			constexpr auto RequestedVelocity = 0x3a0; // Size: 12, Type: struct FVector
			constexpr auto AvoidanceUID = 0x3ac; // Size: 4, Type: int32_t
			constexpr auto AvoidanceGroup = 0x3b0; // Size: 4, Type: struct FNavAvoidanceMask
			constexpr auto GroupsToAvoid = 0x3b4; // Size: 4, Type: struct FNavAvoidanceMask
			constexpr auto GroupsToIgnore = 0x3b8; // Size: 4, Type: struct FNavAvoidanceMask
			constexpr auto AvoidanceWeight = 0x3bc; // Size: 4, Type: float
			constexpr auto PendingLaunchVelocity = 0x3c0; // Size: 12, Type: struct FVector
			constexpr auto NavMeshProjectionInterval = 0x470; // Size: 4, Type: float
			constexpr auto NavMeshProjectionTimer = 0x474; // Size: 4, Type: float
			constexpr auto NavMeshProjectionInterpSpeed = 0x478; // Size: 4, Type: float
			constexpr auto NavMeshProjectionHeightScaleUp = 0x47c; // Size: 4, Type: float
			constexpr auto NavMeshProjectionHeightScaleDown = 0x480; // Size: 4, Type: float
			constexpr auto NavWalkingFloorDistTolerance = 0x484; // Size: 4, Type: float
			constexpr auto PostPhysicsTickFunction = 0x488; // Size: 48, Type: struct FCharacterMovementComponentPostPhysicsTickFunction
			constexpr auto MinTimeBetweenTimeStampResets = 0x4d0; // Size: 4, Type: float
			constexpr auto CurrentRootMotion = 0x980; // Size: 56, Type: struct FRootMotionSourceGroup
			constexpr auto ServerCorrectionRootMotion = 0x9b8; // Size: 56, Type: struct FRootMotionSourceGroup
			constexpr auto RootMotionParams = 0xa80; // Size: 64, Type: struct FRootMotionMovementParams
			constexpr auto AnimRootMotionVelocity = 0xac0; // Size: 12, Type: struct FVector
	}
} 
