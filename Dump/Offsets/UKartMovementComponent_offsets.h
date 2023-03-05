namespace offsets
{
	namespace UKartMovementComponent
	{
			constexpr auto SpecModifier = 0x258; // Size: 8, Type: struct USpecModifier*
			constexpr auto Kart_InertiaTensor = 0x260; // Size: 12, Type: struct FVector
			constexpr auto Kart_Mass = 0x26c; // Size: 4, Type: float
			constexpr auto AccumForceCount = 0x358; // Size: 4, Type: int32_t
			constexpr auto HitAccumStartTime = 0x35c; // Size: 4, Type: float
			constexpr auto bLastCollision = 0x360; // Size: 1, Type: bool
			constexpr auto LastUpdateCollisionTime = 0x364; // Size: 4, Type: float
			constexpr auto KartSteeringExperimental = 0x6f0; // Size: 568, Type: struct FKartSteeringExperimental
			constexpr auto Buffs = 0xb38; // Size: 16, Type: struct FKartMovementBuffArray
			constexpr auto SurfaceInContact = 0xc90; // Size: 8, Type: struct UPhysicalMaterial*
			constexpr auto AssistPhysMaterial = 0xca0; // Size: 8, Type: struct UPhysicalMaterial*
	}
} 
