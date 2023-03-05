namespace offsets
{
	namespace UArchVisCharMovementComponent
	{
			constexpr auto RotationalAcceleration = 0xaf0; // Size: 12, Type: struct FRotator
			constexpr auto RotationalDeceleration = 0xafc; // Size: 12, Type: struct FRotator
			constexpr auto MaxRotationalVelocity = 0xb08; // Size: 12, Type: struct FRotator
			constexpr auto MinPitch = 0xb14; // Size: 4, Type: float
			constexpr auto MaxPitch = 0xb18; // Size: 4, Type: float
			constexpr auto WalkingFriction = 0xb1c; // Size: 4, Type: float
			constexpr auto WalkingSpeed = 0xb20; // Size: 4, Type: float
			constexpr auto WalkingAcceleration = 0xb24; // Size: 4, Type: float
	}
} 
