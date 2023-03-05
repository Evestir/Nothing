namespace offsets
{
	namespace UGameNetworkManagerSettings
	{
			constexpr auto MinDynamicBandwidth = 0x28; // Size: 4, Type: int32_t
			constexpr auto MaxDynamicBandwidth = 0x2c; // Size: 4, Type: int32_t
			constexpr auto TotalNetBandwidth = 0x30; // Size: 4, Type: int32_t
			constexpr auto BadPingThreshold = 0x34; // Size: 4, Type: int32_t
			constexpr auto bIsStandbyCheckingEnabled = 0x38; // Size: 1, Type: char
			constexpr auto StandbyRxCheatTime = 0x3c; // Size: 4, Type: float
			constexpr auto StandbyTxCheatTime = 0x40; // Size: 4, Type: float
			constexpr auto PercentMissingForRxStandby = 0x44; // Size: 4, Type: float
			constexpr auto PercentMissingForTxStandby = 0x48; // Size: 4, Type: float
			constexpr auto PercentForBadPing = 0x4c; // Size: 4, Type: float
			constexpr auto JoinInProgressStandbyWaitTime = 0x50; // Size: 4, Type: float
	}
} 
