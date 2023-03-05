namespace offsets
{
	namespace USpectatorBeaconState
	{
			constexpr auto SessionName = 0x28; // Size: 8, Type: struct FName
			constexpr auto NumConsumedReservations = 0x30; // Size: 4, Type: int32_t
			constexpr auto MaxReservations = 0x34; // Size: 4, Type: int32_t
			constexpr auto bRestrictCrossConsole = 0x38; // Size: 1, Type: bool
			constexpr auto Reservations = 0x40; // Size: 16, Type: struct TArray<struct FSpectatorReservation>
	}
} 
