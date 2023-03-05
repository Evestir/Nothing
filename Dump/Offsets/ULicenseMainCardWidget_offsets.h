namespace offsets
{
	namespace ULicenseMainCardWidget
	{
			constexpr auto Inst_TextGradeName = 0x3e8; // Size: 24, Type: struct FText
			constexpr auto Inst_LineMainBrush = 0x400; // Size: 136, Type: struct FSlateBrush
			constexpr auto Inst_EmblemLogo = 0x488; // Size: 136, Type: struct FSlateBrush
			constexpr auto Inst_EmblemLogo_NotGain = 0x510; // Size: 136, Type: struct FSlateBrush
			constexpr auto Inst_LineThickColor = 0x598; // Size: 16, Type: struct FLinearColor
			constexpr auto Inst_LineThinColor = 0x5a8; // Size: 16, Type: struct FLinearColor
			constexpr auto Inst_DriftLogoColor = 0x5b8; // Size: 16, Type: struct FLinearColor
			constexpr auto Inst_DrivingLicenseColor = 0x5c8; // Size: 16, Type: struct FLinearColor
			constexpr auto Inst_EmblemLineColor1 = 0x5d8; // Size: 16, Type: struct FLinearColor
			constexpr auto Inst_EmblemLineColor2 = 0x5e8; // Size: 16, Type: struct FLinearColor
			constexpr auto Inst_BottomEdgeColor = 0x5f8; // Size: 16, Type: struct FLinearColor
			constexpr auto Inst_IsPro = 0x608; // Size: 1, Type: bool
			constexpr auto Inst_StateTest = 0x60c; // Size: 4, Type: int32_t
			constexpr auto bShowRewardButton = 0x610; // Size: 1, Type: bool
			constexpr auto bShowGainDate = 0x611; // Size: 1, Type: bool
			constexpr auto V_ImgLineMain = 0x618; // Size: 8, Type: struct UImage*
			constexpr auto V_ImgLineMain_MoveLight = 0x620; // Size: 8, Type: struct UImage*
			constexpr auto V_ImgLineThick = 0x628; // Size: 8, Type: struct UImage*
			constexpr auto V_ImgLineThick_MoveLight = 0x630; // Size: 8, Type: struct UImage*
			constexpr auto V_ImgLineThin = 0x638; // Size: 8, Type: struct UImage*
			constexpr auto V_ImgLineThin_MoveLight = 0x640; // Size: 8, Type: struct UImage*
			constexpr auto V_ImgDriftLogo = 0x648; // Size: 8, Type: struct UImage*
			constexpr auto V_ImgDrivingLicense = 0x650; // Size: 8, Type: struct UImage*
			constexpr auto V_ImgBtnHover = 0x658; // Size: 8, Type: struct UKdImage*
			constexpr auto V_ImgEdgeBottom = 0x660; // Size: 8, Type: struct UImage*
			constexpr auto V_ImgEdge_MoveLight = 0x668; // Size: 8, Type: struct UImage*
			constexpr auto V_TxtGradeName = 0x670; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_WS_BG = 0x678; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto V_WS_LineMain = 0x680; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto V_WS_LineThin = 0x688; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto V_Emblem = 0x690; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto V_GetLicense = 0x698; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto V_GainDate = 0x6a0; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto V_Emblem_NotGain = 0x6a8; // Size: 8, Type: struct ULicenseCardEmblemWidget*
			constexpr auto V_Emblem_Bronze = 0x6b0; // Size: 8, Type: struct ULicenseCardEmblemWidget*
			constexpr auto V_Emblem_Silver = 0x6b8; // Size: 8, Type: struct ULicenseCardEmblemWidget*
			constexpr auto V_Emblem_Gold = 0x6c0; // Size: 8, Type: struct ULicenseCardEmblemWidget*
			constexpr auto V_OV_All = 0x6c8; // Size: 8, Type: struct UOverlay*
			constexpr auto V_OV_Card = 0x6d0; // Size: 8, Type: struct UOverlay*
			constexpr auto V_Lock = 0x6d8; // Size: 8, Type: struct UOverlay*
			constexpr auto V_RewardButton = 0x6e0; // Size: 8, Type: struct UButtonTemplate*
	}
} 
