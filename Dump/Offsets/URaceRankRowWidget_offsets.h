namespace offsets
{
	namespace URaceRankRowWidget
	{
			constexpr auto ItemIconWidgetClass = 0x260; // Size: 8, Type: URaceRankItemWidget*
			constexpr auto V_AISwitcher = 0x268; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto V_RankBackground = 0x270; // Size: 8, Type: struct UImage*
			constexpr auto V_RowBackGround = 0x278; // Size: 8, Type: struct UImage*
			constexpr auto V_NameText = 0x280; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto ItemIconListBox = 0x288; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto V_RankText = 0x290; // Size: 8, Type: struct UTextBlock*
			constexpr auto V_PingText = 0x298; // Size: 8, Type: struct UTextBlock*
			constexpr auto V_TimestampText = 0x2a0; // Size: 8, Type: struct UTextBlock*
			constexpr auto V_PlatformIcon = 0x2a8; // Size: 8, Type: struct UPlatformIconWidget*
			constexpr auto HB_LeftBlock = 0x2b0; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto Image_ShadowPlayer = 0x2b8; // Size: 8, Type: struct UImage*
			constexpr auto V_Voice_State = 0x2c0; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto V_Disconnected = 0x2c8; // Size: 8, Type: struct UImage*
			constexpr auto V_DisconnectedDim = 0x2d0; // Size: 8, Type: struct UImage*
			constexpr auto V_FinishedDim = 0x2d8; // Size: 8, Type: struct UImage*
			constexpr auto V_MainBlock = 0x2e0; // Size: 8, Type: struct UOverlay*
			constexpr auto V_PingImage = 0x2e8; // Size: 8, Type: struct UImage*
			constexpr auto V_MicImage = 0x2f0; // Size: 8, Type: struct UImage*
			constexpr auto V_BeginnerCareIcon = 0x2f8; // Size: 8, Type: struct UImage*
			constexpr auto EntireSlideInUp = 0x300; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto EntireSlideInDown = 0x308; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto DefaultMainColor = 0x334; // Size: 16, Type: struct FLinearColor
			constexpr auto SoloPlayerOwnerMainColor = 0x344; // Size: 16, Type: struct FLinearColor
			constexpr auto DefaultFontInfo = 0x358; // Size: 88, Type: struct FSlateFontInfo
			constexpr auto SoloPlayerOwnerFontInfo = 0x3b0; // Size: 88, Type: struct FSlateFontInfo
			constexpr auto RankBackGroundBrushContainer = 0x408; // Size: 80, Type: struct TMap<enum class ERaceTeamType, struct FSlateBrush>
			constexpr auto RankBackGroundSoloOwnPlayerBrush = 0x458; // Size: 136, Type: struct FSlateBrush
			constexpr auto RowBackGroundSoloBrushContainer = 0x4e0; // Size: 80, Type: struct TMap<enum class ERaceTeamType, struct FSlateBrush>
			constexpr auto RowBackGroundDefaultBrush = 0x530; // Size: 136, Type: struct FSlateBrush
			constexpr auto FinishedColorContainer = 0x5b8; // Size: 80, Type: struct TMap<enum class ERaceTeamType, struct FLinearColor>
	}
} 
