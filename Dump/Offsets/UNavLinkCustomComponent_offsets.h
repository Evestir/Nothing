namespace offsets
{
	namespace UNavLinkCustomComponent
	{
			constexpr auto NavLinkUserId = 0xe8; // Size: 4, Type: uint32_t
			constexpr auto EnabledAreaClass = 0xf0; // Size: 8, Type: UNavArea*
			constexpr auto DisabledAreaClass = 0xf8; // Size: 8, Type: UNavArea*
			constexpr auto SupportedAgents = 0x100; // Size: 4, Type: struct FNavAgentSelector
			constexpr auto LinkRelativeStart = 0x104; // Size: 12, Type: struct FVector
			constexpr auto LinkRelativeEnd = 0x110; // Size: 12, Type: struct FVector
			constexpr auto LinkDirection = 0x11c; // Size: 1, Type: enum class ENavLinkDirection
			constexpr auto bLinkEnabled = 0x120; // Size: 1, Type: char
			constexpr auto bNotifyWhenEnabled = 0x120; // Size: 1, Type: char
			constexpr auto bNotifyWhenDisabled = 0x120; // Size: 1, Type: char
			constexpr auto bCreateBoxObstacle = 0x120; // Size: 1, Type: char
			constexpr auto ObstacleOffset = 0x124; // Size: 12, Type: struct FVector
			constexpr auto ObstacleExtent = 0x130; // Size: 12, Type: struct FVector
			constexpr auto ObstacleAreaClass = 0x140; // Size: 8, Type: UNavArea*
			constexpr auto BroadcastRadius = 0x148; // Size: 4, Type: float
			constexpr auto BroadcastInterval = 0x14c; // Size: 4, Type: float
			constexpr auto BroadcastChannel = 0x150; // Size: 1, Type: enum class ECollisionChannel
	}
} 
