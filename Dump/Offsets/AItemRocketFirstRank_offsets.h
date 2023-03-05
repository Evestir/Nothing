namespace offsets
{
	namespace AItemRocketFirstRank
	{
			constexpr auto RootSceneComponent = 0x360; // Size: 8, Type: struct USceneComponent*
			constexpr auto BazookaMeshComponent = 0x368; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto RocketMeshComponent = 0x370; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto TailParticleComponent = 0x378; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto CurveDegree = 0x380; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto CurveY = 0x3a8; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto ShootSound = 0x3d0; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto FlySound = 0x3f8; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto RocketMesh = 0x420; // Size: 40, Type: struct TSoftObjectPtr<USkeletalMesh>
			constexpr auto MissileBeginAttackAsset = 0x448; // Size: 40, Type: struct TSoftObjectPtr<UAnimationAsset>
			constexpr auto MissileShootingAsset = 0x470; // Size: 40, Type: struct TSoftObjectPtr<UAnimationAsset>
			constexpr auto BazookaBody = 0x498; // Size: 40, Type: struct TSoftObjectPtr<USkeletalMesh>
			constexpr auto RocketHead = 0x4c0; // Size: 40, Type: struct TSoftObjectPtr<USkeletalMesh>
			constexpr auto Booster = 0x4e8; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto ItemFeedSequence = 0x510; // Size: 40, Type: struct TSoftObjectPtr<ULevelSequence>
			constexpr auto RedAlertWidgetObj = 0x538; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto RocketTotalFlyTime = 0x564; // Size: 4, Type: float
			constexpr auto ActionDelay = 0x568; // Size: 4, Type: float
			constexpr auto BazookaLifeTime = 0x56c; // Size: 4, Type: float
			constexpr auto AuthVictim = 0x578; // Size: 8, Type: struct UItemComponent*
			constexpr auto LocalTargetActor = 0x580; // Size: 8, Type: struct AActor*
	}
} 
