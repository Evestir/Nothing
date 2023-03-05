namespace offsets
{
	namespace UAccountVDTEvent
	{
			constexpr auto events = 0x30; // Size: 80, Type: struct TMap<struct FString, struct FVDTEventDef>
			constexpr auto VDTEventDataMap = 0x80; // Size: 80, Type: struct TMap<struct FString, struct FVDTEventData>
			constexpr auto PreVDTEventDataMap = 0xd0; // Size: 80, Type: struct TMap<struct FString, struct FVDTEventData>
			constexpr auto RecentUpdateDateTime = 0x120; // Size: 8, Type: struct FDateTime
			constexpr auto UserVDTEventData = 0x128; // Size: 56, Type: struct FVDTEventData
	}
} 
