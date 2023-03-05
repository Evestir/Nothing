namespace offsets
{
	namespace URaceCounterWidget
	{
			constexpr auto CountDownSound = 0x260; // Size: 8, Type: struct UFMODEvent*
			constexpr auto CountDownFinishSound = 0x268; // Size: 8, Type: struct UFMODEvent*
			constexpr auto CountDownBegin = 0x270; // Size: 4, Type: int32_t
			constexpr auto SplitScreenDisabledBegin = 0x274; // Size: 4, Type: int32_t
			constexpr auto SplitScreenEnabledBegin = 0x278; // Size: 4, Type: int32_t
			constexpr auto V_GoCountText = 0x280; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_ov_ExactTimingStartBoost = 0x288; // Size: 8, Type: struct UOverlay*
			constexpr auto GoCountAnim = 0x290; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto GoAnim = 0x298; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto ExactTimingStartBoostAnim = 0x2a0; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto GoCountStrings = 0x2a8; // Size: 16, Type: struct TArray<struct FText>
			constexpr auto PreloadedObjects = 0x2b8; // Size: 16, Type: struct TArray<struct UObject*>
	}
} 
