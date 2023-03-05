namespace offsets
{
	namespace ULicenseDataAsset
	{
			constexpr auto TargetName = 0x30; // Size: 24, Type: struct FText
			constexpr auto KartDesc = 0x48; // Size: 184, Type: struct FKartDesc
			constexpr auto CharacterDesc = 0x100; // Size: 96, Type: struct FCharacterDesc
			constexpr auto TrackLevel = 0x160; // Size: 40, Type: struct TSoftObjectPtr<UWorld>
			constexpr auto TrackSubLevel = 0x188; // Size: 40, Type: struct TSoftObjectPtr<UWorld>
			constexpr auto TrackName = 0x1b0; // Size: 16, Type: struct FString
			constexpr auto LapCount = 0x1c0; // Size: 4, Type: int32_t
			constexpr auto LicenseBaseUI = 0x1c4; // Size: 7, Type: struct FLicenseBaseUI
			constexpr auto LicenseSequenceUI = 0x1cb; // Size: 3, Type: struct FLicenseSequenceUI
			constexpr auto LicenseContents = 0x1d0; // Size: 16, Type: struct TArray<struct ULicenseContents*>
			constexpr auto StartSequenceTrackOverride = 0x1e0; // Size: 40, Type: struct TSoftObjectPtr<ULevelSequence>
			constexpr auto FinishSequenceOverride = 0x208; // Size: 40, Type: struct TSoftObjectPtr<ULevelSequence>
			constexpr auto Condition = 0x230; // Size: 8, Type: struct ULicenseStarCondition*
			constexpr auto WinningRule = 0x238; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto bOverrideWorldOrigin = 0x260; // Size: 1, Type: bool
			constexpr auto bAllowAssist = 0x261; // Size: 1, Type: bool
			constexpr auto bDisableAutoDrive = 0x262; // Size: 1, Type: bool
			constexpr auto bDisableAutoDriftBoost = 0x263; // Size: 1, Type: bool
	}
} 
