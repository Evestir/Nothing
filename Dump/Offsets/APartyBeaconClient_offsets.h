namespace offsets
{
	namespace APartyBeaconClient
	{
			constexpr auto DestSessionId = 0x2e0; // Size: 16, Type: struct FString
			constexpr auto PendingReservation = 0x2f0; // Size: 80, Type: struct FPartyReservation
			constexpr auto RequestType = 0x340; // Size: 1, Type: enum class EClientRequestType
			constexpr auto bPendingReservationSent = 0x341; // Size: 1, Type: bool
			constexpr auto bCancelReservation = 0x342; // Size: 1, Type: bool
	}
} 
