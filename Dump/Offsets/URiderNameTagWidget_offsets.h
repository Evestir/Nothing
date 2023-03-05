namespace offsets
{
	namespace URiderNameTagWidget
	{
			constexpr auto AttachedPlayerState = 0x260; // Size: 8, Type: struct APlayerState*
			constexpr auto bIsMyPawnIdWidget = 0x268; // Size: 1, Type: bool
			constexpr auto LastRankList = 0x270; // Size: 16, Type: struct TArray<struct AKdPawn*>
			constexpr auto V_Number = 0x280; // Size: 8, Type: struct UTextBlock*
			constexpr auto V_Id = 0x288; // Size: 8, Type: struct UTextBlock*
			constexpr auto V_WS_RankBG = 0x290; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto V_OV_Rank = 0x298; // Size: 8, Type: struct UOverlay*
			constexpr auto V_OV_UserName = 0x2a0; // Size: 8, Type: struct UOverlay*
			constexpr auto V_RiderNameBG = 0x2a8; // Size: 8, Type: struct UImage*
			constexpr auto V_RiderNameBG_CenterArrow = 0x2b0; // Size: 8, Type: struct UImage*
	}
} 
