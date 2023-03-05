namespace offsets
{
	namespace UAnimSequence
	{
			constexpr auto NumFrames = 0xa8; // Size: 4, Type: int32_t
			constexpr auto TrackToSkeletonMapTable = 0xb0; // Size: 16, Type: struct TArray<struct FTrackToSkeletonMap>
			constexpr auto BoneCompressionSettings = 0xd0; // Size: 8, Type: struct UAnimBoneCompressionSettings*
			constexpr auto CurveCompressionSettings = 0xd8; // Size: 8, Type: struct UAnimCurveCompressionSettings*
			constexpr auto AdditiveAnimType = 0x150; // Size: 1, Type: enum class EAdditiveAnimationType
			constexpr auto RefPoseType = 0x151; // Size: 1, Type: enum class EAdditiveBasePoseType
			constexpr auto RefPoseSeq = 0x158; // Size: 8, Type: struct UAnimSequence*
			constexpr auto RefFrameIndex = 0x160; // Size: 4, Type: int32_t
			constexpr auto RetargetSource = 0x164; // Size: 8, Type: struct FName
			constexpr auto RetargetSourceAssetReferencePose = 0x170; // Size: 16, Type: struct TArray<struct FTransform>
			constexpr auto Interpolation = 0x180; // Size: 1, Type: enum class EAnimInterpolationType
			constexpr auto bEnableRootMotion = 0x181; // Size: 1, Type: bool
			constexpr auto RootMotionRootLock = 0x182; // Size: 1, Type: enum class ERootMotionRootLock
			constexpr auto bForceRootLock = 0x183; // Size: 1, Type: bool
			constexpr auto bUseNormalizedRootMotionScale = 0x184; // Size: 1, Type: bool
			constexpr auto bRootMotionSettingsCopiedFromMontage = 0x185; // Size: 1, Type: bool
			constexpr auto AuthoredSyncMarkers = 0x188; // Size: 16, Type: struct TArray<struct FAnimSyncMarker>
			constexpr auto BakedPerBoneCustomAttributeData = 0x1b0; // Size: 16, Type: struct TArray<struct FBakedCustomAttributePerBoneData>
	}
} 
