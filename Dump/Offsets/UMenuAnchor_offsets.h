namespace offsets
{
	namespace UMenuAnchor
	{
			constexpr auto MenuClass = 0x120; // Size: 8, Type: UUserWidget*
			constexpr auto OnGetMenuContentEvent = 0x128; // Size: 16, Type: struct FDelegate
			constexpr auto OnGetUserMenuContentEvent = 0x138; // Size: 16, Type: struct FDelegate
			constexpr auto Placement = 0x148; // Size: 1, Type: enum class EMenuPlacement
			constexpr auto bFitInWindow = 0x149; // Size: 1, Type: bool
			constexpr auto ShouldDeferPaintingAfterWindowContent = 0x14a; // Size: 1, Type: bool
			constexpr auto UseApplicationMenuStack = 0x14b; // Size: 1, Type: bool
			constexpr auto OnMenuOpenChanged = 0x150; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
