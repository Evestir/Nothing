namespace offsets
{
	namespace URaceRankWidget
	{
			constexpr auto RankGroupPlayers = 0x260; // Size: 16, Type: struct TArray<struct URaceRankRowWidget*>
			constexpr auto PlayerRankText = 0x270; // Size: 8, Type: struct UTextBlock*
			constexpr auto PlayerRankTextBefore = 0x278; // Size: 8, Type: struct UTextBlock*
			constexpr auto PlayerCountText = 0x280; // Size: 8, Type: struct UTextBlock*
			constexpr auto RankSlideWinning = 0x288; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto RankSlideLosing = 0x290; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto V_RankBox = 0x298; // Size: 8, Type: struct UVerticalBox*
			constexpr auto LatestRankPawnList = 0x2a0; // Size: 16, Type: struct TArray<struct AKdPawn*>
			constexpr auto LastRankPawnList = 0x2b0; // Size: 16, Type: struct TArray<struct AKdPawn*>
			constexpr auto RankPlayerInfoMap = 0x2c0; // Size: 80, Type: struct TMap<struct AKdPawn*, struct FRankPlayerInfo>
			constexpr auto SpectatorComponent = 0x330; // Size: 8, Type: struct USpectatorComponent*
			constexpr auto RaceRankComponent = 0x340; // Size: 8, Type: struct URaceRankComponent*
			constexpr auto TeamColorDataAsset = 0x380; // Size: 8, Type: struct UTeamColorDataAsset*
	}
} 
