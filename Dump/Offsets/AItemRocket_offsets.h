namespace offsets
{
	namespace AItemRocket
	{
			constexpr auto RootSceneComponent = 0x368; // Size: 8, Type: struct USceneComponent*
			constexpr auto BazookaMeshComponent = 0x370; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto RocketMeshComponent = 0x378; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto TailParticleComponent = 0x380; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto CurveDegree = 0x388; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto CurveY = 0x3b0; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto ShootSound = 0x3d8; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto FlySound = 0x400; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto RocketMesh = 0x428; // Size: 40, Type: struct TSoftObjectPtr<USkeletalMesh>
			constexpr auto MissileBeginAttackAsset = 0x450; // Size: 40, Type: struct TSoftObjectPtr<UAnimationAsset>
			constexpr auto MissileShootingAsset = 0x478; // Size: 40, Type: struct TSoftObjectPtr<UAnimationAsset>
			constexpr auto BazookaBody = 0x4a0; // Size: 40, Type: struct TSoftObjectPtr<USkeletalMesh>
			constexpr auto RocketHead = 0x4c8; // Size: 40, Type: struct TSoftObjectPtr<USkeletalMesh>
			constexpr auto Booster = 0x4f0; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto ItemFeedSequence = 0x518; // Size: 40, Type: struct TSoftObjectPtr<ULevelSequence>
			constexpr auto RedAlertWidgetObj = 0x540; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto RocketTotalFlyTime = 0x56c; // Size: 4, Type: float
			constexpr auto ActionDelay = 0x570; // Size: 4, Type: float
			constexpr auto BazookaLifeTime = 0x574; // Size: 4, Type: float
			constexpr auto AuthTarget = 0x578; // Size: 8, Type: struct UItemComponent*
			constexpr auto LocalUser = 0x580; // Size: 8, Type: struct UItemComponent*
	}
} 
