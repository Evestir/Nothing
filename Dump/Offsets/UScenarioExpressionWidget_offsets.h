namespace offsets
{
	namespace UScenarioExpressionWidget
	{
			constexpr auto Animation_In = 0x270; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Animation_Out = 0x278; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Animation_Loop = 0x280; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Animation_Finished_In = 0x288; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto LoopSeuqnecePlayer = 0x290; // Size: 8, Type: struct UUMGSequencePlayer*
			constexpr auto OnFinishedInAnimationDelegate = 0x298; // Size: 16, Type: struct FDelegate
			constexpr auto OnFinishedLoopAnimationDelegate = 0x2a8; // Size: 16, Type: struct FDelegate
			constexpr auto OnFinishedOutAnimationDelegate = 0x2b8; // Size: 16, Type: struct FDelegate
	}
} 
