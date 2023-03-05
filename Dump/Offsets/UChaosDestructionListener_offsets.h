namespace offsets
{
	namespace UChaosDestructionListener
	{
			constexpr auto bIsCollisionEventListeningEnabled = 0x208; // Size: 1, Type: char
			constexpr auto bIsBreakingEventListeningEnabled = 0x208; // Size: 1, Type: char
			constexpr auto bIsTrailingEventListeningEnabled = 0x208; // Size: 1, Type: char
			constexpr auto CollisionEventRequestSettings = 0x20c; // Size: 24, Type: struct FChaosCollisionEventRequestSettings
			constexpr auto BreakingEventRequestSettings = 0x224; // Size: 24, Type: struct FChaosBreakingEventRequestSettings
			constexpr auto TrailingEventRequestSettings = 0x23c; // Size: 24, Type: struct FChaosTrailingEventRequestSettings
			constexpr auto ChaosSolverActors = 0x258; // Size: 80, Type: struct TSet<struct AChaosSolverActor*>
			constexpr auto GeometryCollectionActors = 0x2a8; // Size: 80, Type: struct TSet<struct AGeometryCollectionActor*>
			constexpr auto OnCollisionEvents = 0x2f8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnBreakingEvents = 0x308; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTrailingEvents = 0x318; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
