namespace offsets
{
	namespace UPcPartyInviteRefused
	{
			constexpr auto accountId = 0x30; // Size: 16, Type: struct FString
			constexpr auto riderName = 0x40; // Size: 16, Type: struct FString
			constexpr auto PartyId = 0x50; // Size: 16, Type: struct FString
			constexpr auto isJoinFailed = 0x60; // Size: 1, Type: bool
			constexpr auto failReason = 0x64; // Size: 4, Type: enum class EPartyJoinFailReason
	}
} 
