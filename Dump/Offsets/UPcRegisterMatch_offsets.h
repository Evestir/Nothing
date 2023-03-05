namespace offsets
{
	namespace UPcRegisterMatch
	{
			constexpr auto mmTicket = 0x30; // Size: 16, Type: struct FString
			constexpr auto Queue = 0x40; // Size: 16, Type: struct FMatchQueueList
			constexpr auto estTimeSec = 0x50; // Size: 4, Type: int32_t
			constexpr auto aiOption = 0x54; // Size: 4, Type: int32_t
			constexpr auto trackGroups = 0x58; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto grandPrixId = 0x68; // Size: 16, Type: struct FString
	}
} 
