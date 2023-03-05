namespace offsets
{
	namespace UPqRegisterMatch
	{
			constexpr auto Queue = 0x38; // Size: 16, Type: struct FMatchQueueList
			constexpr auto isExclusive = 0x48; // Size: 1, Type: bool
			constexpr auto grandPrixId = 0x50; // Size: 16, Type: struct FString
			constexpr auto aiOption = 0x60; // Size: 4, Type: int32_t
			constexpr auto trackGroups = 0x68; // Size: 16, Type: struct TArray<int32_t>
	}
} 
