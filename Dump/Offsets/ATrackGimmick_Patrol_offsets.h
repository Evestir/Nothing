namespace offsets
{
	namespace ATrackGimmick_Patrol
	{
			constexpr auto IdleAnim = 0x2b8; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto ActivateAnim = 0x2c0; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto TimeCurve = 0x2c8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto TimeCurveOffset = 0x2d0; // Size: 4, Type: float
			constexpr auto LocationLerpAlpha = 0x2d4; // Size: 4, Type: float
			constexpr auto RotationType = 0x2d8; // Size: 1, Type: enum class EPatrolRotationType
			constexpr auto RotationOffset = 0x2dc; // Size: 4, Type: float
			constexpr auto RotationLerpAlpha = 0x2e0; // Size: 4, Type: float
			constexpr auto RotationCurve = 0x2e8; // Size: 8, Type: struct UCurveVector*
			constexpr auto ChildMesh = 0x2f0; // Size: 8, Type: struct USkeletalMesh*
			constexpr auto ChildMeshAnim = 0x2f8; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto ChildMeshTransform = 0x300; // Size: 48, Type: struct FTransform
			constexpr auto Radius = 0x330; // Size: 4, Type: float
			constexpr auto ReactionClass = 0x338; // Size: 8, Type: USceneComponent*
			constexpr auto SpawnItemType = 0x340; // Size: 1, Type: enum class EItemType
			constexpr auto DisableTime = 0x344; // Size: 4, Type: float
			constexpr auto SplineComponent = 0x398; // Size: 8, Type: struct USplineComponent*
			constexpr auto ChildMeshComponent = 0x3a0; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto GimmickItemComponent = 0x3a8; // Size: 8, Type: struct UItemComponent*
			constexpr auto LastAffectTime = 0x3b0; // Size: 4, Type: float
	}
} 
