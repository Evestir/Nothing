namespace offsets
{
	namespace AItemShield
	{
			constexpr auto UseShieldEffectComponent = 0x360; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto DefenseEffectComponent = 0x368; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto Target = 0x370; // Size: 8, Type: struct UItemComponent*
			constexpr auto FiringFx = 0x378; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto UsingFx = 0x3a0; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto UseShieldEffectPath = 0x3c8; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto DefenseEffectPath = 0x3f0; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
	}
} 
