namespace offsets
{
	namespace UPartyBeaconState
	{
			constexpr auto SessionName = 0x28; // Size: 8, Type: struct FName
			constexpr auto NumConsumedReservations = 0x30; // Size: 4, Type: int32_t
			constexpr auto MaxReservations = 0x34; // Size: 4, Type: int32_t
			constexpr auto NumTeams = 0x38; // Size: 4, Type: int32_t
			constexpr auto NumPlayersPerTeam = 0x3c; // Size: 4, Type: int32_t
			constexpr auto TeamAssignmentMethod = 0x40; // Size: 8, Type: struct FName
			constexpr auto ReservedHostTeamNum = 0x48; // Size: 4, Type: int32_t
			constexpr auto ForceTeamNum = 0x4c; // Size: 4, Type: int32_t
			constexpr auto bRestrictCrossConsole = 0x50; // Size: 1, Type: bool
			constexpr auto PlatformCrossplayRestrictions = 0x58; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto PlatformTypeMapping = 0x68; // Size: 16, Type: struct TArray<struct FPartyBeaconCrossplayPlatformMapping>
			constexpr auto bEnableRemovalRequests = 0x78; // Size: 1, Type: bool
			constexpr auto Reservations = 0x80; // Size: 16, Type: struct TArray<struct FPartyReservation>
	}
} 
