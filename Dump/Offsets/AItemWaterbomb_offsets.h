namespace offsets
{
	namespace AItemWaterbomb
	{
			constexpr auto OverlapComponent = 0x358; // Size: 8, Type: struct USphereComponent*
			constexpr auto ExplodeEffectComponent = 0x360; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto UseEffectComponent = 0x368; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto WaterbombMeshComponent = 0x370; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto WaterbombMesh = 0x378; // Size: 40, Type: struct TSoftObjectPtr<USkeletalMesh>
			constexpr auto WaterBombParticle = 0x3a0; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto UseEffectAsset = 0x3c8; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto ShootSound = 0x3f0; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto ExplodeSound = 0x418; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto CurveAxisZAsset = 0x440; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto ScaleCurveAsset = 0x468; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto Dummy_Bullet = 0x490; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto ItemFeedSequence = 0x4b8; // Size: 40, Type: struct TSoftObjectPtr<ULevelSequence>
			constexpr auto AffectCurve = 0x4e8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto ScaleCurve = 0x4f0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto LocalUser = 0x538; // Size: 8, Type: struct UItemComponent*
			constexpr auto AffectActor = 0x540; // Size: 16, Type: struct TArray<struct AActor*>
	}
} 
