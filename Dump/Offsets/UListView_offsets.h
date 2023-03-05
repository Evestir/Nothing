namespace offsets
{
	namespace UListView
	{
			constexpr auto Orientation = 0x2d8; // Size: 1, Type: enum class EOrientation
			constexpr auto SelectionMode = 0x2d9; // Size: 1, Type: enum class ESelectionMode
			constexpr auto ConsumeMouseWheel = 0x2da; // Size: 1, Type: enum class EConsumeMouseWheel
			constexpr auto bClearSelectionOnClick = 0x2db; // Size: 1, Type: bool
			constexpr auto bIsFocusable = 0x2dc; // Size: 1, Type: bool
			constexpr auto EntrySpacing = 0x2e0; // Size: 4, Type: float
			constexpr auto bReturnFocusToSelection = 0x2e4; // Size: 1, Type: bool
			constexpr auto ListItems = 0x2e8; // Size: 16, Type: struct TArray<struct UObject*>
			constexpr auto BP_OnEntryInitialized = 0x308; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto BP_OnItemClicked = 0x318; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto BP_OnItemDoubleClicked = 0x328; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto BP_OnItemIsHoveredChanged = 0x338; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto BP_OnItemSelectionChanged = 0x348; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto BP_OnItemScrolledIntoView = 0x358; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
