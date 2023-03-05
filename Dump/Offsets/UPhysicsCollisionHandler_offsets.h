namespace offsets
{
	namespace UPhysicsCollisionHandler
	{
			constexpr auto ImpactThreshold = 0x28; // Size: 4, Type: float
			constexpr auto ImpactReFireDelay = 0x2c; // Size: 4, Type: float
			constexpr auto DefaultImpactSound = 0x30; // Size: 8, Type: struct USoundBase*
			constexpr auto LastImpactSoundTime = 0x38; // Size: 4, Type: float
	}
} 
