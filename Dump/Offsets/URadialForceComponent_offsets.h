namespace offsets
{
	namespace URadialForceComponent
	{
			constexpr auto Radius = 0x208; // Size: 4, Type: float
			constexpr auto Falloff = 0x20c; // Size: 1, Type: enum class ERadialImpulseFalloff
			constexpr auto ImpulseStrength = 0x210; // Size: 4, Type: float
			constexpr auto bImpulseVelChange = 0x214; // Size: 1, Type: char
			constexpr auto bIgnoreOwningActor = 0x214; // Size: 1, Type: char
			constexpr auto ForceStrength = 0x218; // Size: 4, Type: float
			constexpr auto DestructibleDamage = 0x21c; // Size: 4, Type: float
			constexpr auto ObjectTypesToAffect = 0x220; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
	}
} 
