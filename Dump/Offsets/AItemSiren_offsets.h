namespace offsets
{
	namespace AItemSiren
	{
			constexpr auto SirenSkeletalMeshComponent = 0x358; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto SirenSphereComponent = 0x360; // Size: 8, Type: struct USphereComponent*
			constexpr auto SirenAudioComponent = 0x368; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto SirenEffectComponent = 0x370; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto SirenEffectAsset = 0x378; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystemComponent>
			constexpr auto FiringSound = 0x3a0; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto SirenCurve = 0x3c8; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto SirenMesh = 0x3f0; // Size: 40, Type: struct TSoftObjectPtr<USkeletalMesh>
			constexpr auto SirenAnim = 0x418; // Size: 40, Type: struct TSoftObjectPtr<UAnimSequence>
			constexpr auto LocalUser = 0x440; // Size: 8, Type: struct UItemComponent*
	}
} 
