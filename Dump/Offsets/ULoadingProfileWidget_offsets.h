namespace offsets
{
	namespace ULoadingProfileWidget
	{
			constexpr auto UserEmblem = 0x260; // Size: 8, Type: struct UUserWidget*
			constexpr auto V_Image_Platform = 0x268; // Size: 8, Type: struct UPlatformIconWidget*
			constexpr auto Image_Promotion = 0x270; // Size: 8, Type: struct UImage*
			constexpr auto Image_HighLight = 0x278; // Size: 8, Type: struct UKdButtonImage*
			constexpr auto WidgetSwitcher_Slot = 0x280; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto TextBlock_UserName = 0x288; // Size: 8, Type: struct UTextBlock*
			constexpr auto TextBlock_KartName = 0x290; // Size: 8, Type: struct UTextBlock*
			constexpr auto TextBlock_KartLevel = 0x298; // Size: 8, Type: struct UTextBlock*
			constexpr auto V_KartGradeBg = 0x2a0; // Size: 8, Type: struct UKdImage*
			constexpr auto V_KartGradeText = 0x2a8; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_BeginnerCareIcon = 0x2b0; // Size: 8, Type: struct UImage*
			constexpr auto V_HighlightPoint = 0x2b8; // Size: 8, Type: struct UImage*
			constexpr auto ProgressBar_Loading = 0x2c0; // Size: 8, Type: struct UProgressBar*
			constexpr auto TeamType = 0x2c8; // Size: 1, Type: enum class ERaceTeamType
			constexpr auto TeamColorContainer = 0x2d0; // Size: 80, Type: struct TMap<enum class ERaceTeamType, struct FLinearColor>
			constexpr auto TeamHighlightPointColorContainer = 0x320; // Size: 80, Type: struct TMap<enum class ERaceTeamType, struct FLinearColor>
			constexpr auto TeamResourceContainer = 0x370; // Size: 80, Type: struct TMap<enum class ERaceTeamType, struct UObject*>
	}
} 
