namespace offsets
{
	namespace UMatchTicket
	{
			constexpr auto Ticket = 0x28; // Size: 16, Type: struct FString
			constexpr auto status = 0x38; // Size: 16, Type: struct FString
			constexpr auto Closed = 0x48; // Size: 1, Type: bool
			constexpr auto raceModes = 0x50; // Size: 16, Type: struct TArray<enum class ERaceMode>
			constexpr auto MatchTargetType = 0x60; // Size: 4, Type: int32_t
			constexpr auto trackGroups = 0x68; // Size: 16, Type: struct TArray<int32_t>
	}
} 
