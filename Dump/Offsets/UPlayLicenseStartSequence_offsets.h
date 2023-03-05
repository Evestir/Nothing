namespace offsets
{
	namespace UPlayLicenseStartSequence
	{
			constexpr auto SequencePlayer = 0x48; // Size: 8, Type: struct ULevelSequencePlayer*
			constexpr auto KartMovementArray = 0x50; // Size: 16, Type: struct TArray<struct FSequenceKartMovementKeys>
			constexpr auto HudWidgetClass = 0x60; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto BoostGaugeWidgetClass = 0x88; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto ScoreWidgetClass = 0xb0; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto SequencePawn = 0xd8; // Size: 8, Type: struct APawn*
			constexpr auto SequenceOverride = 0xe0; // Size: 8, Type: struct ULevelSequence*
			constexpr auto LicenseDataAsset = 0xe8; // Size: 8, Type: struct ULicenseDataAsset*
			constexpr auto SequenceActor = 0xf0; // Size: 8, Type: struct ALevelSequenceActor*
	}
} 
