namespace offsets
{
	namespace UDynamicEntryBoxBase
	{
			constexpr auto EntryBoxType = 0x108; // Size: 1, Type: enum class EDynamicBoxType
			constexpr auto EntrySpacing = 0x10c; // Size: 8, Type: struct FVector2D
			constexpr auto SpacingPattern = 0x118; // Size: 16, Type: struct TArray<struct FVector2D>
			constexpr auto EntrySizeRule = 0x128; // Size: 8, Type: struct FSlateChildSize
			constexpr auto EntryHorizontalAlignment = 0x130; // Size: 1, Type: enum class EHorizontalAlignment
			constexpr auto EntryVerticalAlignment = 0x131; // Size: 1, Type: enum class EVerticalAlignment
			constexpr auto MaxElementSize = 0x134; // Size: 4, Type: int32_t
			constexpr auto RadialBoxSettings = 0x138; // Size: 16, Type: struct FRadialBoxSettings
			constexpr auto EntryWidgetPool = 0x158; // Size: 128, Type: struct FUserWidgetPool
	}
} 
