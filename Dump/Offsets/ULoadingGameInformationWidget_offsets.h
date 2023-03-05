namespace offsets
{
	namespace ULoadingGameInformationWidget
	{
			constexpr auto TextBlock_GameType = 0x260; // Size: 8, Type: struct UTextBlock*
			constexpr auto TextBlock_ModeType = 0x268; // Size: 8, Type: struct UTextBlock*
			constexpr auto TextBlock_TeamType = 0x270; // Size: 8, Type: struct UTextBlock*
			constexpr auto TextBlock_TrackName = 0x278; // Size: 8, Type: struct UTextBlock*
			constexpr auto Image_Track = 0x280; // Size: 8, Type: struct UImage*
			constexpr auto TrackDifficult = 0x288; // Size: 8, Type: struct UTrackDifficultWidget*
			constexpr auto BP_CommonPopupGuide = 0x290; // Size: 8, Type: struct UModeVictoryGuideWidget*
			constexpr auto raceMode = 0x298; // Size: 1, Type: enum class ERaceMode
			constexpr auto RaceModeTextContainer = 0x2a0; // Size: 80, Type: struct TMap<enum class ERaceMode, struct FText>
			constexpr auto RaceTypeTextContainer = 0x2f0; // Size: 80, Type: struct TMap<enum class ERaceMode, struct FText>
	}
} 
