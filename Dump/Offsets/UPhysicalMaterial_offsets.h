namespace offsets
{
	namespace UPhysicalMaterial
	{
			constexpr auto Friction = 0x28; // Size: 4, Type: float
			constexpr auto StaticFriction = 0x2c; // Size: 4, Type: float
			constexpr auto FrictionCombineMode = 0x30; // Size: 1, Type: enum class EFrictionCombineMode
			constexpr auto bOverrideFrictionCombineMode = 0x31; // Size: 1, Type: bool
			constexpr auto Restitution = 0x34; // Size: 4, Type: float
			constexpr auto RestitutionCombineMode = 0x38; // Size: 1, Type: enum class EFrictionCombineMode
			constexpr auto bOverrideRestitutionCombineMode = 0x39; // Size: 1, Type: bool
			constexpr auto Density = 0x3c; // Size: 4, Type: float
			constexpr auto SleepLinearVelocityThreshold = 0x40; // Size: 4, Type: float
			constexpr auto SleepAngularVelocityThreshold = 0x44; // Size: 4, Type: float
			constexpr auto SleepCounterThreshold = 0x48; // Size: 4, Type: int32_t
			constexpr auto RaiseMassToPower = 0x4c; // Size: 4, Type: float
			constexpr auto DestructibleDamageThresholdScale = 0x50; // Size: 4, Type: float
			constexpr auto PhysicalMaterialProperty = 0x58; // Size: 8, Type: struct UPhysicalMaterialPropertyBase*
			constexpr auto SurfaceType = 0x60; // Size: 1, Type: enum class EPhysicalSurface
	}
} 
