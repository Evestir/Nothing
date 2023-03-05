namespace offsets
{
	namespace UAnimMontage
	{
			constexpr auto BlendIn = 0xa8; // Size: 48, Type: struct FAlphaBlend
			constexpr auto BlendInTime = 0xd8; // Size: 4, Type: float
			constexpr auto BlendOut = 0xe0; // Size: 48, Type: struct FAlphaBlend
			constexpr auto BlendOutTime = 0x110; // Size: 4, Type: float
			constexpr auto BlendOutTriggerTime = 0x114; // Size: 4, Type: float
			constexpr auto SyncGroup = 0x118; // Size: 8, Type: struct FName
			constexpr auto SyncSlotIndex = 0x120; // Size: 4, Type: int32_t
			constexpr auto MarkerData = 0x128; // Size: 32, Type: struct FMarkerSyncData
			constexpr auto CompositeSections = 0x148; // Size: 16, Type: struct TArray<struct FCompositeSection>
			constexpr auto SlotAnimTracks = 0x158; // Size: 16, Type: struct TArray<struct FSlotAnimationTrack>
			constexpr auto BranchingPoints = 0x168; // Size: 16, Type: struct TArray<struct FBranchingPoint>
			constexpr auto bEnableRootMotionTranslation = 0x178; // Size: 1, Type: bool
			constexpr auto bEnableRootMotionRotation = 0x179; // Size: 1, Type: bool
			constexpr auto bEnableAutoBlendOut = 0x17a; // Size: 1, Type: bool
			constexpr auto RootMotionRootLock = 0x17b; // Size: 1, Type: enum class ERootMotionRootLock
			constexpr auto BranchingPointMarkers = 0x180; // Size: 16, Type: struct TArray<struct FBranchingPointMarker>
			constexpr auto BranchingPointStateNotifyIndices = 0x190; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto TimeStretchCurve = 0x1a0; // Size: 40, Type: struct FTimeStretchCurve
			constexpr auto TimeStretchCurveName = 0x1c8; // Size: 8, Type: struct FName
	}
} 
