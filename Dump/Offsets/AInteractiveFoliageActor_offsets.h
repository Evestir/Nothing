namespace offsets
{
	namespace AInteractiveFoliageActor
	{
			constexpr auto CapsuleComponent = 0x230; // Size: 8, Type: struct UCapsuleComponent*
			constexpr auto TouchingActorEntryPosition = 0x238; // Size: 12, Type: struct FVector
			constexpr auto FoliageVelocity = 0x244; // Size: 12, Type: struct FVector
			constexpr auto FoliageForce = 0x250; // Size: 12, Type: struct FVector
			constexpr auto FoliagePosition = 0x25c; // Size: 12, Type: struct FVector
			constexpr auto FoliageDamageImpulseScale = 0x268; // Size: 4, Type: float
			constexpr auto FoliageTouchImpulseScale = 0x26c; // Size: 4, Type: float
			constexpr auto FoliageStiffness = 0x270; // Size: 4, Type: float
			constexpr auto FoliageStiffnessQuadratic = 0x274; // Size: 4, Type: float
			constexpr auto FoliageDamping = 0x278; // Size: 4, Type: float
			constexpr auto MaxDamageImpulse = 0x27c; // Size: 4, Type: float
			constexpr auto MaxTouchImpulse = 0x280; // Size: 4, Type: float
			constexpr auto MaxForce = 0x284; // Size: 4, Type: float
			constexpr auto Mass = 0x288; // Size: 4, Type: float
	}
} 
