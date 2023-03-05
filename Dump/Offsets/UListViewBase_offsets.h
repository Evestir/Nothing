namespace offsets
{
	namespace UListViewBase
	{
			constexpr auto EntryWidgetClass = 0x108; // Size: 8, Type: UUserWidget*
			constexpr auto WheelScrollMultiplier = 0x110; // Size: 4, Type: float
			constexpr auto bEnableScrollAnimation = 0x114; // Size: 1, Type: bool
			constexpr auto bEnableFixedLineOffset = 0x115; // Size: 1, Type: bool
			constexpr auto FixedLineScrollOffset = 0x118; // Size: 4, Type: float
			constexpr auto BP_OnEntryGenerated = 0x120; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto BP_OnEntryReleased = 0x130; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto EntryWidgetPool = 0x140; // Size: 128, Type: struct FUserWidgetPool
	}
} 
