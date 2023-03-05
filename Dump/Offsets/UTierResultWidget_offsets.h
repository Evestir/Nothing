namespace offsets
{
	namespace UTierResultWidget
	{
			constexpr auto GppCountingDuration = 0x260; // Size: 4, Type: float
			constexpr auto TierChangedMinWaiting = 0x264; // Size: 4, Type: float
			constexpr auto Tier_In = 0x268; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Tier_Out = 0x270; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Tier_ScoreUP = 0x278; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Tier_ScoreDOWN = 0x280; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Tier_TierUP_First = 0x288; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Tier_TierUP = 0x290; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Tier_TierDOWN = 0x298; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto V_PrevTierIcon = 0x2a0; // Size: 8, Type: struct UGrandPrixTierIconWidget*
			constexpr auto V_NextTierIcon = 0x2a8; // Size: 8, Type: struct UGrandPrixTierIconWidget*
			constexpr auto V_WidgetSwitcherUpDown = 0x2b0; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto V_PrevTitleText = 0x2b8; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_NextTitleText = 0x2c0; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_ProgressBG = 0x2c8; // Size: 8, Type: struct UImage*
			constexpr auto V_ProgressCurrent = 0x2d0; // Size: 8, Type: struct UImage*
			constexpr auto V_CurrentGpp = 0x2d8; // Size: 8, Type: struct UKdTextBlock*
	}
} 
