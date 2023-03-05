namespace offsets
{
	namespace UApplicationLifecycleComponent
	{
			constexpr auto ApplicationWillDeactivateDelegate = 0xb0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ApplicationHasReactivatedDelegate = 0xc0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ApplicationWillEnterBackgroundDelegate = 0xd0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ApplicationHasEnteredForegroundDelegate = 0xe0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ApplicationWillTerminateDelegate = 0xf0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ApplicationShouldUnloadResourcesDelegate = 0x100; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ApplicationReceivedStartupArgumentsDelegate = 0x110; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTemperatureChangeDelegate = 0x120; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnLowPowerModeDelegate = 0x130; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
