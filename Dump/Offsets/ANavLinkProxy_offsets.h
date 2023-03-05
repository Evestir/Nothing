namespace offsets
{
	namespace ANavLinkProxy
	{
			constexpr auto PointLinks = 0x230; // Size: 16, Type: struct TArray<struct FNavigationLink>
			constexpr auto SegmentLinks = 0x240; // Size: 16, Type: struct TArray<struct FNavigationSegmentLink>
			constexpr auto SmartLinkComp = 0x250; // Size: 8, Type: struct UNavLinkCustomComponent*
			constexpr auto bSmartLinkIsRelevant = 0x258; // Size: 1, Type: bool
			constexpr auto OnSmartLinkReached = 0x260; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
