namespace offsets
{
	namespace UDragDropOperation
	{
			constexpr auto Tag = 0x28; // Size: 16, Type: struct FString
			constexpr auto Payload = 0x38; // Size: 8, Type: struct UObject*
			constexpr auto DefaultDragVisual = 0x40; // Size: 8, Type: struct UWidget*
			constexpr auto Pivot = 0x48; // Size: 1, Type: enum class EDragPivot
			constexpr auto Offset = 0x4c; // Size: 8, Type: struct FVector2D
			constexpr auto OnDrop = 0x58; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnDragCancelled = 0x68; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnDragged = 0x78; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
