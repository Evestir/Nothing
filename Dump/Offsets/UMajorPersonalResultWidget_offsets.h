namespace offsets
{
	namespace UMajorPersonalResultWidget
	{
			constexpr auto Text_RaceMode = 0x330; // Size: 8, Type: struct UTextBlock*
			constexpr auto Text_TeamMode = 0x338; // Size: 8, Type: struct UTextBlock*
			constexpr auto Image_RankBackground = 0x340; // Size: 8, Type: struct UImage*
			constexpr auto Text_OrdinalNumberRank = 0x348; // Size: 8, Type: struct UTextBlock*
			constexpr auto V_LapTimeBackGround = 0x350; // Size: 8, Type: struct UImage*
			constexpr auto Text_LapTime = 0x358; // Size: 8, Type: struct UTextBlock*
			constexpr auto WrapBox_Players = 0x360; // Size: 8, Type: struct UWrapBox*
			constexpr auto WS_ClearOrFail = 0x368; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto VB_PlayMission = 0x370; // Size: 8, Type: struct UVerticalBox*
			constexpr auto PlayerWidgetClass = 0x378; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto TextLocalizeRaceModeContainer = 0x3a0; // Size: 80, Type: struct TMap<enum class ERaceMode, struct FText>
			constexpr auto TextLocalizeTeamModeContainer = 0x3f0; // Size: 80, Type: struct TMap<enum class ERaceMode, struct FText>
			constexpr auto PlayerWidgets = 0x440; // Size: 16, Type: struct TArray<struct UMajorPersonalResultPlayerWidget*>
			constexpr auto LapTimeTextColorContainer = 0x4f8; // Size: 80, Type: struct TMap<enum class ERaceTeamType, struct FLinearColor>
			constexpr auto LapTimeBackGroundColorContainer = 0x548; // Size: 80, Type: struct TMap<enum class ERaceTeamType, struct FLinearColor>
			constexpr auto RankBackGroundColorContainer = 0x598; // Size: 80, Type: struct TMap<enum class ERaceTeamType, struct FLinearColor>
	}
} 
