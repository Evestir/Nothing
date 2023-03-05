namespace offsets
{
	namespace UKdTraveler
	{
			constexpr auto MatchGameSettings = 0x100; // Size: 8, Type: struct UKtRaceSettings*
			constexpr auto MatchRaceDetails = 0x108; // Size: 8, Type: struct UKtRaceDetails*
			constexpr auto MatchTrackDef = 0x148; // Size: 352, Type: struct FKtClientTrackDef
			constexpr auto LoadingWidget = 0x2a8; // Size: 8, Type: struct ULoadingWidgetBase*
			constexpr auto LoadingMovieWidget = 0x2b0; // Size: 8, Type: struct ULoadingWidgetBase*
			constexpr auto LoadingWidgetClass = 0x2b8; // Size: 8, Type: UUserWidget*
			constexpr auto TransitionWidgetClass = 0x2c0; // Size: 8, Type: UUserWidget*
			constexpr auto LoadingImageMaterialInstance = 0x2c8; // Size: 8, Type: struct UMaterialInstanceConstant*
			constexpr auto LoadingWidgetContainer = 0x2d0; // Size: 16, Type: struct TArray<struct UUserWidget*>
			constexpr auto LoadingMovieWidgetContainer = 0x2e0; // Size: 16, Type: struct TArray<struct UUserWidget*>
			constexpr auto LoadingTransitionWidgetContainer = 0x2f0; // Size: 16, Type: struct TArray<struct UUserWidget*>
			constexpr auto SingleModeLoadingImagePool = 0x300; // Size: 8, Type: struct USingleModeLoadingImagePool*
	}
} 
