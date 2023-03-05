namespace offsets
{
	namespace UAngelReaction
	{
			constexpr auto MeshSkeletalComponent = 0x218; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto StartEffectComponent = 0x220; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto ActivateEffectComponent = 0x228; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto AffectSound = 0x230; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto StartEffect = 0x258; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto EndEffect = 0x280; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto UseEffect = 0x2a8; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto DefendedEffect = 0x2d0; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto AngelMontage = 0x2f8; // Size: 40, Type: struct TSoftObjectPtr<UAnimMontage>
			constexpr auto AngelMesh = 0x320; // Size: 40, Type: struct TSoftObjectPtr<USkeletalMesh>
			constexpr auto LocalVictim = 0x348; // Size: 8, Type: struct UItemComponent*
			constexpr auto Montage = 0x350; // Size: 8, Type: struct UAnimMontage*
	}
} 
