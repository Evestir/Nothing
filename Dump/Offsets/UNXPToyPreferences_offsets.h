namespace offsets
{
	namespace UNXPToyPreferences
	{
			constexpr auto BannerDoNotShowToday = 0x28; // Size: 80, Type: struct TMap<struct FString, struct FString>
			constexpr auto ConditionalBannerDoNotShowAnymore = 0x78; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto ConditionalBannerDoNotShowToday = 0x88; // Size: 80, Type: struct TMap<struct FString, struct FString>
			constexpr auto ConditionalBannerTotalDisplayCount = 0xd8; // Size: 80, Type: struct TMap<struct FString, int32_t>
			constexpr auto ConditionalBannerLastDisplayDateTime = 0x128; // Size: 80, Type: struct TMap<struct FString, struct FString>
			constexpr auto TodayDoNotShowToday = 0x178; // Size: 80, Type: struct TMap<struct FString, struct FString>
			constexpr auto NXID = 0x1c8; // Size: 16, Type: struct FString
			constexpr auto NXPW = 0x1d8; // Size: 16, Type: struct FString
	}
} 
