namespace offsets
{
	namespace UUserWidget
	{
			constexpr auto ColorAndOpacity = 0x110; // Size: 16, Type: struct FLinearColor
			constexpr auto ColorAndOpacityDelegate = 0x120; // Size: 16, Type: struct FDelegate
			constexpr auto ForegroundColor = 0x130; // Size: 40, Type: struct FSlateColor
			constexpr auto ForegroundColorDelegate = 0x158; // Size: 16, Type: struct FDelegate
			constexpr auto OnVisibilityChanged = 0x168; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto Padding = 0x190; // Size: 16, Type: struct FMargin
			constexpr auto ActiveSequencePlayers = 0x1a0; // Size: 16, Type: struct TArray<struct UUMGSequencePlayer*>
			constexpr auto AnimationTickManager = 0x1b0; // Size: 8, Type: struct UUMGSequenceTickManager*
			constexpr auto StoppedSequencePlayers = 0x1b8; // Size: 16, Type: struct TArray<struct UUMGSequencePlayer*>
			constexpr auto NamedSlotBindings = 0x1c8; // Size: 16, Type: struct TArray<struct FNamedSlotBinding>
			constexpr auto WidgetTree = 0x1d8; // Size: 8, Type: struct UWidgetTree*
			constexpr auto Priority = 0x1e0; // Size: 4, Type: int32_t
			constexpr auto bSupportsKeyboardFocus = 0x1e4; // Size: 1, Type: char
			constexpr auto bIsFocusable = 0x1e4; // Size: 1, Type: char
			constexpr auto bStopAction = 0x1e4; // Size: 1, Type: char
			constexpr auto bHasScriptImplementedTick = 0x1e4; // Size: 1, Type: char
			constexpr auto bHasScriptImplementedPaint = 0x1e4; // Size: 1, Type: char
			constexpr auto TickFrequency = 0x1f0; // Size: 1, Type: enum class EWidgetTickFrequency
			constexpr auto InputComponent = 0x1f8; // Size: 8, Type: struct UInputComponent*
			constexpr auto AnimationCallbacks = 0x200; // Size: 16, Type: struct TArray<struct FAnimationEventBinding>
	}
} 
