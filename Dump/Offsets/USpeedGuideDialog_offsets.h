namespace offsets
{
	namespace USpeedGuideDialog
	{
			constexpr auto TipTexts = 0x330; // Size: 16, Type: struct TArray<struct FText>
			constexpr auto TipTextStartSeconds = 0x340; // Size: 16, Type: struct TArray<float>
			constexpr auto TipTextEndSeconds = 0x350; // Size: 16, Type: struct TArray<float>
			constexpr auto TipStartAnims = 0x360; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto TipEndAnim = 0x370; // Size: 8, Type: struct FName
			constexpr auto OpenedAnim = 0x378; // Size: 8, Type: struct FName
			constexpr auto EndReachedAnim = 0x380; // Size: 8, Type: struct FName
			constexpr auto EndReachedAnimOffset = 0x388; // Size: 4, Type: float
			constexpr auto TotalMediaTime = 0x38c; // Size: 4, Type: float
			constexpr auto bMustWatchVideoItTheEnd = 0x390; // Size: 1, Type: bool
	}
} 
