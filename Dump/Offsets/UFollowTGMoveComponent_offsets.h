namespace offsets
{
	namespace UFollowTGMoveComponent
	{
			constexpr auto Movement = 0xb8; // Size: 8, Type: struct UKartMovementComponent*
			constexpr auto ItemComponent = 0xc0; // Size: 8, Type: struct UItemComponent*
			constexpr auto ManageComponent = 0x130; // Size: 8, Type: struct UAIManageComponent*
			constexpr auto SplineIndex = 0x138; // Size: 4, Type: int32_t
			constexpr auto bUseSubPath = 0x13c; // Size: 1, Type: bool
			constexpr auto LastPathChangeTime = 0x140; // Size: 4, Type: float
			constexpr auto LastKartCrashTime = 0x144; // Size: 4, Type: float
	}
} 
