namespace offsets
{
	namespace UPhysicsSpringComponent
	{
			constexpr auto SpringStiffness = 0x208; // Size: 4, Type: float
			constexpr auto SpringDamping = 0x20c; // Size: 4, Type: float
			constexpr auto SpringLengthAtRest = 0x210; // Size: 4, Type: float
			constexpr auto SpringRadius = 0x214; // Size: 4, Type: float
			constexpr auto SpringChannel = 0x218; // Size: 1, Type: enum class ECollisionChannel
			constexpr auto bIgnoreSelf = 0x219; // Size: 1, Type: bool
			constexpr auto SpringCompression = 0x21c; // Size: 4, Type: float
	}
} 
