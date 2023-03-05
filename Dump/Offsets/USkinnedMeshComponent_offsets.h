namespace offsets
{
	namespace USkinnedMeshComponent
	{
			constexpr auto SkeletalMesh = 0x4b0; // Size: 8, Type: struct USkeletalMesh*
			constexpr auto MasterPoseComponent = 0x4b8; // Size: 8, Type: struct TWeakObjectPtr<USkinnedMeshComponent>
			constexpr auto SkinCacheUsage = 0x4c0; // Size: 16, Type: struct TArray<enum class ESkinCacheUsage>
			constexpr auto VertexOffsetUsage = 0x4d0; // Size: 16, Type: struct TArray<struct FVertexOffsetUsage>
			constexpr auto PhysicsAssetOverride = 0x5d8; // Size: 8, Type: struct UPhysicsAsset*
			constexpr auto ForcedLodModel = 0x5e0; // Size: 4, Type: int32_t
			constexpr auto MinLodModel = 0x5e4; // Size: 4, Type: int32_t
			constexpr auto StreamingDistanceMultiplier = 0x5f0; // Size: 4, Type: float
			constexpr auto LODInfo = 0x600; // Size: 16, Type: struct TArray<struct FSkelMeshComponentLODInfo>
			constexpr auto VisibilityBasedAnimTickOption = 0x634; // Size: 1, Type: enum class EVisibilityBasedAnimTickOption
			constexpr auto bOverrideMinLod = 0x636; // Size: 1, Type: char
			constexpr auto bUseBoundsFromMasterPoseComponent = 0x636; // Size: 1, Type: char
			constexpr auto bForceWireframe = 0x636; // Size: 1, Type: char
			constexpr auto bDisplayBones = 0x636; // Size: 1, Type: char
			constexpr auto bDisableMorphTarget = 0x636; // Size: 1, Type: char
			constexpr auto bHideSkin = 0x637; // Size: 1, Type: char
			constexpr auto bPerBoneMotionBlur = 0x637; // Size: 1, Type: char
			constexpr auto bComponentUseFixedSkelBounds = 0x637; // Size: 1, Type: char
			constexpr auto bConsiderAllBodiesForBounds = 0x637; // Size: 1, Type: char
			constexpr auto bSyncAttachParentLOD = 0x637; // Size: 1, Type: char
			constexpr auto bCanHighlightSelectedSections = 0x637; // Size: 1, Type: char
			constexpr auto bRecentlyRendered = 0x637; // Size: 1, Type: char
			constexpr auto bCastCapsuleDirectShadow = 0x637; // Size: 1, Type: char
			constexpr auto bCastCapsuleIndirectShadow = 0x638; // Size: 1, Type: char
			constexpr auto bCPUSkinning = 0x638; // Size: 1, Type: char
			constexpr auto bEnableUpdateRateOptimizations = 0x638; // Size: 1, Type: char
			constexpr auto bDisplayDebugUpdateRateOptimizations = 0x638; // Size: 1, Type: char
			constexpr auto bRenderStatic = 0x638; // Size: 1, Type: char
			constexpr auto bNoSkinning = 0x638; // Size: 1, Type: char
			constexpr auto bPrepareSkinSnapshot = 0x638; // Size: 1, Type: char
			constexpr auto bUseSkinSnapshot = 0x638; // Size: 1, Type: char
			constexpr auto bIgnoreMasterPoseComponentLOD = 0x639; // Size: 1, Type: char
			constexpr auto bCachedLocalBoundsUpToDate = 0x639; // Size: 1, Type: char
			constexpr auto bSkinSnapshotDirty = 0x639; // Size: 1, Type: char
			constexpr auto bForceMeshObjectUpdate = 0x639; // Size: 1, Type: char
			constexpr auto CapsuleIndirectShadowMinVisibility = 0x63c; // Size: 4, Type: float
			constexpr auto CachedWorldSpaceBounds = 0x65c; // Size: 28, Type: struct FBoxSphereBounds
			constexpr auto CachedWorldToLocalTransform = 0x680; // Size: 64, Type: struct FMatrix
	}
} 
