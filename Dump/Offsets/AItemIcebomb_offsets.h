namespace offsets
{
	namespace AItemIcebomb
	{
			constexpr auto OverlapComponent = 0x358; // Size: 8, Type: struct USphereComponent*
			constexpr auto ExplodeEffectComponent = 0x360; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto UseEffectComponent = 0x368; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto IcebombMeshComponent = 0x370; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto IcebombMesh = 0x378; // Size: 40, Type: struct TSoftObjectPtr<USkeletalMesh>
			constexpr auto IcebombParticle = 0x3a0; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto UseEffectAsset = 0x3c8; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto ShootSound = 0x3f0; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto ExplodeSound = 0x418; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto CurveAxisZAsset = 0x440; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto ScaleCurveAsset = 0x468; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto IcebombDecal = 0x490; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto Dummy_Bullet = 0x4b8; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto ItemFeedSequence = 0x4e0; // Size: 40, Type: struct TSoftObjectPtr<ULevelSequence>
			constexpr auto AffectCurve = 0x510; // Size: 8, Type: struct UCurveFloat*
			constexpr auto ScaleCurve = 0x518; // Size: 8, Type: struct UCurveFloat*
	}
} 
