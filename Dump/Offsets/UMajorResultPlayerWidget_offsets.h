namespace offsets
{
	namespace UMajorResultPlayerWidget
	{
			constexpr auto V_CenterBGSwitcher = 0x260; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto V_RankBGSwitcher = 0x268; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto V_TailBGSwitcher = 0x270; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto V_Rank = 0x278; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_PlatformIconWidget = 0x280; // Size: 8, Type: struct UPlatformIconWidget*
			constexpr auto V_PlayerID = 0x288; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_BeginnerCareIcon = 0x290; // Size: 8, Type: struct UImage*
			constexpr auto V_LevelCharacter = 0x298; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_ExpSwitcher = 0x2a0; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto V_CharacterLevelUpInfo = 0x2a8; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_RpAdd = 0x2b0; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_LapTime = 0x2b8; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_LapTimeDiff = 0x2c0; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_Clock = 0x2c8; // Size: 8, Type: struct UImage*
			constexpr auto V_KartLevel = 0x2d0; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_KartName = 0x2d8; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_KartGradeBg = 0x2e0; // Size: 8, Type: struct UKdImage*
			constexpr auto V_KartGrade = 0x2e8; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_KartLevelUpInfo = 0x2f0; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_TeamPoint = 0x2f8; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_MajorResultProgressWidget_Player = 0x300; // Size: 8, Type: struct UMajorResultProgressWidget*
			constexpr auto V_MajorResultProgressWidget_Kart = 0x308; // Size: 8, Type: struct UMajorResultProgressWidget*
			constexpr auto V_LucciSwitcher = 0x310; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto V_Lucci = 0x318; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_GrandPrixSB = 0x320; // Size: 8, Type: struct UWidget*
			constexpr auto V_GrandPrixHB = 0x328; // Size: 8, Type: struct UWidget*
			constexpr auto V_GrandPrixTierIcon = 0x330; // Size: 8, Type: struct UGrandPrixTierIconWidget*
			constexpr auto V_GppSwitcher = 0x338; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto V_MajorResultProgressWidget_GrandPrix = 0x340; // Size: 8, Type: struct UMajorResultProgressWidget*
			constexpr auto V_MajorResultProgressWidget_GrandPrix_Subtract = 0x348; // Size: 8, Type: struct UMajorResultProgressWidget*
			constexpr auto V_AddGpp = 0x350; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_SubtractGpp = 0x358; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto BackGroundIndex = 0x360; // Size: 80, Type: struct TMap<enum class ERaceTeamType, int32_t>
			constexpr auto TeamColor = 0x3b0; // Size: 80, Type: struct TMap<enum class ERaceTeamType, struct FLinearColor>
			constexpr auto V_RankBackground = 0x400; // Size: 8, Type: struct UImage*
			constexpr auto V_Background = 0x408; // Size: 8, Type: struct UImage*
			constexpr auto V_TailBackground = 0x410; // Size: 8, Type: struct UImage*
	}
} 
