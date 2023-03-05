namespace offsets
{
	namespace UPhysicsSettingsCore
	{
			constexpr auto DefaultGravityZ = 0x38; // Size: 4, Type: float
			constexpr auto DefaultTerminalVelocity = 0x3c; // Size: 4, Type: float
			constexpr auto DefaultFluidFriction = 0x40; // Size: 4, Type: float
			constexpr auto SimulateScratchMemorySize = 0x44; // Size: 4, Type: int32_t
			constexpr auto RagdollAggregateThreshold = 0x48; // Size: 4, Type: int32_t
			constexpr auto TriangleMeshTriangleMinAreaThreshold = 0x4c; // Size: 4, Type: float
			constexpr auto bEnableShapeSharing = 0x50; // Size: 1, Type: bool
			constexpr auto bEnablePCM = 0x51; // Size: 1, Type: bool
			constexpr auto bEnableStabilization = 0x52; // Size: 1, Type: bool
			constexpr auto bWarnMissingLocks = 0x53; // Size: 1, Type: bool
			constexpr auto bEnable2DPhysics = 0x54; // Size: 1, Type: bool
			constexpr auto bDefaultHasComplexCollision = 0x55; // Size: 1, Type: bool
			constexpr auto BounceThresholdVelocity = 0x58; // Size: 4, Type: float
			constexpr auto FrictionCombineMode = 0x5c; // Size: 1, Type: enum class EFrictionCombineMode
			constexpr auto RestitutionCombineMode = 0x5d; // Size: 1, Type: enum class EFrictionCombineMode
			constexpr auto MaxAngularVelocity = 0x60; // Size: 4, Type: float
			constexpr auto MaxDepenetrationVelocity = 0x64; // Size: 4, Type: float
			constexpr auto ContactOffsetMultiplier = 0x68; // Size: 4, Type: float
			constexpr auto MinContactOffset = 0x6c; // Size: 4, Type: float
			constexpr auto MaxContactOffset = 0x70; // Size: 4, Type: float
			constexpr auto bSimulateSkeletalMeshOnDedicatedServer = 0x74; // Size: 1, Type: bool
			constexpr auto DefaultShapeComplexity = 0x75; // Size: 1, Type: enum class ECollisionTraceFlag
			constexpr auto SolverOptions = 0x78; // Size: 104, Type: struct FChaosSolverConfiguration
	}
} 
