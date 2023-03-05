namespace offsets
{
	namespace ASpectatorBeaconClient
	{
			constexpr auto DestSessionId = 0x2e0; // Size: 16, Type: struct FString
			constexpr auto PendingReservation = 0x2f0; // Size: 120, Type: struct FSpectatorReservation
			constexpr auto RequestType = 0x368; // Size: 1, Type: enum class ESpectatorClientRequestType
			constexpr auto bPendingReservationSent = 0x369; // Size: 1, Type: bool
			constexpr auto bCancelReservation = 0x36a; // Size: 1, Type: bool
	}
} 
