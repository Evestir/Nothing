namespace offsets
{
	namespace UPageListTemplate
	{
			constexpr auto EntryWidgetClass = 0x268; // Size: 8, Type: UUserWidget*
			constexpr auto V_ItemWidgetPanel = 0x270; // Size: 8, Type: struct UPanelWidget*
			constexpr auto V_PageButtonTemplate = 0x278; // Size: 8, Type: struct UPageButtonTemplate*
			constexpr auto RowCount = 0x280; // Size: 4, Type: int32_t
			constexpr auto ColumnCount = 0x284; // Size: 4, Type: int32_t
			constexpr auto bIsEmptyObjectHide = 0x288; // Size: 1, Type: bool
			constexpr auto bIsReFocusEnable = 0x289; // Size: 1, Type: bool
			constexpr auto ListItemWidgets = 0x290; // Size: 16, Type: struct TArray<struct UUserWidget*>
			constexpr auto ListItems = 0x2a0; // Size: 16, Type: struct TArray<struct UObject*>
	}
} 
