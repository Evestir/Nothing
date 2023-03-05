namespace offsets
{
	namespace AGameNetworkManager
	{
			constexpr auto BadPacketLossThreshold = 0x220; // Size: 4, Type: float
			constexpr auto SeverePacketLossThreshold = 0x224; // Size: 4, Type: float
			constexpr auto BadPingThreshold = 0x228; // Size: 4, Type: int32_t
			constexpr auto SeverePingThreshold = 0x22c; // Size: 4, Type: int32_t
			constexpr auto AdjustedNetSpeed = 0x230; // Size: 4, Type: int32_t
			constexpr auto LastNetSpeedUpdateTime = 0x234; // Size: 4, Type: float
			constexpr auto TotalNetBandwidth = 0x238; // Size: 4, Type: int32_t
			constexpr auto MinDynamicBandwidth = 0x23c; // Size: 4, Type: int32_t
			constexpr auto MaxDynamicBandwidth = 0x240; // Size: 4, Type: int32_t
			constexpr auto bIsStandbyCheckingEnabled = 0x244; // Size: 1, Type: char
			constexpr auto bHasStandbyCheatTriggered = 0x244; // Size: 1, Type: char
			constexpr auto StandbyRxCheatTime = 0x248; // Size: 4, Type: float
			constexpr auto StandbyTxCheatTime = 0x24c; // Size: 4, Type: float
			constexpr auto PercentMissingForRxStandby = 0x250; // Size: 4, Type: float
			constexpr auto PercentMissingForTxStandby = 0x254; // Size: 4, Type: float
			constexpr auto PercentForBadPing = 0x258; // Size: 4, Type: float
			constexpr auto JoinInProgressStandbyWaitTime = 0x25c; // Size: 4, Type: float
			constexpr auto MoveRepSize = 0x260; // Size: 4, Type: float
			constexpr auto MAXPOSITIONERRORSQUARED = 0x264; // Size: 4, Type: float
			constexpr auto MAXNEARZEROVELOCITYSQUARED = 0x268; // Size: 4, Type: float
			constexpr auto CLIENTADJUSTUPDATECOST = 0x26c; // Size: 4, Type: float
			constexpr auto MAXCLIENTUPDATEINTERVAL = 0x270; // Size: 4, Type: float
			constexpr auto MaxClientForcedUpdateDuration = 0x274; // Size: 4, Type: float
			constexpr auto ServerForcedUpdateHitchThreshold = 0x278; // Size: 4, Type: float
			constexpr auto ServerForcedUpdateHitchCooldown = 0x27c; // Size: 4, Type: float
			constexpr auto MaxMoveDeltaTime = 0x280; // Size: 4, Type: float
			constexpr auto MaxClientSmoothingDeltaTime = 0x284; // Size: 4, Type: float
			constexpr auto ClientNetSendMoveDeltaTime = 0x288; // Size: 4, Type: float
			constexpr auto ClientNetSendMoveDeltaTimeThrottled = 0x28c; // Size: 4, Type: float
			constexpr auto ClientNetSendMoveDeltaTimeStationary = 0x290; // Size: 4, Type: float
			constexpr auto ClientNetSendMoveThrottleAtNetSpeed = 0x294; // Size: 4, Type: int32_t
			constexpr auto ClientNetSendMoveThrottleOverPlayerCount = 0x298; // Size: 4, Type: int32_t
			constexpr auto ClientAuthorativePosition = 0x29c; // Size: 1, Type: bool
			constexpr auto ClientErrorUpdateRateLimit = 0x2a0; // Size: 4, Type: float
			constexpr auto ClientNetCamUpdateDeltaTime = 0x2a4; // Size: 4, Type: float
			constexpr auto ClientNetCamUpdatePositionLimit = 0x2a8; // Size: 4, Type: float
			constexpr auto bMovementTimeDiscrepancyDetection = 0x2ac; // Size: 1, Type: bool
			constexpr auto bMovementTimeDiscrepancyResolution = 0x2ad; // Size: 1, Type: bool
			constexpr auto MovementTimeDiscrepancyMaxTimeMargin = 0x2b0; // Size: 4, Type: float
			constexpr auto MovementTimeDiscrepancyMinTimeMargin = 0x2b4; // Size: 4, Type: float
			constexpr auto MovementTimeDiscrepancyResolutionRate = 0x2b8; // Size: 4, Type: float
			constexpr auto MovementTimeDiscrepancyDriftAllowance = 0x2bc; // Size: 4, Type: float
			constexpr auto bMovementTimeDiscrepancyForceCorrectionsDuringResolution = 0x2c0; // Size: 1, Type: bool
			constexpr auto bUseDistanceBasedRelevancy = 0x2c1; // Size: 1, Type: bool
	}
} 
