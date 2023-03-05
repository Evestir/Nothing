namespace offsets
{
	namespace UPcMatchStatus
	{
			constexpr auto mmTicket = 0x30; // Size: 16, Type: struct FString
			constexpr auto status = 0x40; // Size: 4, Type: int32_t
			constexpr auto desc = 0x48; // Size: 16, Type: struct FString
			constexpr auto subobj = 0x58; // Size: 8, Type: struct UObject*
	}
} 
