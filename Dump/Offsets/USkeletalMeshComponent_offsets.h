namespace offsets
{
	namespace USkeletalMeshComponent
	{
			constexpr auto AnimBlueprintGeneratedClass = 0x6e0; // Size: 8, Type: UObject*
			constexpr auto AnimClass = 0x6e8; // Size: 8, Type: UAnimInstance*
			constexpr auto AnimScriptInstance = 0x6f0; // Size: 8, Type: struct UAnimInstance*
			constexpr auto PostProcessAnimInstance = 0x6f8; // Size: 8, Type: struct UAnimInstance*
			constexpr auto AnimationData = 0x700; // Size: 24, Type: struct FSingleAnimationPlayData
			constexpr auto RootBoneTranslation = 0x728; // Size: 12, Type: struct FVector
			constexpr auto LineCheckBoundsScale = 0x734; // Size: 12, Type: struct FVector
			constexpr auto LinkedInstances = 0x770; // Size: 16, Type: struct TArray<struct UAnimInstance*>
			constexpr auto CachedBoneSpaceTransforms = 0x780; // Size: 16, Type: struct TArray<struct FTransform>
			constexpr auto CachedComponentSpaceTransforms = 0x790; // Size: 16, Type: struct TArray<struct FTransform>
			constexpr auto GlobalAnimRateScale = 0x8f0; // Size: 4, Type: float
			constexpr auto KinematicBonesUpdateType = 0x8f4; // Size: 1, Type: enum class EKinematicBonesUpdateToPhysics
			constexpr auto PhysicsTransformUpdateMode = 0x8f5; // Size: 1, Type: enum class EPhysicsTransformUpdateMode
			constexpr auto AnimationMode = 0x8f7; // Size: 1, Type: enum class EAnimationMode
			constexpr auto bDisablePostProcessBlueprint = 0x8f9; // Size: 1, Type: char
			constexpr auto bUpdateOverlapsOnAnimationFinalize = 0x8f9; // Size: 1, Type: char
			constexpr auto bHasValidBodies = 0x8f9; // Size: 1, Type: char
			constexpr auto bBlendPhysics = 0x8f9; // Size: 1, Type: char
			constexpr auto bEnablePhysicsOnDedicatedServer = 0x8f9; // Size: 1, Type: char
			constexpr auto bUpdateJointsFromAnimation = 0x8f9; // Size: 1, Type: char
			constexpr auto bDisableClothSimulation = 0x8fa; // Size: 1, Type: char
			constexpr auto bDisableRigidBodyAnimNode = 0x900; // Size: 1, Type: char
			constexpr auto bAllowAnimCurveEvaluation = 0x900; // Size: 1, Type: char
			constexpr auto bDisableAnimCurves = 0x900; // Size: 1, Type: char
			constexpr auto bCollideWithEnvironment = 0x900; // Size: 1, Type: char
			constexpr auto bCollideWithAttachedChildren = 0x901; // Size: 1, Type: char
			constexpr auto bLocalSpaceSimulation = 0x901; // Size: 1, Type: char
			constexpr auto bResetAfterTeleport = 0x901; // Size: 1, Type: char
			constexpr auto bDeferKinematicBoneUpdate = 0x901; // Size: 1, Type: char
			constexpr auto bNoSkeletonUpdate = 0x901; // Size: 1, Type: char
			constexpr auto bPauseAnims = 0x901; // Size: 1, Type: char
			constexpr auto bUseRefPoseOnInitAnim = 0x901; // Size: 1, Type: char
			constexpr auto bEnablePerPolyCollision = 0x902; // Size: 1, Type: char
			constexpr auto bForceRefpose = 0x902; // Size: 1, Type: char
			constexpr auto bOnlyAllowAutonomousTickPose = 0x902; // Size: 1, Type: char
			constexpr auto bIsAutonomousTickPose = 0x902; // Size: 1, Type: char
			constexpr auto bOldForceRefPose = 0x902; // Size: 1, Type: char
			constexpr auto bShowPrePhysBones = 0x902; // Size: 1, Type: char
			constexpr auto bRequiredBonesUpToDate = 0x902; // Size: 1, Type: char
			constexpr auto bAnimTreeInitialised = 0x902; // Size: 1, Type: char
			constexpr auto bIncludeComponentLocationIntoBounds = 0x903; // Size: 1, Type: char
			constexpr auto bEnableLineCheckWithBounds = 0x903; // Size: 1, Type: char
			constexpr auto bPropagateCurvesToSlaves = 0x903; // Size: 1, Type: char
			constexpr auto bSkipKinematicUpdateWhenInterpolating = 0x903; // Size: 1, Type: char
			constexpr auto bSkipBoundsUpdateWhenInterpolating = 0x903; // Size: 1, Type: char
			constexpr auto bNeedsQueuedAnimEventsDispatched = 0x903; // Size: 1, Type: char
			constexpr auto CachedAnimCurveUidVersion = 0x906; // Size: 2, Type: uint16_t
			constexpr auto ClothBlendWeight = 0x908; // Size: 4, Type: float
			constexpr auto bWaitForParallelClothTask = 0x90c; // Size: 1, Type: bool
			constexpr auto DisallowedAnimCurves = 0x910; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto BodySetup = 0x920; // Size: 8, Type: struct UBodySetup*
			constexpr auto OnConstraintBroken = 0x930; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ClothingSimulationFactory = 0x940; // Size: 8, Type: UClothingSimulationFactory*
			constexpr auto TeleportDistanceThreshold = 0xa18; // Size: 4, Type: float
			constexpr auto TeleportRotationThreshold = 0xa1c; // Size: 4, Type: float
			constexpr auto LastPoseTickFrame = 0xa28; // Size: 4, Type: uint32_t
			constexpr auto ClothingInteractor = 0xa80; // Size: 8, Type: struct UClothingSimulationInteractor*
			constexpr auto OnAnimInitialized = 0xb50; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
