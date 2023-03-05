namespace offsets
{
	namespace UApproachWidget
	{
			constexpr auto MainPanelWidget = 0x260; // Size: 8, Type: struct UPanelWidget*
			constexpr auto ArrowWidgetSubClass = 0x268; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto MaxShowCount = 0x290; // Size: 4, Type: int32_t
			constexpr auto MinShowDistance = 0x294; // Size: 4, Type: float
			constexpr auto MaxShowDistance = 0x298; // Size: 4, Type: float
			constexpr auto MinHideDistance = 0x29c; // Size: 4, Type: float
			constexpr auto MaxHideDistance = 0x2a0; // Size: 4, Type: float
			constexpr auto ShowAngle = 0x2a4; // Size: 4, Type: float
			constexpr auto HideAngle = 0x2a8; // Size: 4, Type: float
			constexpr auto PositionRadius = 0x2ac; // Size: 4, Type: float
			constexpr auto ArrowWidgets = 0x2b0; // Size: 16, Type: struct TArray<struct UApproachArrowWidget*>
			constexpr auto LatestPawnList = 0x2c0; // Size: 16, Type: struct TArray<struct AKdPawn*>
			constexpr auto MyPawn = 0x2d0; // Size: 8, Type: struct APawn*
			constexpr auto MyPlayerID = 0x2d8; // Size: 4, Type: int32_t
			constexpr auto OtherKartCount = 0x2dc; // Size: 4, Type: int32_t
			constexpr auto UpdateCountTimer = 0x2e0; // Size: 8, Type: struct FTimerHandle
			constexpr auto RaceRank = 0x2f8; // Size: 8, Type: struct URaceRankComponent*
	}
} 
