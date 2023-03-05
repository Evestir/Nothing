namespace offsets
{
	namespace UPcVDTEventData
	{
			constexpr auto EventID = 0x30; // Size: 16, Type: struct FString
			constexpr auto RewardedCount = 0x40; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto RewardedIndex = 0x50; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto hasSubEvent = 0x60; // Size: 1, Type: bool
			constexpr auto SubEventType = 0x61; // Size: 1, Type: enum class EKtADTEventType
			constexpr auto subEventDurationTime = 0x64; // Size: 4, Type: int32_t
	}
} 
