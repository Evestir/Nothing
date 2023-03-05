namespace offsets
{
	namespace UDamageType
	{
			constexpr auto bCausedByWorld = 0x28; // Size: 1, Type: char
			constexpr auto bScaleMomentumByMass = 0x28; // Size: 1, Type: char
			constexpr auto bRadialDamageVelChange = 0x28; // Size: 1, Type: char
			constexpr auto DamageImpulse = 0x2c; // Size: 4, Type: float
			constexpr auto DestructibleImpulse = 0x30; // Size: 4, Type: float
			constexpr auto DestructibleDamageSpreadScale = 0x34; // Size: 4, Type: float
			constexpr auto DamageFalloff = 0x38; // Size: 4, Type: float
	}
} 
