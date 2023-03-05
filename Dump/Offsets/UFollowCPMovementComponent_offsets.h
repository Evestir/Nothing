namespace offsets
{
	namespace UFollowCPMovementComponent
	{
			constexpr auto DestLocation = 0xb0; // Size: 12, Type: struct FVector
			constexpr auto StartLocation = 0xbc; // Size: 12, Type: struct FVector
			constexpr auto Distance = 0xc8; // Size: 4, Type: float
			constexpr auto Speed = 0xcc; // Size: 4, Type: float
			constexpr auto Index = 0xd0; // Size: 4, Type: float
			constexpr auto Offset = 0xd4; // Size: 4, Type: float
			constexpr auto LerpAlpha = 0xd8; // Size: 4, Type: float
			constexpr auto IsSetting = 0xdc; // Size: 1, Type: bool
			constexpr auto bSmoothMovement = 0xdd; // Size: 1, Type: bool
			constexpr auto NextCP = 0xe0; // Size: 8, Type: struct ACheckPoint*
			constexpr auto SplineGuide = 0xe8; // Size: 8, Type: struct USplineComponent*
			constexpr auto TargetDir = 0xf0; // Size: 12, Type: struct FVector
			constexpr auto MinDistance = 0xfc; // Size: 4, Type: float
			constexpr auto MaxDistance = 0x100; // Size: 4, Type: float
			constexpr auto SpeedModifier = 0x104; // Size: 4, Type: float
			constexpr auto AvoidModifier = 0x108; // Size: 4, Type: float
			constexpr auto UserActor = 0x110; // Size: 8, Type: struct AActor*
			constexpr auto ID = 0x118; // Size: 4, Type: int32_t
			constexpr auto SpeedModifierByRank = 0x11c; // Size: 4, Type: float
	}
} 
