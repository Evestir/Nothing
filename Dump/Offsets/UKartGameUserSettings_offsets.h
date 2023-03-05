namespace offsets
{
	namespace UKartGameUserSettings
	{
			constexpr auto GraphicSetting = 0x190; // Size: 128, Type: struct FPlayerGraphicSettings
			constexpr auto LastGraphicSetting = 0x210; // Size: 128, Type: struct FPlayerGraphicSettings
			constexpr auto GameSystemSetting = 0x290; // Size: 12, Type: struct FPlayerGameSystemSettings
			constexpr auto LastGameSystemSetting = 0x29c; // Size: 12, Type: struct FPlayerGameSystemSettings
			constexpr auto GameConvenienceSetting = 0x2a8; // Size: 24, Type: struct FPlayerConvenienceSettings
			constexpr auto LastGameConvenienceSetting = 0x2c0; // Size: 24, Type: struct FPlayerConvenienceSettings
			constexpr auto MobileHUDTypeSetting = 0x2d8; // Size: 12, Type: struct FPlayerMobileHUDTypeSettings
			constexpr auto LastMobileHUDTypeSetting = 0x2e4; // Size: 12, Type: struct FPlayerMobileHUDTypeSettings
			constexpr auto LastlySavedCustomHUDDataSlotIndex = 0x2f0; // Size: 4, Type: enum class ECustomHUDDataSlotIndex
			constexpr auto KartVersion = 0x2f4; // Size: 4, Type: uint32_t
			constexpr auto LastConfirmedFrameRateLimit = 0x2f8; // Size: 4, Type: float
			constexpr auto AudioVolume = 0x2fc; // Size: 84, Type: struct FPlayerAudioVolumeSettings
			constexpr auto LastAudioVolume = 0x350; // Size: 84, Type: struct FPlayerAudioVolumeSettings
			constexpr auto InitBanchMark = 0x3a4; // Size: 4, Type: uint32_t
			constexpr auto CultureIndex = 0x3a8; // Size: 4, Type: int32_t
			constexpr auto AutoPartyInviteReject = 0x3ac; // Size: 1, Type: bool
			constexpr auto AutoPartyJoinReject = 0x3ad; // Size: 1, Type: bool
			constexpr auto AutoFriendReject = 0x3ae; // Size: 1, Type: bool
			constexpr auto PlatformCultureIndex = 0x3b0; // Size: 4, Type: int32_t
			constexpr auto LastCultureIndex = 0x3b4; // Size: 4, Type: int32_t
			constexpr auto bForceFeedbackEffect = 0x3b8; // Size: 1, Type: bool
			constexpr auto LatencyType = 0x3bc; // Size: 4, Type: int32_t
			constexpr auto SoundInputDeviceName = 0x3c0; // Size: 16, Type: struct FString
			constexpr auto SoundOutputDeviceName = 0x3d0; // Size: 16, Type: struct FString
			constexpr auto bSaveRecentReplay = 0x3e0; // Size: 1, Type: bool
			constexpr auto AIToRacerCheckTick = 0x3e8; // Size: 8, Type: int64_t
			constexpr auto RacerToAICheckTick = 0x3f0; // Size: 8, Type: int64_t
			constexpr auto bMustShowItemGuidePopup = 0x3f8; // Size: 1, Type: bool
			constexpr auto bMustShowSpeedGuidePopup = 0x3f9; // Size: 1, Type: bool
			constexpr auto IsAlreadyShowLicenseGuidePopup = 0x3fa; // Size: 1, Type: char
			constexpr auto IndividualSettingID = 0x4b0; // Size: 16, Type: struct FString
	}
} 
