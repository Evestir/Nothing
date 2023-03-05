namespace offsets
{
	namespace UPrLogin
	{
			constexpr auto Profile = 0x48; // Size: 96, Type: struct FKtAccountProfile
			constexpr auto accountId = 0xa8; // Size: 16, Type: struct FString
			constexpr auto loginId = 0xb8; // Size: 16, Type: struct FString
			constexpr auto serviceId = 0xc8; // Size: 16, Type: struct FString
			constexpr auto npsn = 0xd8; // Size: 16, Type: struct FString
			constexpr auto seasonInfo = 0xe8; // Size: 32, Type: struct FKtSeasonInfo
			constexpr auto seasonStaticInfo = 0x108; // Size: 56, Type: struct FKtSeasonStaticInfo
			constexpr auto riderName = 0x140; // Size: 16, Type: struct FString
			constexpr auto inventoryData = 0x150; // Size: 16, Type: struct TArray<struct FKtItem>
			constexpr auto inventoryDataSeason = 0x160; // Size: 16, Type: struct TArray<struct FKtItem>
			constexpr auto inventoryDataInitial = 0x170; // Size: 16, Type: struct TArray<struct FKtItem>
			constexpr auto inventoryDataDefaultParts = 0x180; // Size: 16, Type: struct TArray<struct FKtItem>
			constexpr auto inventoryDataCash = 0x190; // Size: 16, Type: struct TArray<struct FKtItem>
			constexpr auto emblemItemIdOn = 0x1a0; // Size: 16, Type: struct FString
			constexpr auto itemPresetOn = 0x1b0; // Size: 160, Type: struct FKtItemPreset
			constexpr auto itemPresetVector = 0x250; // Size: 16, Type: struct TArray<struct FKtItemPreset>
			constexpr auto liveryVector = 0x260; // Size: 16, Type: struct TArray<struct FKtLivery>
			constexpr auto liveryStickerVector = 0x270; // Size: 16, Type: struct TArray<struct FKtLiverySticker>
			constexpr auto questSetDataDaily = 0x280; // Size: 80, Type: struct FKtQuestSetData
			constexpr auto questSetDataDailyComplete = 0x2d0; // Size: 80, Type: struct FKtQuestSetDataComplete
			constexpr auto questSetDataWeekly = 0x320; // Size: 80, Type: struct FKtQuestSetData
			constexpr auto questSetDataWeeklyComplete = 0x370; // Size: 80, Type: struct FKtQuestSetDataComplete
			constexpr auto questSetDataEmblem = 0x3c0; // Size: 80, Type: struct FKtQuestSetData
			constexpr auto questSetDataEmblemComplete = 0x410; // Size: 80, Type: struct FKtQuestSetDataComplete
			constexpr auto questSetDataLive = 0x460; // Size: 80, Type: struct FKtQuestSetData
			constexpr auto questSetDataLiveComplete = 0x4b0; // Size: 80, Type: struct FKtQuestSetDataComplete
			constexpr auto questSetDataPsn = 0x500; // Size: 80, Type: struct FKtQuestSetData
			constexpr auto questSetDataPsnComplete = 0x550; // Size: 80, Type: struct FKtQuestSetDataComplete
			constexpr auto questSetDataEvent = 0x5a0; // Size: 80, Type: struct FKtQuestSetData
			constexpr auto questSetDataEventComplete = 0x5f0; // Size: 80, Type: struct FKtQuestSetDataComplete
			constexpr auto UtcNow = 0x640; // Size: 16, Type: struct FString
			constexpr auto serverSetting = 0x650; // Size: 48, Type: struct FServerSettingToClient
			constexpr auto optionSetting = 0x680; // Size: 88, Type: struct FKtOptionSetting
			constexpr auto licenseData = 0x6d8; // Size: 80, Type: struct FKtLicenseData
			constexpr auto tutorialData = 0x728; // Size: 2, Type: struct FKtTutorialData
			constexpr auto customProperties = 0x730; // Size: 80, Type: struct TMap<struct FString, struct FString>
			constexpr auto Flag = 0x780; // Size: 16, Type: struct TArray<enum class EKtAccountFlag>
			constexpr auto serverRegionId = 0x790; // Size: 16, Type: struct FString
			constexpr auto sharedValue = 0x7a0; // Size: 16, Type: struct FString
			constexpr auto crossPlayEnabled = 0x7b0; // Size: 1, Type: bool
			constexpr auto ownKartsUpgradeInfo = 0x7b8; // Size: 80, Type: struct TMap<struct FString, struct FOwnKartUpgradeInfo>
			constexpr auto liverySignedUrlVector = 0x808; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto liveryStickerSignedUrlVector = 0x818; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto playLucci = 0x828; // Size: 16, Type: struct FKtPlayLucciInfo
			constexpr auto isChangeUnusableItem = 0x838; // Size: 1, Type: bool
			constexpr auto permission = 0x839; // Size: 1, Type: struct FKtPermissionData
			constexpr auto ugcEnabled = 0x83a; // Size: 1, Type: bool
			constexpr auto chatEnabled = 0x83b; // Size: 1, Type: bool
			constexpr auto regularGrandPrixTier = 0x83c; // Size: 1, Type: enum class EKtGrandPrixSubTier
			constexpr auto firstBuyPlatform = 0x83d; // Size: 1, Type: enum class EKtAffiliatePlatform
			constexpr auto isAdult = 0x83e; // Size: 1, Type: bool
			constexpr auto npaCode = 0x840; // Size: 16, Type: struct FString
			constexpr auto modeSelectDataList = 0x850; // Size: 16, Type: struct FKtModeSelectDataList
			constexpr auto quickMatchData = 0x860; // Size: 40, Type: struct FKtMatchRequestData
			constexpr auto accPlayTimeSec = 0x888; // Size: 4, Type: int32_t
	}
} 
