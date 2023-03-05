namespace offsets
{
	namespace UPhysicsSettings
	{
			constexpr auto PhysicErrorCorrection = 0xe0; // Size: 52, Type: struct FRigidBodyErrorCorrection
			constexpr auto LockedAxis = 0x114; // Size: 1, Type: enum class ESettingsLockedAxis
			constexpr auto DefaultDegreesOfFreedom = 0x115; // Size: 1, Type: enum class ESettingsDOF
			constexpr auto bSuppressFaceRemapTable = 0x116; // Size: 1, Type: bool
			constexpr auto bSupportUVFromHitResults = 0x117; // Size: 1, Type: bool
			constexpr auto bDisableActiveActors = 0x118; // Size: 1, Type: bool
			constexpr auto bDisableKinematicStaticPairs = 0x119; // Size: 1, Type: bool
			constexpr auto bDisableKinematicKinematicPairs = 0x11a; // Size: 1, Type: bool
			constexpr auto bDisableCCD = 0x11b; // Size: 1, Type: bool
			constexpr auto bEnableEnhancedDeterminism = 0x11c; // Size: 1, Type: bool
			constexpr auto AnimPhysicsMinDeltaTime = 0x120; // Size: 4, Type: float
			constexpr auto bSimulateAnimPhysicsAfterReset = 0x124; // Size: 1, Type: bool
			constexpr auto MaxPhysicsDeltaTime = 0x128; // Size: 4, Type: float
			constexpr auto bSubstepping = 0x12c; // Size: 1, Type: bool
			constexpr auto bSubsteppingAsync = 0x12d; // Size: 1, Type: bool
			constexpr auto MaxSubstepDeltaTime = 0x130; // Size: 4, Type: float
			constexpr auto MaxSubsteps = 0x134; // Size: 4, Type: int32_t
			constexpr auto SyncSceneSmoothingFactor = 0x138; // Size: 4, Type: float
			constexpr auto InitialAverageFrameRate = 0x13c; // Size: 4, Type: float
			constexpr auto PhysXTreeRebuildRate = 0x140; // Size: 4, Type: int32_t
			constexpr auto PhysicalSurfaces = 0x148; // Size: 16, Type: struct TArray<struct FPhysicalSurfaceName>
			constexpr auto DefaultBroadphaseSettings = 0x158; // Size: 64, Type: struct FBroadphaseSettings
			constexpr auto MinDeltaVelocityForHitEvents = 0x198; // Size: 4, Type: float
			constexpr auto ChaosSettings = 0x19c; // Size: 3, Type: struct FChaosPhysicsSettings
	}
} 
