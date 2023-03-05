namespace offsets
{
	namespace USkeletalMesh
	{
			constexpr auto Skeleton = 0x80; // Size: 8, Type: struct USkeleton*
			constexpr auto ImportedBounds = 0x88; // Size: 28, Type: struct FBoxSphereBounds
			constexpr auto ExtendedBounds = 0xa4; // Size: 28, Type: struct FBoxSphereBounds
			constexpr auto PositiveBoundsExtension = 0xc0; // Size: 12, Type: struct FVector
			constexpr auto NegativeBoundsExtension = 0xcc; // Size: 12, Type: struct FVector
			constexpr auto Materials = 0xd8; // Size: 16, Type: struct TArray<struct FSkeletalMaterial>
			constexpr auto SkelMirrorTable = 0xe8; // Size: 16, Type: struct TArray<struct FBoneMirrorInfo>
			constexpr auto LODInfo = 0xf8; // Size: 16, Type: struct TArray<struct FSkeletalMeshLODInfo>
			constexpr auto MinLOD = 0x158; // Size: 4, Type: struct FPerPlatformInt
			constexpr auto DisableBelowMinLodStripping = 0x15c; // Size: 1, Type: struct FPerPlatformBool
			constexpr auto SkelMirrorAxis = 0x15d; // Size: 1, Type: enum class EAxis
			constexpr auto SkelMirrorFlipAxis = 0x15e; // Size: 1, Type: enum class EAxis
			constexpr auto bUseFullPrecisionUVs = 0x15f; // Size: 1, Type: char
			constexpr auto bUseHighPrecisionTangentBasis = 0x15f; // Size: 1, Type: char
			constexpr auto bHasBeenSimplified = 0x15f; // Size: 1, Type: char
			constexpr auto bHasVertexColors = 0x15f; // Size: 1, Type: char
			constexpr auto bEnablePerPolyCollision = 0x15f; // Size: 1, Type: char
			constexpr auto bIgnorePhysicsAssetBounds = 0x15f; // Size: 1, Type: char
			constexpr auto BodySetup = 0x160; // Size: 8, Type: struct UBodySetup*
			constexpr auto PhysicsAsset = 0x168; // Size: 8, Type: struct UPhysicsAsset*
			constexpr auto ShadowPhysicsAsset = 0x170; // Size: 8, Type: struct UPhysicsAsset*
			constexpr auto NodeMappingData = 0x178; // Size: 16, Type: struct TArray<struct UNodeMappingContainer*>
			constexpr auto bSupportRayTracing = 0x188; // Size: 1, Type: char
			constexpr auto MorphTargets = 0x190; // Size: 16, Type: struct TArray<struct UMorphTarget*>
			constexpr auto PostProcessAnimBlueprint = 0x318; // Size: 8, Type: UAnimInstance*
			constexpr auto MeshClothingAssets = 0x320; // Size: 16, Type: struct TArray<struct UClothingAssetBase*>
			constexpr auto SamplingInfo = 0x330; // Size: 48, Type: struct FSkeletalMeshSamplingInfo
			constexpr auto AssetUserData = 0x360; // Size: 16, Type: struct TArray<struct UAssetUserData*>
			constexpr auto Sockets = 0x370; // Size: 16, Type: struct TArray<struct USkeletalMeshSocket*>
			constexpr auto SkinWeightProfiles = 0x390; // Size: 16, Type: struct TArray<struct FSkinWeightProfileInfo>
	}
} 
