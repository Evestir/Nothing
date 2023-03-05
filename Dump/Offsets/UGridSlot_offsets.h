namespace offsets
{
	namespace UGridSlot
	{
			constexpr auto Padding = 0x38; // Size: 16, Type: struct FMargin
			constexpr auto HorizontalAlignment = 0x48; // Size: 1, Type: enum class EHorizontalAlignment
			constexpr auto VerticalAlignment = 0x49; // Size: 1, Type: enum class EVerticalAlignment
			constexpr auto Row = 0x4c; // Size: 4, Type: int32_t
			constexpr auto RowSpan = 0x50; // Size: 4, Type: int32_t
			constexpr auto Column = 0x54; // Size: 4, Type: int32_t
			constexpr auto ColumnSpan = 0x58; // Size: 4, Type: int32_t
			constexpr auto Layer = 0x5c; // Size: 4, Type: int32_t
			constexpr auto Nudge = 0x60; // Size: 8, Type: struct FVector2D
	}
} 
