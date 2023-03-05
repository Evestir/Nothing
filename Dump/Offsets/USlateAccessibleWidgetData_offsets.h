namespace offsets
{
	namespace USlateAccessibleWidgetData
	{
			constexpr auto bCanChildrenBeAccessible = 0x28; // Size: 1, Type: bool
			constexpr auto AccessibleBehavior = 0x29; // Size: 1, Type: enum class ESlateAccessibleBehavior
			constexpr auto AccessibleSummaryBehavior = 0x2a; // Size: 1, Type: enum class ESlateAccessibleBehavior
			constexpr auto AccessibleText = 0x30; // Size: 24, Type: struct FText
			constexpr auto AccessibleTextDelegate = 0x48; // Size: 16, Type: struct FDelegate
			constexpr auto AccessibleSummaryText = 0x58; // Size: 24, Type: struct FText
			constexpr auto AccessibleSummaryTextDelegate = 0x70; // Size: 16, Type: struct FDelegate
	}
} 
