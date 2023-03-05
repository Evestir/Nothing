namespace offsets
{
	namespace UGameplayTasksComponent
	{
			constexpr auto bIsNetDirty = 0xbc; // Size: 1, Type: char
			constexpr auto SimulatedTasks = 0xc0; // Size: 16, Type: struct TArray<struct UGameplayTask*>
			constexpr auto TaskPriorityQueue = 0xd0; // Size: 16, Type: struct TArray<struct UGameplayTask*>
			constexpr auto TickingTasks = 0xf0; // Size: 16, Type: struct TArray<struct UGameplayTask*>
			constexpr auto KnownTasks = 0x100; // Size: 16, Type: struct TArray<struct UGameplayTask*>
			constexpr auto OnClaimedResourcesChange = 0x110; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
