#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct KartDrift.ShopPurchasingInfo Size 72
// Inherited 24 bytes 
class FShopPurchasingInfo : public FShopStockItemInfo
{

 public: 
	char pad_24[48];  // Offset: 24 Size: 48



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_ModeSelectPageWidget.OnClickedPreviousModeButton Size 4
class FOnClickedPreviousModeButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtPlayMissionEventFileDef Size 72
class FKtPlayMissionEventFileDef
{

 public: 
	struct TArray<struct FKtPlayMissionDef> missions;  // Offset: 0 Size: 16
	struct TArray<struct FKtPlayMissionRewardPoolDef> missionRewardPools;  // Offset: 16 Size: 16
	struct TArray<struct FKtPlayMissionEventDef> events;  // Offset: 32 Size: 16
	int32_t rewardMailDays;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4
	struct FString rewardMailMessage;  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayControlPageWidget.OnDisplayToggleButtonChecked Size 4
class FOnDisplayToggleButtonChecked
{

 public: 
	int32_t DummyIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnShowDriftMission__DelegateSignature Size 1
class FOnShowDriftMission__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bShow : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnButtonTemplate_HoveredEvent__DelegateSignature Size 4
class FOnButtonTemplate_HoveredEvent__DelegateSignature
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedStudio Size 4
class FOnClickedStudio
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KeyTexture Size 16
class FKeyTexture
{

 public: 
	struct UPaperSprite* KeyTexture;  // Offset: 0 Size: 8
	struct UPaperSprite* KeyTexture_Focus;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AccountPlatformData Size 240
class FAccountPlatformData
{

 public: 
	enum class EKtAccountPlatform platform;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bAccountLinkGuest : 1;  // Offset: 1 Size: 1
	char pad_2[6];  // Offset: 2 Size: 6
	struct FString npsn;  // Offset: 8 Size: 16
	struct FString xuid;  // Offset: 24 Size: 16
	struct FString psnAccountId;  // Offset: 40 Size: 16
	struct FString riderName;  // Offset: 56 Size: 16
	struct FString emblem;  // Offset: 72 Size: 16
	struct FString gamerTag;  // Offset: 88 Size: 16
	struct FString onlineId;  // Offset: 104 Size: 16
	struct FString nexonTag;  // Offset: 120 Size: 16
	char pad_136_1 : 7;  // Offset: 136 Size: 1
	bool liveOnline : 1;  // Offset: 136 Size: 1
	char pad_137_1 : 7;  // Offset: 137 Size: 1
	bool liveOnlineKartRider : 1;  // Offset: 137 Size: 1
	char pad_138[6];  // Offset: 138 Size: 6
	struct FString liveRichPresence;  // Offset: 144 Size: 16
	char pad_160_1 : 7;  // Offset: 160 Size: 1
	bool psnOnline : 1;  // Offset: 160 Size: 1
	char pad_161_1 : 7;  // Offset: 161 Size: 1
	bool psnOnlineKartRider : 1;  // Offset: 161 Size: 1
	char pad_162[6];  // Offset: 162 Size: 6
	struct FString psnRichPresence;  // Offset: 168 Size: 16
	struct FString gfsPresence;  // Offset: 184 Size: 16
	struct FString gfsPlatformType;  // Offset: 200 Size: 16
	struct FString gfsPlatformNickname;  // Offset: 216 Size: 16
	int32_t gfsId;  // Offset: 232 Size: 4
	char pad_236[4];  // Offset: 236 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.StandbyLoadingEvent__DelegateSignature Size 4
class FStandbyLoadingEvent__DelegateSignature
{

 public: 
	int32_t Count;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnItemFeedCutoff__DelegateSignature Size 8
class FOnItemFeedCutoff__DelegateSignature
{

 public: 
	enum class EItemType UsedItemType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t ItemId;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnTickDelegate__DelegateSignature Size 4
class FOnTickDelegate__DelegateSignature
{

 public: 
	float inDeltaTime;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.PartsSet Size 80
class FPartsSet
{

 public: 
	struct TMap<enum class EItemCategoryType, int32_t> Values;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnButtonTemplate_FocusedEvent__DelegateSignature Size 4
class FOnButtonTemplate_FocusedEvent__DelegateSignature
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.StickerBlock Size 24
class FStickerBlock
{

 public: 
	int64_t blockId;  // Offset: 0 Size: 8
	int64_t stickerStockId;  // Offset: 8 Size: 8
	struct FDateTime blockDate;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnGuideUseItem__DelegateSignature Size 24
class FOnGuideUseItem__DelegateSignature
{

 public: 
	struct TArray<enum class EItemType> ItemType;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bActivate : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.RacingPassDef Size 4
class FRacingPassDef
{

 public: 
	int32_t trophy_lucciExchangeRate;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomGamePageWidget.OnClickedLicenseMoveButtonInTrackChangeDialog Size 4
class FOnClickedLicenseMoveButtonInTrackChangeDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnStartBoostEnabled__DelegateSignature Size 1
class FOnStartBoostEnabled__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInIsEnabled : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnQuickMatchingButtonClicked Size 4
class FOnQuickMatchingButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnShowShortcutMenuButtonClicked Size 4
class FOnShowShortcutMenuButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ClientKtKartSkillTreeSetDef Size 24
// Inherited 8 bytes 
class FClientKtKartSkillTreeSetDef : public FTableRowBase
{

 public: 
	struct TArray<struct FKtClientKartSkillTreeDef> kartSkillTreeDefVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ReporteeInfo Size 72
class FReporteeInfo
{

 public: 
	char pad_0[72];  // Offset: 0 Size: 72



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_CommunityPageWidget.InviteMenu_Request_OnClickedAddBtn Size 4
class FInviteMenu_Request_OnClickedAddBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnButtonTemplate_ReleasedEvent__DelegateSignature Size 4
class FOnButtonTemplate_ReleasedEvent__DelegateSignature
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_PlayMajorPodiumSequence Size 1
class FDev_PlayMajorPodiumSequence
{

 public: 
	enum class EMajorPodiumSequenceType InType;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomGamePageWidget.OnClickedLicenseMoveButtonInModeChangeDialog Size 4
class FOnClickedLicenseMoveButtonInModeChangeDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseMissionTitleWidget.OnDriftMissionDriftCount Size 4
class FOnDriftMissionDriftCount
{

 public: 
	int32_t InDriftCount;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientKartSkillSetDef Size 24
// Inherited 8 bytes 
class FKtClientKartSkillSetDef : public FTableRowBase
{

 public: 
	struct TArray<struct FKtClientKartSkillDef> kartSkillDefVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnLicenseNextSpeedLimit__DelegateSignature Size 8
class FOnLicenseNextSpeedLimit__DelegateSignature
{

 public: 
	float SuccessSpeed;  // Offset: 0 Size: 4
	int32_t Score;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseWaterBombEventSequence.OnWaterBombEvent Size 128
class FOnWaterBombEvent
{

 public: 
	enum class EItemType UsedItemType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t UsedItemId;  // Offset: 4 Size: 4
	struct TSoftObjectPtr<ULevelSequence> DummySequence;  // Offset: 8 Size: 40
	float DummyTime;  // Offset: 48 Size: 4
	char pad_52[12];  // Offset: 52 Size: 12
	struct FTransform SpawnTransform;  // Offset: 64 Size: 48
	struct AActor* InTargetActor;  // Offset: 112 Size: 8
	char pad_120[8];  // Offset: 120 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartGameUserSettings.GetAnnouncementUrl Size 16
class FGetAnnouncementUrl
{

 public: 
	struct FString ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtKartBodyParam Size 212
class FKtKartBodyParam
{

 public: 
	float Mass;  // Offset: 0 Size: 4
	float forwardAccelForce;  // Offset: 4 Size: 4
	float driftEscapeForce;  // Offset: 8 Size: 4
	float backwardAccelForce;  // Offset: 12 Size: 4
	float gripBrake;  // Offset: 16 Size: 4
	float slipBrake;  // Offset: 20 Size: 4
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool useTransformBooster : 1;  // Offset: 24 Size: 1
	char pad_25[3];  // Offset: 25 Size: 3
	float transAccelFactor;  // Offset: 28 Size: 4
	float boostAccelFactor;  // Offset: 32 Size: 4
	float normalBoosterTime;  // Offset: 36 Size: 4
	float teamBoosterTime;  // Offset: 40 Size: 4
	float animalBoosterTime;  // Offset: 44 Size: 4
	float startBoosterTime;  // Offset: 48 Size: 4
	float startBoosterTimeItem;  // Offset: 52 Size: 4
	float startBoosterTimeSpeed;  // Offset: 56 Size: 4
	float startForwardAccelFactor;  // Offset: 60 Size: 4
	float startForwardAccelFactorItem;  // Offset: 64 Size: 4
	float startForwardAccelFactorSpeed;  // Offset: 68 Size: 4
	float maxSteerDeg;  // Offset: 72 Size: 4
	float steerConstraint;  // Offset: 76 Size: 4
	float frontGripFactor;  // Offset: 80 Size: 4
	float rearGripFactor;  // Offset: 84 Size: 4
	float driftTrigFactor;  // Offset: 88 Size: 4
	float driftTrigTime;  // Offset: 92 Size: 4
	float driftSlipFactor;  // Offset: 96 Size: 4
	float cornerDrawFactor;  // Offset: 100 Size: 4
	float driftLeanFactor;  // Offset: 104 Size: 4
	float steerLeanFactor;  // Offset: 108 Size: 4
	float driftMaxGauge;  // Offset: 112 Size: 4
	float driftGaugePreservePercent;  // Offset: 116 Size: 4
	float airFriction;  // Offset: 120 Size: 4
	float dragFactor;  // Offset: 124 Size: 4
	float antiCollideBalance;  // Offset: 128 Size: 4
	float draftMulAccelFactor;  // Offset: 132 Size: 4
	int32_t draftTick;  // Offset: 136 Size: 4
	float driftBoostMulAccelFactor;  // Offset: 140 Size: 4
	int32_t driftBoostTick;  // Offset: 144 Size: 4
	float chargeBoostBySpeed;  // Offset: 148 Size: 4
	char pad_152_1 : 7;  // Offset: 152 Size: 1
	bool bUseExtendedAfterBooster : 1;  // Offset: 152 Size: 1
	char pad_153[3];  // Offset: 153 Size: 3
	float boostAccelFactorOnlyItem;  // Offset: 156 Size: 4
	float evadeForce;  // Offset: 160 Size: 4
	char pad_164_1 : 7;  // Offset: 164 Size: 1
	bool bMotorCycleType : 1;  // Offset: 164 Size: 1
	char pad_165[3];  // Offset: 165 Size: 3
	int32_t speedSlotCapacity;  // Offset: 168 Size: 4
	int32_t itemSlotCapacity;  // Offset: 172 Size: 4
	int32_t specialSlotCapacity;  // Offset: 176 Size: 4
	float autoChargeLowSpeed;  // Offset: 180 Size: 4
	char pad_184_1 : 7;  // Offset: 184 Size: 1
	bool bTransformAutoCharge : 1;  // Offset: 184 Size: 1
	char pad_185[3];  // Offset: 185 Size: 3
	float descEngineGrade;  // Offset: 188 Size: 4
	float descBalance;  // Offset: 192 Size: 4
	float descStability;  // Offset: 196 Size: 4
	float descEnchantCap;  // Offset: 200 Size: 4
	float descCornering;  // Offset: 204 Size: 4
	float TransformTime;  // Offset: 208 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AnimationPresetDef Size 12
class FAnimationPresetDef
{

 public: 
	struct FName AnimationName;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bPlayReverse : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.DataTableTableRow Size 56
// Inherited 8 bytes 
class FDataTableTableRow : public FTableRowBase
{

 public: 
	enum class ETableType TableType;  // Offset: 8 Size: 1
	char pad_9_1 : 7;  // Offset: 9 Size: 1
	bool IsKtStyleDataTable : 1;  // Offset: 9 Size: 1
	char pad_10[6];  // Offset: 10 Size: 6
	struct TSoftObjectPtr<UDataTable> TableObject;  // Offset: 16 Size: 40



 // Functions 
 public:
}; 
 
 //Function KartDrift.SideMenuPageWidget.TermsAndConditions_OnServiceButtonClicked Size 4
class FTermsAndConditions_OnServiceButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnButtonTemplate_ClickedEvent__DelegateSignature Size 4
class FOnButtonTemplate_ClickedEvent__DelegateSignature
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.HitInfo Size 40
class FHitInfo
{

 public: 
	struct UItemComponent* Attacker;  // Offset: 0 Size: 8
	struct UItemComponent* Victim;  // Offset: 8 Size: 8
	struct UItemComponent* BlockCaster;  // Offset: 16 Size: 8
	float Time;  // Offset: 24 Size: 4
	enum class EItemType ItemId;  // Offset: 28 Size: 1
	enum class EItemType BlockItemId;  // Offset: 29 Size: 1
	char pad_30[2];  // Offset: 30 Size: 2
	int32_t ItemUniqueId;  // Offset: 32 Size: 4
	enum class EHitState HitState;  // Offset: 36 Size: 1
	char pad_37[3];  // Offset: 37 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryWrappingArray_Ver3 Size 24
class FLiveryWrappingArray_Ver3
{

 public: 
	enum class ELiveryPaintType Section;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct TArray<struct FLiveryWrappingDesc_Ver3> WrappingArray;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnSelectedControlTrack__DelegateSignature Size 32
class FOnSelectedControlTrack__DelegateSignature
{

 public: 
	struct FString InSelectedItem;  // Offset: 0 Size: 16
	struct FString InSelectedItemKey;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LicensePageWidget.OnClickedRewardListButton Size 4
class FOnClickedRewardListButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnButtonTemplate_PressedEvent__DelegateSignature Size 4
class FOnButtonTemplate_PressedEvent__DelegateSignature
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnClickedChallengeToggleButton Size 4
class FOnClickedChallengeToggleButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_HideUIAll Size 1
class FDev_HideUIAll
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bHide : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnCrashKart__DelegateSignature Size 24
class FOnCrashKart__DelegateSignature
{

 public: 
	enum class ECollisionChannel CollisionObjectType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t CrashLevel;  // Offset: 4 Size: 4
	float CrashVelocity;  // Offset: 8 Size: 4
	struct FVector CrashLocation;  // Offset: 12 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtSeasonDef Size 24
class FKtSeasonDef
{

 public: 
	int32_t seasonCount;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FString seasonPeriod;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientQuestDailySeasonDef Size 96
class FKtClientQuestDailySeasonDef
{

 public: 
	struct FString rewardStockId;  // Offset: 0 Size: 16
	struct TMap<struct FString, struct FKtClientQuestDailyDef> questDailyDefMap;  // Offset: 16 Size: 80



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnButtonTemplate_UnHoveredEvent__DelegateSignature Size 4
class FOnButtonTemplate_UnHoveredEvent__DelegateSignature
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnGfsFriendSearchDelegate__DelegateSignature Size 16
class FOnGfsFriendSearchDelegate__DelegateSignature
{

 public: 
	struct TArray<struct FAccountPlatformData> Data;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.TimeAttackRankerListContainer Size 336
class FTimeAttackRankerListContainer
{

 public: 
	char pad_0[336];  // Offset: 0 Size: 336



 // Functions 
 public:
}; 
 
 //Function KartDrift.TrackGimmick_Road.OnComponentHit Size 176
class FOnComponentHit
{

 public: 
	struct UPrimitiveComponent* HitComponent;  // Offset: 0 Size: 8
	struct AActor* OtherActor;  // Offset: 8 Size: 8
	struct UPrimitiveComponent* OtherComp;  // Offset: 16 Size: 8
	struct FVector NormalImpulse;  // Offset: 24 Size: 12
	struct FHitResult Hit;  // Offset: 36 Size: 136
	char pad_172[4];  // Offset: 172 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryStickerDesc Size 40
class FLiveryStickerDesc
{

 public: 
	struct FText Label;  // Offset: 0 Size: 24
	struct TArray<struct FLiveryWrappingDesc> WrappingDescArray;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayControlPageWidget.OnExitReplayButtonClicked Size 4
class FOnExitReplayButtonClicked
{

 public: 
	int32_t DummyIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.TargetFinderDelegate__DelegateSignature Size 1
class FTargetFinderDelegate__DelegateSignature
{

 public: 
	enum class EAimState State;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KeyRebindingLibrary.RemoveActionKeyMapping Size 48
class FRemoveActionKeyMapping
{

 public: 
	struct FInputActionKeyMapping RemoveKey;  // Offset: 0 Size: 40
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bSaveSetting : 1;  // Offset: 40 Size: 1
	char pad_41_1 : 7;  // Offset: 41 Size: 1
	bool ReturnValue : 1;  // Offset: 41 Size: 1
	char pad_42[6];  // Offset: 42 Size: 6



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnEntryObject_ClickedEvent__DelegateSignature Size 16
class FOnEntryObject_ClickedEvent__DelegateSignature
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UObject* ItemObj;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.SideMenuPageWidget.Main_OnPresetClicked Size 4
class FMain_OnPresetClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_CommunityPageWidget.MainDialog_OnAddFriendButtonClicked Size 4
class FMainDialog_OnAddFriendButtonClicked
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnSeasonUpdatedDelegate__DelegateSignature Size 1
class FOnSeasonUpdatedDelegate__DelegateSignature
{

 public: 
	enum class ESeasonUpdatedType UpdatedType;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_ShowLoadingScreen Size 4
class FDev_ShowLoadingScreen
{

 public: 
	int32_t TipPoolId;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomGamePageWidget.OnMoveToLicenseButtonClicked Size 4
class FOnMoveToLicenseButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.CsTeamScoreChange Size 8
class FCsTeamScoreChange
{

 public: 
	struct FCsTeamScore prev;  // Offset: 0 Size: 4
	struct FCsTeamScore Next;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnButtonTemplate_UnfocusedEvent__DelegateSignature Size 4
class FOnButtonTemplate_UnfocusedEvent__DelegateSignature
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnDisableCustomGameInviteDelegate__DelegateSignature Size 16
class FOnDisableCustomGameInviteDelegate__DelegateSignature
{

 public: 
	struct FString InAccountId;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnLicenseRemoveObstarcle__DelegateSignature Size 4
class FOnLicenseRemoveObstarcle__DelegateSignature
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.DedicatedLobbyPawn.UpdateDesc Size 288
class FUpdateDesc
{

 public: 
	struct FDedicatedLobbyPlayerDesc InDesc;  // Offset: 0 Size: 288



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnButtonTemplate_CheckedEvent__DelegateSignature Size 4
class FOnButtonTemplate_CheckedEvent__DelegateSignature
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnChangeItemSlotSpec__DelegateSignature Size 4
class FOnChangeItemSlotSpec__DelegateSignature
{

 public: 
	int32_t InSlotCount;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.OptionInfo Size 456
class FOptionInfo
{

 public: 
	int32_t OptionFocusIndex;  // Offset: 0 Size: 4
	int32_t SavedOptionIndex;  // Offset: 4 Size: 4
	int32_t OptionIndex;  // Offset: 8 Size: 4
	float SavedOptionValue;  // Offset: 12 Size: 4
	float OptionValue;  // Offset: 16 Size: 4
	float MinValue;  // Offset: 20 Size: 4
	float MaxValue;  // Offset: 24 Size: 4
	enum class EOptionsCategory Category;  // Offset: 28 Size: 1
	enum class EOptionBarType OptionBarType;  // Offset: 29 Size: 1
	char pad_30_1 : 7;  // Offset: 30 Size: 1
	bool bRestart : 1;  // Offset: 30 Size: 1
	char pad_31[1];  // Offset: 31 Size: 1
	struct TArray<struct FText> ItemLabels;  // Offset: 32 Size: 16
	struct FText OptionExplainLabel;  // Offset: 48 Size: 24
	struct FKeyInfo KeyInfo;  // Offset: 72 Size: 72
	struct FKeyInfo SavedKeyInfo;  // Offset: 144 Size: 72
	enum class EKeyPreset KeyPreset;  // Offset: 216 Size: 4
	char pad_220_1 : 7;  // Offset: 220 Size: 1
	bool bKeyEdit : 1;  // Offset: 220 Size: 1
	char pad_221[3];  // Offset: 221 Size: 3
	struct TArray<struct FText> ColumnItems;  // Offset: 224 Size: 16
	int32_t NotifyRevertOptionIndex;  // Offset: 240 Size: 4
	char pad_244[4];  // Offset: 244 Size: 4
	struct TArray<struct FText> NotifyExplainLabels;  // Offset: 248 Size: 16
	struct TArray<struct FText> NotifyTitleLabels;  // Offset: 264 Size: 16
	struct TArray<bool> ChildEnables;  // Offset: 280 Size: 16
	char pad_296_1 : 7;  // Offset: 296 Size: 1
	bool ChildEnabledAloneWhenDisable : 1;  // Offset: 296 Size: 1
	char pad_297_1 : 7;  // Offset: 297 Size: 1
	bool ChildUseHyphen : 1;  // Offset: 297 Size: 1
	char pad_298[2];  // Offset: 298 Size: 2
	struct TWeakObjectPtr<UUserWidget> WidgetPtr;  // Offset: 300 Size: 8
	struct TWeakObjectPtr<UUserWidget> ParentWidgetPtr;  // Offset: 308 Size: 8
	char pad_316[4];  // Offset: 316 Size: 4
	struct TArray<struct TWeakObjectPtr<UUserWidget>> ChildWidgetPtrs;  // Offset: 320 Size: 16
	char pad_336[120];  // Offset: 336 Size: 120



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnAddScore__DelegateSignature Size 8
class FOnAddScore__DelegateSignature
{

 public: 
	int32_t InScore;  // Offset: 0 Size: 4
	enum class ELicenseScoreReason Reason;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function KartDrift.ScenarioTrigger.OnBeginOverlap Size 168
class FOnBeginOverlap
{

 public: 
	struct UPrimitiveComponent* OverlappedComponent;  // Offset: 0 Size: 8
	struct AActor* OtherActor;  // Offset: 8 Size: 8
	struct UPrimitiveComponent* OtherComponent;  // Offset: 16 Size: 8
	int32_t OtherBodyIndex;  // Offset: 24 Size: 4
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool bFromSweep : 1;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3
	struct FHitResult SweepResult;  // Offset: 32 Size: 136



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.GetTwoSided Size 1
class FGetTwoSided
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioKeyLayoutData Size 48
class FScenarioKeyLayoutData
{

 public: 
	struct TArray<struct FScenarioKeyData> KeyDataContainer;  // Offset: 0 Size: 16
	float EmphasizeDelayBegin;  // Offset: 16 Size: 4
	float EmphasizeDelayEnd;  // Offset: 20 Size: 4
	struct FText Descript;  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.FuncLib_Widget.OnButtonClickedEvent__DelegateSignature Size 4
class FOnButtonClickedEvent__DelegateSignature
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedCancelOnPurchaseResultDialog Size 4
class FOnClickedCancelOnPurchaseResultDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_InfoPageWidget.OnClickedPrevTab_Info Size 4
class FOnClickedPrevTab_Info
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ButtonContainerTemplate.OnScrolled Size 4
class FOnScrolled
{

 public: 
	float Offset;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.BuildCaptureWidget.OnSpinBoxValueChanged_CameraRotateInterpSpeed Size 4
class FOnSpinBoxValueChanged_CameraRotateInterpSpeed
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CheatComponent.Server_SetAITeleport Size 8
class FServer_SetAITeleport
{

 public: 
	float InputKey;  // Offset: 0 Size: 4
	float Speed;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartMovementReplication.ServerSetClientEvents Size 2
class FServerSetClientEvents
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool HitKart : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool HitWall : 1;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.VolumetricFogQuality Size 20
class FVolumetricFogQuality
{

 public: 
	int32_t Quality;  // Offset: 0 Size: 4
	int32_t GridPixelSize;  // Offset: 4 Size: 4
	int32_t GridSizeZ;  // Offset: 8 Size: 4
	float Distance;  // Offset: 12 Size: 4
	int32_t Shadow;  // Offset: 16 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AttachedMeshCurveData Size 40
// Inherited 16 bytes 
class FAttachedMeshCurveData : public FOverlayMaterialCurveData
{

 public: 
	struct FName SlotName;  // Offset: 16 Size: 8
	int32_t MaterialIndex;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4
	struct UMeshComponent* AttachedMesh;  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.MiniGameData Size 24
// Inherited 8 bytes 
class FMiniGameData : public FTableRowBase
{

 public: 
	float ShowTime;  // Offset: 8 Size: 4
	float PenaltyTime;  // Offset: 12 Size: 4
	float rewardTime;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnButtonTemplate_UncheckedEvent__DelegateSignature Size 4
class FOnButtonTemplate_UncheckedEvent__DelegateSignature
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ScenarioSequenceDirector.PlayCharacterAnimation Size 16
class FPlayCharacterAnimation
{

 public: 
	struct AActor* InActor;  // Offset: 0 Size: 8
	enum class ECharacterAnimGraphState InAnimState;  // Offset: 8 Size: 1
	enum class ECharacterMontage InMontage;  // Offset: 9 Size: 1
	char pad_10[6];  // Offset: 10 Size: 6



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnGuideInstanceBoost__DelegateSignature Size 1
class FOnGuideInstanceBoost__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool GuideBoost : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseSequenceUI Size 3
class FLicenseSequenceUI
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bItemSlot : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bTachometer : 1;  // Offset: 1 Size: 1
	char pad_2_1 : 7;  // Offset: 2 Size: 1
	bool bBoostGauge : 1;  // Offset: 2 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnDriftMissionStartTimer__DelegateSignature Size 1
class FOnDriftMissionStartTimer__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bStartTimer : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.CommunityLogicComponent.OnInviteJoinParty Size 16
class FOnInviteJoinParty
{

 public: 
	struct FString JoinedUserName;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.DedicatedLobbyGameState.Multicast_AddChat Size 24
class FMulticast_AddChat
{

 public: 
	struct FText InChat;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnFinished__DelegateSignature Size 8
class FOnFinished__DelegateSignature
{

 public: 
	struct APawn* Pawn;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.LoginPageWidget.OnClickServerChangeButton Size 4
class FOnClickServerChangeButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ConfirmDialogButtonInfo Size 48
class FConfirmDialogButtonInfo
{

 public: 
	char pad_0[48];  // Offset: 0 Size: 48



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnPageWidgetActivated__DelegateSignature Size 1
class FOnPageWidgetActivated__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bActivate : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_GfsDeclineFriendRequest Size 16
class FDev_GfsDeclineFriendRequest
{

 public: 
	struct FString accountId;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnWrongWayChecked__DelegateSignature Size 1
class FOnWrongWayChecked__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bWrongWay : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.MatchInfo Size 40
class FMatchInfo
{

 public: 
	char pad_0[40];  // Offset: 0 Size: 40



 // Functions 
 public:
}; 
 
 //Function KartDrift.PSOCollectWidget.OnComboBoxSelectionChanged_Booster Size 32
class FOnComboBoxSelectionChanged_Booster
{

 public: 
	struct FString InSelectedItem;  // Offset: 0 Size: 16
	struct FString InSelectedItemKey;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtTrophySaleDef Size 8
class FKtTrophySaleDef
{

 public: 
	int32_t saleCount;  // Offset: 0 Size: 4
	int32_t saleRate;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnSelectedControlDirecting__DelegateSignature Size 24
class FOnSelectedControlDirecting__DelegateSignature
{

 public: 
	struct FString InSelectedItem;  // Offset: 0 Size: 16
	char InIndex;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnButtonControlDirecting__DelegateSignature Size 1
class FOnButtonControlDirecting__DelegateSignature
{

 public: 
	char InIndex;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientQuestWeeklyDef Size 24
class FKtClientQuestWeeklyDef
{

 public: 
	int32_t seasonWeekIdx;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FKtClientQuestDef questDef;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtItemTable Size 24
// Inherited 8 bytes 
class FKtItemTable : public FTableRowBase
{

 public: 
	struct TArray<struct FKtItemDef> itemDefVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtLootboxStock Size 128
class FKtLootboxStock
{

 public: 
	struct FString stockId;  // Offset: 0 Size: 16
	enum class EKtLootboxType boxType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7
	struct TArray<struct FKtStockItem> stockItemVector;  // Offset: 24 Size: 16
	struct FNullableDateTime useStartDate;  // Offset: 40 Size: 16
	struct FNullableDateTime useEndDate;  // Offset: 56 Size: 16
	struct FKtBonusItem bonusItem;  // Offset: 72 Size: 24
	struct TArray<int32_t> subListIdVector;  // Offset: 96 Size: 16
	struct TArray<struct FKtLootboxSet> setVector;  // Offset: 112 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartMovementComponent.OnHitWall Size 152
class FOnHitWall
{

 public: 
	struct FVector NormalImpulse;  // Offset: 0 Size: 12
	struct FHitResult Hit;  // Offset: 12 Size: 136
	char pad_148_1 : 7;  // Offset: 148 Size: 1
	bool bHitBarricade : 1;  // Offset: 148 Size: 1
	char pad_149[3];  // Offset: 149 Size: 3



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_OptionPageWidget.OnClickedCouponBtn Size 4
class FOnClickedCouponBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.KartBoostChangedSignature__DelegateSignature Size 1
class FKartBoostChangedSignature__DelegateSignature
{

 public: 
	enum class EBoostKind NewBoost;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.EquippedSkillInfo Size 8
class FEquippedSkillInfo
{

 public: 
	enum class EKartSkillType SkillType;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemWaterfly.MulticastAffectTo Size 16
class FMulticastAffectTo
{

 public: 
	struct UItemComponent* User;  // Offset: 0 Size: 8
	struct UItemComponent* Target;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayDetailPageWidget.OnClickedSelectButton Size 4
class FOnClickedSelectButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.CameraBlendInfo Size 16
class FCameraBlendInfo
{

 public: 
	float BlendTime;  // Offset: 0 Size: 4
	enum class EViewTargetBlendFunction BlendFunc;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3
	float BlendExp;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool bLockOutgoing : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnSelectedControlPawnEquip__DelegateSignature Size 32
class FOnSelectedControlPawnEquip__DelegateSignature
{

 public: 
	struct FString SelectedItem;  // Offset: 0 Size: 16
	struct FString SelectedItemKey;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ReplaceItemIdInfoRow Size 24
// Inherited 8 bytes 
class FReplaceItemIdInfoRow : public FTableRowBase
{

 public: 
	struct TArray<struct FReplaceItemIdInfo> InfoList;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.EventPageWidget.OnUpdateVDTEvent Size 16
class FOnUpdateVDTEvent
{

 public: 
	struct FString EventID;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnSelectedControlPawnFX__DelegateSignature Size 24
class FOnSelectedControlPawnFX__DelegateSignature
{

 public: 
	struct FString InSelectedItem;  // Offset: 0 Size: 16
	char InEnumType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseDriftMissionGateDef Size 128
class FLicenseDriftMissionGateDef
{

 public: 
	float Distance;  // Offset: 0 Size: 4
	float RightVectorOffset;  // Offset: 4 Size: 4
	float ZOffset;  // Offset: 8 Size: 4
	struct FRotator RotationOffset;  // Offset: 12 Size: 12
	struct FVector GateScale;  // Offset: 24 Size: 12
	char pad_36[12];  // Offset: 36 Size: 12
	struct FTransform GateTransform;  // Offset: 48 Size: 48
	struct FVector LeftPosition;  // Offset: 96 Size: 12
	struct FVector RightPosition;  // Offset: 108 Size: 12
	char pad_120[8];  // Offset: 120 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClickCloseWarningPopup Size 4
class FOnClickCloseWarningPopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnButtonControlPawnFX__DelegateSignature Size 1
class FOnButtonControlPawnFX__DelegateSignature
{

 public: 
	char InEnumType;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.TeamBoostGauge Size 32
class FTeamBoostGauge
{

 public: 
	char pad_0[16];  // Offset: 0 Size: 16
	float CurrentRatio;  // Offset: 16 Size: 4
	float Cumulated;  // Offset: 20 Size: 4
	int32_t MemberCount;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.KartGetItemSuccessSignature__DelegateSignature Size 8
class FKartGetItemSuccessSignature__DelegateSignature
{

 public: 
	int32_t SlotId;  // Offset: 0 Size: 4
	enum class EItemType Type;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_ProfileEditPageWidget.OnClickedTagTab Size 4
class FOnClickedTagTab
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.StickerMarketStatus Size 48
class FStickerMarketStatus
{

 public: 
	char pad_0[48];  // Offset: 0 Size: 48



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnKartAccountLoginNeedAccountLinkSelect__DelegateSignature Size 2
class FOnKartAccountLoginNeedAccountLinkSelect__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bAllowAccountLinkGuest : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bMustAccountLink : 1;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtRacingPassSetDef Size 144
class FKtRacingPassSetDef
{

 public: 
	struct FString shop_stockID;  // Offset: 0 Size: 16
	struct FString shop_PackagestockID;  // Offset: 16 Size: 16
	struct FString shop_LevelstockID;  // Offset: 32 Size: 16
	struct TArray<struct FKtTrophySaleDef> saleRateVector;  // Offset: 48 Size: 16
	struct TMap<struct FString, struct FKtRacingPassDef> racingPassDefMap;  // Offset: 64 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.MiniGameDialog.ButtonOff Size 4
class FButtonOff
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnChangedCameraRotation__DelegateSignature Size 12
class FOnChangedCameraRotation__DelegateSignature
{

 public: 
	struct FRotator NewRotation;  // Offset: 0 Size: 12



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnUpdateLiveryCamera__DelegateSignature Size 28
class FOnUpdateLiveryCamera__DelegateSignature
{

 public: 
	struct FVector InLocation;  // Offset: 0 Size: 12
	struct FVector InDir;  // Offset: 12 Size: 12
	float InArmLength;  // Offset: 24 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.TouchKeyGuideWidget.GuideCounterSteer Size 2
class FGuideCounterSteer
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bPositive : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bActivate : 1;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.FixedCameraData Size 80
// Inherited 8 bytes 
class FFixedCameraData : public FTableRowBase
{

 public: 
	float ForwardDistance;  // Offset: 8 Size: 4
	float RoadCheckZLowerBound;  // Offset: 12 Size: 4
	float RoadCheckZUpperBound;  // Offset: 16 Size: 4
	float ZDistanceFromRoad;  // Offset: 20 Size: 4
	float DefaultFOV;  // Offset: 24 Size: 4
	float ResetDistanceThreshold;  // Offset: 28 Size: 4
	float ForwardMaxVelocity;  // Offset: 32 Size: 4
	float ForwardAcceleration;  // Offset: 36 Size: 4
	float ForwardFriction;  // Offset: 40 Size: 4
	float RightMaxVelocity;  // Offset: 44 Size: 4
	float RightAcceleration;  // Offset: 48 Size: 4
	float RightFriction;  // Offset: 52 Size: 4
	float PitchMaxVelocity;  // Offset: 56 Size: 4
	float PitchAcceleration;  // Offset: 60 Size: 4
	float PitchFriction;  // Offset: 64 Size: 4
	float YawMaxVelocity;  // Offset: 68 Size: 4
	float YawAcceleration;  // Offset: 72 Size: 4
	float YawFriction;  // Offset: 76 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnStickerItemClickButton Size 4
class FOnStickerItemClickButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.GetDrawSize Size 8
class FGetDrawSize
{

 public: 
	struct FVector2D ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.PremiumChallengePageWidget.ListAllEventByCheat Size 16
class FListAllEventByCheat
{

 public: 
	struct FString seasonId;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.CharAnimInstance.PlayMontageNTimes Size 8
class FPlayMontageNTimes
{

 public: 
	enum class ECharacterMontage InState;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t NumLoops;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.KartGetBoostItemSignature__DelegateSignature Size 1
class FKartGetBoostItemSignature__DelegateSignature
{

 public: 
	enum class EItemType BoostKind;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtQuestData Size 16
class FKtQuestData
{

 public: 
	struct TArray<struct FKtMissionData> missionDataVector;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.CommunityPageWidget.ToggleMute Size 16
class FToggleMute
{

 public: 
	struct FString InAccountId;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtMailAttachment Size 112
class FKtMailAttachment
{

 public: 
	struct FKtStock stock;  // Offset: 0 Size: 32
	struct TArray<struct FKtStockItem> price;  // Offset: 32 Size: 16
	struct FString orderId;  // Offset: 48 Size: 16
	struct FString currency;  // Offset: 64 Size: 16
	float realPrice;  // Offset: 80 Size: 4
	char pad_84[4];  // Offset: 84 Size: 4
	int64_t log_cash_idx;  // Offset: 88 Size: 8
	struct FString receipt_key;  // Offset: 96 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnSendHitInfo__DelegateSignature Size 40
class FOnSendHitInfo__DelegateSignature
{

 public: 
	struct FHitInfo Info;  // Offset: 0 Size: 40



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdService.GetMyIpAddress Size 16
class FGetMyIpAddress
{

 public: 
	struct FString ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnUpdateGaugeChargeGoal__DelegateSignature Size 8
class FOnUpdateGaugeChargeGoal__DelegateSignature
{

 public: 
	float PercentageMoreThan;  // Offset: 0 Size: 4
	float PercentageLessThan;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.RequestChangeRadierName Size 24
class FRequestChangeRadierName
{

 public: 
	struct FString InRiderName;  // Offset: 0 Size: 16
	float RemainReserveTime;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.TimeAttackTrackChangeDialog.OnClickedMoveToLicenseButton Size 4
class FOnClickedMoveToLicenseButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PremiumChallengePageWidget.OnUpdate_ShortCutButtonVisibility Size 1
class FOnUpdate_ShortCutButtonVisibility
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bVisibility : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtGrandPrixSetDef Size 24
// Inherited 8 bytes 
class FKtGrandPrixSetDef : public FTableRowBase
{

 public: 
	struct TArray<struct FKtGrandPrixDef> grandPrixDefVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseKeyState Size 2
class FLicenseKeyState
{

 public: 
	char pad_0[2];  // Offset: 0 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.TMIMajorDietData Size 64
class FTMIMajorDietData
{

 public: 
	struct FString UniqueIdentifier;  // Offset: 0 Size: 16
	struct TArray<struct FTMIMajorDietModeData> TMIItemModeData;  // Offset: 16 Size: 16
	struct FTMIRaceEventData TMIRaceEventData;  // Offset: 32 Size: 28
	char pad_60[4];  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnItemFeed__DelegateSignature Size 128
class FOnItemFeed__DelegateSignature
{

 public: 
	enum class EItemType UsedItemType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t ItemId;  // Offset: 4 Size: 4
	struct TSoftObjectPtr<ULevelSequence> FeedMirrorSequence;  // Offset: 8 Size: 40
	float FeedMirrorTime;  // Offset: 48 Size: 4
	char pad_52[12];  // Offset: 52 Size: 12
	struct FTransform SpawnTransform;  // Offset: 64 Size: 48
	struct AActor* TargetActor;  // Offset: 112 Size: 8
	char pad_120[8];  // Offset: 120 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.PhysXKartAnimInstance.PlayMontage Size 24
class FPlayMontage
{

 public: 
	enum class EKartPlayingMontageState InState;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float InPlayRate;  // Offset: 4 Size: 4
	enum class EMontagePlayReturnType ReturnValueType;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3
	float InTimeToStartMontageAt;  // Offset: 12 Size: 4
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bStopAllMontages : 1;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3
	float ReturnValue;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnDriftMissionDriftCount__DelegateSignature Size 4
class FOnDriftMissionDriftCount__DelegateSignature
{

 public: 
	int32_t DriftCount;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.GameLiftRacePlayerInfo Size 176
class FGameLiftRacePlayerInfo
{

 public: 
	struct FString playerId;  // Offset: 0 Size: 16
	struct FKtSessionPlayerAuxData auxData;  // Offset: 16 Size: 160



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemCubesComponent.MulticastEaten Size 16
class FMulticastEaten
{

 public: 
	struct AGoItem_Cube* Cube;  // Offset: 0 Size: 8
	struct AActor* Target;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnNewActorAddedToItemFeed__DelegateSignature Size 16
class FOnNewActorAddedToItemFeed__DelegateSignature
{

 public: 
	enum class EItemType UsedItemType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t ItemId;  // Offset: 4 Size: 4
	struct AActor* TargetActor;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.WidgetAnimationTransition Size 40
class FWidgetAnimationTransition
{

 public: 
	char pad_0[40];  // Offset: 0 Size: 40



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnUpdateHP__DelegateSignature Size 8
class FOnUpdateHP__DelegateSignature
{

 public: 
	float Damage;  // Offset: 0 Size: 4
	float Percent;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.DedicatedLobbyWidget.OnEditableTextCommitted_Enter Size 32
class FOnEditableTextCommitted_Enter
{

 public: 
	struct FText InText;  // Offset: 0 Size: 24
	enum class ETextCommit InCommitMethod;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryWrappingDescCompressed Size 14
class FLiveryWrappingDescCompressed
{

 public: 
	enum class ELiveryWrappingCategory Category;  // Offset: 0 Size: 1
	char IndexInCategory;  // Offset: 1 Size: 1
	uint16_t ColorOverrideIndex;  // Offset: 2 Size: 2
	uint16_t TranslationX;  // Offset: 4 Size: 2
	uint16_t TranslationY;  // Offset: 6 Size: 2
	uint16_t ScaleX;  // Offset: 8 Size: 2
	uint16_t ScaleY;  // Offset: 10 Size: 2
	uint16_t Rotation;  // Offset: 12 Size: 2



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_KartUpgradePageWidget.OnClickedFocusdGearPlusBtn Size 4
class FOnClickedFocusdGearPlusBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtSessionRaceObserverRequest Size 128
class FKtSessionRaceObserverRequest
{

 public: 
	struct FString playerId;  // Offset: 0 Size: 16
	struct FKtAccountProfile Profile;  // Offset: 16 Size: 96
	struct FString redisChannelName;  // Offset: 112 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ControlTrackWidget.OnComboBoxSelection_RaceMode Size 24
class FOnComboBoxSelection_RaceMode
{

 public: 
	struct FString SelectedItem;  // Offset: 0 Size: 16
	enum class ESelectInfo SelectionType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.SurfaceEffectComponent.PlaySurfaceForceFeedback Size 8
class FPlaySurfaceForceFeedback
{

 public: 
	struct UPhysicalMaterial* PM;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnAffectedBy__DelegateSignature Size 16
class FOnAffectedBy__DelegateSignature
{

 public: 
	struct AActor* Owner;  // Offset: 0 Size: 8
	struct AItem* Item;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.ApproachArrowWidget.SetNumber Size 4
class FSetNumber
{

 public: 
	int32_t NewNumber;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtDefaultPartsDef Size 80
class FKtDefaultPartsDef
{

 public: 
	struct TMap<struct FString, struct FString> defaultPartsItemMap;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartUpgradePageWidget.OnClickedBackBtn Size 4
class FOnClickedBackBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.KdGameLogoutDelegate__DelegateSignature Size 8
class FKdGameLogoutDelegate__DelegateSignature
{

 public: 
	struct APawn* InPawn;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.ScenarioSequenceDirector.ShowExpressionWidget Size 40
class FShowExpressionWidget
{

 public: 
	UScenarioExpressionWidget* InExpressionClass;  // Offset: 0 Size: 8
	UScenarioExpressionWidget* InMobileExpressionClass;  // Offset: 8 Size: 8
	float InStartAtTime;  // Offset: 16 Size: 4
	int32_t InNumLoopsToPlay;  // Offset: 20 Size: 4
	enum class EUMGSequencePlayMode InPlayMode;  // Offset: 24 Size: 1
	char pad_25[3];  // Offset: 25 Size: 3
	float InPlaybackSpeed;  // Offset: 28 Size: 4
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool InbRestoreState : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtContentSettingSetDef Size 40
// Inherited 8 bytes 
class FKtContentSettingSetDef : public FTableRowBase
{

 public: 
	struct FString LastUpdateDate;  // Offset: 8 Size: 16
	struct FReportDef report;  // Offset: 24 Size: 12
	struct FRacingPassDef racingPass;  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnUpdatedSticker Size 4
class FOnUpdatedSticker
{

 public: 
	int32_t ID;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.FrontFollowCameraData Size 72
// Inherited 8 bytes 
class FFrontFollowCameraData : public FTableRowBase
{

 public: 
	float NormalFov;  // Offset: 8 Size: 4
	float BoostFov;  // Offset: 12 Size: 4
	float OrientInterpTime;  // Offset: 16 Size: 4
	float SpeedDecreaseInterpTime;  // Offset: 20 Size: 4
	float SpeedIncreaseInterpTime;  // Offset: 24 Size: 4
	float BoostFovInterpTime;  // Offset: 28 Size: 4
	float NormalFovInterpTime;  // Offset: 32 Size: 4
	float DefaultDistanceFromTarget;  // Offset: 36 Size: 4
	float DistancePerTargetSpeed;  // Offset: 40 Size: 4
	float CameraLocationPitch;  // Offset: 44 Size: 4
	float MaxZoomInDistance;  // Offset: 48 Size: 4
	float MaxZoomOutDistance;  // Offset: 52 Size: 4
	float ZoomMaxVelocity;  // Offset: 56 Size: 4
	float ZoomFriction;  // Offset: 60 Size: 4
	float ZoomAcceleration;  // Offset: 64 Size: 4
	char pad_68[4];  // Offset: 68 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnBeginRaceTimer__DelegateSignature Size 4
class FOnBeginRaceTimer__DelegateSignature
{

 public: 
	float BeginTime;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdService.GetAccount Size 8
class FGetAccount
{

 public: 
	struct UKdAccount* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.PlayLucciReward Size 12
class FPlayLucciReward
{

 public: 
	int32_t acquired;  // Offset: 0 Size: 4
	int32_t rewarded;  // Offset: 4 Size: 4
	int32_t available;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.KartSkillNodeUpdateDelegate__DelegateSignature Size 8
class FKartSkillNodeUpdateDelegate__DelegateSignature
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bSucceed : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.MultiplierWithbMuted Size 8
class FMultiplierWithbMuted
{

 public: 
	float Multiplier;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bMuted : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function KartDrift.SideMenuPageWidget.Main_OnStaffClicked Size 4
class FMain_OnStaffClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseAllyActorInfo Size 24
class FLicenseAllyActorInfo
{

 public: 
	struct FText UniqueId;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.RacingPassPageWidget.RacingPass_OnClickedPurchaseRacingPassButton Size 4
class FRacingPass_OnClickedPurchaseRacingPassButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtPlayMissionPoolItem Size 40
class FKtPlayMissionPoolItem
{

 public: 
	int32_t Rate;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FString playMissionId;  // Offset: 8 Size: 16
	struct FString playMissionRewardPoolId;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.KartSkillFailedDelegate__DelegateSignature Size 4
class FKartSkillFailedDelegate__DelegateSignature
{

 public: 
	enum class EPrKartSkillResult InResultCode;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnAssistDelegate__DelegateSignature Size 1
class FOnAssistDelegate__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bParam : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientItemDef Size 144
// Inherited 56 bytes 
class FKtClientItemDef : public FKtItemDef
{

 public: 
	struct FText ItemName;  // Offset: 56 Size: 24
	struct FText itemDesc;  // Offset: 80 Size: 24
	struct TSoftObjectPtr<UTexture2D> Image;  // Offset: 104 Size: 40



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnGuideDrift__DelegateSignature Size 2
class FOnGuideDrift__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bLeft : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bDrift : 1;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtQuestSetData Size 80
class FKtQuestSetData
{

 public: 
	struct TMap<struct FString, struct FKtQuestData> questDataMap;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AccountPlatformDataPSN Size 56
class FAccountPlatformDataPSN
{

 public: 
	struct FString psnAccountId;  // Offset: 0 Size: 16
	struct FString onlineId;  // Offset: 16 Size: 16
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool psnOnline : 1;  // Offset: 32 Size: 1
	char pad_33_1 : 7;  // Offset: 33 Size: 1
	bool psnOnlineKartRider : 1;  // Offset: 33 Size: 1
	char pad_34[6];  // Offset: 34 Size: 6
	struct FString psnRichPresence;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_RacingPassPageWidget.ItemListPopup Size 24
class FItemListPopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FString> StockIDList;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtKartSkillExtraBodyParam Size 36
class FKtKartSkillExtraBodyParam
{

 public: 
	float dragFactor;  // Offset: 0 Size: 4
	float forwardAccelForce;  // Offset: 4 Size: 4
	float startForwardAccelFactor;  // Offset: 8 Size: 4
	float driftEscapeForce;  // Offset: 12 Size: 4
	float transAccelFactor;  // Offset: 16 Size: 4
	float normalBoosterTime;  // Offset: 20 Size: 4
	float teamBoosterTime;  // Offset: 24 Size: 4
	float startBoosterTime;  // Offset: 28 Size: 4
	float steerConstraint;  // Offset: 32 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KeyRebindingLibrary.GetAxisKeys Size 32
class FGetAxisKeys
{

 public: 
	struct FName AxisName;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bPositive : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct TArray<struct FKey> ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnLicenseSuccessMessage__DelegateSignature Size 24
class FOnLicenseSuccessMessage__DelegateSignature
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtUseItem Size 24
class FKtUseItem
{

 public: 
	struct FString ItemId;  // Offset: 0 Size: 16
	int32_t itemCount;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.FuncLib_Widget.OnTextCommittedEvent__DelegateSignature Size 32
class FOnTextCommittedEvent__DelegateSignature
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24
	enum class ETextCommit CommitMethod;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KdTextInlineImageDecoratorData Size 80
class FKdTextInlineImageDecoratorData
{

 public: 
	struct TMap<struct FName, struct FSlateBrush> StateAndBrushMap;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_PremiumChallengePageWidget.PremiumChallenge_OnClickedNextTab Size 4
class FPremiumChallenge_OnClickedNextTab
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnGuideCounterSteer__DelegateSignature Size 2
class FOnGuideCounterSteer__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool Positive : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool Guide : 1;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioMaterialInstanceInterpolation Size 72
class FScenarioMaterialInstanceInterpolation
{

 public: 
	struct FString Variable;  // Offset: 0 Size: 16
	struct TSoftObjectPtr<UCurveFloat> Curve;  // Offset: 16 Size: 40
	char pad_56[16];  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LootBoxOpenResult Size 40
class FLootBoxOpenResult
{

 public: 
	char pad_0[40];  // Offset: 0 Size: 40



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnCompleteLap__DelegateSignature Size 4
class FOnCompleteLap__DelegateSignature
{

 public: 
	int32_t CompleletedLapCount;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.FuncLib_Widget.OnTextChangedEvent__DelegateSignature Size 24
class FOnTextChangedEvent__DelegateSignature
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_CouponPageWidget.OpenItemListPopup Size 4
class FOpenItemListPopup
{

 public: 
	int32_t NotUsed;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientQuestDef Size 16
class FKtClientQuestDef
{

 public: 
	struct TArray<struct FKtClientMissionDef> missionDefVector;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedFocusableButtonInKCoinList Size 4
class FOnClickedFocusableButtonInKCoinList
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.InventoryItemKrPc Size 40
class FInventoryItemKrPc
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FString stockId;  // Offset: 8 Size: 16
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bCanRefund : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7
	struct FDateTime orderDate;  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdProfilerWidget.SetHitchFrameTimeThreshold Size 4
class FSetHitchFrameTimeThreshold
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtKartSkillTreeSetDefVec Size 24
// Inherited 8 bytes 
class FKtKartSkillTreeSetDefVec : public FTableRowBase
{

 public: 
	struct TArray<struct FKtKartSkillTreeNodeSetDef> kartSkillTreeDefVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryWrappingGroup_Ver3 Size 24
class FLiveryWrappingGroup_Ver3
{

 public: 
	int32_t HeadOffset;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FLiveryWrappingGroupHeadInfo_Ver3> HeadInfo;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnOptionsParsed__DelegateSignature Size 4
class FOnOptionsParsed__DelegateSignature
{

 public: 
	int32_t Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtRacingPassDef Size 40
class FKtRacingPassDef
{

 public: 
	enum class EKtRacingPassType passType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t accumTrophy;  // Offset: 4 Size: 4
	struct FString racingPass_stockID;  // Offset: 8 Size: 16
	struct FString premiumPass_stockID;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnLicenseNice__DelegateSignature Size 8
class FOnLicenseNice__DelegateSignature
{

 public: 
	int32_t MentIndex;  // Offset: 0 Size: 4
	int32_t Score;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ReplaceItemIdInfo Size 24
class FReplaceItemIdInfo
{

 public: 
	int32_t MinRangeItemCount;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FString ReplaceItemId;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtQuestEmblemDef Size 40
class FKtQuestEmblemDef
{

 public: 
	struct FString questPeriod;  // Offset: 0 Size: 16
	struct FKtQuestDef questDef;  // Offset: 16 Size: 16
	enum class EKtEmblemQuestGrade emblemQuestGrade;  // Offset: 32 Size: 1
	enum class EKtEmblemQuestCategory emblemQuestCategory;  // Offset: 33 Size: 1
	enum class EKtEmblemQuestTendency emblemQuestTendency;  // Offset: 34 Size: 1
	char pad_35_1 : 7;  // Offset: 35 Size: 1
	bool firstAchievementOption : 1;  // Offset: 35 Size: 1
	char pad_36_1 : 7;  // Offset: 36 Size: 1
	bool globalAnnouncementOption : 1;  // Offset: 36 Size: 1
	char pad_37[3];  // Offset: 37 Size: 3



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnInitializeSpeedLimit__DelegateSignature Size 32
class FOnInitializeSpeedLimit__DelegateSignature
{

 public: 
	struct TArray<float> MinSpeed;  // Offset: 0 Size: 16
	struct TArray<float> MaxSpeed;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_ChangeKartParts Size 24
class FDev_ChangeKartParts
{

 public: 
	enum class ETableType Type;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FString Key;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryEditPageWidget.OnClicked_MakeSticker Size 4
class FOnClicked_MakeSticker
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnNextDriftMission__DelegateSignature Size 16
class FOnNextDriftMission__DelegateSignature
{

 public: 
	float KeepNSeconds;  // Offset: 0 Size: 4
	float ReuseInNSeconds;  // Offset: 4 Size: 4
	float InNSeconds;  // Offset: 8 Size: 4
	int32_t UseNTimes;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnUpdateAIDistance__DelegateSignature Size 8
class FOnUpdateAIDistance__DelegateSignature
{

 public: 
	float AIDistance;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bWarning : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_OptionPageWidget.OnFocusedNpaCodeBtn Size 4
class FOnFocusedNpaCodeBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtGrandPrixMainTierDef Size 24
class FKtGrandPrixMainTierDef
{

 public: 
	enum class EKtGrandPrixMainTier mainTier;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct TArray<struct FKtGrandPrixSubTierDef> subTiers;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.SideMenuPageWidget.Report_ClosePlayerReportInputDialog Size 4
class FReport_ClosePlayerReportInputDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtModeSelectDataList Size 16
class FKtModeSelectDataList
{

 public: 
	struct TArray<struct FKtModeSelectData> list;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnDisableAIDistance__DelegateSignature Size 1
class FOnDisableAIDistance__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bDisable : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnUpdateDistance__DelegateSignature Size 8
class FOnUpdateDistance__DelegateSignature
{

 public: 
	float Distance;  // Offset: 0 Size: 4
	float Threshold;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtOptionSetting Size 88
class FKtOptionSetting
{

 public: 
	enum class EKtUse2ndPwd use2ndPwd;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool assistDisabled : 1;  // Offset: 1 Size: 1
	enum class EKtGameplayControlType playControlType;  // Offset: 2 Size: 1
	char pad_3[1];  // Offset: 3 Size: 1
	int32_t matchLatency;  // Offset: 4 Size: 4
	struct TMap<struct FString, struct FString> gameOptions;  // Offset: 8 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.LowLatencyActor.SetKartRepMovement Size 64
class FSetKartRepMovement
{

 public: 
	struct FKartRepMovement InKartRepMovement;  // Offset: 0 Size: 64



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopWidgetLogicComponent.OnCompleteLoadPawn Size 8
class FOnCompleteLoadPawn
{

 public: 
	struct AOutGamePawn* LoadedPawn;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ActiveScenario Size 48
class FActiveScenario
{

 public: 
	struct FString CategoryID;  // Offset: 0 Size: 16
	struct FString GroupID;  // Offset: 16 Size: 16
	struct TArray<struct FActiveScenarioState> ScenarioContainer;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnWarning__DelegateSignature Size 1
class FOnWarning__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bWarning : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryCache Size 120
class FLiveryCache
{

 public: 
	char pad_0[40];  // Offset: 0 Size: 40
	struct FLiveryDesignDesc LiveryDesignDesc;  // Offset: 40 Size: 64
	char pad_104[16];  // Offset: 104 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.GameModeData Size 184
class FGameModeData
{

 public: 
	struct TSoftClassPtr<UObject> GameMode;  // Offset: 0 Size: 40
	struct TSoftClassPtr<UObject> AIPawnClass;  // Offset: 40 Size: 40
	struct FText ModeName;  // Offset: 80 Size: 24
	struct TSet<struct TSoftObjectPtr<UObject>> PreCachedAssetContainer;  // Offset: 104 Size: 80



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnLicenseAddCoin__DelegateSignature Size 4
class FOnLicenseAddCoin__DelegateSignature
{

 public: 
	int32_t Num;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseSpeedColorInfo Size 20
class FLicenseSpeedColorInfo
{

 public: 
	float MinSpeed;  // Offset: 0 Size: 4
	struct FLinearColor Color;  // Offset: 4 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientQuestEmblemMissionDef Size 280
// Inherited 280 bytes 
class FKtClientQuestEmblemMissionDef : public FKtClientMissionDef
{

 public: 



 // Functions 
 public:
}; 
 
 //Function KartDrift.CommunityLogicComponent.OnGfsFriendRemoved Size 240
class FOnGfsFriendRemoved
{

 public: 
	struct FAccountPlatformData Data;  // Offset: 0 Size: 240



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KartEffectEvent Size 272
class FKartEffectEvent
{

 public: 
	struct TArray<struct FKartEffectData> Always;  // Offset: 0 Size: 16
	struct TArray<struct FKartEffectData> Idle;  // Offset: 16 Size: 16
	struct TArray<struct FKartEffectData> Accel;  // Offset: 32 Size: 16
	struct TArray<struct FKartEffectData> TransformAccel;  // Offset: 48 Size: 16
	struct TArray<struct FKartEffectData> BoostByItem;  // Offset: 64 Size: 16
	struct TArray<struct FKartEffectData> TransformBoostByItem;  // Offset: 80 Size: 16
	struct TArray<struct FKartEffectData> BoostByDrift;  // Offset: 96 Size: 16
	struct TArray<struct FKartEffectData> TransformBoostByDrift;  // Offset: 112 Size: 16
	struct TArray<struct FKartEffectData> Drift;  // Offset: 128 Size: 16
	struct TArray<struct FKartEffectData> BoostWheel;  // Offset: 144 Size: 16
	struct TArray<struct FKartEffectData> Brake;  // Offset: 160 Size: 16
	struct TArray<struct FName> FrontLampSocketNames;  // Offset: 176 Size: 16
	struct TArray<struct FKartEffectData> SlipStream;  // Offset: 192 Size: 16
	struct TArray<struct FKartEffectData> Drafting;  // Offset: 208 Size: 16
	struct TArray<struct FKartEffectData> BoostZone;  // Offset: 224 Size: 16
	struct TArray<struct FKartEffectData> BoostDelivery;  // Offset: 240 Size: 16
	struct TArray<struct FKartEffectData> Transformed;  // Offset: 256 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnQuestSuccess__DelegateSignature Size 8
class FOnQuestSuccess__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bSuccess : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t Index;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClickCloseSave Size 4
class FOnClickCloseSave
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientLicenseMissionDef Size 200
// Inherited 80 bytes 
class FKtClientLicenseMissionDef : public FKtLicenseMissionDef
{

 public: 
	int32_t MissionLevelIndex;  // Offset: 80 Size: 4
	char pad_84[4];  // Offset: 84 Size: 4
	struct FText MissionTitle;  // Offset: 88 Size: 24
	struct TArray<enum class EItemType> MissionUseItemList;  // Offset: 112 Size: 16
	enum class ELicenseMissionScoreType ScoreType;  // Offset: 128 Size: 1
	char pad_129[7];  // Offset: 129 Size: 7
	struct FText MissionTipText;  // Offset: 136 Size: 24
	char pad_160_1 : 7;  // Offset: 160 Size: 1
	bool bSeparateMobileDescText : 1;  // Offset: 160 Size: 1
	char pad_161[7];  // Offset: 161 Size: 7
	struct TArray<struct FString> MissionDescText;  // Offset: 168 Size: 16
	struct TArray<struct TSoftObjectPtr<UTexture2D>> MissionDescImg;  // Offset: 184 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ModeSelectPageWidget.MatchMode_ShowMatchingSettingsPopup Size 4
class FMatchMode_ShowMatchingSettingsPopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemComponent.ClientBlockUseItem Size 4
class FClientBlockUseItem
{

 public: 
	float Time;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ScenarioTriggerByTouchInput.OnDisableButtonClicked Size 4
class FOnDisableButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedConfirmAllOnConfirmListDialog Size 4
class FOnClickedConfirmAllOnConfirmListDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PawnSequenceComponent.Multicast_PlaySequence Size 1
class FMulticast_PlaySequence
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIsPlaying : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnNewQuest__DelegateSignature Size 16
class FOnNewQuest__DelegateSignature
{

 public: 
	struct TArray<int32_t> QuestList;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.StandCameraData Size 24
// Inherited 8 bytes 
class FStandCameraData : public FTableRowBase
{

 public: 
	float TargetLocationInterpTime;  // Offset: 8 Size: 4
	float DefaultFOV;  // Offset: 12 Size: 4
	float MinFOV;  // Offset: 16 Size: 4
	float FovDecreasePerDistance;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_Websocket Size 16
class FDev_Websocket
{

 public: 
	struct FString URL;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryEditPageWidget.OnClicked_PaintColorReset Size 4
class FOnClicked_PaintColorReset
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.FMOD_TriggerData Size 136
class FFMOD_TriggerData
{

 public: 
	struct TSoftObjectPtr<AFMODAmbientSound> FMOD_Actor;  // Offset: 0 Size: 40
	float FMOD_Volume;  // Offset: 40 Size: 4
	float FMOD_Pitch;  // Offset: 44 Size: 4
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool FMOD_Play : 1;  // Offset: 48 Size: 1
	char pad_49[7];  // Offset: 49 Size: 7
	struct TMap<struct FName, float> Parameters;  // Offset: 56 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.EventPageWidget.SendVDTRewardPacket Size 4
class FSendVDTRewardPacket
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnReplicatedClientDesc__DelegateSignature Size 288
class FOnReplicatedClientDesc__DelegateSignature
{

 public: 
	struct FDedicatedLobbyPlayerDesc InDesc;  // Offset: 0 Size: 288



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseBossWarningWidget.OnWarning Size 1
class FOnWarning
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bWarning : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_Purchase Size 32
class FDev_Purchase
{

 public: 
	struct FString stockId;  // Offset: 0 Size: 16
	struct FString currency;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayControlPageWidget.OnDisplayToggleButtonUnchecked Size 4
class FOnDisplayToggleButtonUnchecked
{

 public: 
	int32_t DummyIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KdOutGamePawnTransform Size 112
// Inherited 8 bytes 
class FKdOutGamePawnTransform : public FTableRowBase
{

 public: 
	enum class EKtItemType ItemType;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct FString ReplaceItemId;  // Offset: 16 Size: 16
	struct TMap<enum class EOutGamePawnType, struct FKdOutGamePawnTransformData> PawnTypeToTransformDataMap;  // Offset: 32 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_GaragePageWidget.OnClickedShowEmotionStorage Size 4
class FOnClickedShowEmotionStorage
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.DedicatedLobbyPlayerDesc Size 288
class FDedicatedLobbyPlayerDesc
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bLineupKart : 1;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FKartDesc KartDesc;  // Offset: 8 Size: 184
	struct FCharacterDesc CharacterDesc;  // Offset: 192 Size: 96



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_StudioPageWidget.OnScreenShotButtonClicked Size 4
class FOnScreenShotButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LevelBGMControlComponent.ChangeBGM Size 16
class FChangeBGM
{

 public: 
	struct UFMODEvent* Event;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bForce : 1;  // Offset: 8 Size: 1
	char pad_9_1 : 7;  // Offset: 9 Size: 1
	bool ReturnValue : 1;  // Offset: 9 Size: 1
	char pad_10[6];  // Offset: 10 Size: 6



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.CsGameData Size 128
class FCsGameData
{

 public: 
	struct TArray<struct FString> teamName;  // Offset: 0 Size: 16
	struct TMap<struct FString, struct FCsPlayerScore> playerScore;  // Offset: 16 Size: 80
	struct TArray<struct FCsTeamScore> teamScore;  // Offset: 96 Size: 16
	struct TArray<struct FCsRaceResult> RaceResult;  // Offset: 112 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.CharacterDesc Size 96
class FCharacterDesc
{

 public: 
	struct FString CharacterId;  // Offset: 0 Size: 16
	struct FString CostumeId;  // Offset: 16 Size: 16
	struct FString MotionFinishId;  // Offset: 32 Size: 16
	struct FString MotionRetireId;  // Offset: 48 Size: 16
	struct FString MotionVictoryId;  // Offset: 64 Size: 16
	struct FString MotionDefeatId;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryWrappingArrayCompressed Size 16
class FLiveryWrappingArrayCompressed
{

 public: 
	struct TArray<struct FLiveryWrappingDescCompressed> WrappingDesc;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtSpecialItemsDef Size 80
class FKtSpecialItemsDef
{

 public: 
	struct FString Exp;  // Offset: 0 Size: 16
	struct FString trophy;  // Offset: 16 Size: 16
	struct FString kartExp;  // Offset: 32 Size: 16
	struct FString seasonPass;  // Offset: 48 Size: 16
	struct FString lucci;  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemBigBanana.MulticastBorn Size 28
class FMulticastBorn
{

 public: 
	struct FVector Location;  // Offset: 0 Size: 12
	struct FRotator Rotation;  // Offset: 12 Size: 12
	float TargetHeight;  // Offset: 24 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KartDesc Size 184
class FKartDesc
{

 public: 
	struct FString Body;  // Offset: 0 Size: 16
	struct FString Front;  // Offset: 16 Size: 16
	struct FString Side;  // Offset: 32 Size: 16
	struct FString Back;  // Offset: 48 Size: 16
	struct FString Wheel;  // Offset: 64 Size: 16
	struct FString Handle;  // Offset: 80 Size: 16
	struct FString Plate;  // Offset: 96 Size: 16
	struct FString Booster;  // Offset: 112 Size: 16
	struct FString LiveryUniqueId;  // Offset: 128 Size: 16
	int32_t LiveryRevision;  // Offset: 144 Size: 4
	char pad_148[4];  // Offset: 148 Size: 4
	struct FString Balloon;  // Offset: 152 Size: 16
	struct FString SkidMark;  // Offset: 168 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnShowRewardDialogDelegate__DelegateSignature Size 40
class FOnShowRewardDialogDelegate__DelegateSignature
{

 public: 
	enum class EPrCouponResult CouponResult;  // Offset: 0 Size: 4
	int32_t ErrorCode;  // Offset: 4 Size: 4
	struct TArray<struct FKtItem> Items;  // Offset: 8 Size: 16
	struct TArray<struct FString> Duplicates;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnDediWidgetItemReleased__DelegateSignature Size 288
class FOnDediWidgetItemReleased__DelegateSignature
{

 public: 
	struct FDedicatedLobbyPlayerDesc InDesc;  // Offset: 0 Size: 288



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnDediWidgetChatCommitted__DelegateSignature Size 32
class FOnDediWidgetChatCommitted__DelegateSignature
{

 public: 
	struct FText InText;  // Offset: 0 Size: 24
	enum class ETextCommit InCommitMethod;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LiveryStickerPageWidget.OnChecked_UseLayerScaleX Size 4
class FOnChecked_UseLayerScaleX
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnDediWidgetJourneyButtonReleased__DelegateSignature Size 72
class FOnDediWidgetJourneyButtonReleased__DelegateSignature
{

 public: 
	struct FString InTrackAlias;  // Offset: 0 Size: 16
	enum class ERaceMode InRaceMode;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7
	struct FString InGameMode;  // Offset: 24 Size: 16
	struct FString InTrackPackageName;  // Offset: 40 Size: 16
	struct FString InParams;  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.InfoPageData_Profile Size 328
class FInfoPageData_Profile
{

 public: 
	char pad_0[328];  // Offset: 0 Size: 328



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ForceFeedbackTable Size 16
// Inherited 8 bytes 
class FForceFeedbackTable : public FTableRowBase
{

 public: 
	struct UForceFeedbackEffect* Effect;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtSessionRacePlayerRequest Size 856
class FKtSessionRacePlayerRequest
{

 public: 
	struct FKtRacePlayerSummary summary;  // Offset: 0 Size: 192
	struct TArray<enum class EKtAccountFlag> playerFlag;  // Offset: 192 Size: 16
	struct FKtItemPreview itemPreview;  // Offset: 208 Size: 168
	struct FKtKartBodyParam bodyParam;  // Offset: 376 Size: 212
	char pad_588[4];  // Offset: 588 Size: 4
	struct FKtSessionPlayerAuxData auxData;  // Offset: 592 Size: 160
	struct UObject* playMission;  // Offset: 752 Size: 8
	struct TMap<struct FString, struct FString> customProperty;  // Offset: 760 Size: 80
	struct FString liverySignedUrl;  // Offset: 840 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryWrappingArray Size 24
class FLiveryWrappingArray
{

 public: 
	enum class ELiveryPaintType Section;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct TArray<struct FLiveryWrappingDesc> WrappingArray;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnScenarioWidget__DelegateSignature Size 8
class FOnScenarioWidget__DelegateSignature
{

 public: 
	struct UScenarioWidgetBase* Widget;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnAccountLogined__DelegateSignature Size 1
class FOnAccountLogined__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool Result : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientQuestSetDef Size 80
class FKtClientQuestSetDef
{

 public: 
	struct TMap<struct FString, struct FKtClientQuestDef> questDefMap;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.GearInfo Size 56
class FGearInfo
{

 public: 
	int32_t gear;  // Offset: 0 Size: 4
	struct FKtGearParam Param;  // Offset: 4 Size: 52



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceHudWidget.OnMicOnOffButtonClicked Size 4
class FOnMicOnOffButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnCustomGameToastDelegate__DelegateSignature Size 48
class FOnCustomGameToastDelegate__DelegateSignature
{

 public: 
	struct FText TitleText;  // Offset: 0 Size: 24
	struct FText DescText;  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LiveryStickerPageWidget.OnClicked_UseSticker Size 4
class FOnClicked_UseSticker
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnUpdatedPresetDelegate__DelegateSignature Size 1
class FOnUpdatedPresetDelegate__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bSuccess : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_GaragePageWidget.OnClickedNextMainTab Size 4
class FOnClickedNextMainTab
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryPaintDesc_Ver2 Size 20
class FLiveryPaintDesc_Ver2
{

 public: 
	struct FLinearColor GlobalColorOverride;  // Offset: 0 Size: 16
	int32_t IndexInCollection;  // Offset: 16 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_OptionPageWidget.OnCustomHUDButtonFocused Size 4
class FOnCustomHUDButtonFocused
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.WidgetAnimationNode Size 32
class FWidgetAnimationNode
{

 public: 
	char pad_0[32];  // Offset: 0 Size: 32



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnChangedPresetDelegate__DelegateSignature Size 8
class FOnChangedPresetDelegate__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bSuccess : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t PresetIndex;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedOpenMailPage Size 4
class FOnClickedOpenMailPage
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnChangedLiveryDelegate__DelegateSignature Size 4
class FOnChangedLiveryDelegate__DelegateSignature
{

 public: 
	int32_t ID;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnUpdatedCashInfoDelegate__DelegateSignature Size 24
class FOnUpdatedCashInfoDelegate__DelegateSignature
{

 public: 
	double CashCount;  // Offset: 0 Size: 8
	struct FString CurrencyType;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.PawnStateMulticastHelperComponent.MulticastRelayRaceGameResult Size 80
class FMulticastRelayRaceGameResult
{

 public: 
	struct UObject* RelayTarget;  // Offset: 0 Size: 8
	struct FRaceGameResult Result;  // Offset: 8 Size: 72



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnUpdatedBalanceInfoDelegate__DelegateSignature Size 4
class FOnUpdatedBalanceInfoDelegate__DelegateSignature
{

 public: 
	int32_t BalanceCount;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyLogicComponent.OnEmoticonReceived Size 48
class FOnEmoticonReceived
{

 public: 
	struct FString accountId;  // Offset: 0 Size: 16
	enum class EEmoticonType emoticonType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7
	struct FString EmoticonItemId;  // Offset: 24 Size: 16
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bHasEmotion : 1;  // Offset: 40 Size: 1
	char pad_41[7];  // Offset: 41 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.StickerStockFull Size 160
class FStickerStockFull
{

 public: 
	struct FStickerStock stock;  // Offset: 0 Size: 120
	struct FNullableDateTime dropDate;  // Offset: 120 Size: 16
	struct FDateTime lastUpdate;  // Offset: 136 Size: 8
	struct FString tagText;  // Offset: 144 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.GetDrawAtDesiredSize Size 1
class FGetDrawAtDesiredSize
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnWaitExpireAccountDelegate__DelegateSignature Size 4
class FOnWaitExpireAccountDelegate__DelegateSignature
{

 public: 
	int32_t ExpireSec;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MailPageWidget.OnUpdateKcoin Size 4
class FOnUpdateKcoin
{

 public: 
	int32_t Kcoin;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartUpgradePageWidget.OnShowKartUpgradeResult Size 2
class FOnShowKartUpgradeResult
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIsSuccess : 1;  // Offset: 0 Size: 1
	enum class EKtItemGrade KartGrade;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnKartAccountLoginAccountLinkConfirm__DelegateSignature Size 32
class FOnKartAccountLoginAccountLinkConfirm__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bSuccess : 1;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FText ErrorMsg;  // Offset: 8 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.PSOCollectWidget.OnButtonReleased_Motion Size 1
class FOnButtonReleased_Motion
{

 public: 
	char InMontage;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtGrandPrixRankReward Size 40
class FKtGrandPrixRankReward
{

 public: 
	struct TArray<int32_t> ranking;  // Offset: 0 Size: 16
	int32_t minRaceCount;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct TArray<struct FString> rewardStockIds;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartUpgradePageWidget.OnClickedGearMinusBtn Size 4
class FOnClickedGearMinusBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CheatComponent.Server_SetDisconnected Size 8
class FServer_SetDisconnected
{

 public: 
	struct APawn* Pawn;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartMovementReplication.ServerListenAutoDrive Size 1
class FServerListenAutoDrive
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool InAutoDrive : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnNickNameCreateResult__DelegateSignature Size 24
class FOnNickNameCreateResult__DelegateSignature
{

 public: 
	enum class EPrSetRiderNameResult CreateResult;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FString NotSupportedLetter;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnItemExpireDelegate__DelegateSignature Size 16
class FOnItemExpireDelegate__DelegateSignature
{

 public: 
	struct TArray<struct FKtItem> ItemExpireVector;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.TimeAttackLogicComponent.OnSeasonUpdated Size 1
class FOnSeasonUpdated
{

 public: 
	enum class ESeasonUpdatedType UpdatedType;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtItem Size 32
class FKtItem
{

 public: 
	struct FString ItemId;  // Offset: 0 Size: 16
	struct FKtItemData itemData;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AIGameScenario_UserFrontUsing Size 20
// Inherited 8 bytes 
class FAIGameScenario_UserFrontUsing : public FAIGameScenario
{

 public: 
	float RemainDistance;  // Offset: 8 Size: 4
	int32_t TargetRank;  // Offset: 12 Size: 4
	float StayTime;  // Offset: 16 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.FriendInfoGfs Size 88
class FFriendInfoGfs
{

 public: 
	struct FString npsn;  // Offset: 0 Size: 16
	double epochLastModified;  // Offset: 16 Size: 8
	struct FString connectedGameId;  // Offset: 24 Size: 16
	struct FString PlatformType;  // Offset: 40 Size: 16
	struct FString platformNickname;  // Offset: 56 Size: 16
	struct FString presence;  // Offset: 72 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KartSequenceDelegateInfo Size 40
class FKartSequenceDelegateInfo
{

 public: 
	char pad_0[40];  // Offset: 0 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtItemData Size 16
class FKtItemData
{

 public: 
	int32_t itemCount;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FDateTime itemExpireTime;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtInitalRewardRow Size 24
// Inherited 8 bytes 
class FKtInitalRewardRow : public FTableRowBase
{

 public: 
	struct TArray<struct FString> itemVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KdLootSpawnFxParam Size 56
class FKdLootSpawnFxParam
{

 public: 
	struct FString FxTypeString;  // Offset: 0 Size: 16
	float PlayTime;  // Offset: 16 Size: 4
	float StartFadeTime;  // Offset: 20 Size: 4
	float EndFadeTime;  // Offset: 24 Size: 4
	float CycleTime;  // Offset: 28 Size: 4
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool bLoop : 1;  // Offset: 32 Size: 1
	char pad_33_1 : 7;  // Offset: 33 Size: 1
	bool bReverse : 1;  // Offset: 33 Size: 1
	char pad_34[6];  // Offset: 34 Size: 6
	struct UCurveFloat* WeightCurve;  // Offset: 40 Size: 8
	struct UCurveFloat* CycleCurve;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.SortableGamePlayerData Size 8
class FSortableGamePlayerData
{

 public: 
	char pad_0[8];  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnLiveFriendDelegate__DelegateSignature Size 16
class FOnLiveFriendDelegate__DelegateSignature
{

 public: 
	struct TArray<struct FAccountPlatformData> AccountPlatformDataVector;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnPSNFriendDelegate__DelegateSignature Size 16
class FOnPSNFriendDelegate__DelegateSignature
{

 public: 
	struct TArray<struct FAccountPlatformData> AccountPlatformDataVector;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtSessionRaceResultPlayer Size 680
class FKtSessionRaceResultPlayer
{

 public: 
	struct FString playerId;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool AI : 1;  // Offset: 16 Size: 1
	enum class EKtRaceAiType aiType;  // Offset: 17 Size: 1
	char pad_18[6];  // Offset: 18 Size: 6
	struct FString raceResultKey;  // Offset: 24 Size: 16
	int32_t status;  // Offset: 40 Size: 4
	int32_t Team;  // Offset: 44 Size: 4
	int32_t rank;  // Offset: 48 Size: 4
	int32_t Time;  // Offset: 52 Size: 4
	int32_t bestTime;  // Offset: 56 Size: 4
	char pad_60_1 : 7;  // Offset: 60 Size: 1
	bool allRetire : 1;  // Offset: 60 Size: 1
	char pad_61[3];  // Offset: 61 Size: 3
	int32_t Progress;  // Offset: 64 Size: 4
	int32_t mileage;  // Offset: 68 Size: 4
	int32_t overtakeActionCount;  // Offset: 72 Size: 4
	int32_t smallboostActionCount;  // Offset: 76 Size: 4
	int32_t draftActionCount;  // Offset: 80 Size: 4
	int32_t crashActionCount;  // Offset: 84 Size: 4
	int32_t itemGainActionCount;  // Offset: 88 Size: 4
	int32_t driftActionCount;  // Offset: 92 Size: 4
	int32_t resetActionCount;  // Offset: 96 Size: 4
	char pad_100[4];  // Offset: 100 Size: 4
	struct TMap<struct FString, int32_t> goItemUseMap;  // Offset: 104 Size: 80
	struct TMap<struct FString, int32_t> goItemSuccessMap;  // Offset: 184 Size: 80
	struct TMap<struct FString, int32_t> goItemDefenceMap;  // Offset: 264 Size: 80
	struct TMap<struct FString, int32_t> goItemAttackMap;  // Offset: 344 Size: 80
	struct TMap<struct FString, int32_t> goItemAttackedMap;  // Offset: 424 Size: 80
	struct TMap<struct FString, int32_t> goItemGainMap;  // Offset: 504 Size: 80
	struct UObject* playMission;  // Offset: 584 Size: 8
	float loadingSecond;  // Offset: 592 Size: 4
	char pad_596[4];  // Offset: 596 Size: 4
	struct TMap<struct FString, struct FString> customPropertyUpdate;  // Offset: 600 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.RecordedPawnData Size 160
class FRecordedPawnData
{

 public: 
	char pad_0[160];  // Offset: 0 Size: 160



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemComponent.ClientAlertRed Size 16
class FClientAlertRed
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bOn : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float LifeTime;  // Offset: 4 Size: 4
	struct AItem* Item;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtItemPreview Size 168
class FKtItemPreview
{

 public: 
	struct FKtItemPreset itemPresetOn;  // Offset: 0 Size: 160
	int32_t beginnerFlag;  // Offset: 160 Size: 4
	char pad_164[4];  // Offset: 164 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicensePageWidget.OnClickedMissionPlay Size 4
class FOnClickedMissionPlay
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.PartyReadyState Size 4
class FPartyReadyState
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIsPartyJoined : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bIsPartyLeader : 1;  // Offset: 1 Size: 1
	char pad_2_1 : 7;  // Offset: 2 Size: 1
	bool bIsReadyGame : 1;  // Offset: 2 Size: 1
	char pad_3_1 : 7;  // Offset: 3 Size: 1
	bool bIsLeaderReadyGame : 1;  // Offset: 3 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientQuestWeeklySeasonDef Size 80
class FKtClientQuestWeeklySeasonDef
{

 public: 
	struct TMap<struct FString, struct FKtClientQuestWeeklyDef> questWeeklyDefMap;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_PauseReplay Size 1
class FDev_PauseReplay
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bPause : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioKeyData Size 48
class FScenarioKeyData
{

 public: 
	struct FScenarioKey Key;  // Offset: 0 Size: 12
	char pad_12[4];  // Offset: 12 Size: 4
	struct FText Key_Descript;  // Offset: 16 Size: 24
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bActionKey : 1;  // Offset: 40 Size: 1
	char pad_41[7];  // Offset: 41 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.SideMenuPageWidget.Main_OnKeyGuideClicked Size 4
class FMain_OnKeyGuideClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.SideMenuPageWidget.Report_OnReportInputTextChanged Size 24
class FReport_OnReportInputTextChanged
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnGfsFriendDataDelegate__DelegateSignature Size 240
class FOnGfsFriendDataDelegate__DelegateSignature
{

 public: 
	struct FAccountPlatformData Data;  // Offset: 0 Size: 240



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_KrPcRefund Size 4
class FDev_KrPcRefund
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MainMenuCameraManageComponent.GetCurrentCameraType Size 1
class FGetCurrentCameraType
{

 public: 
	enum class EPawnCameraType ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_CommunityPageWidget.PartyInvite_OnCloseButtonClicked Size 4
class FPartyInvite_OnCloseButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientMissionDef Size 280
// Inherited 232 bytes 
class FKtClientMissionDef : public FKtMissionDef
{

 public: 
	struct FText missionDesc;  // Offset: 232 Size: 24
	enum class EKtClientMissionProgressType progressType;  // Offset: 256 Size: 1
	char pad_257[7];  // Offset: 257 Size: 7
	struct TArray<struct FString> replacements;  // Offset: 264 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnGfsToastPopupDelegate__DelegateSignature Size 48
class FOnGfsToastPopupDelegate__DelegateSignature
{

 public: 
	struct FText TitleText;  // Offset: 0 Size: 24
	struct FText DescText;  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioCondition Size 16
class FScenarioCondition
{

 public: 
	enum class EScenarioConditionType ConditionType;  // Offset: 0 Size: 1
	enum class EItemType ItemType;  // Offset: 1 Size: 1
	enum class EBoostKind BoostKind;  // Offset: 2 Size: 1
	char pad_3[1];  // Offset: 3 Size: 1
	int32_t MaxCount;  // Offset: 4 Size: 4
	char pad_8[8];  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnAccountPlatformDataUpdated__DelegateSignature Size 240
class FOnAccountPlatformDataUpdated__DelegateSignature
{

 public: 
	struct FAccountPlatformData AccountPlatformData;  // Offset: 0 Size: 240



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedConfirmOnEnterDateOfBirthPopup Size 4
class FOnClickedConfirmOnEnterDateOfBirthPopup
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryReportViewerPageWidget.OnClicked_ScreenShot Size 4
class FOnClicked_ScreenShot
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.GrandPrixPageWidget.OnClickedDetailRecordDialogBackButton Size 4
class FOnClickedDetailRecordDialogBackButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnUserLevelUpdatedDelegate__DelegateSignature Size 8
class FOnUserLevelUpdatedDelegate__DelegateSignature
{

 public: 
	enum class EUserLevelUpdatedType InType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t InLevel;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemSlotComponent.Multicast_UseItem Size 4
class FMulticast_UseItem
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_FinishPersonalResultPlayer Size 12
class FDev_FinishPersonalResultPlayer
{

 public: 
	int32_t PlayerNumber;  // Offset: 0 Size: 4
	int32_t rank;  // Offset: 4 Size: 4
	float FinishTime;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryWrappingTransform Size 40
class FLiveryWrappingTransform
{

 public: 
	struct FLinearColor ColorOverride;  // Offset: 0 Size: 16
	struct FVector2D Translation;  // Offset: 16 Size: 8
	struct FVector2D Scale;  // Offset: 24 Size: 8
	float Rotation;  // Offset: 32 Size: 4
	float Translucency;  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnUpdateKartExp__DelegateSignature Size 24
class FOnUpdateKartExp__DelegateSignature
{

 public: 
	struct FString KartID;  // Offset: 0 Size: 16
	int32_t UpdatedExp;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtStaffCreditsSetDef Size 32
// Inherited 8 bytes 
class FKtStaffCreditsSetDef : public FTableRowBase
{

 public: 
	int32_t scrollDurationSeconds;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct TArray<struct FKtStaffCreditsDef> staffCreditsDefVector;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.AnimatedNumberTextBlock.PlayNumberAnim Size 4
class FPlayNumberAnim
{

 public: 
	float AnimDur;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.CommunityInviteButtonDelegate__DelegateSignature Size 16
class FCommunityInviteButtonDelegate__DelegateSignature
{

 public: 
	struct FString InAccountId;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnKartUpgradeResultDelegate__DelegateSignature Size 2
class FOnKartUpgradeResultDelegate__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bSuccess : 1;  // Offset: 0 Size: 1
	enum class EKtItemGrade KartGrade;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnShowToyPlateDelegate__DelegateSignature Size 1
class FOnShowToyPlateDelegate__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bPause : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.NgmVersionInfo Size 32
class FNgmVersionInfo
{

 public: 
	struct FString Signature;  // Offset: 0 Size: 16
	struct FString PatchAddr;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientGrandPrixTierSetDef Size 24
// Inherited 8 bytes 
class FKtClientGrandPrixTierSetDef : public FTableRowBase
{

 public: 
	struct TArray<struct FKtClientGrandPrixMainTierDef> tierDefVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LiveryEditPageWidget.OnClickedManagingEquip Size 4
class FOnClickedManagingEquip
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayControlPageWidget.OnClickedPreviousTab Size 4
class FOnClickedPreviousTab
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.ChangeLiveryLayerScaleX Size 4
class FChangeLiveryLayerScaleX
{

 public: 
	float InDelta;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnClickedConfirmButtonInAttendaceEventPopup Size 4
class FOnClickedConfirmButtonInAttendaceEventPopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnExpiredConfirmItemTime Size 24
class FOnExpiredConfirmItemTime
{

 public: 
	struct FString ExpiredShopStockItemID;  // Offset: 0 Size: 16
	int32_t ExpiredShopStockItemIndex;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.FMODPlayHelper Size 32
class FFMODPlayHelper
{

 public: 
	struct UFMODAudioComponent* FMODAudio;  // Offset: 0 Size: 8
	char pad_8[24];  // Offset: 8 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnEmoticonButtonClicked Size 4
class FOnEmoticonButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.PartyInviteUpdateDelegate__DelegateSignature Size 1
class FPartyInviteUpdateDelegate__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bRefused : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnUpdateEventDelegate__DelegateSignature Size 16
class FOnUpdateEventDelegate__DelegateSignature
{

 public: 
	struct FString EventID;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.HeadlightData Size 80
class FHeadlightData
{

 public: 
	struct FTransform Transform;  // Offset: 0 Size: 48
	float Intensity;  // Offset: 48 Size: 4
	float AttenuationRadius;  // Offset: 52 Size: 4
	float OuterConeAngle;  // Offset: 56 Size: 4
	struct FName AttachSocketName;  // Offset: 60 Size: 8
	char pad_68[12];  // Offset: 68 Size: 12



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnMatchRegisteredDelegate__DelegateSignature Size 16
class FOnMatchRegisteredDelegate__DelegateSignature
{

 public: 
	struct TArray<enum class ERaceMode> GameType;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.JoinPartyReplyDelegate__DelegateSignature Size 16
class FJoinPartyReplyDelegate__DelegateSignature
{

 public: 
	struct FString JoinedUserName;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnDisablePartyInviteDelegate__DelegateSignature Size 16
class FOnDisablePartyInviteDelegate__DelegateSignature
{

 public: 
	struct FString InAccountId;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientKartSkillTreeDef Size 72
class FKtClientKartSkillTreeDef
{

 public: 
	struct FString skillTreeId;  // Offset: 0 Size: 16
	struct FText skillTreeName;  // Offset: 16 Size: 24
	struct FString pageWidgetName;  // Offset: 40 Size: 16
	struct TArray<struct FKtClientKartSkillTreeNodeDef> nodes;  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtInitialDef Size 184
// Inherited 8 bytes 
class FKtInitialDef : public FTableRowBase
{

 public: 
	struct TArray<struct FString> itemVector;  // Offset: 8 Size: 16
	struct FKtItemPreset itemPreset;  // Offset: 24 Size: 160



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.UpdatePartyMemberDelegate__DelegateSignature Size 1
class FUpdatePartyMemberDelegate__DelegateSignature
{

 public: 
	enum class EPartyChageState ChangeState;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnPlayerReportResultDelegate__DelegateSignature Size 4
class FOnPlayerReportResultDelegate__DelegateSignature
{

 public: 
	enum class EPrSendReportResult ReportResult;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartEffectComponent.Dev_SetDriftBoostParam Size 4
class FDev_SetDriftBoostParam
{

 public: 
	int32_t DriftBoostParam;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioSequenceData Size 144
class FScenarioSequenceData
{

 public: 
	struct TSoftObjectPtr<ULevelSequence> Sequence;  // Offset: 0 Size: 40
	struct FString BindingPawnName;  // Offset: 40 Size: 16
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	bool bClearRoad : 1;  // Offset: 56 Size: 1
	char pad_57[3];  // Offset: 57 Size: 3
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings;  // Offset: 60 Size: 20
	struct FScenarioTriggerTarget TriggerContainer;  // Offset: 80 Size: 32
	char pad_112_1 : 7;  // Offset: 112 Size: 1
	bool bOverrideCameraCut : 1;  // Offset: 112 Size: 1
	char pad_113_1 : 7;  // Offset: 113 Size: 1
	bool bNoJumpCutInSameCamera : 1;  // Offset: 113 Size: 1
	char pad_114_1 : 7;  // Offset: 114 Size: 1
	bool bCanSkip : 1;  // Offset: 114 Size: 1
	char pad_115[5];  // Offset: 115 Size: 5
	struct ALevelSequenceActor* LevelSequenceActor;  // Offset: 120 Size: 8
	char pad_128[16];  // Offset: 128 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtAsyncRequestId Size 32
class FKtAsyncRequestId
{

 public: 
	struct FString loginId;  // Offset: 0 Size: 16
	struct FString reqUid;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.MinimapActor.GetMinimapZoom Size 4
class FGetMinimapZoom
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnPartyToastDelegate__DelegateSignature Size 48
class FOnPartyToastDelegate__DelegateSignature
{

 public: 
	struct FText TitleText;  // Offset: 0 Size: 24
	struct FText DescText;  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.CustomGameInviteData Size 112
class FCustomGameInviteData
{

 public: 
	char pad_0[16];  // Offset: 0 Size: 16
	struct FKtAccountProfile Profile;  // Offset: 16 Size: 96



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnGetRecentPlayersDelegate__DelegateSignature Size 64
class FOnGetRecentPlayersDelegate__DelegateSignature
{

 public: 
	struct FKtRecentGame RecentGame;  // Offset: 0 Size: 64



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtKartItemSkillTreeSetDef Size 88
// Inherited 8 bytes 
class FKtKartItemSkillTreeSetDef : public FTableRowBase
{

 public: 
	struct TMap<struct FString, struct FString> SkillTreeSetDefMap;  // Offset: 8 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.TMIItemModeData Size 32
class FTMIItemModeData
{

 public: 
	int32_t Gain;  // Offset: 0 Size: 4
	int32_t Use;  // Offset: 4 Size: 4
	int32_t Aggression;  // Offset: 8 Size: 4
	int32_t AttackSuccess;  // Offset: 12 Size: 4
	int32_t AttackFailure;  // Offset: 16 Size: 4
	int32_t BeThreatened;  // Offset: 20 Size: 4
	int32_t DefenseSuccess;  // Offset: 24 Size: 4
	int32_t DefenseFailure;  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayModeSelectLogicComponent.OnFocusMode Size 4
class FOnFocusMode
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtRecentGame Size 64
class FKtRecentGame
{

 public: 
	struct FString gameId;  // Offset: 0 Size: 16
	enum class ERaceMode raceMode;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7
	struct FDateTime updateDate;  // Offset: 24 Size: 8
	struct TArray<struct FKtTeamResult> teamResults;  // Offset: 32 Size: 16
	struct TArray<struct FKtRecentPlayer> recentPlayers;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdProfilerWidget.GetTotalRaceTime Size 4
class FGetTotalRaceTime
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ClientTimeAttackTrackAliasSetDef Size 24
// Inherited 8 bytes 
class FClientTimeAttackTrackAliasSetDef : public FTableRowBase
{

 public: 
	struct TArray<struct FClientTimeAttackTrackAliasDef> trackAliasDefVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtCumulativePlayData Size 24
class FKtCumulativePlayData
{

 public: 
	int32_t playTimeMin;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<int32_t> platformLoginData;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClicked_ShapeTabPrev Size 4
class FOnClicked_ShapeTabPrev
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtSessionRaceResultCommon Size 64
class FKtSessionRaceResultCommon
{

 public: 
	int32_t totalPlayers;  // Offset: 0 Size: 4
	int32_t teamMemberCount;  // Offset: 4 Size: 4
	enum class EGameType GameType;  // Offset: 8 Size: 1
	enum class ERaceType raceType;  // Offset: 9 Size: 1
	enum class ERaceMode raceMode;  // Offset: 10 Size: 1
	char pad_11[5];  // Offset: 11 Size: 5
	struct FString trackId;  // Offset: 16 Size: 16
	struct FString gameId;  // Offset: 32 Size: 16
	struct FString grandPrixId;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.DedicatedLobbyPlayerController.OnReplicatedClientDesc Size 288
class FOnReplicatedClientDesc
{

 public: 
	struct FDedicatedLobbyPlayerDesc InDesc;  // Offset: 0 Size: 288



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtRecentPlayer Size 96
class FKtRecentPlayer
{

 public: 
	struct FString accountId;  // Offset: 0 Size: 16
	struct FString riderName;  // Offset: 16 Size: 16
	struct FString emblemId;  // Offset: 32 Size: 16
	enum class EKtAccountPlatform platform;  // Offset: 48 Size: 1
	char pad_49[7];  // Offset: 49 Size: 7
	struct FString KartID;  // Offset: 56 Size: 16
	enum class EKtItemGrade KartGrade;  // Offset: 72 Size: 1
	char pad_73[3];  // Offset: 73 Size: 3
	int32_t Team;  // Offset: 76 Size: 4
	char pad_80_1 : 7;  // Offset: 80 Size: 1
	bool isSameTeam : 1;  // Offset: 80 Size: 1
	char pad_81_1 : 7;  // Offset: 81 Size: 1
	bool isResultUpdated : 1;  // Offset: 81 Size: 1
	char pad_82[2];  // Offset: 82 Size: 2
	int32_t rank;  // Offset: 84 Size: 4
	int32_t Time;  // Offset: 88 Size: 4
	char pad_92_1 : 7;  // Offset: 92 Size: 1
	bool isWin : 1;  // Offset: 92 Size: 1
	char pad_93[3];  // Offset: 93 Size: 3



 // Functions 
 public:
}; 
 
 //Function KartDrift.GrandPrixPageWidget.OnClickedWarningDialogBackButton Size 4
class FOnClickedWarningDialogBackButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtTeamResult Size 8
class FKtTeamResult
{

 public: 
	int32_t Team;  // Offset: 0 Size: 4
	int32_t rank;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.OverlayMaterialData Size 40
class FOverlayMaterialData
{

 public: 
	struct FName SlotName;  // Offset: 0 Size: 8
	int32_t ElementIndex;  // Offset: 8 Size: 4
	int32_t OverlayIndex;  // Offset: 12 Size: 4
	struct UMaterialInterface* OverlayMaterial;  // Offset: 16 Size: 8
	struct TArray<struct FOverlayMaterialCurveData> CurveValue;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_OptionPageWidget.OnClickedNpaCodeBtn Size 4
class FOnClickedNpaCodeBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.ItemDefEntryObject.OnExpiredValidTime__DelegateSignature Size 16
class FOnExpiredValidTime__DelegateSignature
{

 public: 
	struct FString ItemId;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtMobileStoreReviewOpenInfo Size 24
class FKtMobileStoreReviewOpenInfo
{

 public: 
	int32_t AndroidCount;  // Offset: 0 Size: 4
	int32_t IOSCount;  // Offset: 4 Size: 4
	struct FDateTime AndroidLatestOpenTime;  // Offset: 8 Size: 8
	struct FDateTime IOSLatestOpenTime;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnSelected__DelegateSignature Size 8
class FOnSelected__DelegateSignature
{

 public: 
	struct UUserWidget* SelectedWidget;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnShowToastPopupDelegate__DelegateSignature Size 48
class FOnShowToastPopupDelegate__DelegateSignature
{

 public: 
	struct FText TitleText;  // Offset: 0 Size: 24
	struct FText DescText;  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KdWidgetNavigationRuleElement Size 40
class FKdWidgetNavigationRuleElement
{

 public: 
	char pad_0[40];  // Offset: 0 Size: 40



 // Functions 
 public:
}; 
 
 //Function KartDrift.ModeSelectPageWidget.MatchMode_OnMatchingSettingsBackButtonClicked Size 4
class FMatchMode_OnMatchingSettingsBackButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnServerTimeElapsed__DelegateSignature Size 8
class FOnServerTimeElapsed__DelegateSignature
{

 public: 
	struct FDateTime ServerTime;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.TargetVectorAnimInfo Size 72
// Inherited 48 bytes 
class FTargetVectorAnimInfo : public FTargetAnimInfo
{

 public: 
	struct FVector Start;  // Offset: 48 Size: 12
	struct FVector Dest;  // Offset: 60 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseSpeedGateDef Size 128
class FLicenseSpeedGateDef
{

 public: 
	float Distance;  // Offset: 0 Size: 4
	float RightVectorOffset;  // Offset: 4 Size: 4
	float ZOffset;  // Offset: 8 Size: 4
	float YawOffset;  // Offset: 12 Size: 4
	struct FRotator RotationOffset;  // Offset: 16 Size: 12
	struct FVector GateScale;  // Offset: 28 Size: 12
	char pad_40[8];  // Offset: 40 Size: 8
	struct FTransform GateTransform;  // Offset: 48 Size: 48
	struct FVector LeftPosition;  // Offset: 96 Size: 12
	struct FVector RightPosition;  // Offset: 108 Size: 12
	char pad_120[8];  // Offset: 120 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnUpdateCash__DelegateSignature Size 4
class FOnUpdateCash__DelegateSignature
{

 public: 
	int32_t Count;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtTimeAttack Size 40
class FKtTimeAttack
{

 public: 
	struct FString trackId;  // Offset: 0 Size: 16
	struct FString timeAttackUniqueId;  // Offset: 16 Size: 16
	int32_t recordTime;  // Offset: 32 Size: 4
	int32_t recordMileage;  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KdPlatformConstValue Size 56
// Inherited 8 bytes 
class FKdPlatformConstValue : public FTableRowBase
{

 public: 
	enum class EKtPlatform KtPlatform;  // Offset: 8 Size: 1
	char pad_9_1 : 7;  // Offset: 9 Size: 1
	bool bIsHighlighted : 1;  // Offset: 9 Size: 1
	char pad_10[6];  // Offset: 10 Size: 6
	struct TSoftObjectPtr<UPaperSprite> PlatformImage;  // Offset: 16 Size: 40



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnOption_Select__DelegateSignature Size 16
class FOnOption_Select__DelegateSignature
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UUserWidget* Widget;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtEventChallengeInfo Size 32
class FKtEventChallengeInfo
{

 public: 
	struct FString eventChallengeId;  // Offset: 0 Size: 16
	struct FDateTime achievedDate;  // Offset: 16 Size: 8
	int32_t CurrentCount;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_PauseGame Size 1
class FDev_PauseGame
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bPause : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.TouchInstanceBoosterButton.OnSetBoost Size 1
class FOnSetBoost
{

 public: 
	enum class EBoostKind BoostKind;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClicked_Grouping Size 4
class FOnClicked_Grouping
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtGrandPrixRaceResult Size 32
class FKtGrandPrixRaceResult
{

 public: 
	struct FString playerId;  // Offset: 0 Size: 16
	int32_t gpp;  // Offset: 16 Size: 4
	int32_t addGpp;  // Offset: 20 Size: 4
	enum class EKtGrandPrixSubTier tier;  // Offset: 24 Size: 1
	char pad_25_1 : 7;  // Offset: 25 Size: 1
	bool isNewTier : 1;  // Offset: 25 Size: 1
	char pad_26[6];  // Offset: 26 Size: 6



 // Functions 
 public:
}; 
 
 //Function KartDrift.TrackDifficultWidget.SetDifficulty Size 8
class FSetDifficulty
{

 public: 
	enum class ERaceMode Type;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t grade;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.ChangeLiveryLayerScaleY Size 4
class FChangeLiveryLayerScaleY
{

 public: 
	float InDelta;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ButtonStyleTag Size 56
class FButtonStyleTag
{

 public: 
	struct UDataTable* DataTable;  // Offset: 0 Size: 8
	struct FName NormalTag;  // Offset: 8 Size: 8
	struct FName FocusTag;  // Offset: 16 Size: 8
	struct FName CheckTag;  // Offset: 24 Size: 8
	struct FName PressTag;  // Offset: 32 Size: 8
	struct FName HoverTag;  // Offset: 40 Size: 8
	struct FName DisableTag;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnOption_ChangeFocusItem__DelegateSignature Size 16
class FOnOption_ChangeFocusItem__DelegateSignature
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UUserWidget* Widget;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_EnableReflex Size 1
class FDev_EnableReflex
{

 public: 
	char Mode;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_OverrideTotalTime Size 12
class FDev_OverrideTotalTime
{

 public: 
	int32_t Minute;  // Offset: 0 Size: 4
	int32_t Second;  // Offset: 4 Size: 4
	int32_t Millisecond;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtSubList Size 24
class FKtSubList
{

 public: 
	int32_t ID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FKtLootboxComposition> compositionVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LoginPageWidget.CreateNewAccount Size 4
class FCreateNewAccount
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction KartDrift.OnOption_Focused__DelegateSignature Size 16
class FOnOption_Focused__DelegateSignature
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UUserWidget* Widget;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryReportViewerPageWidget.OnClickedConfirm_Delete Size 4
class FOnClickedConfirm_Delete
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AchievementMatrixCounter Size 80
class FAchievementMatrixCounter
{

 public: 
	char pad_0[80];  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtQuestDailySeasonDef Size 96
class FKtQuestDailySeasonDef
{

 public: 
	struct FString rewardStockId;  // Offset: 0 Size: 16
	struct TMap<struct FString, struct FKtQuestDailyDef> questDailyDefMap;  // Offset: 16 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AchievementCounter Size 80
class FAchievementCounter
{

 public: 
	char pad_0[80];  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AchievementInfo Size 72
class FAchievementInfo
{

 public: 
	struct FString ID;  // Offset: 0 Size: 16
	int32_t seasonNum;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct FText Title;  // Offset: 24 Size: 24
	enum class EAchievementCategory Category;  // Offset: 48 Size: 1
	enum class EKtEmblemQuestGrade grade;  // Offset: 49 Size: 1
	char pad_50[2];  // Offset: 50 Size: 2
	int32_t progressCurrentCount;  // Offset: 52 Size: 4
	int32_t progressMaxCount;  // Offset: 56 Size: 4
	float achievedUserRatio;  // Offset: 60 Size: 4
	struct FDateTime achieveDate;  // Offset: 64 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtLiverySticker Size 56
class FKtLiverySticker
{

 public: 
	struct FString liveryStickerId;  // Offset: 0 Size: 16
	struct FString liveryStickerUniqueId;  // Offset: 16 Size: 16
	int64_t createTime;  // Offset: 32 Size: 8
	int64_t expireTime;  // Offset: 40 Size: 8
	enum class EKtLiveryState State;  // Offset: 48 Size: 1
	char pad_49[7];  // Offset: 49 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientCheatListDef Size 24
// Inherited 8 bytes 
class FKtClientCheatListDef : public FTableRowBase
{

 public: 
	struct TArray<struct FString> CheatTextVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.EventPageWidget.UpdateVDTEventProgress Size 16
class FUpdateVDTEventProgress
{

 public: 
	struct FString EventID;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AchievementSeasonInfo Size 40
class FAchievementSeasonInfo
{

 public: 
	struct FString seasonId;  // Offset: 0 Size: 16
	int32_t seasonCount;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct FString seasonNumberKey;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomGamePageWidget.OnClickedConfirmButtonUserInfoPopup Size 4
class FOnClickedConfirmButtonUserInfoPopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtAccountProfile Size 96
class FKtAccountProfile
{

 public: 
	struct FString riderName;  // Offset: 0 Size: 16
	enum class EKtAccountPlatform platform;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7
	struct FString platformProfileName;  // Offset: 24 Size: 16
	struct FString platformProfileId;  // Offset: 40 Size: 16
	struct FString countryCode;  // Offset: 56 Size: 16
	enum class EKtPlatform machinePlatform;  // Offset: 72 Size: 1
	char pad_73[7];  // Offset: 73 Size: 7
	struct FString emblemId;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KdVersionCheckerNgmServerInfo Size 40
class FKdVersionCheckerNgmServerInfo
{

 public: 
	struct FString Name;  // Offset: 0 Size: 16
	struct FString URL;  // Offset: 16 Size: 16
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool bDefault : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.BuildCaptureWidget.OnSpinBoxValueChanged_LightInnerConeAngle Size 4
class FOnSpinBoxValueChanged_LightInnerConeAngle
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseMovableActorInfo Size 40
class FLicenseMovableActorInfo
{

 public: 
	float Start;  // Offset: 0 Size: 4
	float End;  // Offset: 4 Size: 4
	float Distance;  // Offset: 8 Size: 4
	float Scale;  // Offset: 12 Size: 4
	struct FVector StartLocation;  // Offset: 16 Size: 12
	struct FVector EndLocation;  // Offset: 28 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.CachedQuestInfo Size 24
class FCachedQuestInfo
{

 public: 
	struct FString CachedQuestID;  // Offset: 0 Size: 16
	enum class EChallengeChangedStat CachedMissionStat;  // Offset: 16 Size: 1
	enum class EKtQuestType CachedQuestType;  // Offset: 17 Size: 1
	char pad_18[6];  // Offset: 18 Size: 6



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ADTEventData Size 40
class FADTEventData
{

 public: 
	char pad_0[24];  // Offset: 0 Size: 24
	struct TArray<char> RewardedSteps;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.VDTEventData Size 56
class FVDTEventData
{

 public: 
	char pad_0[16];  // Offset: 0 Size: 16
	struct TArray<int32_t> RewardedCount;  // Offset: 16 Size: 16
	struct TArray<int32_t> RewardedIndex;  // Offset: 32 Size: 16
	char pad_48[1];  // Offset: 48 Size: 1
	enum class EKtADTEventType SubEventType;  // Offset: 49 Size: 1
	char pad_50[6];  // Offset: 50 Size: 6



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtMissionDef Size 232
class FKtMissionDef
{

 public: 
	struct FString missionId;  // Offset: 0 Size: 16
	enum class EKtMissionType missionType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7
	struct TArray<struct FKtMissionTriggerDef> missionTriggerDefVector;  // Offset: 24 Size: 16
	struct FKtMissionCounterDef missionCounterDef;  // Offset: 40 Size: 152
	int32_t missionCount;  // Offset: 192 Size: 4
	char pad_196[4];  // Offset: 196 Size: 4
	struct FString rewardStockId;  // Offset: 200 Size: 16
	struct FString rewardMessage;  // Offset: 216 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartUpgradePageWidget.ApplyGearDialog_CloseDialog Size 4
class FApplyGearDialog_CloseDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LoginEventDefFile Size 16
class FLoginEventDefFile
{

 public: 
	struct TArray<struct FLoginEventDef> events;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_CommunityPageWidget.InviteMenu_Request_OnClickedRejectBtn Size 4
class FInviteMenu_Request_OnClickedRejectBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.GazeCameraData Size 48
// Inherited 8 bytes 
class FGazeCameraData : public FTableRowBase
{

 public: 
	float ForwardDistance;  // Offset: 8 Size: 4
	float UpDistance;  // Offset: 12 Size: 4
	float RightDistance;  // Offset: 16 Size: 4
	float RoadCheckZLowerBound;  // Offset: 20 Size: 4
	float RoadCheckZUpperBound;  // Offset: 24 Size: 4
	float ZDistanceFromRoad;  // Offset: 28 Size: 4
	float LocationInterpTime;  // Offset: 32 Size: 4
	float ResetDistanceThreshold;  // Offset: 36 Size: 4
	float MinFOV;  // Offset: 40 Size: 4
	float MaxFOV;  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.WrappingCollection Size 56
class FWrappingCollection
{

 public: 
	enum class ELiveryWrappingCategory WrappingCategory;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FText CategoryName;  // Offset: 8 Size: 24
	struct TArray<struct FWrappingCollectionItem> WrappingcollectionItemList;  // Offset: 32 Size: 16
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool bApplyColorOverride : 1;  // Offset: 48 Size: 1
	char pad_49_1 : 7;  // Offset: 49 Size: 1
	bool bEnableCollection : 1;  // Offset: 49 Size: 1
	char pad_50[6];  // Offset: 50 Size: 6



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryEditPageWidget.OnClicked_PaintGamutPrev Size 4
class FOnClicked_PaintGamutPrev
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LoginEventDef Size 152
class FLoginEventDef
{

 public: 
	struct FString ID;  // Offset: 0 Size: 16
	struct FString Name;  // Offset: 16 Size: 16
	enum class ELoginEventType Type;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7
	struct FString startDate;  // Offset: 40 Size: 16
	struct FString endDate;  // Offset: 56 Size: 16
	struct FString StartTime;  // Offset: 72 Size: 16
	struct FString EndTime;  // Offset: 88 Size: 16
	struct FString rewardStockId;  // Offset: 104 Size: 16
	struct FString Title;  // Offset: 120 Size: 16
	struct FString Description;  // Offset: 136 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicensePageWidget.OnClickedMission Size 4
class FOnClickedMission
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdService.GetAllTrackAliases Size 16
class FGetAllTrackAliases
{

 public: 
	struct TArray<struct FName> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.GrandPrixFinalResult Size 32
class FGrandPrixFinalResult
{

 public: 
	char pad_0[32];  // Offset: 0 Size: 32



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.GrandPrixDetailRecord Size 112
class FGrandPrixDetailRecord
{

 public: 
	char pad_0[112];  // Offset: 0 Size: 112



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryComponent.AssignDecalTextureFromLiveryEditor Size 8
class FAssignDecalTextureFromLiveryEditor
{

 public: 
	struct UTexture2D* InDecalTexture;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceRankComponent.InitCheckPoints Size 4
class FInitCheckPoints
{

 public: 
	int32_t InLapCount;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientInventoryDef Size 40
// Inherited 8 bytes 
class FKtClientInventoryDef : public FTableRowBase
{

 public: 
	struct FString LastUpdateDate;  // Offset: 8 Size: 16
	struct TArray<struct FKtClientItemDef> itemDefVector;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientKartSkillDef Size 80
// Inherited 56 bytes 
class FKtClientKartSkillDef : public FKtKartSkillBaseDef
{

 public: 
	struct FText skillName;  // Offset: 56 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseRemovableObstacleInfo Size 72
class FLicenseRemovableObstacleInfo
{

 public: 
	float Distance;  // Offset: 0 Size: 4
	float Speed;  // Offset: 4 Size: 4
	float Scale;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct UCurveVector* Curve;  // Offset: 16 Size: 8
	struct UCurveVector* RotationCurve;  // Offset: 24 Size: 8
	struct UStaticMesh* Mesh;  // Offset: 32 Size: 8
	struct UFMODEvent* SoundEvent;  // Offset: 40 Size: 8
	struct FVector SavedLocation;  // Offset: 48 Size: 12
	struct FVector SavedDirection;  // Offset: 60 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KartSkillNodeInfo Size 208
class FKartSkillNodeInfo
{

 public: 
	enum class EKartSkillType SkillType;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FKtClientKartSkillTreeNodeDef NodeDef;  // Offset: 8 Size: 160
	struct TArray<int32_t> ChildNodes;  // Offset: 168 Size: 16
	struct TArray<int32_t> ParentNodes;  // Offset: 184 Size: 16
	enum class EKartSkillStateCase State;  // Offset: 200 Size: 1
	char pad_201[7];  // Offset: 201 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.SortByRankWithLocalPlayerPriority Size 24
class FSortByRankWithLocalPlayerPriority
{

 public: 
	int32_t OwningPawnTeamNo;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FString OwningPawnUniqueIdentifier;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.RacingPassPageWidget.OnClosed_RacingPassPurchaseCompletePopup Size 4
class FOnClosed_RacingPassPurchaseCompletePopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtKartSkillTreeNodeDef Size 64
// Inherited 8 bytes 
class FKtKartSkillTreeNodeDef : public FTableRowBase
{

 public: 
	struct FString nodeId;  // Offset: 8 Size: 16
	struct FString skillId;  // Offset: 24 Size: 16
	enum class EKtItemGrade grade;  // Offset: 40 Size: 1
	char pad_41[7];  // Offset: 41 Size: 7
	struct TArray<struct FString> Children;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.UiDataTableListRow Size 56
// Inherited 8 bytes 
class FUiDataTableListRow : public FTableRowBase
{

 public: 
	enum class EUiTableType UiTableType;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct TSoftObjectPtr<UDataTable> TableObject;  // Offset: 16 Size: 40



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.OnSelectOptionButton Size 16
class FOnSelectOptionButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UUserWidget* Widget;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_RacingPassPageWidget.OnClicked_RewardListButton Size 4
class FOnClicked_RewardListButton
{

 public: 
	int32_t rewardIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientKartSkillTreeNodeDef Size 160
// Inherited 64 bytes 
class FKtClientKartSkillTreeNodeDef : public FKtKartSkillTreeNodeDef
{

 public: 
	struct FString iconWidgetName;  // Offset: 64 Size: 16
	struct FString lineWidgetName;  // Offset: 80 Size: 16
	struct FString navigateLeftId;  // Offset: 96 Size: 16
	struct FString navigateRightId;  // Offset: 112 Size: 16
	struct FString navigateUpId;  // Offset: 128 Size: 16
	struct FString navigateDownId;  // Offset: 144 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtPlayMissionRewardDef Size 32
class FKtPlayMissionRewardDef
{

 public: 
	int32_t Rate;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bRewardExp : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3
	struct FString rewardStockId;  // Offset: 8 Size: 16
	int32_t rewardExpRate;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.MailCache Size 376
class FMailCache
{

 public: 
	struct FKtMail Mail;  // Offset: 0 Size: 360
	char pad_360[16];  // Offset: 360 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtMail Size 360
class FKtMail
{

 public: 
	struct FKtMailAccount recipient;  // Offset: 0 Size: 72
	struct FKtMailAccount sender;  // Offset: 72 Size: 72
	enum class EKtMailType Type;  // Offset: 144 Size: 1
	char Flag;  // Offset: 145 Size: 1
	char pad_146[6];  // Offset: 146 Size: 6
	struct FString mailId;  // Offset: 152 Size: 16
	struct FString Message;  // Offset: 168 Size: 16
	struct FString stockId;  // Offset: 184 Size: 16
	struct FKtMailAttachment attachment;  // Offset: 200 Size: 112
	struct FDateTime createDate;  // Offset: 312 Size: 8
	struct FNullableDateTime expireDate;  // Offset: 320 Size: 16
	enum class EKtAccountPlatform shopAccountPlatform;  // Offset: 336 Size: 1
	enum class EKtPlatform shopMachinePlatform;  // Offset: 337 Size: 1
	char pad_338[6];  // Offset: 338 Size: 6
	struct FString Reason;  // Offset: 344 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ModeSelectLogicComponent.OnUpdatePartyMember Size 1
class FOnUpdatePartyMember
{

 public: 
	enum class EPartyChageState ChangeState;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtKartUpgradeSetDef Size 24
// Inherited 8 bytes 
class FKtKartUpgradeSetDef : public FTableRowBase
{

 public: 
	struct TArray<struct FKtKartUpgradeDef> kartUpgradeDefVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.InputLog Size 24
class FInputLog
{

 public: 
	float Time;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FString Key;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.PredictHelper.Predict_jieunjung_ver47 Size 40
class FPredict_jieunjung_ver47
{

 public: 
	float DeltaTime;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<float> Inputs;  // Offset: 8 Size: 16
	struct TArray<float> ReturnValue;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtStockItem Size 32
class FKtStockItem
{

 public: 
	struct FString ItemId;  // Offset: 0 Size: 16
	int32_t itemCount;  // Offset: 16 Size: 4
	int32_t itemTime;  // Offset: 20 Size: 4
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bPreview : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.PartyInfo Size 72
class FPartyInfo
{

 public: 
	struct FKtMatchRequestData quickMatchData;  // Offset: 0 Size: 40
	struct FString xblSessionUri;  // Offset: 40 Size: 16
	struct FString psnSessionUri;  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtShopPriceInfo Size 24
class FKtShopPriceInfo
{

 public: 
	struct FString currency;  // Offset: 0 Size: 16
	int32_t price;  // Offset: 16 Size: 4
	int32_t salePrice;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.WarningPopup.CancelButtonClicked Size 4
class FCancelButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdService.GetAccountForPlayer Size 16
class FGetAccountForPlayer
{

 public: 
	int32_t LocalPlayerId;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UKdAccount* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.CouponPageWidget.OnCouponIdTextChanged Size 24
class FOnCouponIdTextChanged
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtStock Size 32
class FKtStock
{

 public: 
	struct FString stockId;  // Offset: 0 Size: 16
	struct TArray<struct FKtStockItem> stockItemVector;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.MoveLiveryLayerX Size 4
class FMoveLiveryLayerX
{

 public: 
	float InDelta;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseTable Size 72
// Inherited 8 bytes 
class FLicenseTable : public FTableRowBase
{

 public: 
	struct FString GroupID;  // Offset: 8 Size: 16
	float MissionTime;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4
	struct FText MissionTimeOverText;  // Offset: 32 Size: 24
	struct TArray<struct FLicenseMission> MissionContainer;  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtEmergencyEventDef Size 24
// Inherited 8 bytes 
class FKtEmergencyEventDef : public FTableRowBase
{

 public: 
	struct TArray<struct FString> eventIds;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtMailAccount Size 72
class FKtMailAccount
{

 public: 
	struct FString ID;  // Offset: 0 Size: 16
	struct FString Name;  // Offset: 16 Size: 16
	enum class EKtAccountPlatform platform;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7
	struct FString nexonTag;  // Offset: 40 Size: 16
	struct FString emblemId;  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtShopStock Size 216
class FKtShopStock
{

 public: 
	struct FString stockId;  // Offset: 0 Size: 16
	struct TArray<struct FKtStockItem> stockItemVector;  // Offset: 16 Size: 16
	struct TArray<struct FKtStockItem> bonusStockItemVector;  // Offset: 32 Size: 16
	struct FString stockName;  // Offset: 48 Size: 16
	struct FString stockDesc;  // Offset: 64 Size: 16
	struct FString detailDesc;  // Offset: 80 Size: 16
	struct FString stockImage;  // Offset: 96 Size: 16
	struct FString promotionImage;  // Offset: 112 Size: 16
	struct FString promotionDesc;  // Offset: 128 Size: 16
	struct FNullableDateTime saleStartDate;  // Offset: 144 Size: 16
	struct FNullableDateTime saleEndDate;  // Offset: 160 Size: 16
	struct TArray<struct FKtShopPriceInfo> prices;  // Offset: 176 Size: 16
	char pad_192_1 : 7;  // Offset: 192 Size: 1
	bool isGiftable : 1;  // Offset: 192 Size: 1
	char pad_193[7];  // Offset: 193 Size: 7
	struct FString Tag;  // Offset: 200 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtTimeAttackTrack Size 24
class FKtTimeAttackTrack
{

 public: 
	struct FString trackId;  // Offset: 0 Size: 16
	int32_t Count;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnFocusFocusableButtonInMain Size 4
class FOnFocusFocusableButtonInMain
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.TimeAttackCache Size 56
class FTimeAttackCache
{

 public: 
	char pad_0[32];  // Offset: 0 Size: 32
	struct FRaceSaveGameLatestPtr TimeAttackSaveGame;  // Offset: 32 Size: 8
	char pad_40[16];  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClicked_ShowEditValuePopup Size 4
class FOnClicked_ShowEditValuePopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KartEffectData Size 32
class FKartEffectData
{

 public: 
	struct FSoftObjectPath ParticleSystem;  // Offset: 0 Size: 24
	struct FName AttachBoneName;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtTimeAttackRanker Size 272
class FKtTimeAttackRanker
{

 public: 
	int32_t rank;  // Offset: 0 Size: 4
	int32_t lapTime;  // Offset: 4 Size: 4
	struct FString accountId;  // Offset: 8 Size: 16
	struct FString riderName;  // Offset: 24 Size: 16
	struct FString country;  // Offset: 40 Size: 16
	enum class EKtAccountPlatform platform;  // Offset: 56 Size: 1
	enum class EPlatformCategory platformCategory;  // Offset: 57 Size: 1
	char pad_58[6];  // Offset: 58 Size: 6
	struct FString emblemItemIdOn;  // Offset: 64 Size: 16
	struct FKtItemPreview preview;  // Offset: 80 Size: 168
	int32_t kartLevel;  // Offset: 248 Size: 4
	enum class EKtItemGrade KartGrade;  // Offset: 252 Size: 1
	char pad_253[3];  // Offset: 253 Size: 3
	struct FString replayPath;  // Offset: 256 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceHudWidget.BeginRaceCountdown Size 4
class FBeginRaceCountdown
{

 public: 
	float BeginTime;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_OptionPageWidget.OnClickedGameLeaveBtn Size 4
class FOnClickedGameLeaveBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtItemPreset Size 160
class FKtItemPreset
{

 public: 
	struct TMap<struct FString, struct FString> itemMap;  // Offset: 0 Size: 80
	struct FKtLivery livery;  // Offset: 80 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemBarricade.MulticastDestructUsingPhysics Size 64
class FMulticastDestructUsingPhysics
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4
	struct FVector_NetQuantize ImpulsePoint;  // Offset: 4 Size: 12
	float ImpulseSize;  // Offset: 16 Size: 4
	struct FVector Location;  // Offset: 20 Size: 12
	struct FRotator Rotator;  // Offset: 32 Size: 12
	char pad_44[4];  // Offset: 44 Size: 4
	struct UItemComponent* Victim;  // Offset: 48 Size: 8
	enum class EItemFilterResult Result;  // Offset: 56 Size: 4
	char pad_60[4];  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.BuildCaptureLightInfo Size 96
class FBuildCaptureLightInfo
{

 public: 
	float Intensity;  // Offset: 0 Size: 4
	struct FColor Color;  // Offset: 4 Size: 4
	float InnerConeAngle;  // Offset: 8 Size: 4
	float OuterConeAngle;  // Offset: 12 Size: 4
	float AttenuationRadius;  // Offset: 16 Size: 4
	char pad_20[12];  // Offset: 20 Size: 12
	struct FTransform LightTransfrom;  // Offset: 32 Size: 48
	int32_t AttachIndex;  // Offset: 80 Size: 4
	char pad_84[12];  // Offset: 84 Size: 12



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.OnSelectButtonClicked Size 4
class FOnSelectButtonClicked
{

 public: 
	int32_t NotUsed;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.CustomMaterialFx Size 120
class FCustomMaterialFx
{

 public: 
	struct TMap<struct TSoftObjectPtr<UMaterialInterface>, struct TSoftObjectPtr<UMaterialInterface>> MaterialMap;  // Offset: 0 Size: 80
	struct TSoftObjectPtr<UMaterialInterface> DefaultMaterial;  // Offset: 80 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtLivery Size 80
class FKtLivery
{

 public: 
	struct FString liveryId;  // Offset: 0 Size: 16
	struct FString LiveryUniqueId;  // Offset: 16 Size: 16
	int32_t LiveryRevision;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4
	struct FString KartID;  // Offset: 40 Size: 16
	int64_t createTime;  // Offset: 56 Size: 8
	int64_t expireTime;  // Offset: 64 Size: 8
	enum class EKtLiveryState State;  // Offset: 72 Size: 1
	char pad_73[7];  // Offset: 73 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.RaceGameResult Size 72
class FRaceGameResult
{

 public: 
	int32_t prevExp;  // Offset: 0 Size: 4
	int32_t nextExp;  // Offset: 4 Size: 4
	int32_t prevKartExp;  // Offset: 8 Size: 4
	int32_t nextKartExp;  // Offset: 12 Size: 4
	struct FPlayLucciReward lucci;  // Offset: 16 Size: 12
	char pad_28[4];  // Offset: 28 Size: 4
	struct FString grandPrixId;  // Offset: 32 Size: 16
	struct TArray<struct FKtGrandPrixRaceResult> gpRaceResults;  // Offset: 48 Size: 16
	int32_t playMissionExp;  // Offset: 64 Size: 4
	char pad_68[4];  // Offset: 68 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AIItemUse_DistProbability Size 8
class FAIItemUse_DistProbability
{

 public: 
	float Distance;  // Offset: 0 Size: 4
	float Probability;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AwsLatencyInfo Size 24
class FAwsLatencyInfo
{

 public: 
	struct FString region;  // Offset: 0 Size: 16
	int32_t pingMs;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PredictHelper.Predict_hwanghou_GLU_light Size 40
class FPredict_hwanghou_GLU_light
{

 public: 
	float DeltaTime;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<float> Inputs;  // Offset: 8 Size: 16
	struct TArray<float> ReturnValue;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtGrandPrixTierReward Size 24
class FKtGrandPrixTierReward
{

 public: 
	enum class EKtGrandPrixMainTier mainTier;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t minRaceCount;  // Offset: 4 Size: 4
	struct TArray<struct FString> rewardStockIds;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.PartyMemberInfo Size 360
class FPartyMemberInfo
{

 public: 
	struct FString accountId;  // Offset: 0 Size: 16
	struct FKtAccountProfile Profile;  // Offset: 16 Size: 96
	struct FString userName;  // Offset: 112 Size: 16
	char pad_128_1 : 7;  // Offset: 128 Size: 1
	bool partyBoss : 1;  // Offset: 128 Size: 1
	char pad_129_1 : 7;  // Offset: 129 Size: 1
	bool ready : 1;  // Offset: 129 Size: 1
	char pad_130[6];  // Offset: 130 Size: 6
	struct FKtItemPreview itemPreview;  // Offset: 136 Size: 168
	int32_t joinId;  // Offset: 304 Size: 4
	char pad_308[4];  // Offset: 308 Size: 4
	struct FString clientStage;  // Offset: 312 Size: 16
	struct FString clientStageParam;  // Offset: 328 Size: 16
	struct FString liverySignedUrl;  // Offset: 344 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientLicenseGroupDef Size 104
// Inherited 48 bytes 
class FKtClientLicenseGroupDef : public FKtLicenseGroupDef
{

 public: 
	struct FText GroupTitle;  // Offset: 48 Size: 24
	struct TArray<struct FText> OpenContentName;  // Offset: 72 Size: 16
	struct TArray<struct TSoftObjectPtr<UTexture2D>> OpenContentImg;  // Offset: 88 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartUpgradePageWidget.ResetGearDialog_CloseDialog Size 4
class FResetGearDialog_CloseDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientQuestEmblemMissionSetDef Size 16
class FKtClientQuestEmblemMissionSetDef
{

 public: 
	struct TArray<struct FKtClientQuestEmblemMissionDef> missionDefVector;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtMatchRequestData Size 40
class FKtMatchRequestData
{

 public: 
	struct TArray<enum class ERaceMode> raceModes;  // Offset: 0 Size: 16
	int32_t aiOption;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct TArray<int32_t> trackGroups;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtGrandPrixTierSetDef Size 24
// Inherited 8 bytes 
class FKtGrandPrixTierSetDef : public FTableRowBase
{

 public: 
	struct TArray<struct FKtGrandPrixMainTierDef> tierDefVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.CommunityLogicComponent.OnDisableCustomGameInviteButton Size 16
class FOnDisableCustomGameInviteButton
{

 public: 
	struct FString InAccountId;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ServerSettingToClient Size 48
class FServerSettingToClient
{

 public: 
	struct FString pingServers;  // Offset: 0 Size: 16
	struct FString multiplayDiscoveryServiceUrl;  // Offset: 16 Size: 16
	struct FString netRetryPolicy;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartGameUserSettings.SetForceFeedbackEffect Size 1
class FSetForceFeedbackEffect
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnable : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayDetailLogicComponent.OnDeleteReplay Size 4
class FOnDeleteReplay
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.GameAskPartyJoinData Size 120
class FGameAskPartyJoinData
{

 public: 
	struct FString TargetAccountId;  // Offset: 0 Size: 16
	struct FKtAccountProfile TargetProfile;  // Offset: 16 Size: 96
	int32_t recvPackId;  // Offset: 112 Size: 4
	char pad_116[4];  // Offset: 116 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.GameplayKeyGuide.CanInstanceBoost Size 1
class FCanInstanceBoost
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bActivate : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryItemInfo Size 72
class FLiveryItemInfo
{

 public: 
	int32_t StickerID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FDateTime RestrictionExpireTime;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bEnable : 1;  // Offset: 16 Size: 1
	char pad_17_1 : 7;  // Offset: 17 Size: 1
	bool bEmpty : 1;  // Offset: 17 Size: 1
	char pad_18[2];  // Offset: 18 Size: 2
	int32_t ItemIndex;  // Offset: 20 Size: 4
	struct TArray<struct FString> SVGFilePathList;  // Offset: 24 Size: 16
	struct TArray<struct FLiveryWrappingTransform> TransformList;  // Offset: 40 Size: 16
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	bool bShowChecked : 1;  // Offset: 56 Size: 1
	char pad_57_1 : 7;  // Offset: 57 Size: 1
	bool bChecked : 1;  // Offset: 57 Size: 1
	char pad_58[2];  // Offset: 58 Size: 2
	int32_t GroupSize;  // Offset: 60 Size: 4
	char pad_64[8];  // Offset: 64 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.CsMember Size 240
class FCsMember
{

 public: 
	struct FString accountId;  // Offset: 0 Size: 16
	struct FKtAccountProfile Profile;  // Offset: 16 Size: 96
	int32_t Slot;  // Offset: 112 Size: 4
	char pad_116_1 : 7;  // Offset: 116 Size: 1
	bool isSpectator : 1;  // Offset: 116 Size: 1
	char pad_117[3];  // Offset: 117 Size: 3
	int32_t joinId;  // Offset: 120 Size: 4
	char pad_124[4];  // Offset: 124 Size: 4
	struct FString chId;  // Offset: 128 Size: 16
	struct FString KartID;  // Offset: 144 Size: 16
	struct FString emblemId;  // Offset: 160 Size: 16
	int32_t Exp;  // Offset: 176 Size: 4
	int32_t Level;  // Offset: 180 Size: 4
	int32_t kartExp;  // Offset: 184 Size: 4
	int32_t kartLevel;  // Offset: 188 Size: 4
	enum class EKtItemGrade KartGrade;  // Offset: 192 Size: 1
	enum class EKtLicenseGroupType License;  // Offset: 193 Size: 1
	char pad_194[2];  // Offset: 194 Size: 2
	int32_t beginnerFlag;  // Offset: 196 Size: 4
	enum class EKtGrandPrixSubTier regularGrandPrixTier;  // Offset: 200 Size: 1
	char pad_201[3];  // Offset: 201 Size: 3
	int32_t State;  // Offset: 204 Size: 4
	int32_t readyState;  // Offset: 208 Size: 4
	char pad_212[4];  // Offset: 212 Size: 4
	struct FString lastUpdateTime;  // Offset: 216 Size: 16
	char pad_232_1 : 7;  // Offset: 232 Size: 1
	bool crossPlay : 1;  // Offset: 232 Size: 1
	char pad_233_1 : 7;  // Offset: 233 Size: 1
	bool AI : 1;  // Offset: 233 Size: 1
	char pad_234[6];  // Offset: 234 Size: 6



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnUpdateSeasonAlarm Size 1
class FOnUpdateSeasonAlarm
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool IsNewSeasonOpen : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.GameAskInviteData Size 48
class FGameAskInviteData
{

 public: 
	struct FString InviteAccountId;  // Offset: 0 Size: 16
	struct FString PartyId;  // Offset: 16 Size: 16
	struct FString InviteUserName;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtKartSkillBaseDefVec Size 24
// Inherited 8 bytes 
class FKtKartSkillBaseDefVec : public FTableRowBase
{

 public: 
	struct TArray<struct FKtKartSkillBaseDef> kartSkillDefVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientLicenseGroupSetDef Size 40
// Inherited 8 bytes 
class FKtClientLicenseGroupSetDef : public FTableRowBase
{

 public: 
	struct FString LastUpdateDate;  // Offset: 8 Size: 16
	struct TArray<struct FKtClientLicenseGroupDef> groupDefVector;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.AccountVoiceChat.OnGfsFriendAdded Size 240
class FOnGfsFriendAdded
{

 public: 
	struct FAccountPlatformData NewFriend;  // Offset: 0 Size: 240



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.SoundInfo Size 48
class FSoundInfo
{

 public: 
	struct UFMODAudioComponent* AudioComponent;  // Offset: 0 Size: 8
	int8_t SoundType;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	int64_t ID;  // Offset: 16 Size: 8
	struct FString SoundName;  // Offset: 24 Size: 16
	uint32_t Flag;  // Offset: 40 Size: 4
	char pad_44_1 : 7;  // Offset: 44 Size: 1
	bool IsStop : 1;  // Offset: 44 Size: 1
	char pad_45[3];  // Offset: 45 Size: 3



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryReportViewerPageWidget.OnRowItemClickedButton Size 16
class FOnRowItemClickedButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UObject* ItemObj;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.TimeAttackSeasonRecordsContainer Size 88
class FTimeAttackSeasonRecordsContainer
{

 public: 
	char pad_0[88];  // Offset: 0 Size: 88



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AchievementTendencyInfo Size 12
class FAchievementTendencyInfo
{

 public: 
	enum class EKtEmblemQuestTendency Tendency;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t CurrentCount;  // Offset: 4 Size: 4
	int32_t MaxCount;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AIGameScenarioRow Size 40
// Inherited 8 bytes 
class FAIGameScenarioRow : public FTableRowBase
{

 public: 
	struct TArray<struct FAIGameScenario_LastAttack1st> LastAttack1st;  // Offset: 8 Size: 16
	struct TArray<struct FAIGameScenario_UserFrontUsing> UserFrontUsing;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioKeyGuideAnimData Size 36
class FScenarioKeyGuideAnimData
{

 public: 
	struct FName Key_EmphasizeLoop;  // Offset: 0 Size: 8
	float Key_EmphasizeLoopRate;  // Offset: 8 Size: 4
	struct FName Key_EmphasizeDelay;  // Offset: 12 Size: 8
	struct FName Key_Focus;  // Offset: 20 Size: 8
	struct FName Key_UnFocus;  // Offset: 28 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.SetWidgetSpace Size 1
class FSetWidgetSpace
{

 public: 
	enum class EWidgetSpace NewSpace;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_TimeAttackSelectRankerDialog.OnClickedNextPageButton Size 4
class FOnClickedNextPageButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AIGameScenario Size 8
class FAIGameScenario
{

 public: 
	float Delay;  // Offset: 0 Size: 4
	enum class EItemType ItemType;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.CsRaceResult Size 200
class FCsRaceResult
{

 public: 
	int32_t gameNum;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FString gameId;  // Offset: 8 Size: 16
	struct FDateTime Time;  // Offset: 24 Size: 8
	enum class ERaceMode raceMode;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7
	struct FString Track;  // Offset: 40 Size: 16
	struct TArray<struct FKtRaceResultSummary> Player;  // Offset: 56 Size: 16
	struct TArray<struct FKtTeamResult> Team;  // Offset: 72 Size: 16
	struct TArray<struct FString> teamName;  // Offset: 88 Size: 16
	struct TMap<struct FString, struct FCsPlayerScoreChange> playerScoreChange;  // Offset: 104 Size: 80
	struct TArray<struct FCsTeamScoreChange> teamScoreChange;  // Offset: 184 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_LobbyPageWidget.OnReleasedRotateCharacterButton Size 4
class FOnReleasedRotateCharacterButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseTrafficConeComponent.OnTrafficConeHit Size 176
class FOnTrafficConeHit
{

 public: 
	struct UPrimitiveComponent* HitComponent;  // Offset: 0 Size: 8
	struct AActor* OtherActor;  // Offset: 8 Size: 8
	struct UPrimitiveComponent* OtherComp;  // Offset: 16 Size: 8
	struct FVector NormalImpulse;  // Offset: 24 Size: 12
	struct FHitResult Hit;  // Offset: 36 Size: 136
	char pad_172[4];  // Offset: 172 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ModeSelectSaveData Size 1
class FModeSelectSaveData
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bNotifiedRetired : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.FrontSwingCameraData Size 112
// Inherited 8 bytes 
class FFrontSwingCameraData : public FTableRowBase
{

 public: 
	float NormalFov;  // Offset: 8 Size: 4
	float BoostFov;  // Offset: 12 Size: 4
	float OrientInterpTime;  // Offset: 16 Size: 4
	float SpeedDecreaseInterpTime;  // Offset: 20 Size: 4
	float SpeedIncreaseInterpTime;  // Offset: 24 Size: 4
	float BoostFovInterpTime;  // Offset: 28 Size: 4
	float NormalFovInterpTime;  // Offset: 32 Size: 4
	float DefaultDistanceFromTarget;  // Offset: 36 Size: 4
	float DistancePerTargetSpeed;  // Offset: 40 Size: 4
	float CameraLocationPitch;  // Offset: 44 Size: 4
	float MaxZoomInDistance;  // Offset: 48 Size: 4
	float MaxZoomOutDistance;  // Offset: 52 Size: 4
	float ZoomMaxVelocity;  // Offset: 56 Size: 4
	float ZoomFriction;  // Offset: 60 Size: 4
	float ZoomAcceleration;  // Offset: 64 Size: 4
	float CameraViewPitch;  // Offset: 68 Size: 4
	struct TSoftObjectPtr<UCurveFloat> SwingAngleCurve;  // Offset: 72 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtMissionCounterDef Size 152
class FKtMissionCounterDef
{

 public: 
	enum class EKtMissionCounterType counterType;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool countOnceForDay : 1;  // Offset: 1 Size: 1
	char pad_2[6];  // Offset: 2 Size: 6
	struct FKtMissionCounterConditionDef counterConditionDef;  // Offset: 8 Size: 144



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AIGameScenario_LastAttack1st Size 12
// Inherited 8 bytes 
class FAIGameScenario_LastAttack1st : public FAIGameScenario
{

 public: 
	float AttackProgress;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AIItemUse_Progress Size 8
class FAIItemUse_Progress
{

 public: 
	float Progress;  // Offset: 0 Size: 4
	float Probability;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtKartBodyParamNameDef Size 24
// Inherited 8 bytes 
class FKtKartBodyParamNameDef : public FTableRowBase
{

 public: 
	struct TArray<struct FKtKartBodyDef> KartBodyParamNames;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.EventPageWidget.OnUpdateADTEvent Size 16
class FOnUpdateADTEvent
{

 public: 
	struct FString EventID;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.EventPageWidget.ChangeAttendanceStep Size 4
class FChangeAttendanceStep
{

 public: 
	int32_t AttendanceStep;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_BoosterDistance Size 4
class FDev_BoosterDistance
{

 public: 
	int32_t Distance;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtKartUpgradeInfo Size 144
class FKtKartUpgradeInfo
{

 public: 
	enum class EKtItemGrade grade;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FKtKartGearInfo GearInfo;  // Offset: 8 Size: 88
	struct FKtKartSkillInfo skillInfo;  // Offset: 96 Size: 48



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AIItemUse_DiffRankProbability Size 8
class FAIItemUse_DiffRankProbability
{

 public: 
	int32_t DiffRank;  // Offset: 0 Size: 4
	float Probability;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LoginEventRawData Size 104
class FLoginEventRawData
{

 public: 
	struct FString EventID;  // Offset: 0 Size: 16
	int32_t loginEventType;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct FDateTime startDate;  // Offset: 24 Size: 8
	struct FDateTime endDate;  // Offset: 32 Size: 8
	struct FKtStock rewardStock;  // Offset: 40 Size: 32
	struct FString titleKeyOrText;  // Offset: 72 Size: 16
	struct FString descriptionKeyOrText;  // Offset: 88 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AIItemUse_RankProbability Size 8
class FAIItemUse_RankProbability
{

 public: 
	int32_t rank;  // Offset: 0 Size: 4
	float Probability;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_OptionPageWidget.OnFocusedAccountResetBtn Size 4
class FOnFocusedAccountResetBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AIItemWaterlockEscapeSetting Size 8
class FAIItemWaterlockEscapeSetting
{

 public: 
	float EscapeButtonClickCycle;  // Offset: 0 Size: 4
	float Probability;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_OptionPageWidget.OnCustomizableWidgetDisableButtonChecked Size 4
class FOnCustomizableWidgetDisableButtonChecked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemComponent.Multicast_ReduceTimer Size 8
class FMulticast_ReduceTimer
{

 public: 
	UActorComponent* ComponentClass;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdForceFeedbackComponent.PlayForceFeedback Size 8
class FPlayForceFeedback
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.KeyRebindingLibrary.AddAxisMapping Size 48
class FAddAxisMapping
{

 public: 
	struct FInputAxisKeyMapping NewKeyMapping;  // Offset: 0 Size: 40
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bSaveSetting : 1;  // Offset: 40 Size: 1
	char pad_41_1 : 7;  // Offset: 41 Size: 1
	bool bSaveConfig : 1;  // Offset: 41 Size: 1
	char pad_42_1 : 7;  // Offset: 42 Size: 1
	bool ReturnValue : 1;  // Offset: 42 Size: 1
	char pad_43[5];  // Offset: 43 Size: 5



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AIItemUseRule Size 24
class FAIItemUseRule
{

 public: 
	enum class EItemType ItemType;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct TArray<struct UAIItemUseCondition*> Conditions;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtRiderNameChange Size 16
class FKtRiderNameChange
{

 public: 
	int32_t changeCount;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FDateTime changeDate;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AIKartRow Size 352
// Inherited 8 bytes 
class FAIKartRow : public FTableRowBase
{

 public: 
	struct FKartDesc KartDesc;  // Offset: 8 Size: 184
	struct FString BodyName;  // Offset: 192 Size: 16
	struct FString FrontName;  // Offset: 208 Size: 16
	struct FString SideName;  // Offset: 224 Size: 16
	struct FString BackName;  // Offset: 240 Size: 16
	struct FString WheelName;  // Offset: 256 Size: 16
	struct FString HandleName;  // Offset: 272 Size: 16
	struct FString PlateName;  // Offset: 288 Size: 16
	struct FString BoosterName;  // Offset: 304 Size: 16
	struct FString BalloonName;  // Offset: 320 Size: 16
	struct FString SkidMarkName;  // Offset: 336 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.InventoryItemNxA Size 32
class FInventoryItemNxA
{

 public: 
	struct FString transactionId;  // Offset: 0 Size: 16
	struct FString stockId;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.MainmenuPageWidget.OnActivateBlankPage Size 1
class FOnActivateBlankPage
{

 public: 
	enum class EPageCase PageCase;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AICharacterRow Size 96
// Inherited 8 bytes 
class FAICharacterRow : public FTableRowBase
{

 public: 
	struct FString AIName;  // Offset: 8 Size: 16
	struct FString CharacterId;  // Offset: 24 Size: 16
	struct FString CharacterName;  // Offset: 40 Size: 16
	struct FString CostumeId;  // Offset: 56 Size: 16
	struct FString CostumeName;  // Offset: 72 Size: 16
	struct FName PresetId;  // Offset: 88 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AnimNoti_FMODParam Size 12
class FAnimNoti_FMODParam
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8
	float Value;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomGamePageWidget.OnClickedCustomGameStartButton Size 4
class FOnClickedCustomGameStartButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AuthServerPendingRequest Size 24
class FAuthServerPendingRequest
{

 public: 
	struct UPqPacket* PqPacket;  // Offset: 0 Size: 8
	char pad_8[16];  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ItemTypeSet Size 80
class FItemTypeSet
{

 public: 
	struct TMap<enum class EKtItemType, int32_t> Values;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtPiggy Size 120
class FKtPiggy
{

 public: 
	struct FKtPiggyDef def;  // Offset: 0 Size: 64
	struct FDateTime openTime;  // Offset: 64 Size: 8
	int32_t openCount;  // Offset: 72 Size: 4
	char pad_76[4];  // Offset: 76 Size: 4
	struct FDateTime rewardTime;  // Offset: 80 Size: 8
	struct FString rewardSeed;  // Offset: 88 Size: 16
	struct TArray<struct FKtPiggyOpenReward> openRewards;  // Offset: 104 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_OptionPageWidget.OnCustomerCenterButtonClicked Size 4
class FOnCustomerCenterButtonClicked
{

 public: 
	int32_t NotUsed;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtGearParam Size 52
class FKtGearParam
{

 public: 
	float dragFactor;  // Offset: 0 Size: 4
	float forwardAccelForce;  // Offset: 4 Size: 4
	float backwardAccelForce;  // Offset: 8 Size: 4
	float transAccelFactor;  // Offset: 12 Size: 4
	float startForwardAccelFactorItem;  // Offset: 16 Size: 4
	float startForwardAccelFactorSpeed;  // Offset: 20 Size: 4
	float driftBoostMulAccelFactor;  // Offset: 24 Size: 4
	float normalBoosterTime;  // Offset: 28 Size: 4
	float teamBoosterTime;  // Offset: 32 Size: 4
	float startBoosterTime;  // Offset: 36 Size: 4
	float startBoosterTimeItem;  // Offset: 40 Size: 4
	float startBoosterTimeSpeed;  // Offset: 44 Size: 4
	int32_t driftBoostTick;  // Offset: 48 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.TMIRecordPawnEvent Size 32
class FTMIRecordPawnEvent
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bTickState : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool block : 1;  // Offset: 1 Size: 1
	char pad_2[2];  // Offset: 2 Size: 2
	float Time;  // Offset: 4 Size: 4
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bPostRecord : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3
	float Delay;  // Offset: 12 Size: 4
	char pad_16[16];  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseMission Size 128
class FLicenseMission
{

 public: 
	struct FName PlayerStartName;  // Offset: 0 Size: 8
	enum class ELicenseMissionType missionType;  // Offset: 8 Size: 1
	enum class EItemType MissionItem;  // Offset: 9 Size: 1
	char pad_10[6];  // Offset: 10 Size: 6
	struct FString TriggerID;  // Offset: 16 Size: 16
	int32_t QuestCount;  // Offset: 32 Size: 4
	float SucceededExpressionTime;  // Offset: 36 Size: 4
	float FailedExpressionTime;  // Offset: 40 Size: 4
	char pad_44_1 : 7;  // Offset: 44 Size: 1
	bool bCanReset : 1;  // Offset: 44 Size: 1
	char pad_45_1 : 7;  // Offset: 45 Size: 1
	bool bCanRetry : 1;  // Offset: 45 Size: 1
	enum class ELicenseUseSubMissionResultType eUseSubMissionResult;  // Offset: 46 Size: 1
	char pad_47[1];  // Offset: 47 Size: 1
	struct FText SubMissionFailText;  // Offset: 48 Size: 24
	int32_t WidgetFlags;  // Offset: 72 Size: 4
	char pad_76[4];  // Offset: 76 Size: 4
	struct TArray<struct TSoftClassPtr<UObject>> BeginWidget;  // Offset: 80 Size: 16
	struct TArray<struct TSoftClassPtr<UObject>> SucceededWidget;  // Offset: 96 Size: 16
	struct TArray<struct TSoftClassPtr<UObject>> FailedWidget;  // Offset: 112 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ItemSlotSet Size 80
class FItemSlotSet
{

 public: 
	struct TMap<enum class EKtItemSlot, int32_t> Values;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.MainmenuPageWidget.OnClickedChatButton Size 4
class FOnClickedChatButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KartAdditionalSkillData Size 408
class FKartAdditionalSkillData
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bFastWaterReaction : 1;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct TMap<enum class EItemType, struct FGainItemOnAffected> GainItemOnAffected;  // Offset: 8 Size: 80
	struct TMap<enum class EItemType, struct FSpecialGainItem> SpecialGainItem;  // Offset: 88 Size: 80
	struct TMap<enum class EItemType, struct FGainItemOnUse> GainItemOnUse;  // Offset: 168 Size: 80
	struct TMap<enum class EItemType, struct FDefendItemOnAffect> DefendItemOnAffect;  // Offset: 248 Size: 80
	struct TMap<enum class EItemType, struct FGainItemOnDefend> GainItemOnDefend;  // Offset: 328 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.CameraCalculators Size 16
class FCameraCalculators
{

 public: 
	struct TArray<struct UCameraCalculator*> Calculators;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_TimeAttackSelectRankerDialog.OnClickedPrevPageButton Size 4
class FOnClickedPrevPageButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.GainItemOnDefend Size 8
class FGainItemOnDefend
{

 public: 
	enum class EItemType ChangeItem;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float Probability;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CheatComponent.Server_SetBoosterDistance Size 4
class FServer_SetBoosterDistance
{

 public: 
	int32_t Distance;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtStockCommonDef Size 24
// Inherited 8 bytes 
class FKtStockCommonDef : public FTableRowBase
{

 public: 
	struct TArray<struct FKtStockDef> stockDefVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.GainItemOnAffected Size 8
class FGainItemOnAffected
{

 public: 
	enum class EItemType ChangeItem;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float Probability;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedEquipAllButton Size 4
class FOnClickedEquipAllButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.DefendItemOnAffect Size 4
class FDefendItemOnAffect
{

 public: 
	float Probability;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CharacterSkeletalMeshComponent.OnLoadComplete Size 80
class FOnLoadComplete
{

 public: 
	struct TSet<struct FSoftObjectPath> InAssetPathContainer;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.GainItemOnUse Size 8
class FGainItemOnUse
{

 public: 
	enum class EItemType ChangeItem;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float Probability;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.AchievementSummaryDialog.OnAchievementClickedSummaryTypeButton Size 4
class FOnAchievementClickedSummaryTypeButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdProfilerWidget.GetHitchFrameTimeThreshold Size 4
class FGetHitchFrameTimeThreshold
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.SpecialGainItem Size 8
class FSpecialGainItem
{

 public: 
	enum class EItemType ChangeItem;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float Probability;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.EditValue Size 24
class FEditValue
{

 public: 
	struct FVector position;  // Offset: 0 Size: 12
	struct FRotator Rotation;  // Offset: 12 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.BelongingDataAssetRow Size 48
// Inherited 8 bytes 
class FBelongingDataAssetRow : public FTableRowBase
{

 public: 
	struct TSoftObjectPtr<UDataAsset> DataAsset;  // Offset: 8 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.BuildCaptureValueInfo Size 40
class FBuildCaptureValueInfo
{

 public: 
	char pad_0[40];  // Offset: 0 Size: 40



 // Functions 
 public:
}; 
 
 //Function KartDrift.ModeSelectPageWidget.License_OnClickedEnterLicense Size 4
class FLicense_OnClickedEnterLicense
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.CustomGameInfo Size 280
class FCustomGameInfo
{

 public: 
	struct FString bossAccountId;  // Offset: 0 Size: 16
	struct FString gameKey;  // Offset: 16 Size: 16
	struct UObject* session;  // Offset: 32 Size: 8
	int32_t maxMemberCount;  // Offset: 40 Size: 4
	char pad_44[4];  // Offset: 44 Size: 4
	struct TArray<struct FCsMember> members;  // Offset: 48 Size: 16
	struct FString sessionReqId;  // Offset: 64 Size: 16
	int32_t gameNum;  // Offset: 80 Size: 4
	int32_t joinId;  // Offset: 84 Size: 4
	struct FString xblSessionUri;  // Offset: 88 Size: 16
	struct FString psnSessionUri;  // Offset: 104 Size: 16
	char pad_120_1 : 7;  // Offset: 120 Size: 1
	bool observerMode : 1;  // Offset: 120 Size: 1
	char pad_121[7];  // Offset: 121 Size: 7
	struct TArray<struct FCsObserver> observers;  // Offset: 128 Size: 16
	struct FCsGameOption gameOption;  // Offset: 144 Size: 2
	char pad_146[6];  // Offset: 146 Size: 6
	struct FCsGameData gameData;  // Offset: 152 Size: 128



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.BuildCaptureCameraInfo Size 128
class FBuildCaptureCameraInfo
{

 public: 
	float FocusDistance;  // Offset: 0 Size: 4
	struct TWeakObjectPtr<AActor> TrackTargetActor;  // Offset: 4 Size: 8
	struct TWeakObjectPtr<AActor> BindActor;  // Offset: 12 Size: 8
	struct TWeakObjectPtr<AActor> TargetActor;  // Offset: 20 Size: 8
	float FocalLength;  // Offset: 28 Size: 4
	float Aperture;  // Offset: 32 Size: 4
	char pad_36[12];  // Offset: 36 Size: 12
	struct FTransform CameraTransform;  // Offset: 48 Size: 48
	float MoveInterpSpeed;  // Offset: 96 Size: 4
	float RotateInterpSpeed;  // Offset: 100 Size: 4
	float DutchInterpSpeed;  // Offset: 104 Size: 4
	float MoveSpeed;  // Offset: 108 Size: 4
	float RotateSpeed;  // Offset: 112 Size: 4
	int32_t AttachIndex;  // Offset: 116 Size: 4
	char pad_120[8];  // Offset: 120 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtTrackDef Size 56
class FKtTrackDef
{

 public: 
	struct FString Alias;  // Offset: 0 Size: 16
	int32_t HackCheckTimeSeconds;  // Offset: 16 Size: 4
	int32_t LapCount;  // Offset: 20 Size: 4
	enum class EKtLevelType LevelType;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7
	struct FString ThemeType;  // Offset: 32 Size: 16
	int32_t Difficulty;  // Offset: 48 Size: 4
	enum class EKtLicenseGroupType NeedLicense;  // Offset: 52 Size: 1
	char pad_53[3];  // Offset: 53 Size: 3



 // Functions 
 public:
}; 
 
 //Function KartDrift.EventPageWidget.OnUnFocusedAttendanceReward Size 4
class FOnUnFocusedAttendanceReward
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.AchievementPageWidget.OnClickedAchievementCategoryButton Size 4
class FOnClickedAchievementCategoryButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseItemTargetActorInfo Size 56
class FLicenseItemTargetActorInfo
{

 public: 
	struct FLinearColor SpawnColor;  // Offset: 0 Size: 16
	enum class EItemType TargetItem;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7
	struct FText UniqueId;  // Offset: 24 Size: 24
	int32_t TeamIndex;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_NormalChallengePageWidget.OnFocusedNormalChallengeSlot Size 4
class FOnFocusedNormalChallengeSlot
{

 public: 
	int32_t SlotIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.MailIdWidgetPair Size 24
class FMailIdWidgetPair
{

 public: 
	char pad_0[16];  // Offset: 0 Size: 16
	struct UButtonTemplate* MailWidget;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.SpeedGuideDialog.OnClickedBackButton Size 4
class FOnClickedBackButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.FirstPersonFollowCameraData Size 40
// Inherited 8 bytes 
class FFirstPersonFollowCameraData : public FTableRowBase
{

 public: 
	struct FVector CameraOffset;  // Offset: 8 Size: 12
	struct FVector CameraTargetOffset;  // Offset: 20 Size: 12
	float DefaultFOV;  // Offset: 32 Size: 4
	float OrientInterpTime;  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnClickedStartOrCancelButton Size 4
class FOnClickedStartOrCancelButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryDesignDescCompressed Size 48
class FLiveryDesignDescCompressed
{

 public: 
	struct TArray<uint16_t> GlobalColorOverrideIndex;  // Offset: 0 Size: 16
	struct TArray<char> IndexInCollection;  // Offset: 16 Size: 16
	struct TArray<struct FLiveryWrappingArrayCompressed> WrappingArray;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.SideFollowCameraData Size 160
// Inherited 8 bytes 
class FSideFollowCameraData : public FTableRowBase
{

 public: 
	float MinZoomFactor;  // Offset: 8 Size: 4
	float MaxZoomFactor;  // Offset: 12 Size: 4
	float ZoomFactorMaxVelocity;  // Offset: 16 Size: 4
	float ZoomFactorFriction;  // Offset: 20 Size: 4
	float ZoomFactorAcceleration;  // Offset: 24 Size: 4
	float MinHeight;  // Offset: 28 Size: 4
	float MaxHeight;  // Offset: 32 Size: 4
	float HeightMaxVelocity;  // Offset: 36 Size: 4
	float HeightFriction;  // Offset: 40 Size: 4
	float HeightAcceleration;  // Offset: 44 Size: 4
	float CameraLocationInterpTime;  // Offset: 48 Size: 4
	float CameraRotationInterpTime;  // Offset: 52 Size: 4
	float CameraMinHeightFromGround;  // Offset: 56 Size: 4
	float DefaultFOV;  // Offset: 60 Size: 4
	float CameraFocusFromTarget;  // Offset: 64 Size: 4
	float RoadCheckUpperBound;  // Offset: 68 Size: 4
	float RoadCheckLowerBound;  // Offset: 72 Size: 4
	float RoadCheckUpperBoundFromKart;  // Offset: 76 Size: 4
	struct TSoftObjectPtr<UCurveFloat> DistanceCurve;  // Offset: 80 Size: 40
	struct TSoftObjectPtr<UCurveFloat> AngleCurve;  // Offset: 120 Size: 40



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceProgressComponent.ClientLapComplete Size 8
class FClientLapComplete
{

 public: 
	int32_t CompletedLapCount;  // Offset: 0 Size: 4
	float CurrentLapTime;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtAchievementTendencySetDef Size 40
// Inherited 8 bytes 
class FKtAchievementTendencySetDef : public FTableRowBase
{

 public: 
	struct FString LastUpdateDate;  // Offset: 8 Size: 16
	struct TArray<struct FKtAchievementTendencyDef> tendencySetDefVector;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioGroup Size 112
class FScenarioGroup
{

 public: 
	struct FString CategoryID;  // Offset: 0 Size: 16
	struct FString GroupID;  // Offset: 16 Size: 16
	struct TMap<struct FString, struct FScenarioActions> ActionGroupContainer;  // Offset: 32 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.TopFollowCameraData Size 64
// Inherited 8 bytes 
class FTopFollowCameraData : public FTableRowBase
{

 public: 
	float DefaultZDistance;  // Offset: 8 Size: 4
	float DefaultFOV;  // Offset: 12 Size: 4
	float MinZDistance;  // Offset: 16 Size: 4
	float MaxZDistance;  // Offset: 20 Size: 4
	float KartForwardDistance;  // Offset: 24 Size: 4
	float CameraTeleportThreshold;  // Offset: 28 Size: 4
	float LocationInterpTime;  // Offset: 32 Size: 4
	float ZDistanceMaxVelocity;  // Offset: 36 Size: 4
	float ZDistanceAcceleration;  // Offset: 40 Size: 4
	float ZDistanceFriction;  // Offset: 44 Size: 4
	float RollMaxVelocity;  // Offset: 48 Size: 4
	float RollAcceleration;  // Offset: 52 Size: 4
	float RollFriction;  // Offset: 56 Size: 4
	char pad_60[4];  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickConfirmDialogCancelBtn Size 4
class FOnClickConfirmDialogCancelBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.SideMenuPageWidget.Report_ConfirmReport Size 4
class FReport_ConfirmReport
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.HostGamePlayer Size 376
class FHostGamePlayer
{

 public: 
	struct FKtRacePlayerSummary summary;  // Offset: 0 Size: 192
	struct FKtItemPreview itemPreview;  // Offset: 192 Size: 168
	struct TArray<enum class EKtAccountFlag> playerFlag;  // Offset: 360 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_InfoPageWidget.OnClickedNextTab_Info Size 4
class FOnClickedNextTab_Info
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_OptionPageWidget.OnCustomDialogSaveButtonPressed Size 4
class FOnCustomDialogSaveButtonPressed
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.DriveCameraData Size 128
// Inherited 8 bytes 
class FDriveCameraData : public FTableRowBase
{

 public: 
	float MinLength;  // Offset: 8 Size: 4
	float MaxLength;  // Offset: 12 Size: 4
	float MinHeight;  // Offset: 16 Size: 4
	float MaxHeight;  // Offset: 20 Size: 4
	float DistanceCoefficient;  // Offset: 24 Size: 4
	float HeightCoefficient;  // Offset: 28 Size: 4
	float CameraLagSpeed;  // Offset: 32 Size: 4
	float CameraLagMaxTimeStep;  // Offset: 36 Size: 4
	float CameraRotationLagSpeed;  // Offset: 40 Size: 4
	float MinCameraPitchRadians;  // Offset: 44 Size: 4
	float CameraPitchSpeedCoefficient;  // Offset: 48 Size: 4
	float CameraLagMaxDistance;  // Offset: 52 Size: 4
	float DropFactor;  // Offset: 56 Size: 4
	float RefreshRate;  // Offset: 60 Size: 4
	float AdditionalZ;  // Offset: 64 Size: 4
	float UpDownFactor;  // Offset: 68 Size: 4
	float ZLagSpeed;  // Offset: 72 Size: 4
	float NormalFov;  // Offset: 76 Size: 4
	float NormalFovChangeFactor;  // Offset: 80 Size: 4
	float BoostFov;  // Offset: 84 Size: 4
	float BoostFovChangeFactor;  // Offset: 88 Size: 4
	float MomentBoostFov;  // Offset: 92 Size: 4
	float MomentBoostFovChangeFactor;  // Offset: 96 Size: 4
	float ZoneBoostFov;  // Offset: 100 Size: 4
	float ZoneBoostFovChangeFactor;  // Offset: 104 Size: 4
	float RailAndBoostFov;  // Offset: 108 Size: 4
	float RailAndBoostFovChangeFactor;  // Offset: 112 Size: 4
	float MomentBoostFovSpeedMultiplier;  // Offset: 116 Size: 4
	float ArmSpeedBackwardCoefficient;  // Offset: 120 Size: 4
	float ArmSpeedForwardCoefficient;  // Offset: 124 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_GfsCancelFriendRequest Size 16
class FDev_GfsCancelFriendRequest
{

 public: 
	struct FString accountId;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.DriftMissionStruct Size 20
class FDriftMissionStruct
{

 public: 
	enum class EDriftMissionType missionType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float KeepNSeconds;  // Offset: 4 Size: 4
	float ReuseInNSeconds;  // Offset: 8 Size: 4
	float InNSeconds;  // Offset: 12 Size: 4
	int32_t UseNTimes;  // Offset: 16 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MailPageWidget.OnUpdateLucci Size 4
class FOnUpdateLucci
{

 public: 
	int32_t lucci;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.CameraModeData Size 40
// Inherited 8 bytes 
class FCameraModeData : public FTableRowBase
{

 public: 
	enum class ECameraMode CameraMode;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct FText LocModeName;  // Offset: 16 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseStaticActorInfo Size 44
class FLicenseStaticActorInfo
{

 public: 
	float Distance;  // Offset: 0 Size: 4
	struct FVector Offset;  // Offset: 4 Size: 12
	float Scale;  // Offset: 16 Size: 4
	struct FVector Location;  // Offset: 20 Size: 12
	struct FVector Direction;  // Offset: 32 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KdCategoryItemSet Size 104
class FKdCategoryItemSet
{

 public: 
	struct TMap<enum class EItemCategoryType, int32_t> ItemIDMap;  // Offset: 0 Size: 80
	struct FString LiveryUniqueId;  // Offset: 80 Size: 16
	int32_t LiveryRevision;  // Offset: 96 Size: 4
	char pad_100[4];  // Offset: 100 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CouponPageWidget.OnCloseCouponDialog Size 4
class FOnCloseCouponDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemUfo.MulticastCasting Size 16
class FMulticastCasting
{

 public: 
	struct UItemComponent* User;  // Offset: 0 Size: 8
	struct UItemComponent* InVictim;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_TimeAttackPageWidget.OnClickedShadowButtonOff Size 4
class FOnClickedShadowButtonOff
{

 public: 
	int32_t nIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.CPFogData Size 104
class FCPFogData
{

 public: 
	struct TSoftObjectPtr<AExponentialHeightFog> WorldFog;  // Offset: 0 Size: 40
	float FogMaxOpacity;  // Offset: 40 Size: 4
	struct FLinearColor FogColor;  // Offset: 44 Size: 16
	float FogHeightFalloff;  // Offset: 60 Size: 4
	float FogDensity;  // Offset: 64 Size: 4
	float VolumetricFogScatteringDistribution;  // Offset: 68 Size: 4
	float StartDistance;  // Offset: 72 Size: 4
	float VolumetricFogDistance;  // Offset: 76 Size: 4
	struct FColor VolumetricFogAlbedo;  // Offset: 80 Size: 4
	struct FLinearColor VolumetricFogEmissive;  // Offset: 84 Size: 16
	float VolumetricFogExtinctionScale;  // Offset: 100 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_PurchaseTier Size 4
class FDev_PurchaseTier
{

 public: 
	int32_t tierCount;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtQuestSetDataComplete Size 80
class FKtQuestSetDataComplete
{

 public: 
	struct TMap<struct FString, struct FString> questIdCompleteVector;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.VerifyClient Size 24
class FVerifyClient
{

 public: 
	char pad_0[24];  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemTacticalRowWidget.Failed Size 40
class FFailed
{

 public: 
	enum class EHitState HitState;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct UTexture2D* Texture;  // Offset: 8 Size: 8
	struct FText Name;  // Offset: 16 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LoginPageWidget.ChangeLanguage_OpenDialog Size 4
class FChangeLanguage_OpenDialog
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ColorTable Size 184
// Inherited 8 bytes 
class FColorTable : public FTableRowBase
{

 public: 
	struct FSlateColor ColorPreset;  // Offset: 8 Size: 40
	struct FSlateBrush BrushPreset;  // Offset: 48 Size: 136



 // Functions 
 public:
}; 
 
 //Function KartDrift.ScenarioSequenceDirector.PlayKartAnimationByMontage Size 32
class FPlayKartAnimationByMontage
{

 public: 
	struct AActor* InActor;  // Offset: 0 Size: 8
	struct UAnimMontage* MontageToPlay;  // Offset: 8 Size: 8
	float InPlayRate;  // Offset: 16 Size: 4
	enum class EMontagePlayReturnType ReturnValueType;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3
	float InTimeToStartMontageAt;  // Offset: 24 Size: 4
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool bStopAllMontages : 1;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtModeSelectData Size 40
class FKtModeSelectData
{

 public: 
	struct TArray<char> trackDifficulty;  // Offset: 0 Size: 16
	struct TArray<char> Mode;  // Offset: 16 Size: 16
	int32_t aiOption;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.TMIRaceEventData Size 28
class FTMIRaceEventData
{

 public: 
	int32_t WallContact;  // Offset: 0 Size: 4
	int32_t KartContact;  // Offset: 4 Size: 4
	int32_t Reset;  // Offset: 8 Size: 4
	int32_t overtake;  // Offset: 12 Size: 4
	int32_t SmallBoost;  // Offset: 16 Size: 4
	int32_t draft;  // Offset: 20 Size: 4
	int32_t Drift;  // Offset: 24 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PawnStateComponent.ServerSetRaceGameResult Size 72
class FServerSetRaceGameResult
{

 public: 
	struct FRaceGameResult InRaceGameResult;  // Offset: 0 Size: 72



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KdMotionItemSetDef Size 88
// Inherited 8 bytes 
class FKdMotionItemSetDef : public FTableRowBase
{

 public: 
	struct TMap<struct FString, enum class ECharacterMontage> DefMap;  // Offset: 8 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartGameUserSettings.SetShowOtherRiderNames Size 1
class FSetShowOtherRiderNames
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnable : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseDynamicItemCubeComponent.OnLastUseItem Size 16
class FOnLastUseItem
{

 public: 
	struct APawn* InPawn;  // Offset: 0 Size: 8
	enum class EItemType InType;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtToyPaymentInfo Size 32
class FKtToyPaymentInfo
{

 public: 
	struct FString productId;  // Offset: 0 Size: 16
	struct FString stampToken;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LoginPageWidget.OnClickedCancelStandbyButton Size 4
class FOnClickedCancelStandbyButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PSOCollectWidget.OnComboBoxSelectionChanged_Plate Size 32
class FOnComboBoxSelectionChanged_Plate
{

 public: 
	struct FString InSelectedItem;  // Offset: 0 Size: 16
	struct FString InSelectedItemKey;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.PhysicSpec Size 200
class FPhysicSpec
{

 public: 
	float Mass;  // Offset: 0 Size: 4
	float Width;  // Offset: 4 Size: 4
	float Length;  // Offset: 8 Size: 4
	float MaxTravel;  // Offset: 12 Size: 4
	float ForwardAccel;  // Offset: 16 Size: 4
	float driftEscapeForce;  // Offset: 20 Size: 4
	float BackwardAccel;  // Offset: 24 Size: 4
	float gripBrake;  // Offset: 28 Size: 4
	float slipBrake;  // Offset: 32 Size: 4
	char pad_36_1 : 7;  // Offset: 36 Size: 1
	bool bUseTransformBooster : 1;  // Offset: 36 Size: 1
	char pad_37[3];  // Offset: 37 Size: 3
	float transAccelFactor;  // Offset: 40 Size: 4
	float boostAccelFactor;  // Offset: 44 Size: 4
	float NormalBoostTime;  // Offset: 48 Size: 4
	float ItemBoostTime;  // Offset: 52 Size: 4
	float TeamBoostTime;  // Offset: 56 Size: 4
	float AnimalBoostTime;  // Offset: 60 Size: 4
	float SuperBoostTime;  // Offset: 64 Size: 4
	float StartBoostTimeItem;  // Offset: 68 Size: 4
	float StartBoostTimeSpeed;  // Offset: 72 Size: 4
	float StartForwardAccelItem;  // Offset: 76 Size: 4
	float StartForwardAccelSpeed;  // Offset: 80 Size: 4
	float maxSteerDeg;  // Offset: 84 Size: 4
	float steerConstraint;  // Offset: 88 Size: 4
	float frontGripFactor;  // Offset: 92 Size: 4
	float rearGripFactor;  // Offset: 96 Size: 4
	float driftTrigFactor;  // Offset: 100 Size: 4
	float driftTrigTime;  // Offset: 104 Size: 4
	float driftSlipFactor;  // Offset: 108 Size: 4
	float driftLeanFactor;  // Offset: 112 Size: 4
	float steerLeanFactor;  // Offset: 116 Size: 4
	float cornerDrawFactor;  // Offset: 120 Size: 4
	float driftMaxGauge;  // Offset: 124 Size: 4
	float driftGaugePreservePercent;  // Offset: 128 Size: 4
	float airFriction;  // Offset: 132 Size: 4
	float dragFactor;  // Offset: 136 Size: 4
	float antiCollideBalance;  // Offset: 140 Size: 4
	float draftMulAccelFactor;  // Offset: 144 Size: 4
	uint32_t draftTick;  // Offset: 148 Size: 4
	float driftBoostMulAccelFactor;  // Offset: 152 Size: 4
	uint32_t driftBoostTick;  // Offset: 156 Size: 4
	float chargeBoostBySpeed;  // Offset: 160 Size: 4
	char pad_164_1 : 7;  // Offset: 164 Size: 1
	bool bUseExtendedAfterBoost : 1;  // Offset: 164 Size: 1
	char pad_165[3];  // Offset: 165 Size: 3
	float boostAccelFactorOnlyItem;  // Offset: 168 Size: 4
	float evadeForce;  // Offset: 172 Size: 4
	uint32_t speedSlotCapacity;  // Offset: 176 Size: 4
	uint32_t itemSlotCapacity;  // Offset: 180 Size: 4
	uint32_t specialSlotCapacity;  // Offset: 184 Size: 4
	char pad_188_1 : 7;  // Offset: 188 Size: 1
	bool bMotorCycleType : 1;  // Offset: 188 Size: 1
	char pad_189[3];  // Offset: 189 Size: 3
	float autoChargeLowSpeed;  // Offset: 192 Size: 4
	char pad_196_1 : 7;  // Offset: 196 Size: 1
	bool bTransformAutoCharge : 1;  // Offset: 196 Size: 1
	char pad_197[3];  // Offset: 197 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtRaceCount Size 16
class FKtRaceCount
{

 public: 
	int32_t itemCount;  // Offset: 0 Size: 4
	int32_t speedCount;  // Offset: 4 Size: 4
	struct FDateTime updateTime;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtDefaultPartsSetDef Size 88
// Inherited 8 bytes 
class FKtDefaultPartsSetDef : public FTableRowBase
{

 public: 
	struct TMap<struct FString, struct FKtDefaultPartsDef> defaultPartsDefMap;  // Offset: 8 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.CsPlayerScoreChange Size 8
class FCsPlayerScoreChange
{

 public: 
	struct FCsPlayerScore prev;  // Offset: 0 Size: 4
	struct FCsPlayerScore Next;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_EventChallengePageWidget.OnFocusedEventChallengeSlot Size 4
class FOnFocusedEventChallengeSlot
{

 public: 
	int32_t SlotIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtPlayLucciInfo Size 16
class FKtPlayLucciInfo
{

 public: 
	int32_t acquired;  // Offset: 0 Size: 4
	int32_t limit;  // Offset: 4 Size: 4
	struct FDateTime deadline;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtMissionTriggerConditionShadowDef Size 64
class FKtMissionTriggerConditionShadowDef
{

 public: 
	struct FString Filename;  // Offset: 0 Size: 16
	enum class EKtShadowCondition shadowCondition;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3
	int32_t StartTime;  // Offset: 20 Size: 4
	int32_t distanceOption;  // Offset: 24 Size: 4
	int32_t timeOption;  // Offset: 28 Size: 4
	struct FString shadowName;  // Offset: 32 Size: 16
	struct TArray<struct FString> shadowItemVector;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdProfilerWidget.OnHitchDetected Size 8
class FOnHitchDetected
{

 public: 
	enum class EKdFrameHitchType HitchType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float HitchDurationInSeconds;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayReadyPageWidget.OnClickedGameReplayButton Size 4
class FOnClickedGameReplayButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtUserInfoView Size 304
class FKtUserInfoView
{

 public: 
	struct FString riderName;  // Offset: 0 Size: 16
	enum class EKtAccountPlatform platform;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7
	struct FString emblemItemIdOn;  // Offset: 24 Size: 16
	struct FKtItemPreset itemPresetOn;  // Offset: 40 Size: 160
	int32_t Exp;  // Offset: 200 Size: 4
	char pad_204[4];  // Offset: 204 Size: 4
	struct TArray<struct FString> Tag;  // Offset: 208 Size: 16
	struct FKtLicenseData licenseData;  // Offset: 224 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_AODecalMaxDist Size 4
class FDev_AODecalMaxDist
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtLicenseData Size 80
class FKtLicenseData
{

 public: 
	struct TMap<struct FString, struct FKtLicenseGroupData> licenseGroupDataMap;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtLicenseGroupData Size 128
class FKtLicenseGroupData
{

 public: 
	struct TMap<struct FString, struct FKtLicenseMissionData> licenseMissionDataMap;  // Offset: 0 Size: 80
	struct FNullableDateTime bronzeAcquisitionDate;  // Offset: 80 Size: 16
	struct FNullableDateTime silverAcquisitionDate;  // Offset: 96 Size: 16
	struct FNullableDateTime goldAcquisitionDate;  // Offset: 112 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtMissionTriggerConditionItemPresetDef Size 24
class FKtMissionTriggerConditionItemPresetDef
{

 public: 
	struct TArray<struct FString> itemSlotCheckVector;  // Offset: 0 Size: 16
	enum class EKtItemGrade itemGrade;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.PlayerAudioVolumeSettings Size 84
class FPlayerAudioVolumeSettings
{

 public: 
	struct FMultiplierWithbMuted Master;  // Offset: 0 Size: 8
	struct FMultiplierWithbMuted BGM;  // Offset: 8 Size: 8
	struct FMultiplierWithbMuted EffectAll;  // Offset: 16 Size: 8
	struct FMultiplierWithbMuted EffectKart;  // Offset: 24 Size: 8
	struct FMultiplierWithbMuted EffectCharacter;  // Offset: 32 Size: 8
	struct FMultiplierWithbMuted EffectAmbient;  // Offset: 40 Size: 8
	struct FMultiplierWithbMuted EffectInGame;  // Offset: 48 Size: 8
	struct FMultiplierWithbMuted EffectUI;  // Offset: 56 Size: 8
	char pad_64_1 : 7;  // Offset: 64 Size: 1
	bool VoiceChatEnable : 1;  // Offset: 64 Size: 1
	char pad_65[3];  // Offset: 65 Size: 3
	int32_t VoiceChatOption;  // Offset: 68 Size: 4
	float VoiceChatVolume;  // Offset: 72 Size: 4
	float MicVolume;  // Offset: 76 Size: 4
	char pad_80_1 : 7;  // Offset: 80 Size: 1
	bool TTSEnable : 1;  // Offset: 80 Size: 1
	char pad_81_1 : 7;  // Offset: 81 Size: 1
	bool STTEnable : 1;  // Offset: 81 Size: 1
	char pad_82[2];  // Offset: 82 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtLicenseMissionData Size 24
class FKtLicenseMissionData
{

 public: 
	int32_t starCount;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FDateTime> rewardDateVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtRecentActivity Size 32
class FKtRecentActivity
{

 public: 
	enum class EKtRecentActivityType Type;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FString Content;  // Offset: 8 Size: 16
	struct FDateTime updateDate;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.CsPlayerScore Size 4
class FCsPlayerScore
{

 public: 
	int32_t Score;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ModeSelectPageWidget.ItemGuideDetailPopup_OnItemSelectionChanged Size 8
class FItemGuideDetailPopup_OnItemSelectionChanged
{

 public: 
	struct UObject* SelectedItem;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.RiderNameChangeDialog.OnClickedRiderNameCheckBtn Size 4
class FOnClickedRiderNameCheckBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtRecommandFriend Size 72
class FKtRecommandFriend
{

 public: 
	struct FString accountId;  // Offset: 0 Size: 16
	struct FString riderName;  // Offset: 16 Size: 16
	enum class EKtAccountPlatform platform;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7
	struct FString emblemId;  // Offset: 40 Size: 16
	struct FString gameId;  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemMine.MulticastActivate Size 8
class FMulticastActivate
{

 public: 
	struct UItemComponent* User;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseBossBananaPattern Size 16
class FLicenseBossBananaPattern
{

 public: 
	struct TArray<struct FLicenseBossBananaPatternInst> PatternInstList;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryWrappingDesc_Ver3 Size 64
class FLiveryWrappingDesc_Ver3
{

 public: 
	enum class ELiveryWrappingCategory Category;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t IndexInCategory;  // Offset: 4 Size: 4
	struct FLiveryWrappingTransform Transform;  // Offset: 8 Size: 40
	struct TArray<struct FLiveryWrappingGroup_Ver3> GroupInfos;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtTimeAttackRecord Size 88
class FKtTimeAttackRecord
{

 public: 
	struct FString trackId;  // Offset: 0 Size: 16
	int32_t lapTime;  // Offset: 16 Size: 4
	int32_t mileage;  // Offset: 20 Size: 4
	struct FString KartID;  // Offset: 24 Size: 16
	int32_t kartLevel;  // Offset: 40 Size: 4
	enum class EKtItemGrade KartGrade;  // Offset: 44 Size: 1
	char pad_45[3];  // Offset: 45 Size: 3
	int32_t beginnerFlag;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4
	struct FString replayPath;  // Offset: 56 Size: 16
	struct FDateTime updateDate;  // Offset: 72 Size: 8
	int32_t Version;  // Offset: 80 Size: 4
	char pad_84[4];  // Offset: 84 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.BuildCaptureWidget.OnSpinBoxValueChanged_CameraDutchInterpSpeed Size 4
class FOnSpinBoxValueChanged_CameraDutchInterpSpeed
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.EnvironmentTriggerBox.GetPlayerKartSpeed Size 8
class FGetPlayerKartSpeed
{

 public: 
	int32_t PlayerIndex;  // Offset: 0 Size: 4
	float ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtAttendanceEventInfo Size 56
class FKtAttendanceEventInfo
{

 public: 
	struct FString EventID;  // Offset: 0 Size: 16
	struct FDateTime lastInvokeDate;  // Offset: 16 Size: 8
	int32_t invokedCount;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4
	struct TArray<int32_t> receivedNumbers;  // Offset: 32 Size: 16
	struct FDateTime lastConfirmDate;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.TimeAttackPageWidget.OnClickedReportButton Size 4
class FOnClickedReportButton
{

 public: 
	int32_t nIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtMissionTriggerDef Size 544
class FKtMissionTriggerDef
{

 public: 
	enum class EKtMissionTriggerType triggerType;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FKtMissionTriggerConditionDef triggerConditionDef;  // Offset: 8 Size: 32
	struct FKtMissionTriggerConditionRaceResultDef triggerConditionRaceResultDef;  // Offset: 40 Size: 360
	struct FKtMissionTriggerConditionItemPresetDef triggerConditionItemPresetDef;  // Offset: 400 Size: 24
	struct FKtMissionTriggerConditionContentDef triggerConditionContentDef;  // Offset: 424 Size: 40
	struct FKtMissionTriggerConditionOnceCheckDef triggerConditionOnceCheckDef;  // Offset: 464 Size: 12
	char pad_476[4];  // Offset: 476 Size: 4
	struct FKtMissionTriggerConditionShadowDef triggerConditionShadowDef;  // Offset: 480 Size: 64



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.OwnKartUpgradeInfo Size 104
class FOwnKartUpgradeInfo
{

 public: 
	enum class EKtItemGrade grade;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FKtKartGearInfo GearInfo;  // Offset: 8 Size: 88
	int32_t kartExp;  // Offset: 96 Size: 4
	char pad_100[4];  // Offset: 100 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtKartGearInfo Size 88
class FKtKartGearInfo
{

 public: 
	struct TMap<struct FString, int32_t> gearSettings;  // Offset: 0 Size: 80
	int32_t totalGearCount;  // Offset: 80 Size: 4
	int32_t remainGearCount;  // Offset: 84 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.CubeDataDebugSet Size 16
class FCubeDataDebugSet
{

 public: 
	char pad_0[16];  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayReadyPageWidget.OnClickedGamePlayButton Size 4
class FOnClickedGamePlayButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RacingPassPageWidget.OnUpdate_SeasonTimeText Size 24
class FOnUpdate_SeasonTimeText
{

 public: 
	struct FText TimeText;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtKartLevelDef Size 12
class FKtKartLevelDef
{

 public: 
	int32_t Level;  // Offset: 0 Size: 4
	int32_t accumExp;  // Offset: 4 Size: 4
	int32_t needExp;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.GaragePageWidget.OnClickedItemOnlyView Size 4
class FOnClickedItemOnlyView
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryStickerCache Size 88
class FLiveryStickerCache
{

 public: 
	char pad_0[32];  // Offset: 0 Size: 32
	struct FLiveryStickerDesc LiveryStickerDesc;  // Offset: 32 Size: 40
	char pad_72[16];  // Offset: 72 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_OptionPageWidget.OnFocusedAccountUnlinkBtn Size 4
class FOnFocusedAccountUnlinkBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtKartSkillInfo Size 48
class FKtKartSkillInfo
{

 public: 
	int32_t skillPoint;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FString> equipSkillNodeIds;  // Offset: 8 Size: 16
	struct FString expItemId;  // Offset: 24 Size: 16
	int32_t expItemCount;  // Offset: 40 Size: 4
	char pad_44[4];  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtPiggyDefFile Size 32
class FKtPiggyDefFile
{

 public: 
	struct TArray<struct FKtPiggyDefItem> Items;  // Offset: 0 Size: 16
	struct TArray<struct FKtPiggyEvent> events;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnSizeWidthCommitted Size 32
class FOnSizeWidthCommitted
{

 public: 
	struct FText InText;  // Offset: 0 Size: 24
	enum class ETextCommit InCommitMethod;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdSequenceDirector.UseItem Size 32
class FUseItem
{

 public: 
	struct APawn* Pawn;  // Offset: 0 Size: 8
	enum class EItemType ItemType;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct TArray<struct FString> TargetPawn;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.TachometerWidget.ManagedTick Size 4
class FManagedTick
{

 public: 
	float inDeltaTime;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioKeyStateData Size 64
class FScenarioKeyStateData
{

 public: 
	char pad_0[64];  // Offset: 0 Size: 64



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtPiggyEvent Size 64
class FKtPiggyEvent
{

 public: 
	struct FString Type;  // Offset: 0 Size: 16
	struct FDateTime StartTime;  // Offset: 16 Size: 8
	struct FDateTime EndTime;  // Offset: 24 Size: 8
	int32_t prob;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4
	struct FKtPiggyOpenReward openReward;  // Offset: 40 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.EventPageWidget.OnClickedReceiveAllButton Size 4
class FOnClickedReceiveAllButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.AnimatedNumberTextBlock.ResetNumber Size 4
class FResetNumber
{

 public: 
	int32_t InitNum;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientGrandPrixDef Size 480
// Inherited 328 bytes 
class FKtClientGrandPrixDef : public FKtGrandPrixDef
{

 public: 
	struct TSoftObjectPtr<UTexture2D> imageEmblem;  // Offset: 328 Size: 40
	struct TSoftObjectPtr<UTexture2D> imageButton;  // Offset: 368 Size: 40
	struct FText Title;  // Offset: 408 Size: 24
	struct FText Description;  // Offset: 432 Size: 24
	struct FText qualification;  // Offset: 456 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtPiggyOpenReward Size 24
class FKtPiggyOpenReward
{

 public: 
	int32_t coinCount;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FString stockId;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.SingleModeLoadingTypeDef Size 16
class FSingleModeLoadingTypeDef
{

 public: 
	struct TArray<struct FSingleModeLoadingImageDef> LoadingImageDefArray;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.SingleModeLoadingDef Size 80
class FSingleModeLoadingDef
{

 public: 
	struct TMap<struct FString, struct FSingleModeLoadingTypeDef> LoadingTypeToDefMap;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_SetWASDInputs Size 1
class FDev_SetWASDInputs
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bWASD : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtRiderInfo Size 32
class FKtRiderInfo
{

 public: 
	int32_t accountId;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FString riderName;  // Offset: 8 Size: 16
	enum class EKtRiderState riderState;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtPiggyDefItem Size 80
class FKtPiggyDefItem
{

 public: 
	struct FKtPiggyDef def;  // Offset: 0 Size: 64
	struct TArray<struct FKtPiggyOpenRestriction> openRestrictions;  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtPiggyOpenRestriction Size 24
class FKtPiggyOpenRestriction
{

 public: 
	struct FDateTime StartTime;  // Offset: 0 Size: 8
	struct FDateTime EndTime;  // Offset: 8 Size: 8
	int32_t openCount;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ButtonContainerTemplate.OnUncheck Size 4
class FOnUncheck
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_TrackChangeDialog.OnFinalSelectButtonClicked Size 4
class FOnFinalSelectButtonClicked
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.StickerMarketPageWidget.Widget_UploadPopup_OnCloseClick Size 4
class FWidget_UploadPopup_OnCloseClick
{

 public: 
	int32_t BtnIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyLogicComponent.SetKcoin Size 4
class FSetKcoin
{

 public: 
	int32_t KcoinCount;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KdTextRow Size 32
// Inherited 8 bytes 
class FKdTextRow : public FTableRowBase
{

 public: 
	struct FText InText;  // Offset: 8 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtPiggyDef Size 64
class FKtPiggyDef
{

 public: 
	struct FString Type;  // Offset: 0 Size: 16
	struct FString pointItemId;  // Offset: 16 Size: 16
	int32_t pointMax;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4
	struct FKtPiggyOpenReward defaultReward;  // Offset: 40 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdGameState.Multicast_SetValue Size 32
class FMulticast_SetValue
{

 public: 
	struct FString VariableName;  // Offset: 0 Size: 16
	struct FString Value;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.AccountVDTEvent.OnPrGetVDTEventReward Size 16
class FOnPrGetVDTEventReward
{

 public: 
	struct FPrResult Result;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UPrPacket* ReceivedPacket;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtPiggyState Size 24
class FKtPiggyState
{

 public: 
	int32_t Point;  // Offset: 0 Size: 4
	int32_t openCount;  // Offset: 4 Size: 4
	int32_t maxOpenCount;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct FDateTime nextOpenTime;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.VDTSubEvent Size 48
class FVDTSubEvent
{

 public: 
	enum class EKtADTEventType Type;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t dt;  // Offset: 4 Size: 4
	enum class EKtADTEventRewardType rewardType;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct TArray<struct FString> rewardStockIds;  // Offset: 16 Size: 16
	struct FString Message;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtDataStorePayload Size 160
class FKtDataStorePayload
{

 public: 
	struct FString URL;  // Offset: 0 Size: 16
	struct FString verb;  // Offset: 16 Size: 16
	struct TMap<struct FString, struct FString> headers;  // Offset: 32 Size: 80
	struct FString Body;  // Offset: 112 Size: 16
	struct TArray<struct FString> valueIndex;  // Offset: 128 Size: 16
	struct FString MetaData;  // Offset: 144 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryReportViewerPageWidget.OnClickedConfirm_LiveryRestriction Size 4
class FOnClickedConfirm_LiveryRestriction
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtLootBoxInfo Size 104
class FKtLootBoxInfo
{

 public: 
	struct FKtItem lootBoxItem;  // Offset: 0 Size: 32
	struct FNullableDateTime useStartDate;  // Offset: 32 Size: 16
	struct FNullableDateTime useEndDate;  // Offset: 48 Size: 16
	struct TArray<struct FKtStockItem> expectedItemVector;  // Offset: 64 Size: 16
	struct TArray<struct FKtStockItem> etcItemVector;  // Offset: 80 Size: 16
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bEmptyCandidates : 1;  // Offset: 96 Size: 1
	char pad_97[7];  // Offset: 97 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtSeasonSetDef Size 80
class FKtSeasonSetDef
{

 public: 
	struct TMap<struct FString, struct FKtSeasonDef> seasonDefMap;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemRocketFirstRank.MulticastFireTo Size 16
class FMulticastFireTo
{

 public: 
	struct UItemComponent* User;  // Offset: 0 Size: 8
	struct UItemComponent* Target;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.StickerMarketPageWidget.Widget_TextInputPopup_OnTextCommitted Size 32
class FWidget_TextInputPopup_OnTextCommitted
{

 public: 
	struct FText CommitText;  // Offset: 0 Size: 24
	enum class ETextCommit CommitType;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtLootboxStockDef Size 48
class FKtLootboxStockDef
{

 public: 
	struct FString CategoryName;  // Offset: 0 Size: 16
	struct TArray<struct FKtSubList> subListVector;  // Offset: 16 Size: 16
	struct TArray<struct FKtLootboxStock> stockDefVector;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientQuestWeeklySetDef Size 88
// Inherited 8 bytes 
class FKtClientQuestWeeklySetDef : public FTableRowBase
{

 public: 
	struct TMap<struct FString, struct FKtClientQuestWeeklySeasonDef> questWeeklySeasonDefMap;  // Offset: 8 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtLootboxSet Size 56
class FKtLootboxSet
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool isDefaultSet : 1;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FNullableDateTime setStartDate;  // Offset: 8 Size: 16
	struct FNullableDateTime setEndDate;  // Offset: 24 Size: 16
	struct TArray<struct FKtLootboxComposition> compositionVector;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.EventPageWidget.OnFocusedAttendanceReward Size 4
class FOnFocusedAttendanceReward
{

 public: 
	int32_t InIndext;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtLootboxComposition Size 24
class FKtLootboxComposition
{

 public: 
	struct TArray<struct FKtStockItem> compositionItemVector;  // Offset: 0 Size: 16
	int32_t weight;  // Offset: 16 Size: 4
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool exposeOnExpectedList : 1;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3



 // Functions 
 public:
}; 
 
 //Function KartDrift.MediaPlayerTemplate.OnMediaOpenFailed Size 16
class FOnMediaOpenFailed
{

 public: 
	struct FString OpenedUrl;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtBonusItem Size 24
class FKtBonusItem
{

 public: 
	struct TArray<struct FKtStockItem> bonusItemVector;  // Offset: 0 Size: 16
	int32_t perMille;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtGrandPrixDef Size 328
class FKtGrandPrixDef
{

 public: 
	struct FString ID;  // Offset: 0 Size: 16
	struct FString Name;  // Offset: 16 Size: 16
	enum class ERaceMode raceMode;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7
	struct FString poolId;  // Offset: 40 Size: 16
	struct TArray<struct FString> trackList;  // Offset: 56 Size: 16
	struct TArray<struct FString> allowCountries;  // Offset: 72 Size: 16
	struct TArray<enum class EKtAccountPlatform> allowPlatforms;  // Offset: 88 Size: 16
	struct TArray<struct FString> allowItems;  // Offset: 104 Size: 16
	struct TArray<struct FString> denyItems;  // Offset: 120 Size: 16
	struct FString requiredLicense;  // Offset: 136 Size: 16
	int32_t limitLevel;  // Offset: 152 Size: 4
	int32_t limitTier;  // Offset: 156 Size: 4
	struct FString eligibilityMsg;  // Offset: 160 Size: 16
	struct FString rewardMsg;  // Offset: 176 Size: 16
	struct FKtGrandPrixSeason seasonInfo;  // Offset: 192 Size: 24
	struct FString startDate;  // Offset: 216 Size: 16
	struct FString endDate;  // Offset: 232 Size: 16
	struct TArray<struct FString> allowTime;  // Offset: 248 Size: 16
	struct FString rewardPeriod;  // Offset: 264 Size: 16
	struct FKtGrandPrixRewards rewards;  // Offset: 280 Size: 48



 // Functions 
 public:
}; 
 
 //Function KartDrift.CommunityPageWidget.ResetPartyInviteButton Size 16
class FResetPartyInviteButton
{

 public: 
	struct FString InAccountId;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientGrandPrixSubTierDef Size 56
// Inherited 32 bytes 
class FKtClientGrandPrixSubTierDef : public FKtGrandPrixSubTierDef
{

 public: 
	struct FText Name;  // Offset: 32 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemWaterfly.MulticastOnHit Size 8
class FMulticastOnHit
{

 public: 
	struct UItemComponent* InVictim;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtTutorialRecord Size 32
class FKtTutorialRecord
{

 public: 
	struct FString scenarioID;  // Offset: 0 Size: 16
	float clearMillisecond;  // Offset: 16 Size: 4
	int32_t boosterCounter;  // Offset: 20 Size: 4
	int32_t DriftCount;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.AchievementPageWidget.OnClickedShowSummaryButton Size 4
class FOnClickedShowSummaryButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtTutorialData Size 2
class FKtTutorialData
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bCompleted : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bAssistDisabled : 1;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtLicenseTMIData Size 48
class FKtLicenseTMIData
{

 public: 
	int32_t retryCount;  // Offset: 0 Size: 4
	int32_t Score;  // Offset: 4 Size: 4
	int32_t clearLapTime;  // Offset: 8 Size: 4
	int32_t useDriftCount;  // Offset: 12 Size: 4
	int32_t driftHitCount;  // Offset: 16 Size: 4
	int32_t useSmallBoostCount;  // Offset: 20 Size: 4
	int32_t useBoostCount;  // Offset: 24 Size: 4
	int32_t getBoostCount;  // Offset: 28 Size: 4
	struct TArray<struct FKtLicenseTMIMissionData> licenseMissionData;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.CsObserver Size 120
class FCsObserver
{

 public: 
	struct FString accountId;  // Offset: 0 Size: 16
	struct FKtAccountProfile Profile;  // Offset: 16 Size: 96
	int32_t joinId;  // Offset: 112 Size: 4
	char pad_116[4];  // Offset: 116 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnPosYCommitted Size 32
class FOnPosYCommitted
{

 public: 
	struct FText InText;  // Offset: 0 Size: 24
	enum class ETextCommit InCommitMethod;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtLicenseTMIMissionData Size 24
class FKtLicenseTMIMissionData
{

 public: 
	enum class ENxLicenseMissionType missionType;  // Offset: 0 Size: 4
	int32_t minCondition;  // Offset: 4 Size: 4
	int32_t maxCondition;  // Offset: 8 Size: 4
	int32_t successCount;  // Offset: 12 Size: 4
	int32_t totalCount;  // Offset: 16 Size: 4
	int32_t objectHitCount;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_EmoticonPageWidget.OnEmoticonFocused Size 4
class FOnEmoticonFocused
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtLicenseGroupState Size 48
class FKtLicenseGroupState
{

 public: 
	struct FNullableDateTime bronzeAcquisitionDate;  // Offset: 0 Size: 16
	struct FNullableDateTime silverAcquisitionDate;  // Offset: 16 Size: 16
	struct FNullableDateTime goldAcquisitionDate;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.StickerMarketPageWidget.Widget_UploadPopup_OnTagEditClick Size 4
class FWidget_UploadPopup_OnTagEditClick
{

 public: 
	int32_t BtnIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtPermissionData Size 1
class FKtPermissionData
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool canChangeMT : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtReserveId Size 24
class FKtReserveId
{

 public: 
	enum class EKtReserveIdType reserveIdType;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FString reserveId;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtLicenseGroupDefSet Size 24
// Inherited 8 bytes 
class FKtLicenseGroupDefSet : public FTableRowBase
{

 public: 
	struct TArray<struct FKtLicenseGroupDef> groupDefVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.TimeAttackPageWidget.OnClickedTrackChangeButton Size 4
class FOnClickedTrackChangeButton
{

 public: 
	int32_t nIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LODPerformanceTestWidget.OnAnimationSelectionChanged Size 24
class FOnAnimationSelectionChanged
{

 public: 
	struct FString SelectedItem;  // Offset: 0 Size: 16
	enum class ESelectInfo SelectionType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.AccountVDTEvent.OnUPcVDTEventData Size 8
class FOnUPcVDTEventData
{

 public: 
	struct UServerPacket* InPacket;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtMailHeader Size 24
class FKtMailHeader
{

 public: 
	struct FString mailId;  // Offset: 0 Size: 16
	char Flag;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtRaceResultSummary Size 40
class FKtRaceResultSummary
{

 public: 
	struct FString playerId;  // Offset: 0 Size: 16
	int32_t rank;  // Offset: 16 Size: 4
	int32_t Team;  // Offset: 20 Size: 4
	int32_t Time;  // Offset: 24 Size: 4
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool isWin : 1;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3
	int32_t status;  // Offset: 32 Size: 4
	int32_t Progress;  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtDiabledChatSetDef Size 40
// Inherited 8 bytes 
class FKtDiabledChatSetDef : public FTableRowBase
{

 public: 
	struct FString Name;  // Offset: 8 Size: 16
	struct TArray<struct FKtDisabledChatDef> reserveIdVector;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtRacePlayerSummary Size 192
class FKtRacePlayerSummary
{

 public: 
	struct FKtAccountProfile Profile;  // Offset: 0 Size: 96
	struct FString playerId;  // Offset: 96 Size: 16
	int32_t Slot;  // Offset: 112 Size: 4
	int32_t Team;  // Offset: 116 Size: 4
	int32_t Level;  // Offset: 120 Size: 4
	int32_t Exp;  // Offset: 124 Size: 4
	struct FString KartID;  // Offset: 128 Size: 16
	int32_t kartLevel;  // Offset: 144 Size: 4
	int32_t kartExp;  // Offset: 148 Size: 4
	enum class EKtItemGrade KartGrade;  // Offset: 152 Size: 1
	char pad_153[7];  // Offset: 153 Size: 7
	struct FString chId;  // Offset: 160 Size: 16
	enum class EKtGrandPrixSubTier grandPrixTier;  // Offset: 176 Size: 1
	char pad_177[3];  // Offset: 177 Size: 3
	int32_t beginnerFlag;  // Offset: 180 Size: 4
	char pad_184_1 : 7;  // Offset: 184 Size: 1
	bool AI : 1;  // Offset: 184 Size: 1
	enum class EKtRaceAiType aiType;  // Offset: 185 Size: 1
	char pad_186[6];  // Offset: 186 Size: 6



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtStockReward Size 48
class FKtStockReward
{

 public: 
	struct FKtStock stock;  // Offset: 0 Size: 32
	struct FString rewardMessage;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtMissionTriggerConditionContentDef Size 40
class FKtMissionTriggerConditionContentDef
{

 public: 
	enum class EKtLiveryCondition liveryCondition;  // Offset: 0 Size: 1
	enum class EKtPartyCondition partyCondition;  // Offset: 1 Size: 1
	enum class EKtShopCondition shopCondition;  // Offset: 2 Size: 1
	enum class EKtCustomGameCondition customGameCondition;  // Offset: 3 Size: 1
	enum class EKtKartSkillCondition kartSkillCondition;  // Offset: 4 Size: 1
	enum class EKtSeasonCondition seasonCondition;  // Offset: 5 Size: 1
	enum class EKtEventRewardCondition eventRewradCondition;  // Offset: 6 Size: 1
	enum class EKtQuestCondition questCondition;  // Offset: 7 Size: 1
	int32_t targetCount;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct TArray<struct FString> useItemVector;  // Offset: 16 Size: 16
	enum class EKtGrandPrixMainTier targetGrandprixTier;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtAchievementInfo Size 64
class FKtAchievementInfo
{

 public: 
	struct FString achievementId;  // Offset: 0 Size: 16
	struct FDateTime achievedDate;  // Offset: 16 Size: 8
	struct FKtSeasonInfo achievedSeasonInfo;  // Offset: 24 Size: 32
	int32_t CurrentCount;  // Offset: 56 Size: 4
	float achievedUserRatio;  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_ScenarioPause Size 1
class FDev_ScenarioPause
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bPause : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.CustomWidgetComponentInstanceData Size 200
// Inherited 184 bytes 
class FCustomWidgetComponentInstanceData : public FSceneComponentInstanceData
{

 public: 
	char pad_184[16];  // Offset: 184 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtSeasonInfo Size 32
class FKtSeasonInfo
{

 public: 
	struct FString seasonId;  // Offset: 0 Size: 16
	enum class EKtSeasonState seasonState;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3
	int32_t seasonWeekIdx;  // Offset: 20 Size: 4
	int32_t seasonDayIdx;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_OptionPageWidget.OnCustomizableWidgetOpacityChanged Size 4
class FOnCustomizableWidgetOpacityChanged
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtMissionData Size 12
class FKtMissionData
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool completed : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t missionDayIdx;  // Offset: 4 Size: 4
	int32_t missionCount;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LootPlateAnimInstance.SpawnItemGradeEmitterAttached Size 64
class FSpawnItemGradeEmitterAttached
{

 public: 
	struct UParticleSystem* EmitterTemplate;  // Offset: 0 Size: 8
	struct USceneComponent* AttachToComponent;  // Offset: 8 Size: 8
	struct FName AttachPointName;  // Offset: 16 Size: 8
	struct FVector Location;  // Offset: 24 Size: 12
	struct FRotator Rotation;  // Offset: 36 Size: 12
	struct FVector Scale;  // Offset: 48 Size: 12
	char pad_60[4];  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.MatchQueueList Size 16
class FMatchQueueList
{

 public: 
	struct TArray<enum class ERaceMode> raceModes;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnLucciButtonClicked Size 4
class FOnLucciButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryMaterialScalarParam Size 12
class FLiveryMaterialScalarParam
{

 public: 
	struct FName ParamName;  // Offset: 0 Size: 8
	float ParamValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtShopPlatformMapDef Size 320
class FKtShopPlatformMapDef
{

 public: 
	struct TMap<struct FString, struct FString> psnMap;  // Offset: 0 Size: 80
	struct TMap<struct FString, struct FString> xboxLiveMap;  // Offset: 80 Size: 80
	struct TMap<struct FString, struct FString> androidMap;  // Offset: 160 Size: 80
	struct TMap<struct FString, struct FString> iOSMap;  // Offset: 240 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtContentSettingDef Size 16
class FKtContentSettingDef
{

 public: 
	struct FReportDef report;  // Offset: 0 Size: 12
	struct FRacingPassDef racingPass;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtShopStockDef Size 32
class FKtShopStockDef
{

 public: 
	struct FString CategoryName;  // Offset: 0 Size: 16
	struct TArray<struct FKtShopStock> stockDefVector;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.AlarmManagerComponent.OnUpdateAlarm Size 80
class FOnUpdateAlarm
{

 public: 
	struct TSet<struct FString> NewIds;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtItemDiff Size 48
class FKtItemDiff
{

 public: 
	struct FString ItemId;  // Offset: 0 Size: 16
	struct FKtItemData itemDataBefore;  // Offset: 16 Size: 16
	struct FKtItemData itemDataAfter;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseCoinActorInfo Size 64
class FLicenseCoinActorInfo
{

 public: 
	enum class ELicenseCoinType CoinType;  // Offset: 0 Size: 4
	char pad_4[12];  // Offset: 4 Size: 12
	struct FTransform Transform;  // Offset: 16 Size: 48



 // Functions 
 public:
}; 
 
 //Function KartDrift.PlayMissionComponent.Server_RequestPlayMissionProgressUpdate Size 4
class FServer_RequestPlayMissionProgressUpdate
{

 public: 
	int32_t InMissionProgress;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_GfsAcceptFriendRequest Size 16
class FDev_GfsAcceptFriendRequest
{

 public: 
	struct FString accountId;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtLevelSetDef Size 24
// Inherited 8 bytes 
class FKtLevelSetDef : public FTableRowBase
{

 public: 
	struct TArray<struct FKtLevelDef> levelDefVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtSeasonStaticInfo Size 56
class FKtSeasonStaticInfo
{

 public: 
	struct FString seasonId;  // Offset: 0 Size: 16
	int32_t seasonCount;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct FDateTime startDate;  // Offset: 24 Size: 8
	struct FDateTime endDate;  // Offset: 32 Size: 8
	struct FString levelTable;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.CharAnimInstance.GetCharacterState Size 1
class FGetCharacterState
{

 public: 
	enum class ECharacterAnimGraphState ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AccountPlatformDataGfs Size 88
class FAccountPlatformDataGfs
{

 public: 
	struct FString npsn;  // Offset: 0 Size: 16
	struct FString nexonTag;  // Offset: 16 Size: 16
	struct FString presence;  // Offset: 32 Size: 16
	struct FString PlatformType;  // Offset: 48 Size: 16
	struct FString platformNickname;  // Offset: 64 Size: 16
	int32_t gfsId;  // Offset: 80 Size: 4
	char pad_84[4];  // Offset: 84 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KartUpgradeFxParticleInfo Size 96
class FKartUpgradeFxParticleInfo
{

 public: 
	struct TSoftObjectPtr<UParticleSystem> ParticleObject;  // Offset: 0 Size: 40
	char pad_40[8];  // Offset: 40 Size: 8
	struct FTransform ParticleTransform;  // Offset: 48 Size: 48



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryEditPageWidget.OnClicked_Menu Size 4
class FOnClicked_Menu
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AccountPlatformDataLive Size 56
class FAccountPlatformDataLive
{

 public: 
	struct FString xuid;  // Offset: 0 Size: 16
	struct FString gamerTag;  // Offset: 16 Size: 16
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool liveOnline : 1;  // Offset: 32 Size: 1
	char pad_33_1 : 7;  // Offset: 33 Size: 1
	bool liveOnlineKartRider : 1;  // Offset: 33 Size: 1
	char pad_34[6];  // Offset: 34 Size: 6
	struct FString liveRichPresence;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KeyRebindingLibrary.AddActionMapping Size 48
class FAddActionMapping
{

 public: 
	struct FInputActionKeyMapping NewKeyMapping;  // Offset: 0 Size: 40
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bSaveSetting : 1;  // Offset: 40 Size: 1
	char pad_41_1 : 7;  // Offset: 41 Size: 1
	bool bSaveConfig : 1;  // Offset: 41 Size: 1
	char pad_42_1 : 7;  // Offset: 42 Size: 1
	bool ReturnValue : 1;  // Offset: 42 Size: 1
	char pad_43[5];  // Offset: 43 Size: 5



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AccountPlatformDataKt Size 120
class FAccountPlatformDataKt
{

 public: 
	enum class EKtAccountPlatform platform;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bAccountLinkGuest : 1;  // Offset: 1 Size: 1
	char pad_2[6];  // Offset: 2 Size: 6
	struct FString npsn;  // Offset: 8 Size: 16
	struct FString xuid;  // Offset: 24 Size: 16
	struct FString riderName;  // Offset: 40 Size: 16
	struct FString emblem;  // Offset: 56 Size: 16
	struct FString gamerTag;  // Offset: 72 Size: 16
	struct FString psnAccountId;  // Offset: 88 Size: 16
	struct FString onlineId;  // Offset: 104 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.TMIBoosterStats Size 20
class FTMIBoosterStats
{

 public: 
	int32_t BoostCount;  // Offset: 0 Size: 4
	int32_t BoostTimeMs;  // Offset: 4 Size: 4
	int32_t MiniBoostCount;  // Offset: 8 Size: 4
	int32_t TeamBoostCount;  // Offset: 12 Size: 4
	int32_t TotalBoostTimeMs;  // Offset: 16 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ReportDef Size 12
class FReportDef
{

 public: 
	int32_t maxDailyReportCount;  // Offset: 0 Size: 4
	int32_t minumumCharacterCount;  // Offset: 4 Size: 4
	int32_t maximumCharacterCount;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KartUpgradeFxMaterialInfo Size 96
class FKartUpgradeFxMaterialInfo
{

 public: 
	struct FString MatFxName;  // Offset: 0 Size: 16
	struct TSoftObjectPtr<UCurveFloat> MatFxCycleCurve;  // Offset: 16 Size: 40
	struct TSoftObjectPtr<UCurveFloat> MatFxWeightCurve;  // Offset: 56 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryPaintTransform Size 36
class FLiveryPaintTransform
{

 public: 
	char pad_0[36];  // Offset: 0 Size: 36



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdGestureWidget.OnPageWidgetActivated Size 1
class FOnPageWidgetActivated
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bActivate : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.SingleModeLoadingImageDef Size 40
class FSingleModeLoadingImageDef
{

 public: 
	struct FString ImageName;  // Offset: 0 Size: 16
	int32_t weight;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct FString Period;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_ProfileEditPageWidget.OnClickedSelectedEmblemButton Size 4
class FOnClickedSelectedEmblemButton
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.FeatureConfigDef Size 160
class FFeatureConfigDef
{

 public: 
	struct TMap<struct FString, bool> featureMap;  // Offset: 0 Size: 80
	struct TMap<struct FString, struct FContentsRestriction> restrictions;  // Offset: 80 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_PlayMajorIntroSequence Size 1
class FDev_PlayMajorIntroSequence
{

 public: 
	enum class EMajorIntroSequenceType InType;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryDesignDesc_Ver2 Size 64
class FLiveryDesignDesc_Ver2
{

 public: 
	struct FText Label;  // Offset: 0 Size: 24
	struct FLiveryPaintDesc_Ver2 PaintDesc;  // Offset: 24 Size: 20
	char pad_44[4];  // Offset: 44 Size: 4
	struct TArray<struct FLiveryWrappingDesc_Ver2> WrappingDescArray;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ContentsRestriction Size 16
class FContentsRestriction
{

 public: 
	struct TArray<enum class EKtAccountPlatform> blacklistPlatforms;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KartDecalChart Size 40
// Inherited 8 bytes 
class FKartDecalChart : public FTableRowBase
{

 public: 
	struct FVector2D UVstart;  // Offset: 8 Size: 8
	struct FVector2D UVsize;  // Offset: 16 Size: 8
	struct FVector2D Uaxis;  // Offset: 24 Size: 8
	struct FVector2D Vaxis;  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtAttendanceEventSetDef Size 24
// Inherited 8 bytes 
class FKtAttendanceEventSetDef : public FTableRowBase
{

 public: 
	struct TArray<struct FKtAttendanceEventDef> events;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemComponent.ClientAlertBlue Size 16
class FClientAlertBlue
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bOn : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float LifeTime;  // Offset: 4 Size: 4
	struct AItem* Item;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemTacticalWidget.Disappear Size 4
class FDisappear
{

 public: 
	int32_t ID;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartMovementComponent.DevUseBoost Size 8
class FDevUseBoost
{

 public: 
	int32_t Type;  // Offset: 0 Size: 4
	float Time;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtAttendanceEventDef Size 104
class FKtAttendanceEventDef
{

 public: 
	struct FString EventID;  // Offset: 0 Size: 16
	struct FString Name;  // Offset: 16 Size: 16
	struct FString Description;  // Offset: 32 Size: 16
	enum class EKtAttendanceEventType Type;  // Offset: 48 Size: 1
	char pad_49[7];  // Offset: 49 Size: 7
	struct FString startDate;  // Offset: 56 Size: 16
	struct FString endDate;  // Offset: 72 Size: 16
	struct TArray<struct FString> rewardStockIds;  // Offset: 88 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.CouponPageWidget.OnSubmitCouponCode Size 4
class FOnSubmitCouponCode
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtKartChannelParamDef Size 88
class FKtKartChannelParamDef
{

 public: 
	struct FString Name;  // Offset: 0 Size: 16
	struct FKtKartChannelParam channelParam;  // Offset: 16 Size: 72



 // Functions 
 public:
}; 
 
 //Function KartDrift.ProfileEditPageWidget.OnFocusedTagButton Size 4
class FOnFocusedTagButton
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_TimeAttackPageWidget.OnClickedUseShadowButton Size 4
class FOnClickedUseShadowButton
{

 public: 
	int32_t nIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.CsGameOption Size 2
class FCsGameOption
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool hideKart : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool hideCharacter : 1;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionBarWidget.OnSelect Size 4
class FOnSelect
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtKartChannelParam Size 72
class FKtKartChannelParam
{

 public: 
	float Mass;  // Offset: 0 Size: 4
	float airFriction;  // Offset: 4 Size: 4
	float dragFactor;  // Offset: 8 Size: 4
	float forwardAccelForce;  // Offset: 12 Size: 4
	float backwardAccelForce;  // Offset: 16 Size: 4
	float gripBrake;  // Offset: 20 Size: 4
	float slipBrake;  // Offset: 24 Size: 4
	float maxSteerDeg;  // Offset: 28 Size: 4
	float steerConstraint;  // Offset: 32 Size: 4
	float frontGripFactor;  // Offset: 36 Size: 4
	float rearGripFactor;  // Offset: 40 Size: 4
	float driftTrigFactor;  // Offset: 44 Size: 4
	float driftTrigTime;  // Offset: 48 Size: 4
	float driftSlipFactor;  // Offset: 52 Size: 4
	float driftEscapeForce;  // Offset: 56 Size: 4
	float cornerDrawFactor;  // Offset: 60 Size: 4
	float driftMaxGauge;  // Offset: 64 Size: 4
	float transAccelFactor;  // Offset: 68 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.AccountADTEvent.OnUPcADTEventData Size 8
class FOnUPcADTEventData
{

 public: 
	struct UServerPacket* InPacket;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.SnowstormReaction.OnCrash Size 24
class FOnCrash
{

 public: 
	enum class ECollisionChannel CollisionObjectType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t CrashLevel;  // Offset: 4 Size: 4
	float HitVelocity;  // Offset: 8 Size: 4
	struct FVector CrashLocation;  // Offset: 12 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtKartBodyDef Size 32
class FKtKartBodyDef
{

 public: 
	struct FString kartItemId;  // Offset: 0 Size: 16
	struct FString bodyParamName;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtKartBodyParamDef Size 232
class FKtKartBodyParamDef
{

 public: 
	struct FString Name;  // Offset: 0 Size: 16
	struct FKtKartBodyParam bodyParam;  // Offset: 16 Size: 212
	char pad_228[4];  // Offset: 228 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_CommunityPageWidget.MainDialog_OnRefuseInvitationClicked Size 4
class FMainDialog_OnRefuseInvitationClicked
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ScenarioSequenceDirector.JumpToKartMontageSection Size 16
class FJumpToKartMontageSection
{

 public: 
	struct AActor* InActor;  // Offset: 0 Size: 8
	struct FName SectionName;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtKartSkillTreeNodeSetDef Size 32
class FKtKartSkillTreeNodeSetDef
{

 public: 
	struct FString skillTreeId;  // Offset: 0 Size: 16
	struct TArray<struct FKtKartSkillTreeNodeDef> nodes;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.PendingSessionInvitation Size 344
class FPendingSessionInvitation
{

 public: 
	char pad_0[296];  // Offset: 0 Size: 296
	struct UPlatformSessionProperty* SessionProperty;  // Offset: 296 Size: 8
	char pad_304[40];  // Offset: 304 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtKartSkillBaseDef Size 56
class FKtKartSkillBaseDef
{

 public: 
	struct FString skillId;  // Offset: 0 Size: 16
	struct FKtKartSkillExtraBodyParam bodyParam;  // Offset: 16 Size: 36
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartUpgradePageWidget.ResetGearDialog_OnClickedResetBtn Size 4
class FResetGearDialog_OnClickedResetBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ControlPawnFXWidget.OnComboBoxSelection_ItemAffectBy Size 24
class FOnComboBoxSelection_ItemAffectBy
{

 public: 
	struct FString SelectedItem;  // Offset: 0 Size: 16
	enum class ESelectInfo SelectionType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_WorldRenderingFlag Size 1
class FDev_WorldRenderingFlag
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInEnable : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtKartLevelSetDef Size 24
// Inherited 8 bytes 
class FKtKartLevelSetDef : public FTableRowBase
{

 public: 
	struct TArray<struct FKtKartLevelDef> levelDefVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.CsTeamScore Size 4
class FCsTeamScore
{

 public: 
	int32_t win;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.WidgetAnimationCustomPlayData Size 24
class FWidgetAnimationCustomPlayData
{

 public: 
	char pad_0[24];  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtKartGearSetDef Size 24
// Inherited 8 bytes 
class FKtKartGearSetDef : public FTableRowBase
{

 public: 
	struct TArray<struct FKtKartGearDef> kartGearDefVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.CommunityLogicComponent.OnGfsFriendRequestAccepted Size 240
class FOnGfsFriendRequestAccepted
{

 public: 
	struct FAccountPlatformData Data;  // Offset: 0 Size: 240



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtKartGearDef Size 32
class FKtKartGearDef
{

 public: 
	struct FString Item;  // Offset: 0 Size: 16
	struct TArray<struct FGearInfo> paramVector;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KartRepMovement Size 64
class FKartRepMovement
{

 public: 
	struct FVector_NetQuantize10 Location;  // Offset: 0 Size: 12
	char pad_12[4];  // Offset: 12 Size: 4
	struct FQuat Quaternion;  // Offset: 16 Size: 16
	struct FVector_NetQuantize100 LinearVelocity;  // Offset: 32 Size: 12
	struct FVector_NetQuantize100 AngularVelocity;  // Offset: 44 Size: 12
	float Timestamp;  // Offset: 56 Size: 4
	char pad_60[4];  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RacingPassPageWidget.PurchaseConfirmDialog_InitPriceKcoinDetail Size 24
class FPurchaseConfirmDialog_InitPriceKcoinDetail
{

 public: 
	struct FString ShopStockItemID;  // Offset: 0 Size: 16
	struct UUserWidget* KcoinPreviewWidget;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_RaceGameEx Size 32
class FDev_RaceGameEx
{

 public: 
	struct FName LevelName;  // Offset: 0 Size: 8
	int32_t raceType;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct FString Params;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtKartUpgradeDef Size 104
class FKtKartUpgradeDef
{

 public: 
	enum class EKtItemGrade grade;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FUpgradeInfo UpgradeInfo;  // Offset: 4 Size: 16
	char pad_20[4];  // Offset: 20 Size: 4
	struct TMap<struct FString, int32_t> gearLimit;  // Offset: 24 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.CouponLogicComponent.OnPrCouponUse Size 40
class FOnPrCouponUse
{

 public: 
	int32_t Result;  // Offset: 0 Size: 4
	int32_t InErrorCode;  // Offset: 4 Size: 4
	struct TArray<struct FKtItem> Items;  // Offset: 8 Size: 16
	struct TArray<struct FString> Duplicates;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.UpgradeInfo Size 16
class FUpgradeInfo
{

 public: 
	int32_t upgradeCost;  // Offset: 0 Size: 4
	int32_t Probability;  // Offset: 4 Size: 4
	int32_t additionalGear;  // Offset: 8 Size: 4
	int32_t gearResetCost;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.TouchStartBoosterButton.OnEndRaceCountdown Size 4
class FOnEndRaceCountdown
{

 public: 
	float EndTime;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtStockDef Size 80
class FKtStockDef
{

 public: 
	struct FString stockId;  // Offset: 0 Size: 16
	struct FString stockName;  // Offset: 16 Size: 16
	struct FString stockDesc;  // Offset: 32 Size: 16
	struct FString packageFilePath;  // Offset: 48 Size: 16
	struct TArray<struct FString> stockItemVector;  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_CommunityPageWidget.PartyMenu_OnActionButtonClicked Size 4
class FPartyMenu_OnActionButtonClicked
{

 public: 
	int32_t ButtonType;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_GaragePageWidget.OnClickedNextCharacterTab Size 4
class FOnClickedNextCharacterTab
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.BuildCaptureWidget.OnSpinBoxValueChanged_CameraRotateSpeed Size 4
class FOnSpinBoxValueChanged_CameraRotateSpeed
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.PlayerMobileHUDTypeSettings Size 12
class FPlayerMobileHUDTypeSettings
{

 public: 
	enum class EHUDType SelectedHUDType;  // Offset: 0 Size: 4
	char pad_4[8];  // Offset: 4 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.VDTEventDef Size 152
class FVDTEventDef
{

 public: 
	struct FString ID;  // Offset: 0 Size: 16
	struct FString Name;  // Offset: 16 Size: 16
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool repeat : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7
	struct FString startDate;  // Offset: 40 Size: 16
	struct FString endDate;  // Offset: 56 Size: 16
	struct FString StartTime;  // Offset: 72 Size: 16
	struct FString EndTime;  // Offset: 88 Size: 16
	struct FString Title;  // Offset: 104 Size: 16
	struct FString Description;  // Offset: 120 Size: 16
	struct TArray<struct FVDTSubEvent> subEvents;  // Offset: 136 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.UpdateRestTimeInItemDetailWidget Size 8
class FUpdateRestTimeInItemDetailWidget
{

 public: 
	struct FDateTime ServerTime;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayReadyPageWidget.InfoModifyDialog_OnTitleEditBoxTextChanged Size 24
class FInfoModifyDialog_OnTitleEditBoxTextChanged
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.TimeItemSpawnStruct Size 36
class FTimeItemSpawnStruct
{

 public: 
	float Cycle;  // Offset: 0 Size: 4
	float AddTime;  // Offset: 4 Size: 4
	float Distance;  // Offset: 8 Size: 4
	struct FVector Location;  // Offset: 12 Size: 12
	struct FVector Direction;  // Offset: 24 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.HitSoundCoolTimeData Size 56
// Inherited 8 bytes 
class FHitSoundCoolTimeData : public FTableRowBase
{

 public: 
	struct TSoftObjectPtr<UFMODEvent> SoundEvent;  // Offset: 8 Size: 40
	float CoolTime;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.MajorPodiumDesc Size 40
class FMajorPodiumDesc
{

 public: 
	enum class EMajorPodiumSequenceType SequenceType;  // Offset: 0 Size: 1
	enum class ERaceTeamType WinTeam;  // Offset: 1 Size: 1
	enum class ERaceMode raceMode;  // Offset: 2 Size: 1
	char pad_3[5];  // Offset: 3 Size: 5
	struct FString TrackName;  // Offset: 8 Size: 16
	struct TArray<struct FString> PlayerIDContainer;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioMessageHUDWidgetData Size 48
class FScenarioMessageHUDWidgetData
{

 public: 
	struct UObject* PortaitImage;  // Offset: 0 Size: 8
	struct FText Speaker;  // Offset: 8 Size: 24
	struct TArray<struct FScenarioMessageData> StepContainer;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ADTEventDef Size 144
class FADTEventDef
{

 public: 
	struct FString ID;  // Offset: 0 Size: 16
	struct FString Name;  // Offset: 16 Size: 16
	struct FString startDate;  // Offset: 32 Size: 16
	struct FString endDate;  // Offset: 48 Size: 16
	struct FString StartTime;  // Offset: 64 Size: 16
	struct FString EndTime;  // Offset: 80 Size: 16
	struct FString Title;  // Offset: 96 Size: 16
	struct FString Description;  // Offset: 112 Size: 16
	struct TArray<struct FADTEventStep> steps;  // Offset: 128 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_AffectItem Size 1
class FDev_AffectItem
{

 public: 
	enum class EItemType ItemType;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedPromotionNext Size 4
class FOnClickedPromotionNext
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.PlayerConvenienceSettings Size 24
class FPlayerConvenienceSettings
{

 public: 
	enum class EKtGameplayControlType GameplayControlType;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool DriftAssist : 1;  // Offset: 1 Size: 1
	char pad_2_1 : 7;  // Offset: 2 Size: 1
	bool TrackGuideLineDisplay : 1;  // Offset: 2 Size: 1
	char pad_3_1 : 7;  // Offset: 3 Size: 1
	bool MyDriveDirectionDisplay : 1;  // Offset: 3 Size: 1
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool BoosterUseDisplay : 1;  // Offset: 4 Size: 1
	char pad_5_1 : 7;  // Offset: 5 Size: 1
	bool DriftBoosterDisplay : 1;  // Offset: 5 Size: 1
	char pad_6_1 : 7;  // Offset: 6 Size: 1
	bool DriftUseDisplay : 1;  // Offset: 6 Size: 1
	char pad_7_1 : 7;  // Offset: 7 Size: 1
	bool LandingPointDisplay : 1;  // Offset: 7 Size: 1
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool AutoDrive : 1;  // Offset: 8 Size: 1
	char pad_9_1 : 7;  // Offset: 9 Size: 1
	bool AutoForward : 1;  // Offset: 9 Size: 1
	char pad_10_1 : 7;  // Offset: 10 Size: 1
	bool ItemAutoDriftBooster : 1;  // Offset: 10 Size: 1
	char pad_11_1 : 7;  // Offset: 11 Size: 1
	bool SpeedAutoDriftBooster : 1;  // Offset: 11 Size: 1
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool FallBarrier : 1;  // Offset: 12 Size: 1
	char pad_13_1 : 7;  // Offset: 13 Size: 1
	bool CornerIsolationBarrier : 1;  // Offset: 13 Size: 1
	char pad_14_1 : 7;  // Offset: 14 Size: 1
	bool ShowOtherRiderNames : 1;  // Offset: 14 Size: 1
	char pad_15[1];  // Offset: 15 Size: 1
	uint32_t BMirror;  // Offset: 16 Size: 4
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool ShowOtherRiderLivery : 1;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ADTEventStep Size 40
class FADTEventStep
{

 public: 
	enum class EKtADTEventType Type;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t dt;  // Offset: 4 Size: 4
	struct TArray<struct FString> rewardStockIds;  // Offset: 8 Size: 16
	struct FString Message;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LoginPageWidget.BackToShowAccountLinkSelectPopup Size 4
class FBackToShowAccountLinkSelectPopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtGrandPrixRewards Size 48
class FKtGrandPrixRewards
{

 public: 
	struct TArray<struct FKtGrandPrixTierReward> tierRewards;  // Offset: 0 Size: 16
	struct TArray<struct FKtGrandPrixRankReward> rankRewards;  // Offset: 16 Size: 16
	struct TArray<struct FKtGrandPrixGppReward> gppRewards;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.MaterialFxArray Size 32
class FMaterialFxArray
{

 public: 
	struct TArray<struct UMaterialInterface*> Materials;  // Offset: 0 Size: 16
	struct TArray<struct UMaterialInterface*> FxMaterials;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtGrandPrixGppReward Size 40
class FKtGrandPrixGppReward
{

 public: 
	struct TArray<int32_t> gpp;  // Offset: 0 Size: 16
	int32_t minRaceCount;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct TArray<struct FString> rewardStockIds;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ModeSelectPageWidget.ItemGuidePopup_OnClickedCloseButton Size 4
class FItemGuidePopup_OnClickedCloseButton
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LODPerformanceTestWidget.GetNumTriangles Size 8
class FGetNumTriangles
{

 public: 
	int32_t LODIndex;  // Offset: 0 Size: 4
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KartSteeringExperimental Size 568
class FKartSteeringExperimental
{

 public: 
	char pad_0[520];  // Offset: 0 Size: 520
	struct UKartMovementComponent* Movement;  // Offset: 520 Size: 8
	struct UCurveFloat* DriftTorqueCurve;  // Offset: 528 Size: 8
	char pad_536[32];  // Offset: 536 Size: 32



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtGrandPrixSeason Size 24
class FKtGrandPrixSeason
{

 public: 
	struct FString seasonId;  // Offset: 0 Size: 16
	int32_t rewardStartAfter;  // Offset: 16 Size: 4
	int32_t rewardDuration;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.OnClickedRevertOptionConfirm Size 4
class FOnClickedRevertOptionConfirm
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtGrandPrixSubTierDef Size 32
class FKtGrandPrixSubTierDef
{

 public: 
	enum class EKtGrandPrixSubTier subTier;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct TArray<int32_t> gpp;  // Offset: 8 Size: 16
	int32_t ranking;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientQuestEventDef Size 32
class FKtClientQuestEventDef
{

 public: 
	struct FString questPeriod;  // Offset: 0 Size: 16
	struct FKtClientQuestDef questDef;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtLicenseGroupDefMap Size 88
// Inherited 8 bytes 
class FKtLicenseGroupDefMap : public FTableRowBase
{

 public: 
	struct TMap<struct FString, struct FKtLicenseGroupDef> groupDefMap;  // Offset: 8 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_CommunityPageWidget.PartyMenu_OnCloseButtonClicked Size 4
class FPartyMenu_OnCloseButtonClicked
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtLicenseGroupDef Size 48
class FKtLicenseGroupDef
{

 public: 
	struct FString GroupID;  // Offset: 0 Size: 16
	struct TArray<struct FString> rewardStockIdList;  // Offset: 16 Size: 16
	struct TArray<struct FString> rewardMessageList;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.CheatComponent.Server_SetValue Size 32
class FServer_SetValue
{

 public: 
	struct FString VariableName;  // Offset: 0 Size: 16
	struct FString Value;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_GaragePageWidget.OnClickedPrevEmotionStorage Size 4
class FOnClickedPrevEmotionStorage
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtLicenseMissionDefMap Size 88
// Inherited 8 bytes 
class FKtLicenseMissionDefMap : public FTableRowBase
{

 public: 
	struct TMap<struct FString, struct FKtLicenseMissionDef> missionDefMap;  // Offset: 8 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartUpgradePageWidget.OnClickedApplyGearBtn Size 4
class FOnClickedApplyGearBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ComboBoxStringExpandWithSearch.OnEditableTextBoxChanged Size 24
class FOnEditableTextBoxChanged
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtLicenseMissionDef Size 80
class FKtLicenseMissionDef
{

 public: 
	struct FString missionId;  // Offset: 0 Size: 16
	struct FString GroupID;  // Offset: 16 Size: 16
	struct TArray<struct FString> rewardStockIdList;  // Offset: 32 Size: 16
	struct TArray<struct FString> rewardMessageList;  // Offset: 48 Size: 16
	struct TArray<int32_t> starScoreList;  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.SetCash Size 24
class FSetCash
{

 public: 
	double Cash;  // Offset: 0 Size: 8
	struct FString currency;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtLicenseMissionDefSet Size 24
// Inherited 8 bytes 
class FKtLicenseMissionDefSet : public FTableRowBase
{

 public: 
	struct TArray<struct FKtLicenseMissionDef> missionDefVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseDriftTutorialChapter Size 48
class FLicenseDriftTutorialChapter
{

 public: 
	struct FText ChapterTitle;  // Offset: 0 Size: 24
	struct TArray<struct FLicenseDriftTutorialMission> MissionList;  // Offset: 24 Size: 16
	int32_t Count;  // Offset: 40 Size: 4
	char pad_44[4];  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtReserveIdDef Size 24
// Inherited 8 bytes 
class FKtReserveIdDef : public FTableRowBase
{

 public: 
	struct TArray<struct FKtReserveId> reserveIdVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtTierSetDef Size 24
// Inherited 8 bytes 
class FKtTierSetDef : public FTableRowBase
{

 public: 
	struct TArray<struct FKtTierDef> tierDefVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_ChangeSkidMark Size 4
class FDev_ChangeSkidMark
{

 public: 
	int32_t ItemId;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.PatrolLineData Size 16
class FPatrolLineData
{

 public: 
	int32_t Score;  // Offset: 0 Size: 4
	int32_t Offset_X;  // Offset: 4 Size: 4
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool Direction : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3
	float Speed;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtTierDef Size 8
class FKtTierDef
{

 public: 
	int32_t tier;  // Offset: 0 Size: 4
	int32_t accumTrophy;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtLevelDef Size 8
class FKtLevelDef
{

 public: 
	int32_t Level;  // Offset: 0 Size: 4
	int32_t accumExp;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_ChangeID_List Size 128
class FDev_ChangeID_List
{

 public: 
	struct FString ID1;  // Offset: 0 Size: 16
	struct FString ID2;  // Offset: 16 Size: 16
	struct FString ID3;  // Offset: 32 Size: 16
	struct FString ID4;  // Offset: 48 Size: 16
	struct FString ID5;  // Offset: 64 Size: 16
	struct FString ID6;  // Offset: 80 Size: 16
	struct FString ID7;  // Offset: 96 Size: 16
	struct FString ID8;  // Offset: 112 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtPlayMissionEventDef Size 104
class FKtPlayMissionEventDef
{

 public: 
	struct FString ID;  // Offset: 0 Size: 16
	int32_t Rate;  // Offset: 16 Size: 4
	int32_t MaxCount;  // Offset: 20 Size: 4
	struct FDateTime StartTime;  // Offset: 24 Size: 8
	struct FDateTime EndTime;  // Offset: 32 Size: 8
	struct FKtPlayMissionPoolDef missionPool;  // Offset: 40 Size: 64



 // Functions 
 public:
}; 
 
 //Function KartDrift.ProfileEditPageWidget.OnClickedTagButton Size 4
class FOnClickedTagButton
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientLicenseMissionSetDef Size 24
// Inherited 8 bytes 
class FKtClientLicenseMissionSetDef : public FTableRowBase
{

 public: 
	struct TArray<struct FKtClientLicenseMissionDef> missionDefVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtPlayMissionPoolDef Size 64
class FKtPlayMissionPoolDef
{

 public: 
	struct TArray<struct FKtPlayMissionPoolItem> speedSolo;  // Offset: 0 Size: 16
	struct TArray<struct FKtPlayMissionPoolItem> speedTeam;  // Offset: 16 Size: 16
	struct TArray<struct FKtPlayMissionPoolItem> itemSolo;  // Offset: 32 Size: 16
	struct TArray<struct FKtPlayMissionPoolItem> itemTeam;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LootBoxSequencePlayInfo Size 24
class FLootBoxSequencePlayInfo
{

 public: 
	char pad_0[24];  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.RegisterComponent Size 48
class FRegisterComponent
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bReplicated : 1;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct TSoftClassPtr<UObject> ComponentClass;  // Offset: 8 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtPlayMissionRewardPoolDef Size 32
class FKtPlayMissionRewardPoolDef
{

 public: 
	struct FString ID;  // Offset: 0 Size: 16
	struct TArray<struct FKtPlayMissionRewardDef> rewards;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LoginPageWidget.ChangeLanguage_OnClickedConfirmBtn Size 4
class FChangeLanguage_OnClickedConfirmBtn
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtPlayMissionDef Size 64
class FKtPlayMissionDef
{

 public: 
	struct FString ID;  // Offset: 0 Size: 16
	enum class EKtPlayMissionType missionType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7
	struct FString targetItemId;  // Offset: 24 Size: 16
	int32_t missionCount;  // Offset: 40 Size: 4
	char pad_44_1 : 7;  // Offset: 44 Size: 1
	bool complete : 1;  // Offset: 44 Size: 1
	char pad_45[3];  // Offset: 45 Size: 3
	struct FString desc;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryWrappingGroup Size 24
class FLiveryWrappingGroup
{

 public: 
	int32_t HeadOffset;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FLiveryWrappingGroupHeadInfo> HeadInfo;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KartUpgradeFxGradeColorInfo Size 96
class FKartUpgradeFxGradeColorInfo
{

 public: 
	struct FString ParamName;  // Offset: 0 Size: 16
	struct TMap<enum class EKtItemGrade, struct FLinearColor> ColorList;  // Offset: 16 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.RaceRankRowEditorInitializer Size 80
class FRaceRankRowEditorInitializer
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bOwnPlayer : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t RankNo;  // Offset: 4 Size: 4
	int32_t TeamNo;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct FString PlayerName;  // Offset: 16 Size: 16
	struct TArray<enum class EItemType> ItemList;  // Offset: 32 Size: 16
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool bMic : 1;  // Offset: 48 Size: 1
	char pad_49[3];  // Offset: 49 Size: 3
	int32_t VoiceChatStatus;  // Offset: 52 Size: 4
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	bool bPing : 1;  // Offset: 56 Size: 1
	char pad_57[3];  // Offset: 57 Size: 3
	float LatencyMs;  // Offset: 60 Size: 4
	float TimestampMs;  // Offset: 64 Size: 4
	enum class EKtAccountPlatform platform;  // Offset: 68 Size: 1
	enum class ERankPlayerRaceState RaceState;  // Offset: 69 Size: 1
	char pad_70_1 : 7;  // Offset: 70 Size: 1
	bool bBeginnerCareIcon : 1;  // Offset: 70 Size: 1
	char pad_71[1];  // Offset: 71 Size: 1
	enum class ERaceRankPawnType PawnType;  // Offset: 72 Size: 4
	char pad_76[4];  // Offset: 76 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtQuestEventSetDef Size 88
// Inherited 8 bytes 
class FKtQuestEventSetDef : public FTableRowBase
{

 public: 
	struct TMap<struct FString, struct FKtQuestEventDef> questEventDefMap;  // Offset: 8 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtQuestEventDef Size 32
class FKtQuestEventDef
{

 public: 
	struct FString questPeriod;  // Offset: 0 Size: 16
	struct FKtQuestDef questDef;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_LaunchURL Size 16
class FDev_LaunchURL
{

 public: 
	struct FString InURL;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtQuestDef Size 16
class FKtQuestDef
{

 public: 
	struct TArray<struct FKtMissionDef> missionDefVector;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.GetCurrentDrawSize Size 8
class FGetCurrentDrawSize
{

 public: 
	struct FVector2D ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtMissionCounterConditionDef Size 144
class FKtMissionCounterConditionDef
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool Time : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool Distance : 1;  // Offset: 1 Size: 1
	char pad_2_1 : 7;  // Offset: 2 Size: 1
	bool Drift : 1;  // Offset: 2 Size: 1
	char pad_3_1 : 7;  // Offset: 3 Size: 1
	bool draft : 1;  // Offset: 3 Size: 1
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool boostShort : 1;  // Offset: 4 Size: 1
	char pad_5_1 : 7;  // Offset: 5 Size: 1
	bool overtake : 1;  // Offset: 5 Size: 1
	char pad_6_1 : 7;  // Offset: 6 Size: 1
	bool Reset : 1;  // Offset: 6 Size: 1
	char pad_7_1 : 7;  // Offset: 7 Size: 1
	bool crash : 1;  // Offset: 7 Size: 1
	struct TArray<struct FString> goItemUseVector;  // Offset: 8 Size: 16
	struct TArray<struct FString> goItemSuccessVector;  // Offset: 24 Size: 16
	struct TArray<struct FString> goItemDefenceVector;  // Offset: 40 Size: 16
	struct TArray<struct FString> goItemAttackedVector;  // Offset: 56 Size: 16
	struct TArray<struct FString> goItemAttackVector;  // Offset: 72 Size: 16
	struct TArray<struct FString> goItemGainVector;  // Offset: 88 Size: 16
	struct TArray<struct FString> itemIdVector;  // Offset: 104 Size: 16
	struct TArray<int32_t> itemCatVector;  // Offset: 120 Size: 16
	enum class EKtItemGrade itemGrade;  // Offset: 136 Size: 1
	char pad_137_1 : 7;  // Offset: 137 Size: 1
	bool characterBirthday : 1;  // Offset: 137 Size: 1
	char pad_138[6];  // Offset: 138 Size: 6



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtMissionTriggerConditionOnceCheckDef Size 12
class FKtMissionTriggerConditionOnceCheckDef
{

 public: 
	enum class EKtLicenseCondition licenseCondition;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t licenseGroupType;  // Offset: 4 Size: 4
	int32_t licenseGrade;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnShortcutButtonClicked Size 4
class FOnShortcutButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_CommunityPageWidget.InviteMenu_Find_CloseFindPopup Size 4
class FInviteMenu_Find_CloseFindPopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MailPageWidget.OnShowReceiveFailPopup Size 24
class FOnShowReceiveFailPopup
{

 public: 
	enum class EMailItemReceiveFailType ReceiveFailType;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct TArray<struct FString> InItemArray;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.EventPageWidget.OnClickedRewardDetailDialogBackButton Size 4
class FOnClickedRewardDetailDialogBackButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CommonPopup.DoClose Size 4
class FDoClose
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.SoundRow Size 80
// Inherited 8 bytes 
class FSoundRow : public FTableRowBase
{

 public: 
	struct FString Name;  // Offset: 8 Size: 16
	struct TSoftObjectPtr<UFMODEvent> Sound;  // Offset: 24 Size: 40
	struct FString Theme;  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtItemDef Size 56
class FKtItemDef
{

 public: 
	enum class EKtInventoryType inventoryType;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FString ItemId;  // Offset: 8 Size: 16
	enum class EKtItemGrade itemGrade;  // Offset: 24 Size: 1
	char pad_25[3];  // Offset: 25 Size: 3
	int32_t itemLimit;  // Offset: 28 Size: 4
	struct FString parentId;  // Offset: 32 Size: 16
	enum class EKtAffiliateType affiliateType;  // Offset: 48 Size: 1
	enum class EKtAffiliatePlatform specificPlatform;  // Offset: 49 Size: 1
	char pad_50[6];  // Offset: 50 Size: 6



 // Functions 
 public:
}; 
 
 //Function KartDrift.BuildCaptureWidget.OnSpinBoxValueChanged_CameraAperture Size 4
class FOnSpinBoxValueChanged_CameraAperture
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_MailPageWidget.OnClickedReceiveKeyIcon Size 4
class FOnClickedReceiveKeyIcon
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtMissionTriggerConditionRaceResultDef Size 360
class FKtMissionTriggerConditionRaceResultDef
{

 public: 
	struct TArray<char> raceTypeVector;  // Offset: 0 Size: 16
	struct TArray<char> raceModeVector;  // Offset: 16 Size: 16
	struct TArray<struct FString> trackIdVector;  // Offset: 32 Size: 16
	enum class EKtGameModeDetail gameModeDetail;  // Offset: 48 Size: 1
	char pad_49[7];  // Offset: 49 Size: 7
	struct FString rank;  // Offset: 56 Size: 16
	struct FString rankTeam;  // Offset: 72 Size: 16
	char pad_88_1 : 7;  // Offset: 88 Size: 1
	bool complete : 1;  // Offset: 88 Size: 1
	char pad_89_1 : 7;  // Offset: 89 Size: 1
	bool retire : 1;  // Offset: 89 Size: 1
	char pad_90_1 : 7;  // Offset: 90 Size: 1
	bool drive : 1;  // Offset: 90 Size: 1
	char pad_91_1 : 7;  // Offset: 91 Size: 1
	bool streak : 1;  // Offset: 91 Size: 1
	char pad_92_1 : 7;  // Offset: 92 Size: 1
	bool allRetire : 1;  // Offset: 92 Size: 1
	char pad_93_1 : 7;  // Offset: 93 Size: 1
	bool lose : 1;  // Offset: 93 Size: 1
	char pad_94_1 : 7;  // Offset: 94 Size: 1
	bool Distance : 1;  // Offset: 94 Size: 1
	char pad_95_1 : 7;  // Offset: 95 Size: 1
	bool Backward : 1;  // Offset: 95 Size: 1
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool party : 1;  // Offset: 96 Size: 1
	char pad_97_1 : 7;  // Offset: 97 Size: 1
	bool single : 1;  // Offset: 97 Size: 1
	char pad_98[6];  // Offset: 98 Size: 6
	struct FString Drift;  // Offset: 104 Size: 16
	struct FString draft;  // Offset: 120 Size: 16
	struct FString boostShort;  // Offset: 136 Size: 16
	struct FString overtake;  // Offset: 152 Size: 16
	struct FString Reset;  // Offset: 168 Size: 16
	struct FString crash;  // Offset: 184 Size: 16
	struct FString gpID;  // Offset: 200 Size: 16
	struct FString gpProgress;  // Offset: 216 Size: 16
	struct FString gpPoint;  // Offset: 232 Size: 16
	struct FString gpRanking;  // Offset: 248 Size: 16
	struct TArray<struct FString> goItemUseVector;  // Offset: 264 Size: 16
	struct TArray<struct FString> goItemSuccessVector;  // Offset: 280 Size: 16
	struct TArray<struct FString> goItemDefenceVector;  // Offset: 296 Size: 16
	struct TArray<struct FString> goItemAttackVector;  // Offset: 312 Size: 16
	struct TArray<struct FString> goItemAttackedVector;  // Offset: 328 Size: 16
	struct TArray<struct FString> goItemGainVector;  // Offset: 344 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtMissionTriggerConditionDef Size 32
class FKtMissionTriggerConditionDef
{

 public: 
	struct TArray<struct FString> itemOnVector;  // Offset: 0 Size: 16
	struct TArray<struct FString> itemHaveVector;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayControlPageWidget.CloseReplayController Size 4
class FCloseReplayController
{

 public: 
	int32_t DummyIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_EventPageWidget.OnClickedChangeToLeftTabButton Size 4
class FOnClickedChangeToLeftTabButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtQuestPsnSetDef Size 88
// Inherited 8 bytes 
class FKtQuestPsnSetDef : public FTableRowBase
{

 public: 
	struct TMap<struct FString, struct FKtQuestDef> questDefMap;  // Offset: 8 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtQuestLiveSetDef Size 88
// Inherited 8 bytes 
class FKtQuestLiveSetDef : public FTableRowBase
{

 public: 
	struct TMap<struct FString, struct FKtQuestDef> questDefMap;  // Offset: 8 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtQuestEmblemSetDef Size 88
// Inherited 8 bytes 
class FKtQuestEmblemSetDef : public FTableRowBase
{

 public: 
	struct TMap<struct FString, struct FKtQuestEmblemDef> questEmblemDefMap;  // Offset: 8 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_OpenLicense Size 4
class FDev_OpenLicense
{

 public: 
	int32_t ID;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtQuestWeeklySetDef Size 88
// Inherited 8 bytes 
class FKtQuestWeeklySetDef : public FTableRowBase
{

 public: 
	struct TMap<struct FString, struct FKtQuestWeeklySeasonDef> questWeeklySeasonDefMap;  // Offset: 8 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtQuestWeeklySeasonDef Size 80
class FKtQuestWeeklySeasonDef
{

 public: 
	struct TMap<struct FString, struct FKtQuestWeeklyDef> questWeeklyDefMap;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.TouchKeyGuideWidget.GuideDrift Size 2
class FGuideDrift
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bLeft : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bActivate : 1;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.ControlTrackWidget.OnComboBoxSelection_Level Size 24
class FOnComboBoxSelection_Level
{

 public: 
	struct FString SelectedItem;  // Offset: 0 Size: 16
	enum class ESelectInfo SelectionType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.BuildCaptureWidget.OnSpinBoxValueCommitted_SlowMotion Size 8
class FOnSpinBoxValueCommitted_SlowMotion
{

 public: 
	float InValue;  // Offset: 0 Size: 4
	enum class ETextCommit CommitMethod;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtQuestWeeklyDef Size 24
class FKtQuestWeeklyDef
{

 public: 
	int32_t seasonWeekIdx;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FKtQuestDef questDef;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.RankPlayerInfo Size 128
class FRankPlayerInfo
{

 public: 
	struct AKdPawn* PlayerPawn;  // Offset: 0 Size: 8
	struct UPawnStateComponent* PawnStateComponent;  // Offset: 8 Size: 8
	struct UItemSlotComponent* ItemSlotComponent;  // Offset: 16 Size: 8
	struct URaceProgressComponent* RaceProgressComponent;  // Offset: 24 Size: 8
	struct USimulationMovementComponent* SimulationMovementComponent;  // Offset: 32 Size: 8
	char pad_40[88];  // Offset: 40 Size: 88



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedShowItemListOnConfirmListDialog Size 4
class FOnClickedShowItemListOnConfirmListDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ScenarioSequenceDirector.PlayCharacterAnimationByMontage Size 32
class FPlayCharacterAnimationByMontage
{

 public: 
	struct AActor* InActor;  // Offset: 0 Size: 8
	struct UAnimMontage* MontageToPlay;  // Offset: 8 Size: 8
	float InPlayRate;  // Offset: 16 Size: 4
	enum class EMontagePlayReturnType ReturnValueType;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3
	float InTimeToStartMontageAt;  // Offset: 24 Size: 4
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool bStopAllMontages : 1;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtQuestDailySetDef Size 88
// Inherited 8 bytes 
class FKtQuestDailySetDef : public FTableRowBase
{

 public: 
	struct TMap<struct FString, struct FKtQuestDailySeasonDef> questDailySeasonDefMap;  // Offset: 8 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.MajorPersonalResultPlayerInitializer Size 32
class FMajorPersonalResultPlayerInitializer
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bSelf : 1;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FString riderName;  // Offset: 8 Size: 16
	enum class EKtAccountPlatform platform;  // Offset: 24 Size: 1
	enum class ERaceTeamType Team;  // Offset: 25 Size: 1
	char pad_26_1 : 7;  // Offset: 26 Size: 1
	bool bInUseBeginnerCare : 1;  // Offset: 26 Size: 1
	char pad_27[5];  // Offset: 27 Size: 5



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtQuestDailyDef Size 88
class FKtQuestDailyDef
{

 public: 
	int32_t seasonWeekIdx;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TMap<struct FString, struct FKtQuestSetDef> questDefSetMap;  // Offset: 8 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_TimeAttackPageWidget.OnClickedShadowButtonOn Size 4
class FOnClickedShadowButtonOn
{

 public: 
	int32_t nIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MailPageWidget.Mail_OnClickedBackButton Size 4
class FMail_OnClickedBackButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_CommunityPageWidget.InviteMenu_Find_AddFriend Size 4
class FInviteMenu_Find_AddFriend
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedGiftButton Size 4
class FOnClickedGiftButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtQuestSetDef Size 80
class FKtQuestSetDef
{

 public: 
	struct TMap<struct FString, struct FKtQuestDef> questDefMap;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ECS_SplinePatrolComponent Size 80
class FECS_SplinePatrolComponent
{

 public: 
	char pad_0[80];  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtStockShopDef Size 16
class FKtStockShopDef
{

 public: 
	struct TArray<struct FKtStockDef> stockDefVector;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtRandomTrackListDef Size 16
class FKtRandomTrackListDef
{

 public: 
	struct TArray<struct FKtRandomTrackDef> RandomTrackDefVector;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceHudWidget.GetSlotFromRoot Size 16
class FGetSlotFromRoot
{

 public: 
	struct FName SlotName;  // Offset: 0 Size: 8
	struct UPanelWidget* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtRandomTrackDef Size 80
class FKtRandomTrackDef
{

 public: 
	struct FString Alias;  // Offset: 0 Size: 16
	struct TArray<struct FString> TrackAlias;  // Offset: 16 Size: 16
	struct TArray<enum class EKtLevelType> TrackLevelType;  // Offset: 32 Size: 16
	struct TArray<int32_t> trackDifficulty;  // Offset: 48 Size: 16
	struct TArray<struct FString> TrackThemeType;  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.SessionDebugRequest Size 40
class FSessionDebugRequest
{

 public: 
	struct FString requestUuid;  // Offset: 0 Size: 16
	struct FString ip;  // Offset: 16 Size: 16
	int32_t Port;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_PremiumChallengePageWidget.OnGoToMissionClicked Size 4
class FOnGoToMissionClicked
{

 public: 
	int32_t IndexInList;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LoginPageWidget.OnClickedRepairDialogClose Size 4
class FOnClickedRepairDialogClose
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtTrackListDef Size 24
// Inherited 8 bytes 
class FKtTrackListDef : public FTableRowBase
{

 public: 
	struct TArray<struct FKtTrackDef> trackDefVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedShowKcoinPriceDetail Size 4
class FOnClickedShowKcoinPriceDetail
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_GfsMakeFriendRequest Size 16
class FDev_GfsMakeFriendRequest
{

 public: 
	struct FString accountId;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.CustomHUDWidgetParameterLimitData Size 32
// Inherited 8 bytes 
class FCustomHUDWidgetParameterLimitData : public FTableRowBase
{

 public: 
	float MinScale;  // Offset: 8 Size: 4
	float MaxScale;  // Offset: 12 Size: 4
	float MinOpacity;  // Offset: 16 Size: 4
	float MaxOpacity;  // Offset: 20 Size: 4
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bAllowOpacityCustom : 1;  // Offset: 24 Size: 1
	char pad_25_1 : 7;  // Offset: 25 Size: 1
	bool bDisableAllowed : 1;  // Offset: 25 Size: 1
	char pad_26[6];  // Offset: 26 Size: 6



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_TimeAttackPageWidget.OnClickedPrevRankingBoardPageButton Size 4
class FOnClickedPrevRankingBoardPageButton
{

 public: 
	int32_t nIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartUpgradePageWidget.OnClickedUpgradeBtn Size 4
class FOnClickedUpgradeBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.HUDWidgetCustomData Size 64
class FHUDWidgetCustomData
{

 public: 
	float Opacity;  // Offset: 0 Size: 4
	struct FVector2D Scale;  // Offset: 4 Size: 8
	struct FVector2D position;  // Offset: 12 Size: 8
	struct FVector2D Alignment;  // Offset: 20 Size: 8
	struct FAnchors Anchors;  // Offset: 28 Size: 16
	char pad_44_1 : 7;  // Offset: 44 Size: 1
	bool bIsActivated : 1;  // Offset: 44 Size: 1
	char pad_45[3];  // Offset: 45 Size: 3
	struct FString WidgetName;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.CouponPageWidget.OnCouponIdTextCommitted Size 32
class FOnCouponIdTextCommitted
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24
	enum class ETextCommit CommitMethod;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.CsSessionPreparationInfo Size 48
class FCsSessionPreparationInfo
{

 public: 
	struct FString gameId;  // Offset: 0 Size: 16
	struct FString Track;  // Offset: 16 Size: 16
	struct TArray<struct FKtItemPreset> players;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.PlatfromPostFix Size 24
class FPlatfromPostFix
{

 public: 
	enum class EPlatformPostFix PlatformPostfix;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FString PostFix;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.DataAssetTableRow Size 56
// Inherited 8 bytes 
class FDataAssetTableRow : public FTableRowBase
{

 public: 
	enum class EDataAssetType DataAssetType;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct TSoftObjectPtr<UDataAsset> DataAssetObject;  // Offset: 16 Size: 40



 // Functions 
 public:
}; 
 
 //Function KartDrift.InfoPageWidget.OnClickedbtnAchievement Size 4
class FOnClickedbtnAchievement
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.SmsTravelInfo Size 112
class FSmsTravelInfo
{

 public: 
	struct FString TrackAlias;  // Offset: 0 Size: 16
	char pad_16[96];  // Offset: 16 Size: 96



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.DriftAngleInfo Size 120
class FDriftAngleInfo
{

 public: 
	struct TSoftObjectPtr<UMaterialInstance> Material45;  // Offset: 0 Size: 40
	struct TSoftObjectPtr<UMaterialInstance> Material90;  // Offset: 40 Size: 40
	struct TSoftObjectPtr<UMaterialInstance> Material180;  // Offset: 80 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.EventData Size 120
class FEventData
{

 public: 
	char pad_0[8];  // Offset: 0 Size: 8
	struct UAccountEvent* AccountEvent;  // Offset: 8 Size: 8
	char pad_16[104];  // Offset: 16 Size: 104



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_PretendSTTReceived Size 32
class FDev_PretendSTTReceived
{

 public: 
	struct FString Message;  // Offset: 0 Size: 16
	struct FString accountId;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioKartBodyPause Size 56
class FScenarioKartBodyPause
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bRememberDriveInfo : 1;  // Offset: 0 Size: 1
	char pad_1[55];  // Offset: 1 Size: 55



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KartForceFeedbackTableRow Size 16
class FKartForceFeedbackTableRow
{

 public: 
	struct UForceFeedbackEffect* ForceFeedbackEffect;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bLoop : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseRemovableObstacleComp.RemoveObstacle Size 4
class FRemoveObstacle
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClickEditExit Size 4
class FOnClickEditExit
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ApproachWidget.SetArrowTransform Size 56
class FSetArrowTransform
{

 public: 
	struct FVector MyKartLocation;  // Offset: 0 Size: 12
	struct FVector MyKartBackward;  // Offset: 12 Size: 12
	struct FVector AnotherKartLocation;  // Offset: 24 Size: 12
	float MinDiatance;  // Offset: 36 Size: 4
	float MaxDistance;  // Offset: 40 Size: 4
	float ViewAngle;  // Offset: 44 Size: 4
	float OutAngle;  // Offset: 48 Size: 4
	char pad_52_1 : 7;  // Offset: 52 Size: 1
	bool ReturnValue : 1;  // Offset: 52 Size: 1
	char pad_53[3];  // Offset: 53 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.MaterialFxPlayingInfo Size 96
class FMaterialFxPlayingInfo
{

 public: 
	struct UCurveFloat* WeightCurve;  // Offset: 0 Size: 8
	struct UCurveFloat* CycleCurve;  // Offset: 8 Size: 8
	char pad_16[80];  // Offset: 16 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.PresetPageWidget.OnClickedRegister Size 4
class FOnClickedRegister
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.TeamBoostGameStateComponent.MulticastNotifyGetTeamBoost Size 4
class FMulticastNotifyGetTeamBoost
{

 public: 
	int32_t Team;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.AccountReset_OnClickedAccountResetConfirmBtn Size 4
class FAccountReset_OnClickedAccountResetConfirmBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtSessionRaceResultTeam Size 8
class FKtSessionRaceResultTeam
{

 public: 
	int32_t Team;  // Offset: 0 Size: 4
	int32_t rank;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtSessionPlayerAuxData Size 160
class FKtSessionPlayerAuxData
{

 public: 
	struct FString PartyId;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool partyMaster : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7
	struct FString redisChannelName;  // Offset: 24 Size: 16
	struct FString raceResultKey;  // Offset: 40 Size: 16
	struct FString log_partyId;  // Offset: 56 Size: 16
	int32_t log_userLevel;  // Offset: 72 Size: 4
	int32_t log_userLevel2;  // Offset: 76 Size: 4
	char pad_80_1 : 7;  // Offset: 80 Size: 1
	bool log_usePremiumPass : 1;  // Offset: 80 Size: 1
	char pad_81[7];  // Offset: 81 Size: 7
	struct FString log_userFromIp;  // Offset: 88 Size: 16
	struct FString nxlog_SID;  // Offset: 104 Size: 16
	struct FString log_cc;  // Offset: 120 Size: 16
	int32_t gpp;  // Offset: 136 Size: 4
	int32_t log_ispcroom;  // Offset: 140 Size: 4
	struct FString log_grandPrixId;  // Offset: 144 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.CouponPageWidget.OnCloseRewardDialog Size 4
class FOnCloseRewardDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.AccountAttendanceEvent.OnPrAttendanceEventInfo Size 16
class FOnPrAttendanceEventInfo
{

 public: 
	struct FPrResult Result;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UPrPacket* ReceivedPacket;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionBarWidget.OnUnHover Size 4
class FOnUnHover
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtRegularGrandPrixData Size 80
class FKtRegularGrandPrixData
{

 public: 
	struct FString grandPrixId;  // Offset: 0 Size: 16
	struct FString seasonId;  // Offset: 16 Size: 16
	int32_t gpp;  // Offset: 32 Size: 4
	enum class EKtGrandPrixSubTier tier;  // Offset: 36 Size: 1
	char pad_37[3];  // Offset: 37 Size: 3
	int32_t statRank1;  // Offset: 40 Size: 4
	int32_t statRank2;  // Offset: 44 Size: 4
	int32_t statRank3;  // Offset: 48 Size: 4
	int32_t statTeamWin;  // Offset: 52 Size: 4
	int32_t statTeamLose;  // Offset: 56 Size: 4
	int32_t statTeamDraw;  // Offset: 60 Size: 4
	int32_t statRetire;  // Offset: 64 Size: 4
	int32_t statRaceCount;  // Offset: 68 Size: 4
	int32_t rank;  // Offset: 72 Size: 4
	char pad_76[4];  // Offset: 76 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtRankerInfo Size 56
class FKtRankerInfo
{

 public: 
	int32_t rank;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FString riderName;  // Offset: 8 Size: 16
	struct FString emblemItemIdOn;  // Offset: 24 Size: 16
	enum class EKtAccountPlatform platform;  // Offset: 40 Size: 1
	char pad_41[3];  // Offset: 41 Size: 3
	int32_t gpp;  // Offset: 44 Size: 4
	enum class EKtGrandPrixSubTier tier;  // Offset: 48 Size: 1
	char pad_49[7];  // Offset: 49 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.TagData Size 32
class FTagData
{

 public: 
	char pad_0[32];  // Offset: 0 Size: 32



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ItemAffectParam Size 16
class FItemAffectParam
{

 public: 
	struct AItem* Item;  // Offset: 0 Size: 8
	int32_t Index;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool bFilterNeeded : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //Function KartDrift.GrandPrixPageWidget.OnClickedGrandPrixStartButton Size 4
class FOnClickedGrandPrixStartButton
{

 public: 
	int32_t nIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LobbyUiDefDeviceInfo Size 20
class FLobbyUiDefDeviceInfo
{

 public: 
	char pad_0[20];  // Offset: 0 Size: 20



 // Functions 
 public:
}; 
 
 //Function KartDrift.KeyRebindingLibrary.RemoveAxisMapping Size 12
class FRemoveAxisMapping
{

 public: 
	struct FName AxisName;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bGamepadOnly : 1;  // Offset: 8 Size: 1
	char pad_9_1 : 7;  // Offset: 9 Size: 1
	bool bSaveSetting : 1;  // Offset: 9 Size: 1
	char pad_10_1 : 7;  // Offset: 10 Size: 1
	bool bSaveConfig : 1;  // Offset: 10 Size: 1
	char pad_11_1 : 7;  // Offset: 11 Size: 1
	bool ReturnValue : 1;  // Offset: 11 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.StickerMarketPageWidget.OnClicked_Sort Size 4
class FOnClicked_Sort
{

 public: 
	int32_t nIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ItemSlot Size 16
class FItemSlot
{

 public: 
	char pad_0[8];  // Offset: 0 Size: 8
	struct AItem* Item;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.RankGradeSet Size 16
// Inherited 8 bytes 
class FRankGradeSet : public FTableRowBase
{

 public: 
	int8_t TopStart;  // Offset: 8 Size: 1
	int8_t TopEnd;  // Offset: 9 Size: 1
	int8_t HighStart;  // Offset: 10 Size: 1
	int8_t HighEnd;  // Offset: 11 Size: 1
	int8_t MidStart;  // Offset: 12 Size: 1
	int8_t MidEnd;  // Offset: 13 Size: 1
	int8_t LowStart;  // Offset: 14 Size: 1
	int8_t LowEnd;  // Offset: 15 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseCoinTypeInfo Size 12
class FLicenseCoinTypeInfo
{

 public: 
	int32_t Score;  // Offset: 0 Size: 4
	float Scale;  // Offset: 4 Size: 4
	float CollisionSphereRadius;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ItemProbSet Size 16
// Inherited 8 bytes 
class FItemProbSet : public FTableRowBase
{

 public: 
	enum class EItemType EnumItemID;  // Offset: 8 Size: 1
	char probTopRank;  // Offset: 9 Size: 1
	char probHighRank;  // Offset: 10 Size: 1
	char probMidRank;  // Offset: 11 Size: 1
	char probLowRank;  // Offset: 12 Size: 1
	char probBottomRank;  // Offset: 13 Size: 1
	char pad_14[2];  // Offset: 14 Size: 2



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_OptionPageWidget.OnClickedLogoutConfirm Size 4
class FOnClickedLogoutConfirm
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_ChangeReplayFriendlyName Size 32
class FDev_ChangeReplayFriendlyName
{

 public: 
	struct FString ReplayName;  // Offset: 0 Size: 16
	struct FString NewFriendlyName;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.HitWidgetRowInfo Size 48
class FHitWidgetRowInfo
{

 public: 
	struct UTexture2D* IconTexture;  // Offset: 0 Size: 8
	struct UTexture2D* IconTextureSmall;  // Offset: 8 Size: 8
	struct FString PlayerName;  // Offset: 16 Size: 16
	int32_t ItemUniqueId;  // Offset: 32 Size: 4
	int32_t TargetNum;  // Offset: 36 Size: 4
	enum class EHitState HitState;  // Offset: 40 Size: 1
	char pad_41[7];  // Offset: 41 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KeyPresetOverrides Size 32
class FKeyPresetOverrides
{

 public: 
	struct TArray<struct FInputAxisKeyMapping> AxisOverrides;  // Offset: 0 Size: 16
	struct TArray<struct FInputActionKeyMapping> ActionOverrides;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_ChangeShadowPawnOpacity Size 4
class FDev_ChangeShadowPawnOpacity
{

 public: 
	float Opacity;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KartMovementBuffArray Size 16
class FKartMovementBuffArray
{

 public: 
	struct TArray<struct UKartMovementBuff*> Buffs;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.CharAnimInstance.PlayMontageOnLoop Size 16
class FPlayMontageOnLoop
{

 public: 
	struct UAnimMontage* Montage;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bInterrupted : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.TouchStartBoosterButton.OnBeginRaceCountdown Size 4
class FOnBeginRaceCountdown
{

 public: 
	float BeginTime;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.TouchKeyGuideNameSlots Size 72
class FTouchKeyGuideNameSlots
{

 public: 
	struct TArray<struct UNamedSlot*> ItemGuideSlots;  // Offset: 0 Size: 16
	struct TArray<struct UNamedSlot*> InstanceBoostSlots;  // Offset: 16 Size: 16
	struct TArray<struct UNamedSlot*> DriftSlots;  // Offset: 32 Size: 16
	struct UNamedSlot* LeftSteerSlot;  // Offset: 48 Size: 8
	struct UNamedSlot* RightSteerSlot;  // Offset: 56 Size: 8
	struct UNamedSlot* ResetSlot;  // Offset: 64 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtDisabledChatDef Size 24
class FKtDisabledChatDef
{

 public: 
	int32_t reserveIdType;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FString reserveId;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.TextScrollInfo Size 24
class FTextScrollInfo
{

 public: 
	char ScrollFlags;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float ScrollSpeed;  // Offset: 4 Size: 4
	float RepeatDelay;  // Offset: 8 Size: 4
	float ScrollStartXOffset;  // Offset: 12 Size: 4
	char pad_16[8];  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.StickerMarketPageWidget.OnClicked_Back Size 4
class FOnClicked_Back
{

 public: 
	int32_t nIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtStaffCreditsDef Size 80
class FKtStaffCreditsDef
{

 public: 
	struct FString Title;  // Offset: 0 Size: 16
	struct FString titleTextStyleName;  // Offset: 16 Size: 16
	int32_t betweenSpace;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4
	struct FString contents;  // Offset: 40 Size: 16
	struct FString contentsTextStyleName;  // Offset: 56 Size: 16
	int32_t bottomSpace;  // Offset: 72 Size: 4
	char pad_76[4];  // Offset: 76 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_InfoPageWidget.OnFocused_LicenseList Size 4
class FOnFocused_LicenseList
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PredictHelper.Predict_wsyoon_ver1 Size 32
class FPredict_wsyoon_ver1
{

 public: 
	struct TArray<float> Inputs;  // Offset: 0 Size: 16
	struct TArray<float> ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtAchievementTendencyDef Size 112
class FKtAchievementTendencyDef
{

 public: 
	int32_t completeCount;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<enum class EKtEmblemQuestTendency> topTendencies;  // Offset: 8 Size: 16
	struct FText Title;  // Offset: 24 Size: 24
	struct FText Description;  // Offset: 48 Size: 24
	struct TSoftObjectPtr<UTexture2D> Image;  // Offset: 72 Size: 40



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_LootBox_SetTestLootItem Size 16
class FDev_LootBox_SetTestLootItem
{

 public: 
	struct FString ItemIdWithCount;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.WrappingCollectionRow Size 24
// Inherited 8 bytes 
class FWrappingCollectionRow : public FTableRowBase
{

 public: 
	struct TArray<struct FWrappingCollection> CollectionList;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.MediaPlayListRow Size 48
// Inherited 8 bytes 
class FMediaPlayListRow : public FTableRowBase
{

 public: 
	struct TSoftObjectPtr<UMediaPlaylist> MediaPlaylist;  // Offset: 8 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ClientTimeAttackTrackAliasDef Size 24
class FClientTimeAttackTrackAliasDef
{

 public: 
	int32_t defaultIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FString> trackAliasVector;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClicked_StickerDeleteAll Size 4
class FOnClicked_StickerDeleteAll
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.MajorPersonalResultPlayerEditorInitializer Size 56
class FMajorPersonalResultPlayerEditorInitializer
{

 public: 
	enum class EMajorPersonalResultPlayerRaceState RaceState;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FMajorPersonalResultPlayerInitializer Initializer;  // Offset: 8 Size: 32
	int32_t rank;  // Offset: 40 Size: 4
	float FinishTime;  // Offset: 44 Size: 4
	float RemainingDistance;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayModeSelectLogicComponent.OnActivated Size 1
class FOnActivated
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bActivate : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KdLootBoxConstValue Size 152
// Inherited 8 bytes 
class FKdLootBoxConstValue : public FTableRowBase
{

 public: 
	struct TMap<enum class ELootBoxConstFloatType, float> ConstFloatMap;  // Offset: 8 Size: 80
	enum class ELootAttachSocketName LootAttachSocketNameForLootBox;  // Offset: 88 Size: 1
	enum class ELootAttachSocketName LootAttachSocketNameForLootPlate;  // Offset: 89 Size: 1
	char pad_90[6];  // Offset: 90 Size: 6
	struct FKdLootSpawnFxParam SpawnFxParam;  // Offset: 96 Size: 56



 // Functions 
 public:
}; 
 
 //Function KartDrift.CheatComponent.Server_GainItem Size 16
class FServer_GainItem
{

 public: 
	struct APawn* Pawn;  // Offset: 0 Size: 8
	char Type;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KdOutGamePawnTransformData Size 20
class FKdOutGamePawnTransformData
{

 public: 
	float RelativeScale;  // Offset: 0 Size: 4
	float LocalRotationYaw;  // Offset: 4 Size: 4
	struct FVector LocalOffset;  // Offset: 8 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientGrandPrixMainTierDef Size 48
class FKtClientGrandPrixMainTierDef
{

 public: 
	enum class EKtGrandPrixMainTier mainTier;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct TArray<struct FKtClientGrandPrixSubTierDef> subTiers;  // Offset: 8 Size: 16
	struct FText Name;  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_BeginnerCare Size 1
class FDev_BeginnerCare
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInEnable : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientQuestEmblemSetDef Size 88
// Inherited 8 bytes 
class FKtClientQuestEmblemSetDef : public FTableRowBase
{

 public: 
	struct TMap<struct FString, struct FKtClientQuestEmblemDef> questEmblemDefMap;  // Offset: 8 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientQuestEmblemDef Size 176
class FKtClientQuestEmblemDef
{

 public: 
	int32_t Difficulty;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FString seasonId;  // Offset: 8 Size: 16
	struct FText emblemQuestTitle;  // Offset: 24 Size: 24
	struct FText emblemQuestDesc;  // Offset: 48 Size: 24
	struct FString questPeriod;  // Offset: 72 Size: 16
	struct FKtClientQuestEmblemMissionSetDef questDef;  // Offset: 88 Size: 16
	enum class EKtEmblemQuestGrade emblemQuestGrade;  // Offset: 104 Size: 1
	enum class EKtEmblemQuestCategory emblemQuestCategory;  // Offset: 105 Size: 1
	enum class EKtEmblemQuestTendency emblemQuestTendency;  // Offset: 106 Size: 1
	char pad_107_1 : 7;  // Offset: 107 Size: 1
	bool firstAchievementOption : 1;  // Offset: 107 Size: 1
	char pad_108_1 : 7;  // Offset: 108 Size: 1
	bool globalAnnouncementOption : 1;  // Offset: 108 Size: 1
	char pad_109[3];  // Offset: 109 Size: 3
	struct FText emblemQuestDesc_Add;  // Offset: 112 Size: 24
	struct TSoftObjectPtr<UTexture2D> iconImage;  // Offset: 136 Size: 40



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_ChangePlatform Size 32
class FDev_ChangePlatform
{

 public: 
	int32_t ID1;  // Offset: 0 Size: 4
	int32_t ID2;  // Offset: 4 Size: 4
	int32_t ID3;  // Offset: 8 Size: 4
	int32_t ID4;  // Offset: 12 Size: 4
	int32_t ID5;  // Offset: 16 Size: 4
	int32_t ID6;  // Offset: 20 Size: 4
	int32_t ID7;  // Offset: 24 Size: 4
	int32_t ID8;  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ControlPawnFXWidget.OnComboBoxSelection_Throw Size 24
class FOnComboBoxSelection_Throw
{

 public: 
	struct FString SelectedItem;  // Offset: 0 Size: 16
	enum class ESelectInfo SelectionType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClicked_AddSticker Size 4
class FOnClicked_AddSticker
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientQuestEventSetDef Size 88
// Inherited 8 bytes 
class FKtClientQuestEventSetDef : public FTableRowBase
{

 public: 
	struct TMap<struct FString, struct FKtClientQuestEventDef> questEventDefMap;  // Offset: 8 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryPaintMaterial Size 12
class FLiveryPaintMaterial
{

 public: 
	struct FName MaterialName;  // Offset: 0 Size: 8
	enum class EKtItemGrade MaterialGrade;  // Offset: 8 Size: 1
	enum class ELiveryMaterialType MaterialType;  // Offset: 9 Size: 1
	char pad_10[2];  // Offset: 10 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientQuestDailySetDef Size 88
// Inherited 8 bytes 
class FKtClientQuestDailySetDef : public FTableRowBase
{

 public: 
	struct TMap<struct FString, struct FKtClientQuestDailySeasonDef> questDailySeasonDefMap;  // Offset: 8 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClicked_EditMenu Size 4
class FOnClicked_EditMenu
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientQuestDailyDef Size 88
class FKtClientQuestDailyDef
{

 public: 
	int32_t seasonWeekIdx;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TMap<struct FString, struct FKtClientQuestSetDef> questDefSetMap;  // Offset: 8 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientTrackListDef Size 72
// Inherited 8 bytes 
class FKtClientTrackListDef : public FTableRowBase
{

 public: 
	struct FString LastUpdateDate;  // Offset: 8 Size: 16
	struct TArray<struct FKtClientTrackDef> trackDefVector;  // Offset: 24 Size: 16
	struct FString CustomGameDefaultTrackAlias;  // Offset: 40 Size: 16
	struct FString TimeAttackDefaultTrackAlias;  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_OptionPageWidget.OnClickedAccountUnlinkBtn Size 4
class FOnClickedAccountUnlinkBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KtClientTrackDef Size 352
// Inherited 56 bytes 
class FKtClientTrackDef : public FKtTrackDef
{

 public: 
	struct FText ThemeName;  // Offset: 56 Size: 24
	struct FText TrackName;  // Offset: 80 Size: 24
	struct FText TrackDesc;  // Offset: 104 Size: 24
	struct TSoftObjectPtr<UWorld> TrackLevel;  // Offset: 128 Size: 40
	int32_t SortIndex;  // Offset: 168 Size: 4
	char pad_172[4];  // Offset: 172 Size: 4
	struct TArray<int32_t> DisplayDifficulty;  // Offset: 176 Size: 16
	struct TSoftObjectPtr<UTexture2D> TrackImage;  // Offset: 192 Size: 40
	struct TSoftObjectPtr<UTexture2D> Thumbnail;  // Offset: 232 Size: 40
	struct TSoftObjectPtr<UTexture2D> TrackLoadingImage;  // Offset: 272 Size: 40
	struct TSoftObjectPtr<UMediaPlaylist> TrackMediaPlayList;  // Offset: 312 Size: 40



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartGameUserSettings.GetLatencyType Size 4
class FGetLatencyType
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KdImageRow Size 48
// Inherited 8 bytes 
class FKdImageRow : public FTableRowBase
{

 public: 
	struct TSoftObjectPtr<UTexture2D> InImage;  // Offset: 8 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KdLevelExpProp Size 8
class FKdLevelExpProp
{

 public: 
	int32_t Level;  // Offset: 0 Size: 4
	int32_t Exp;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PremiumChallengePageWidget.OnUpdate_QuestUI Size 1
class FOnUpdate_QuestUI
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInit : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.RacePlayerEquipDesc Size 304
class FRacePlayerEquipDesc
{

 public: 
	enum class EKtItemGrade KartGrade;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FKartDesc KartDesc;  // Offset: 8 Size: 184
	struct FCharacterDesc CharacterDesc;  // Offset: 192 Size: 96
	struct FString liverySignedUrl;  // Offset: 288 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.MainMenuCameraManageComponent.GetCurrentCameraComponent Size 8
class FGetCurrentCameraComponent
{

 public: 
	struct UCameraComponent* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KdTextStyleRow Size 632
// Inherited 8 bytes 
class FKdTextStyleRow : public FTableRowBase
{

 public: 
	struct FTextBlockStyle TextStyle;  // Offset: 8 Size: 624



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AutoFillInsideInfo Size 24
class FAutoFillInsideInfo
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool AutoFillInside : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float AutoFillInsideMin;  // Offset: 4 Size: 4
	char pad_8[16];  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KeyTexture2 Size 16
class FKeyTexture2
{

 public: 
	struct UTexture2D* KeyTexture;  // Offset: 0 Size: 8
	struct UTexture2D* KeyPressTexture;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickConfirmDialogPurchaseCheckBtn Size 4
class FOnClickConfirmDialogPurchaseCheckBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.BarricadeItemSpawnStruct Size 36
class FBarricadeItemSpawnStruct
{

 public: 
	float Distance;  // Offset: 0 Size: 4
	float RightVectorOffset;  // Offset: 4 Size: 4
	float YawOffset;  // Offset: 8 Size: 4
	struct FVector Location;  // Offset: 12 Size: 12
	struct FRotator Rotation;  // Offset: 24 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseBossBananaPatternSet Size 40
class FLicenseBossBananaPatternSet
{

 public: 
	float PatternDelay;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FLicenseBossBananaPattern> NormalPatternSet;  // Offset: 8 Size: 16
	struct TArray<struct FLicenseBossBananaPattern> RagePatternSet;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseBossBananaPatternInst Size 32
class FLicenseBossBananaPatternInst
{

 public: 
	float Distance;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<float> RightOffset;  // Offset: 8 Size: 16
	float Delay;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CommunityLogicComponent.OnGfsFriendSearch Size 16
class FOnGfsFriendSearch
{

 public: 
	struct TArray<struct FAccountPlatformData> accountData;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioMessageData Size 360
class FScenarioMessageData
{

 public: 
	int32_t VisibleWidget;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FText PortraitMessage;  // Offset: 8 Size: 24
	float UpdatePortraitTime;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4
	struct TSoftObjectPtr<UFMODEvent> PortraitTextSound;  // Offset: 40 Size: 40
	struct FText DescriptMessage;  // Offset: 80 Size: 24
	float UpdateDescriptTime;  // Offset: 104 Size: 4
	char pad_108[4];  // Offset: 108 Size: 4
	struct TSoftObjectPtr<UFMODEvent> DescriptTextSound;  // Offset: 112 Size: 40
	struct FScenarioTitleWidgetData TitleData;  // Offset: 152 Size: 48
	struct FScenarioKeyGuideData KeyGuideData;  // Offset: 200 Size: 48
	char pad_248_1 : 7;  // Offset: 248 Size: 1
	bool bEnableKeyTrigger : 1;  // Offset: 248 Size: 1
	char pad_249_1 : 7;  // Offset: 249 Size: 1
	bool bKeyBlackList : 1;  // Offset: 249 Size: 1
	char pad_250[6];  // Offset: 250 Size: 6
	struct TArray<struct FScenarioKeyData> KeyContainer;  // Offset: 256 Size: 16
	char pad_272_1 : 7;  // Offset: 272 Size: 1
	bool bKeyUpBlackList : 1;  // Offset: 272 Size: 1
	char pad_273[7];  // Offset: 273 Size: 7
	struct TArray<struct FScenarioKeyData> KeyUpContainer;  // Offset: 280 Size: 16
	struct TArray<struct FScenarioKeyAccumData> KeyAccumDataContainer;  // Offset: 296 Size: 16
	float DelayTime;  // Offset: 312 Size: 4
	char pad_316_1 : 7;  // Offset: 316 Size: 1
	bool UseGameDeltaTime : 1;  // Offset: 316 Size: 1
	char pad_317[3];  // Offset: 317 Size: 3
	float GameDeltaTime;  // Offset: 320 Size: 4
	char pad_324[4];  // Offset: 324 Size: 4
	struct FScenarioTriggerTarget TriggerContainer;  // Offset: 328 Size: 32



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.PatternTransition Size 40
class FPatternTransition
{

 public: 
	float Ratio;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FString Pattern1;  // Offset: 8 Size: 16
	struct FString Pattern2;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseItemCubeInfo Size 48
class FLicenseItemCubeInfo
{

 public: 
	struct TArray<enum class EItemType> ItemTypeList;  // Offset: 0 Size: 16
	float Distance;  // Offset: 16 Size: 4
	struct FVector Location;  // Offset: 20 Size: 12
	struct FVector RightVector;  // Offset: 32 Size: 12
	char pad_44[4];  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedCancelOnPurchaseConfirmDialog Size 4
class FOnClickedCancelOnPurchaseConfirmDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseBaseUI Size 7
class FLicenseBaseUI
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool rank : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool ItemSlot : 1;  // Offset: 1 Size: 1
	char pad_2_1 : 7;  // Offset: 2 Size: 1
	bool TachoMeter : 1;  // Offset: 2 Size: 1
	char pad_3_1 : 7;  // Offset: 3 Size: 1
	bool lapTime : 1;  // Offset: 3 Size: 1
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool Minimap : 1;  // Offset: 4 Size: 1
	char pad_5_1 : 7;  // Offset: 5 Size: 1
	bool FeedMirror : 1;  // Offset: 5 Size: 1
	char pad_6_1 : 7;  // Offset: 6 Size: 1
	bool RiderNameTag : 1;  // Offset: 6 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseDriftGaugeDef Size 128
class FLicenseDriftGaugeDef
{

 public: 
	enum class ELicenseGaugeChargingType GaugeChargingType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float Distance;  // Offset: 4 Size: 4
	float RightVectorOffset;  // Offset: 8 Size: 4
	float ZOffset;  // Offset: 12 Size: 4
	struct FRotator RotationOffset;  // Offset: 16 Size: 12
	struct FVector GateScale;  // Offset: 28 Size: 12
	float GaugePercent1;  // Offset: 40 Size: 4
	float GaugePercent2;  // Offset: 44 Size: 4
	struct FTransform GateTransform;  // Offset: 48 Size: 48
	struct FVector LeftPosition;  // Offset: 96 Size: 12
	struct FVector RightPosition;  // Offset: 108 Size: 12
	char pad_120[8];  // Offset: 120 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.DriftData Size 40
class FDriftData
{

 public: 
	struct FKey Key;  // Offset: 0 Size: 24
	float KeyDownRaceTime;  // Offset: 24 Size: 4
	float KeyUpRaceTime;  // Offset: 28 Size: 4
	char pad_32[8];  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseDriftTutorialMission Size 16
class FLicenseDriftTutorialMission
{

 public: 
	enum class ELicenseDriftTutorialMissionType missionType;  // Offset: 0 Size: 4
	float DistanceOrTime;  // Offset: 4 Size: 4
	float Time;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool bClear : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.MovieSceneFMODAudioSectionTemplate Size 192
// Inherited 32 bytes 
class FMovieSceneFMODAudioSectionTemplate : public FMovieSceneEvalTemplate
{

 public: 
	struct UMovieSceneFMODAudioSection* AudioSection;  // Offset: 32 Size: 8
	struct FMovieSceneByteChannel ControlKeys;  // Offset: 40 Size: 152



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseItemCubeDesc Size 80
class FLicenseItemCubeDesc
{

 public: 
	int32_t LineIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct AGoItem_Cube* ItemCube;  // Offset: 8 Size: 8
	struct FTransform Transform;  // Offset: 16 Size: 48
	enum class EItemType ItemType;  // Offset: 64 Size: 1
	char pad_65[15];  // Offset: 65 Size: 15



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseJumpPhysicsData Size 96
class FLicenseJumpPhysicsData
{

 public: 
	struct FTransform Transform;  // Offset: 0 Size: 48
	float VelocityMultiplier;  // Offset: 48 Size: 4
	float TimeDelation;  // Offset: 52 Size: 4
	struct TSoftObjectPtr<ULevelSequence> EventSequence;  // Offset: 56 Size: 40



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnPlayerVoiceChatStatus Size 8
class FOnPlayerVoiceChatStatus
{

 public: 
	int32_t InPlayerIndex;  // Offset: 0 Size: 4
	int32_t InVoiceStatus;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_GfsRemoveFriend Size 16
class FDev_GfsRemoveFriend
{

 public: 
	struct FString accountId;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseRocketActorInfo Size 48
class FLicenseRocketActorInfo
{

 public: 
	struct FLinearColor SpawnColor;  // Offset: 0 Size: 16
	struct FText UniqueId;  // Offset: 16 Size: 24
	int32_t TeamIndex;  // Offset: 40 Size: 4
	char pad_44[4];  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseObjectSpawnSplineData Size 192
class FLicenseObjectSpawnSplineData
{

 public: 
	struct FTransform ActorTransform;  // Offset: 0 Size: 48
	struct FSplineCurves SplineCurves;  // Offset: 48 Size: 112
	float Interval;  // Offset: 160 Size: 4
	float ObjectScale;  // Offset: 164 Size: 4
	struct FVector ObjectAddLocation;  // Offset: 168 Size: 12
	struct FRotator ObjectAddRotation;  // Offset: 180 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryWrappingDesc Size 72
class FLiveryWrappingDesc
{

 public: 
	enum class ELiveryWrappingCategory Category;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t IndexInCategory;  // Offset: 4 Size: 4
	struct FLiveryWrappingTransform Transform;  // Offset: 8 Size: 40
	struct TArray<struct FLiveryWrappingGroup> GroupInfos;  // Offset: 48 Size: 16
	int32_t DescIndex;  // Offset: 64 Size: 4
	char pad_68[4];  // Offset: 68 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseNoticeSaveGameData Size 8
class FLicenseNoticeSaveGameData
{

 public: 
	int32_t RaceCount;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bShow : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function KartDrift.FuncLib_Blueprint.IndividualMyColor Size 48
class FIndividualMyColor
{

 public: 
	struct FTeamColor ReturnValue;  // Offset: 0 Size: 48



 // Functions 
 public:
}; 
 
 //Function KartDrift.GameTipLoadingWidget.OnNextTipButtonClicked Size 4
class FOnNextTipButtonClicked
{

 public: 
	int32_t NotUsed;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomGamePageWidget.MoveToLicenseFromTrackDialog Size 4
class FMoveToLicenseFromTrackDialog
{

 public: 
	int32_t RequiredLicenseTypeIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemWaterfly.MulticastNoTarget Size 8
class FMulticastNoTarget
{

 public: 
	struct UItemComponent* User;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseResultData Size 20
class FLicenseResultData
{

 public: 
	int32_t Count;  // Offset: 0 Size: 4
	int32_t IgnoreCount;  // Offset: 4 Size: 4
	float BaseScore;  // Offset: 8 Size: 4
	int32_t Score;  // Offset: 12 Size: 4
	float floatData;  // Offset: 16 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryPaintDesc Size 20
class FLiveryPaintDesc
{

 public: 
	struct FLinearColor GlobalColorOverride;  // Offset: 0 Size: 16
	int32_t IndexInCollection;  // Offset: 16 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.SequenceKartMovementKeys Size 112
class FSequenceKartMovementKeys
{

 public: 
	struct FFrameNumber Frame;  // Offset: 0 Size: 4
	char pad_4[12];  // Offset: 4 Size: 12
	struct FKartRepMovement Movement;  // Offset: 16 Size: 64
	struct FReplicatedKartState State;  // Offset: 80 Size: 16
	float Speed;  // Offset: 96 Size: 4
	float DriftGauge;  // Offset: 100 Size: 4
	float DriftProgress;  // Offset: 104 Size: 4
	char pad_108[4];  // Offset: 108 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ReplicatedKartState Size 16
class FReplicatedKartState
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool Accel : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool Brake : 1;  // Offset: 1 Size: 1
	char pad_2_1 : 7;  // Offset: 2 Size: 1
	bool SteerLeft : 1;  // Offset: 2 Size: 1
	char pad_3_1 : 7;  // Offset: 3 Size: 1
	bool SteerRight : 1;  // Offset: 3 Size: 1
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bDriftKeyPressing : 1;  // Offset: 4 Size: 1
	enum class EBoostKind BoostKind;  // Offset: 5 Size: 1
	char pad_6[2];  // Offset: 6 Size: 2
	float BoostLeft;  // Offset: 8 Size: 4
	enum class EDriveState DriveState;  // Offset: 12 Size: 1
	char pad_13_1 : 7;  // Offset: 13 Size: 1
	bool SlipStream : 1;  // Offset: 13 Size: 1
	char pad_14_1 : 7;  // Offset: 14 Size: 1
	bool draft : 1;  // Offset: 14 Size: 1
	char pad_15[1];  // Offset: 15 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseTargetRankPattern Size 104
class FLicenseTargetRankPattern
{

 public: 
	struct FString StartPattern;  // Offset: 0 Size: 16
	float Duration;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct TMap<struct FString, struct FPatternTransition> PatternMap;  // Offset: 24 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.ApproachWidget.SetActivateApproach Size 1
class FSetActivateApproach
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bActivate : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LicenseTrackSpeedInfo Size 8
class FLicenseTrackSpeedInfo
{

 public: 
	float Distance;  // Offset: 0 Size: 4
	float Speed;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MovieSceneFMODAudioSection.SetStartOffset Size 4
class FSetStartOffset
{

 public: 
	struct FFrameNumber InStartOffset;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryDesignDesc_Ver5 Size 64
class FLiveryDesignDesc_Ver5
{

 public: 
	int32_t KartID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FText Label;  // Offset: 8 Size: 24
	struct TArray<struct FLiveryPaintDesc_Ver2> PaintDesc;  // Offset: 32 Size: 16
	struct TArray<struct FLiveryWrappingArray_Ver3> WrappingDescArray;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.PredictHelper.Predict_wsyoon_ver0 Size 32
class FPredict_wsyoon_ver0
{

 public: 
	struct TArray<float> Inputs;  // Offset: 0 Size: 16
	struct TArray<float> ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryWrappingGroupHeadInfo_Ver3 Size 48
class FLiveryWrappingGroupHeadInfo_Ver3
{

 public: 
	int32_t TailOffset;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bDisabledUnGroup : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3
	struct FLiveryWrappingTransform Transform;  // Offset: 8 Size: 40



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_EmoticonPageWidget.OnEmoticonTouched Size 4
class FOnEmoticonTouched
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryDesignDesc_Ver4 Size 56
class FLiveryDesignDesc_Ver4
{

 public: 
	struct FText Label;  // Offset: 0 Size: 24
	struct TArray<struct FLiveryPaintDesc_Ver2> PaintDesc;  // Offset: 24 Size: 16
	struct TArray<struct FLiveryWrappingArray_Ver3> WrappingDescArray;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryStickerDesc_Ver3 Size 40
class FLiveryStickerDesc_Ver3
{

 public: 
	struct FText Label;  // Offset: 0 Size: 24
	struct TArray<struct FLiveryWrappingDesc_Ver3> WrappingDescArray;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.InfoPageWidget.OnUpdateTagFeed Size 48
class FOnUpdateTagFeed
{

 public: 
	struct TArray<struct FTagData> Tags;  // Offset: 0 Size: 16
	struct TArray<struct FKtRecentActivity> Feeds;  // Offset: 16 Size: 16
	struct FKtRaceCount RaceCount;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryWrappingGroupHeadInfo Size 56
class FLiveryWrappingGroupHeadInfo
{

 public: 
	int32_t TailOffset;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bDisabledUnGroup : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3
	struct FVector2D BackupCenter;  // Offset: 8 Size: 8
	struct FLiveryWrappingTransform Transform;  // Offset: 16 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryDesignDesc_Ver3 Size 64
class FLiveryDesignDesc_Ver3
{

 public: 
	struct FText Label;  // Offset: 0 Size: 24
	struct FLiveryPaintDesc_Ver2 PaintDesc;  // Offset: 24 Size: 20
	char pad_44[4];  // Offset: 44 Size: 4
	struct TArray<struct FLiveryWrappingArray_Ver3> WrappingDescArray;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.StockIdAndSlot Size 16
class FStockIdAndSlot
{

 public: 
	int64_t stockId;  // Offset: 0 Size: 8
	char Slot;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_SideMenuPageWidget.BlockList_OnUnblockUser Size 4
class FBlockList_OnUnblockUser
{

 public: 
	int32_t NotUsed;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClickUnGroupWrappingItem Size 4
class FOnClickUnGroupWrappingItem
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.BuildCaptureWidget.OnComboBoxSelectionChanged_CameraTrackTarget Size 24
class FOnComboBoxSelectionChanged_CameraTrackTarget
{

 public: 
	struct FString SelectedItem;  // Offset: 0 Size: 16
	enum class ESelectInfo SelectionType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioKeyLayoutAnimData Size 36
class FScenarioKeyLayoutAnimData
{

 public: 
	struct FName Key_EmphasizeLoop;  // Offset: 0 Size: 8
	float Key_EmphasizeLoopRate;  // Offset: 8 Size: 4
	struct FName Key_EmphasizeDelay;  // Offset: 12 Size: 8
	struct FName Key_Focus;  // Offset: 20 Size: 8
	struct FName Key_UnFocus;  // Offset: 28 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryWrappingDesc_Ver2 Size 48
class FLiveryWrappingDesc_Ver2
{

 public: 
	enum class ELiveryPaintType KartBodySection;  // Offset: 0 Size: 1
	enum class ELiveryWrappingCategory Category;  // Offset: 1 Size: 1
	char pad_2[2];  // Offset: 2 Size: 2
	int32_t IndexInCategory;  // Offset: 4 Size: 4
	struct FLiveryWrappingTransform Transform;  // Offset: 8 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryDesignDesc_Ver0 Size 56
class FLiveryDesignDesc_Ver0
{

 public: 
	struct FText Label;  // Offset: 0 Size: 24
	struct FLiveryPaintDesc_Ver0 PaintDesc;  // Offset: 24 Size: 16
	struct TArray<struct FLiveryWrappingDesc_Ver0> WrappingDescArray;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.RiderNameChangeDialog.OnClickedCancelBtn Size 4
class FOnClickedCancelBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.PurchaseLevelDialog_OnClickedShowReward Size 4
class FPurchaseLevelDialog_OnClickedShowReward
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_SideMenuPageWidget.BlockList_OnClickedGamerCardButton Size 4
class FBlockList_OnClickedGamerCardButton
{

 public: 
	int32_t NotUsed;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryWrappingDesc_Ver0 Size 48
class FLiveryWrappingDesc_Ver0
{

 public: 
	enum class ELiveryPaintType KartBodySection;  // Offset: 0 Size: 1
	enum class ELiveryWrappingCategory Category;  // Offset: 1 Size: 1
	char pad_2[2];  // Offset: 2 Size: 2
	int32_t IndexInCategory;  // Offset: 4 Size: 4
	struct FLiveryWrappingTransform Transform;  // Offset: 8 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryPaintDesc_Ver0 Size 16
class FLiveryPaintDesc_Ver0
{

 public: 
	struct FLinearColor GlobalColorOverride;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_AssistOptionsAll Size 1
class FDev_AssistOptionsAll
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnable : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnRotateCommitted Size 32
class FOnRotateCommitted
{

 public: 
	struct FText InText;  // Offset: 0 Size: 24
	enum class ETextCommit InCommitMethod;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.SideMenuPageWidget.Main_OnOptionsClicked Size 4
class FMain_OnOptionsClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClicked_DetailEdit Size 4
class FOnClicked_DetailEdit
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicensePageWidget.OnClickedShowMissionInfo Size 4
class FOnClickedShowMissionInfo
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseMissionTitleWidget.OnShowDriftMission Size 1
class FOnShowDriftMission
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bShow : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ItemGuideInfoRow Size 104
// Inherited 8 bytes 
class FItemGuideInfoRow : public FTableRowBase
{

 public: 
	enum class EItemType ItemType;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct FText ItemName;  // Offset: 16 Size: 24
	struct FText ItemDescription;  // Offset: 40 Size: 24
	struct TSoftObjectPtr<UMediaPlaylist> ItemGuidePlaylist;  // Offset: 64 Size: 40



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdProfilerWidget.GetTotalRaceTimeString Size 16
class FGetTotalRaceTimeString
{

 public: 
	struct FString ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.WrappingCollectionItem Size 72
class FWrappingCollectionItem
{

 public: 
	int32_t FileIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FString FilePath;  // Offset: 8 Size: 16
	struct FText StickerName;  // Offset: 24 Size: 24
	enum class EKtItemGrade StickerGrade;  // Offset: 48 Size: 1
	char pad_49_1 : 7;  // Offset: 49 Size: 1
	bool bItemSticker : 1;  // Offset: 49 Size: 1
	char pad_50[6];  // Offset: 50 Size: 6
	struct FString StickerID;  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryMaterialGamut Size 24
class FLiveryMaterialGamut
{

 public: 
	enum class ELiveryPaintGamutTab GamutType;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct TArray<struct FLiveryMaterialParams> MaterialGamutParams;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryMaterialParams Size 24
class FLiveryMaterialParams
{

 public: 
	enum class ELiveryMaterialType MaterialType;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct TArray<struct FLiveryMaterialScalarParam> MaterialScalarParams;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.TickUpdateLiveryInfo Size 80
class FTickUpdateLiveryInfo
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bUpdate : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bEquip : 1;  // Offset: 1 Size: 1
	char pad_2[2];  // Offset: 2 Size: 2
	float RemainTime;  // Offset: 4 Size: 4
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bRefresh : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct FLiveryDesignDesc LiveryDesignDesc;  // Offset: 16 Size: 64



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_KartChangeDialog.OnClickedItem Size 4
class FOnClickedItem
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.EventPageWidget.OnClickedInfoList Size 4
class FOnClickedInfoList
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LoginPageWidget.LinkToNexonArena Size 4
class FLinkToNexonArena
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KeyRebindingLibrary.GetActionKeys Size 24
class FGetActionKeys
{

 public: 
	struct FName ActionName;  // Offset: 0 Size: 8
	struct TArray<struct FKey> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryDesignDesc Size 64
class FLiveryDesignDesc
{

 public: 
	int32_t KartID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FText Label;  // Offset: 8 Size: 24
	struct TArray<struct FLiveryPaintDesc> PaintDesc;  // Offset: 32 Size: 16
	struct TArray<struct FLiveryWrappingArray> WrappingDescArray;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryTextureInfo Size 32
class FLiveryTextureInfo
{

 public: 
	struct UTexture2D* Texture;  // Offset: 0 Size: 8
	char pad_8[24];  // Offset: 8 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_DropFromAir Size 4
class FDev_DropFromAir
{

 public: 
	float Height;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LiveryCaptureInfo Size 144
class FLiveryCaptureInfo
{

 public: 
	enum class ELiveryCaptureType CaptureType;  // Offset: 0 Size: 1
	char pad_1[15];  // Offset: 1 Size: 15
	struct FLiveryDesignDesc LiveryDesign;  // Offset: 16 Size: 64
	struct TArray<struct FString> SVGFileList;  // Offset: 80 Size: 16
	struct TArray<struct FLiveryWrappingTransform> TransformList;  // Offset: 96 Size: 16
	int32_t LayerIndex;  // Offset: 112 Size: 4
	enum class ELiveryPaintType LayerSection;  // Offset: 116 Size: 1
	char pad_117[19];  // Offset: 117 Size: 19
	char pad_136_1 : 7;  // Offset: 136 Size: 1
	bool bVisibleBoundary : 1;  // Offset: 136 Size: 1
	char pad_137_1 : 7;  // Offset: 137 Size: 1
	bool bVisibleLayer : 1;  // Offset: 137 Size: 1
	char pad_138[6];  // Offset: 138 Size: 6



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.StickerStockCacheItem Size 176
class FStickerStockCacheItem
{

 public: 
	struct FStickerStock stock;  // Offset: 0 Size: 120
	char pad_120[56];  // Offset: 120 Size: 56



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.StickerStock Size 120
class FStickerStock
{

 public: 
	int64_t stickerStockId;  // Offset: 0 Size: 8
	struct FString Name;  // Offset: 8 Size: 16
	struct FString accountId;  // Offset: 24 Size: 16
	char Slot;  // Offset: 40 Size: 1
	char grade;  // Offset: 41 Size: 1
	char pad_42[6];  // Offset: 42 Size: 6
	struct FDateTime Time;  // Offset: 48 Size: 8
	int32_t downloads;  // Offset: 56 Size: 4
	int32_t bookmarks;  // Offset: 60 Size: 4
	enum class EStickerRegisterState regState;  // Offset: 64 Size: 1
	enum class EStickerDropReason dropReason;  // Offset: 65 Size: 1
	char pad_66[6];  // Offset: 66 Size: 6
	struct FNullableDateTime block;  // Offset: 72 Size: 16
	struct FStickerStockTagData Tag;  // Offset: 88 Size: 16
	struct FString UniqueId;  // Offset: 104 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.StickerStockTagData Size 16
class FStickerStockTagData
{

 public: 
	struct TArray<int32_t> Data;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LobbyUiDefSeasonInfo Size 20
class FLobbyUiDefSeasonInfo
{

 public: 
	char pad_0[20];  // Offset: 0 Size: 20



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LobbyUiDefModeInfo Size 16
class FLobbyUiDefModeInfo
{

 public: 
	char pad_0[16];  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LoginLogicComponent.OnNeedAccountLinkSelect Size 2
class FOnNeedAccountLinkSelect
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInAllowAccountLinkGuest : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bInMustAccountLink : 1;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LobbyUiDefPartyInfo Size 20
class FLobbyUiDefPartyInfo
{

 public: 
	char pad_0[20];  // Offset: 0 Size: 20



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LobbyUiDefMatchingInfo Size 56
class FLobbyUiDefMatchingInfo
{

 public: 
	char pad_0[56];  // Offset: 0 Size: 56



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LocalChannelParamRow Size 88
// Inherited 8 bytes 
class FLocalChannelParamRow : public FTableRowBase
{

 public: 
	enum class EGameSpeed Speed;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3
	struct FKtKartChannelParam channelParam;  // Offset: 12 Size: 72
	char pad_84[4];  // Offset: 84 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LocalKartBodyParamRow Size 224
// Inherited 8 bytes 
class FLocalKartBodyParamRow : public FTableRowBase
{

 public: 
	struct FKtKartBodyParam bodyParam;  // Offset: 8 Size: 212
	char pad_220[4];  // Offset: 220 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LootBoxReservedEventInfo Size 24
class FLootBoxReservedEventInfo
{

 public: 
	char pad_0[24];  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.TargetAnimInfo Size 48
class FTargetAnimInfo
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bReturnToOrigin : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bUsingCurrentValue : 1;  // Offset: 1 Size: 1
	char pad_2[2];  // Offset: 2 Size: 2
	float Duration;  // Offset: 4 Size: 4
	struct TSoftObjectPtr<UCurveFloat> Curve;  // Offset: 8 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.TargetRotatorAnimInfo Size 72
// Inherited 48 bytes 
class FTargetRotatorAnimInfo : public FTargetAnimInfo
{

 public: 
	struct FRotator Start;  // Offset: 48 Size: 12
	struct FRotator Dest;  // Offset: 60 Size: 12



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedBackOnConfirmListDialog Size 4
class FOnClickedBackOnConfirmListDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.TMIMajorDietModeData Size 36
class FTMIMajorDietModeData
{

 public: 
	char ItemType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FTMIItemModeData ModeData;  // Offset: 4 Size: 32



 // Functions 
 public:
}; 
 
 //Function KartDrift.StickerMarketPageWidget.Sort_Show Size 4
class FSort_Show
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.SquenceInfo Size 80
class FSquenceInfo
{

 public: 
	struct TMap<enum class EPawnCameraType, struct TSoftObjectPtr<ULevelSequence>> SequenceForCameraChanging;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.SVGToolsMeshActor.OnBoundaryAssetLoadComplete Size 80
class FOnBoundaryAssetLoadComplete
{

 public: 
	struct TSet<struct FSoftObjectPath> InAssetPathContainer;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.MajorGameTeamData Size 20
class FMajorGameTeamData
{

 public: 
	int32_t TeamNo;  // Offset: 0 Size: 4
	int32_t Point;  // Offset: 4 Size: 4
	int32_t rank;  // Offset: 8 Size: 4
	int32_t PlayerCount;  // Offset: 12 Size: 4
	int32_t FastestPlayerRank;  // Offset: 16 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_SaveRecord Size 4
class FDev_SaveRecord
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.MajorGamePlayerData Size 208
// Inherited 8 bytes 
class FMajorGamePlayerData : public FSortableGamePlayerData
{

 public: 
	struct FString UniqueIdentifier;  // Offset: 8 Size: 16
	int32_t SlotNo;  // Offset: 24 Size: 4
	int32_t TeamNo;  // Offset: 28 Size: 4
	int32_t rank;  // Offset: 32 Size: 4
	float TotalLapTime;  // Offset: 36 Size: 4
	float BestTotalLapTime;  // Offset: 40 Size: 4
	int32_t KartID;  // Offset: 44 Size: 4
	struct FString KartBodyDesc;  // Offset: 48 Size: 16
	float mileage;  // Offset: 64 Size: 4
	float Progress;  // Offset: 68 Size: 4
	float RemainDistance;  // Offset: 72 Size: 4
	char pad_76_1 : 7;  // Offset: 76 Size: 1
	bool bPlayMissionCleared : 1;  // Offset: 76 Size: 1
	enum class EKtPlatform platform;  // Offset: 77 Size: 1
	char pad_78[2];  // Offset: 78 Size: 2
	struct FKtAccountProfile Profile;  // Offset: 80 Size: 96
	struct FKdLevelExpProp PlayerExp;  // Offset: 176 Size: 8
	struct FKdLevelExpProp kartExp;  // Offset: 184 Size: 8
	enum class EKtItemGrade KartGrade;  // Offset: 192 Size: 1
	char pad_193[3];  // Offset: 193 Size: 3
	float DisconnectedTime;  // Offset: 196 Size: 4
	float AverageKph;  // Offset: 200 Size: 4
	char pad_204[4];  // Offset: 204 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceRankMulticastHelperComponent.ClientRelayOnRetire Size 16
class FClientRelayOnRetire
{

 public: 
	struct UObject* RelayTarget;  // Offset: 0 Size: 8
	struct UObject* KdPawn;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.MailPageWidget.OnCloseReceviedFailPopup Size 4
class FOnCloseReceviedFailPopup
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.MajorPersonalResultInitializer Size 40
class FMajorPersonalResultInitializer
{

 public: 
	enum class ERaceMode raceMode;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FString TieResolverUniqueIdentifier;  // Offset: 8 Size: 16
	int32_t TieResolverTeamNo;  // Offset: 24 Size: 4
	char pad_28[12];  // Offset: 28 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.MaterialFxSeqIndex Size 16
class FMaterialFxSeqIndex
{

 public: 
	struct UMaterialInstanceDynamic* Material;  // Offset: 0 Size: 8
	char pad_8[8];  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.CardData Size 48
// Inherited 8 bytes 
class FCardData : public FTableRowBase
{

 public: 
	struct TSoftObjectPtr<UTexture2D> CardTexture;  // Offset: 8 Size: 40



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyLogicComponent.SetLucci Size 4
class FSetLucci
{

 public: 
	int32_t LucciCount;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.SideMenuPageWidget.TermsAndConditions_OnProtectButtonClicked Size 4
class FTermsAndConditions_OnProtectButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.TeamColor Size 48
class FTeamColor
{

 public: 
	struct FLinearColor TextColor;  // Offset: 0 Size: 16
	struct FLinearColor Gradation;  // Offset: 16 Size: 16
	struct FLinearColor TextOutline;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.TimeAttackPageWidget.OnClickedStartRankerChallengeButton Size 4
class FOnClickedStartRankerChallengeButton
{

 public: 
	int32_t nIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartGameUserSettings.GetAutoPartyJoinReject Size 1
class FGetAutoPartyJoinReject
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.CardInfo Size 16
class FCardInfo
{

 public: 
	struct UButtonTemplate* CardWidget;  // Offset: 0 Size: 8
	int32_t CardGroup;  // Offset: 8 Size: 4
	enum class ECardState CardState;  // Offset: 12 Size: 1
	enum class ECardPairCheck CardPairCheck;  // Offset: 13 Size: 1
	char pad_14[2];  // Offset: 14 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.PhysXDriftControl Size 16
class FPhysXDriftControl
{

 public: 
	char pad_0[16];  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KeyInfo Size 72
class FKeyInfo
{

 public: 
	struct FName ActionName;  // Offset: 0 Size: 8
	struct FName AxisName;  // Offset: 8 Size: 8
	float AxisValue;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct FKey Key_PC;  // Offset: 24 Size: 24
	struct FKey Key_Gamepad;  // Offset: 48 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartGameUserSettings.GetCultureIndex Size 4
class FGetCultureIndex
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryColorRowEntryObject.OnColorClickButton Size 4
class FOnColorClickButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClickDeleteMyStickerFromShape Size 4
class FOnClickDeleteMyStickerFromShape
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MaterialFxComponent.PlayFX Size 56
class FPlayFX
{

 public: 
	struct FString FxTypeString;  // Offset: 0 Size: 16
	float PlayTime;  // Offset: 16 Size: 4
	float StartFadeTime;  // Offset: 20 Size: 4
	float EndFadeTime;  // Offset: 24 Size: 4
	float CycleTime;  // Offset: 28 Size: 4
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool bLoop : 1;  // Offset: 32 Size: 1
	char pad_33_1 : 7;  // Offset: 33 Size: 1
	bool bReverse : 1;  // Offset: 33 Size: 1
	char pad_34[6];  // Offset: 34 Size: 6
	struct UCurveFloat* WeightCurve;  // Offset: 40 Size: 8
	struct UCurveFloat* CycleCurve;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.OverlayMaterialCurveData Size 16
class FOverlayMaterialCurveData
{

 public: 
	struct FName CurveName;  // Offset: 0 Size: 8
	struct FName ParameterName;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AIPathDataList Size 16
class FAIPathDataList
{

 public: 
	struct TArray<struct FAIPathData> AIPathData;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartMovementReplication.ServerCallUpdateState Size 16
class FServerCallUpdateState
{

 public: 
	struct FReplicatedKartState InState;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.AIPathData Size 40
class FAIPathData
{

 public: 
	struct TArray<struct FVector> Location;  // Offset: 0 Size: 16
	int32_t Split_Start_Index;  // Offset: 16 Size: 4
	int32_t Split_End_Index;  // Offset: 20 Size: 4
	struct TArray<int32_t> BoosterItemUseIndexList;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.PersonalResultPlayerDesc Size 64
// Inherited 8 bytes 
class FPersonalResultPlayerDesc : public FSortableGamePlayerData
{

 public: 
	int32_t rank;  // Offset: 8 Size: 4
	enum class ERaceTeamType Team;  // Offset: 12 Size: 1
	enum class EKtAccountPlatform platform;  // Offset: 13 Size: 1
	char pad_14[2];  // Offset: 14 Size: 2
	struct FString riderName;  // Offset: 16 Size: 16
	struct FString UniqueIdentifier;  // Offset: 32 Size: 16
	float lapTime;  // Offset: 48 Size: 4
	float RemainDistance;  // Offset: 52 Size: 4
	float DisconnectedTime;  // Offset: 56 Size: 4
	char pad_60[4];  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.CloseAutoConfirmItemsPopup Size 4
class FCloseAutoConfirmItemsPopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.PlayerGameSystemSettings Size 12
class FPlayerGameSystemSettings
{

 public: 
	uint32_t FloorEffect;  // Offset: 0 Size: 4
	uint32_t BoostEffect;  // Offset: 4 Size: 4
	uint32_t FeedMirror;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClicked_ToolTip Size 4
class FOnClicked_ToolTip
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.SpeedTeamGameState.OnAsyncLoadCompleted Size 80
class FOnAsyncLoadCompleted
{

 public: 
	struct TSet<struct FSoftObjectPath> InAssetPathContainer;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.PawnStateMulticastHelperComponent.ClientRelayRaceGameResult Size 80
class FClientRelayRaceGameResult
{

 public: 
	struct UObject* RelayTarget;  // Offset: 0 Size: 8
	struct FRaceGameResult Result;  // Offset: 8 Size: 72



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.PlayerGraphicSettings Size 128
class FPlayerGraphicSettings
{

 public: 
	float ScreenPercentage;  // Offset: 0 Size: 4
	uint32_t BoosterEffectQuality;  // Offset: 4 Size: 4
	uint32_t TextureQuality;  // Offset: 8 Size: 4
	uint32_t TextureFilteringQuality;  // Offset: 12 Size: 4
	uint32_t ShadowQuality;  // Offset: 16 Size: 4
	uint32_t ShadowDistance;  // Offset: 20 Size: 4
	uint32_t EffectQuality;  // Offset: 24 Size: 4
	uint32_t ShaderQuality;  // Offset: 28 Size: 4
	uint32_t AntiAliasingType;  // Offset: 32 Size: 4
	uint32_t AntiAliasingQuality;  // Offset: 36 Size: 4
	uint32_t MotionBlurQuality;  // Offset: 40 Size: 4
	uint32_t SSRQuality;  // Offset: 44 Size: 4
	uint32_t SSAOQuality;  // Offset: 48 Size: 4
	uint32_t ReflectionQuality;  // Offset: 52 Size: 4
	uint32_t DetailMode;  // Offset: 56 Size: 4
	uint32_t ReflexMode;  // Offset: 60 Size: 4
	float Gamma;  // Offset: 64 Size: 4
	float Contrast;  // Offset: 68 Size: 4
	float Brightness;  // Offset: 72 Size: 4
	float SafeZone;  // Offset: 76 Size: 4
	float OutGameFrameRateLimit;  // Offset: 80 Size: 4
	float InGameFrameRateLimit;  // Offset: 84 Size: 4
	uint32_t VolumetricFogQualitiy;  // Offset: 88 Size: 4
	int32_t MobileMaterialQuality;  // Offset: 92 Size: 4
	int32_t MobileDetail;  // Offset: 96 Size: 4
	char pad_100_1 : 7;  // Offset: 100 Size: 1
	bool bUseMobileShadow : 1;  // Offset: 100 Size: 1
	char pad_101_1 : 7;  // Offset: 101 Size: 1
	bool bUseMobileAA : 1;  // Offset: 101 Size: 1
	char pad_102_1 : 7;  // Offset: 102 Size: 1
	bool bUseLowPawnLOD : 1;  // Offset: 102 Size: 1
	char pad_103[1];  // Offset: 103 Size: 1
	uint32_t HBAO;  // Offset: 104 Size: 4
	uint32_t VolumetricLight;  // Offset: 108 Size: 4
	uint32_t AutoExposure;  // Offset: 112 Size: 4
	uint32_t Fog;  // Offset: 116 Size: 4
	uint32_t LensFlare;  // Offset: 120 Size: 4
	uint32_t Bloom;  // Offset: 124 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.SequenceLevelDataTable Size 48
// Inherited 8 bytes 
class FSequenceLevelDataTable : public FTableRowBase
{

 public: 
	struct TSoftObjectPtr<UWorld> TrackLevel;  // Offset: 8 Size: 40



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnRotateTextChanged Size 24
class FOnRotateTextChanged
{

 public: 
	struct FText InText;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.ControlDirectingWidget.OnComboBoxSelection_MajorIntroSequence Size 24
class FOnComboBoxSelection_MajorIntroSequence
{

 public: 
	struct FString SelectedItem;  // Offset: 0 Size: 16
	enum class ESelectInfo SelectionType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryEditPageWidget.OnClickFocusChangeReportPopup Size 4
class FOnClickFocusChangeReportPopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.SkillScoreData Size 68
class FSkillScoreData
{

 public: 
	char pad_0[68];  // Offset: 0 Size: 68



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.NullOptionUpdate Size 16
class FNullOptionUpdate
{

 public: 
	struct UUserWidget* Widget;  // Offset: 0 Size: 8
	int32_t InParam;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ReplayMetaData Size 80
class FReplayMetaData
{

 public: 
	char pad_0[80];  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.UpdateRestTimeInItemList Size 8
class FUpdateRestTimeInItemList
{

 public: 
	struct FDateTime ServerTime;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.RaceSaveGameLatestPtr Size 8
class FRaceSaveGameLatestPtr
{

 public: 
	struct URaceSaveGameBase* LatestSaveGame;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryEditPageWidget.OnClicked_DetailView Size 4
class FOnClicked_DetailView
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CommunityPageWidget.ResetCustomInviteButton Size 16
class FResetCustomInviteButton
{

 public: 
	struct FString InAccountId;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioKey Size 12
class FScenarioKey
{

 public: 
	struct FName AxisOrActionName;  // Offset: 0 Size: 8
	float AxisValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseScoreInstanceWidget.AddScore Size 8
class FAddScore
{

 public: 
	int32_t Score;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bSuccess : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function KartDrift.SideMenuPageWidget.Main_OnBlockListClicked Size 4
class FMain_OnBlockListClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.PawnRecordData Size 368
class FPawnRecordData
{

 public: 
	struct TArray<struct FMovementRecordData> MovementRecordDataArray;  // Offset: 0 Size: 16
	struct FString StartSpotName;  // Offset: 16 Size: 16
	struct FString riderName;  // Offset: 32 Size: 16
	struct FRacePlayerEquipDesc EquipDesc;  // Offset: 48 Size: 304
	float TotalLapTime;  // Offset: 352 Size: 4
	int32_t rank;  // Offset: 356 Size: 4
	int32_t kartLevel;  // Offset: 360 Size: 4
	enum class EKtAccountPlatform AccountPlatform;  // Offset: 364 Size: 1
	enum class EKtPlatform machinePlatform;  // Offset: 365 Size: 1
	char pad_366[2];  // Offset: 366 Size: 2



 // Functions 
 public:
}; 
 
 //Function KartDrift.BuildCaptureLightListItemWidget.OnComboBoxSelectionChanged Size 24
class FOnComboBoxSelectionChanged
{

 public: 
	struct FString SelectedItem;  // Offset: 0 Size: 16
	enum class ESelectInfo SelectionType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.MovementRecordData Size 80
class FMovementRecordData
{

 public: 
	struct FKartRepMovement Movement;  // Offset: 0 Size: 64
	struct FReplicatedKartState State;  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.RacingPassRewardItemDef Size 32
class FRacingPassRewardItemDef
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bPrimeReward : 1;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FString ItemId;  // Offset: 8 Size: 16
	int32_t itemCount;  // Offset: 24 Size: 4
	int32_t ItemDuration;  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PhysXKartAnimInstance.StopMontage Size 8
class FStopMontage
{

 public: 
	enum class EKartPlayingMontageState InState;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float BlendOutTime;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.RoatableCameraViewTransition Size 68
class FRoatableCameraViewTransition
{

 public: 
	enum class EViewTargetBlendFunction BlendFunction;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float BlendTime;  // Offset: 4 Size: 4
	float BlendExp;  // Offset: 8 Size: 4
	struct FVector TargetLocation;  // Offset: 12 Size: 12
	char pad_24[44];  // Offset: 24 Size: 44



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.RuleData Size 24
class FRuleData
{

 public: 
	char pad_0[24];  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioCollectData Size 12
class FScenarioCollectData
{

 public: 
	float ClearTime;  // Offset: 0 Size: 4
	int32_t BoosterCounterByDriftGauge;  // Offset: 4 Size: 4
	int32_t ValidDriftCounter;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ActiveScenarioState Size 24
class FActiveScenarioState
{

 public: 
	enum class EScenarioStateType StateType;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FString scenarioID;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.InfoPageWidget.OnUpdateProfile Size 328
class FOnUpdateProfile
{

 public: 
	struct FInfoPageData_Profile Profile;  // Offset: 0 Size: 328



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LiveryEditPageWidget.OnClickedManagingAddNew Size 4
class FOnClickedManagingAddNew
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioActions Size 64
class FScenarioActions
{

 public: 
	struct FString CategoryID;  // Offset: 0 Size: 16
	struct FString GroupID;  // Offset: 16 Size: 16
	struct FString scenarioID;  // Offset: 32 Size: 16
	struct TArray<struct AActor*> ActionContainer;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_ScenarioGroupStart Size 16
class FDev_ScenarioGroupStart
{

 public: 
	struct FString InGroupID;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_SteamPurchaseCancel Size 16
class FDev_SteamPurchaseCancel
{

 public: 
	struct FString orderId;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioRegistedConditionData Size 16
class FScenarioRegistedConditionData
{

 public: 
	struct TArray<struct UScenarioConditionItemWidget*> WidgetContainer;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioNotifyParameter Size 128
class FScenarioNotifyParameter
{

 public: 
	enum class EScenarioStateType NotifyType;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct TArray<struct FString> ClearConditionContainer;  // Offset: 8 Size: 16
	struct TArray<struct FString> ScenarioActivateContainer;  // Offset: 24 Size: 16
	char pad_40[88];  // Offset: 40 Size: 88



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseRocketQuestWidget.OnQuestSuccess Size 8
class FOnQuestSuccess
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bSuccess : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t Index;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.RemoveMenuPopup Size 4
class FRemoveMenuPopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioTriggerTarget Size 32
class FScenarioTriggerTarget
{

 public: 
	struct TArray<struct AActor*> ActivateContainer;  // Offset: 0 Size: 16
	struct TArray<struct AActor*> DeactivateContainer;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnSaveTextChanged Size 24
class FOnSaveTextChanged
{

 public: 
	struct FText InText;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioMessageHUDWidgetDataGroup Size 24
class FScenarioMessageHUDWidgetDataGroup
{

 public: 
	struct TArray<struct FScenarioMessageHUDWidgetData> DataContainer;  // Offset: 0 Size: 16
	int32_t Priority;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioKeyAccumData Size 56
class FScenarioKeyAccumData
{

 public: 
	struct TArray<struct FScenarioKeyData> KeyContainer;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bUseRemoveCondition : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7
	struct FText KeyAccumDescript;  // Offset: 24 Size: 24
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool bGamepadData : 1;  // Offset: 48 Size: 1
	char pad_49[7];  // Offset: 49 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.OnChangeFocusOptionButton Size 16
class FOnChangeFocusOptionButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UUserWidget* Widget;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.ChattingPageWidget.OnTTSTextChanged Size 24
class FOnTTSTextChanged
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioKeyGuideData Size 48
class FScenarioKeyGuideData
{

 public: 
	struct TArray<struct FScenarioKeyData> KeyDataContainer;  // Offset: 0 Size: 16
	float EmphasizeDelayBegin;  // Offset: 16 Size: 4
	float EmphasizeDelayEnd;  // Offset: 20 Size: 4
	struct FText KeyLayoutDescript;  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.ChangeLiveryLayerScale Size 4
class FChangeLiveryLayerScale
{

 public: 
	float InDelta;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioTitleWidgetData Size 48
class FScenarioTitleWidgetData
{

 public: 
	struct FText Title;  // Offset: 0 Size: 24
	struct FText TitleDescript;  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.ApproachArrowWidget.SetTeam Size 4
class FSetTeam
{

 public: 
	int32_t NewTeam;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.AllLevelAutoDriveMain.OnStartAutoDriveClicked Size 4
class FOnStartAutoDriveClicked
{

 public: 
	int32_t NotUsed;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioDescriptMessageWidgetData Size 96
class FScenarioDescriptMessageWidgetData
{

 public: 
	struct TSoftObjectPtr<UFMODEvent> TextSound;  // Offset: 0 Size: 40
	struct FText Speaker;  // Offset: 40 Size: 24
	struct FText Descript;  // Offset: 64 Size: 24
	float UpdateTickTime;  // Offset: 88 Size: 4
	char pad_92[4];  // Offset: 92 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomGamePageWidget.OnOpenSocialDialog Size 4
class FOnOpenSocialDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioPortraitMessageWidgetData Size 80
class FScenarioPortraitMessageWidgetData
{

 public: 
	struct UObject* Image;  // Offset: 0 Size: 8
	struct TSoftObjectPtr<UFMODEvent> TextSound;  // Offset: 8 Size: 40
	struct FText Descript;  // Offset: 48 Size: 24
	float UpdateTickTime;  // Offset: 72 Size: 4
	char pad_76[4];  // Offset: 76 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ConfirmDialogInfo Size 208
class FConfirmDialogInfo
{

 public: 
	char pad_0[208];  // Offset: 0 Size: 208



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioIdentifier Size 48
class FScenarioIdentifier
{

 public: 
	struct FString CategoryID;  // Offset: 0 Size: 16
	struct FString GroupID;  // Offset: 16 Size: 16
	struct FString scenarioID;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnSizeHeightCommitted Size 32
class FOnSizeHeightCommitted
{

 public: 
	struct FText InText;  // Offset: 0 Size: 24
	enum class ETextCommit InCommitMethod;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.CommunityPageWidget.ResetAddFriendButton Size 16
class FResetAddFriendButton
{

 public: 
	struct FString InAccountId;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioPawnEvent Size 48
class FScenarioPawnEvent
{

 public: 
	char pad_0[48];  // Offset: 0 Size: 48



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_LobbyPageWidget.OnPressedRotatePawnButton Size 4
class FOnPressedRotatePawnButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioPlayerCondition Size 24
class FScenarioPlayerCondition
{

 public: 
	struct AScenarioTriggerByCondition* ConditionActor;  // Offset: 0 Size: 8
	struct TArray<struct FScenarioCondition> ConditionContainer;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartGameUserSettings.SetLatencyType Size 4
class FSetLatencyType
{

 public: 
	int32_t InLatencyType;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioTable Size 72
// Inherited 8 bytes 
class FScenarioTable : public FTableRowBase
{

 public: 
	struct FString CategoryID;  // Offset: 8 Size: 16
	struct TSoftObjectPtr<UDataTable> CategoryAsset;  // Offset: 24 Size: 40
	struct UDataTable* CategoryData;  // Offset: 64 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ScenarioGroupTable Size 56
// Inherited 8 bytes 
class FScenarioGroupTable : public FTableRowBase
{

 public: 
	struct FName PlayerStartName;  // Offset: 8 Size: 8
	struct FName ResetPlayerStartName;  // Offset: 16 Size: 8
	struct FString NextGroupID;  // Offset: 24 Size: 16
	struct TArray<struct FString> ScenarioContainer;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayControlPageWidget.OpenReplayController Size 4
class FOpenReplayController
{

 public: 
	int32_t DummyIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_OptionPageWidget.OnCustomizableWidgetSelected Size 8
class FOnCustomizableWidgetSelected
{

 public: 
	struct UUserWidget* Widget;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.MaterialInfoArray Size 16
class FMaterialInfoArray
{

 public: 
	struct TArray<struct FMaterialInfo> MaterialInfoArray;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_SetRacerToAICheckTick Size 8
class FDev_SetRacerToAICheckTick
{

 public: 
	int64_t InTick;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnPosXCommitted Size 32
class FOnPosXCommitted
{

 public: 
	struct FText InText;  // Offset: 0 Size: 24
	enum class ETextCommit InCommitMethod;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseReservedItemComponent.OnUseItem Size 16
class FOnUseItem
{

 public: 
	struct APawn* InPawn;  // Offset: 0 Size: 8
	enum class EItemType InType;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.MaterialInfo Size 16
class FMaterialInfo
{

 public: 
	struct TWeakObjectPtr<UTextureRenderTarget2D> TextureRenderTarget;  // Offset: 0 Size: 8
	struct UMaterialInstanceDynamic* MaterialInstance;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KdServerListUrlConfig Size 32
class FKdServerListUrlConfig
{

 public: 
	struct FString platform;  // Offset: 0 Size: 16
	struct FString URL;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.DevCheatWidget.OnComboBoxSelectionChanged_SkidMark Size 32
class FOnComboBoxSelectionChanged_SkidMark
{

 public: 
	struct FString InSelectedItem;  // Offset: 0 Size: 16
	struct FString InSelectedItemKey;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_TrackChangeDialog.OnBackButtonClicked Size 4
class FOnBackButtonClicked
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KdServerAddrConfig Size 112
class FKdServerAddrConfig
{

 public: 
	struct FString Name;  // Offset: 0 Size: 16
	struct FString ServerSet;  // Offset: 16 Size: 16
	struct FString desc;  // Offset: 32 Size: 16
	struct FString Addr;  // Offset: 48 Size: 16
	int32_t Port;  // Offset: 64 Size: 4
	char pad_68[4];  // Offset: 68 Size: 4
	struct FString KrpcAddr;  // Offset: 72 Size: 16
	int32_t KrpcPort;  // Offset: 88 Size: 4
	char pad_92[4];  // Offset: 92 Size: 4
	struct FString HttpUrl;  // Offset: 96 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_GamerCard Size 16
class FDev_GamerCard
{

 public: 
	struct FString userID;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.SessionApiPendingRequest Size 24
class FSessionApiPendingRequest
{

 public: 
	struct UPqPacket* Packet;  // Offset: 0 Size: 8
	char pad_8[16];  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_RacingPassPageWidget.OnClicked_PurchaseRacingPassComplete Size 4
class FOnClicked_PurchaseRacingPassComplete
{

 public: 
	int32_t rewardIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ShadowQuestInfo Size 136
class FShadowQuestInfo
{

 public: 
	struct FRaceSaveGameLatestPtr ReplayFile;  // Offset: 0 Size: 8
	char pad_8[128];  // Offset: 8 Size: 128



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.SendKtCommand Size 16
class FSendKtCommand
{

 public: 
	struct FString Cmd;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ShopStockItemInfo Size 24
class FShopStockItemInfo
{

 public: 
	char pad_0[24];  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.PriceInfo Size 72
class FPriceInfo
{

 public: 
	struct TSoftObjectPtr<UPaperSprite> ImageObject;  // Offset: 0 Size: 40
	struct FLinearColor TextColor;  // Offset: 40 Size: 16
	struct FLinearColor MinusTextColor;  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomGamePageWidget.OnClickedChangePresetButton Size 4
class FOnClickedChangePresetButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ShopStockItemProducts Size 40
class FShopStockItemProducts
{

 public: 
	struct TArray<struct FKtShopStock> Products;  // Offset: 0 Size: 16
	char pad_16[24];  // Offset: 16 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnPaintColorRowItemSelect Size 8
class FOnPaintColorRowItemSelect
{

 public: 
	struct UObject* ItemObj;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.NoticeURLRow Size 72
// Inherited 8 bytes 
class FNoticeURLRow : public FTableRowBase
{

 public: 
	struct FString TermsOfService;  // Offset: 8 Size: 16
	struct FString PrivacyPolicy;  // Offset: 24 Size: 16
	struct FString Notice;  // Offset: 40 Size: 16
	struct FString InspectionNotice;  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.AccountADTEvent.OnPrGetADTEventReward Size 16
class FOnPrGetADTEventReward
{

 public: 
	struct FPrResult Result;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UPrPacket* ReceivedPacket;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.LoadSoundInfo Size 128
class FLoadSoundInfo
{

 public: 
	int8_t SoundType;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	int64_t ID;  // Offset: 8 Size: 8
	int64_t SoundId;  // Offset: 16 Size: 8
	struct TSoftObjectPtr<UFMODEvent> Sound;  // Offset: 24 Size: 40
	struct FString SoundName;  // Offset: 64 Size: 16
	struct FVector Location;  // Offset: 80 Size: 12
	struct FRotator Rotation;  // Offset: 92 Size: 12
	struct USceneComponent* AttachToComponent;  // Offset: 104 Size: 8
	struct FName AttachPointName;  // Offset: 112 Size: 8
	enum class EAttachLocation AttachLocationType;  // Offset: 120 Size: 1
	char pad_121[3];  // Offset: 121 Size: 3
	uint32_t Flag;  // Offset: 124 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.OnFocusOption Size 16
class FOnFocusOption
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UUserWidget* Widget;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.StickerMarketHotItems Size 56
class FStickerMarketHotItems
{

 public: 
	struct ULiveryMarketSearchStream* Search;  // Offset: 0 Size: 8
	struct TArray<struct FStickerStock> Stocks;  // Offset: 8 Size: 16
	char pad_24[8];  // Offset: 24 Size: 8
	struct TArray<struct UStickerImageCache*> Caches;  // Offset: 32 Size: 16
	char pad_48[8];  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.StickerReport Size 56
class FStickerReport
{

 public: 
	int64_t reportId;  // Offset: 0 Size: 8
	int64_t stickerStockId;  // Offset: 8 Size: 8
	struct FDateTime reportDate;  // Offset: 16 Size: 8
	struct FString accountId;  // Offset: 24 Size: 16
	struct FString Category;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemComponent.Server_ReduceTimer Size 8
class FServer_ReduceTimer
{

 public: 
	UActorComponent* ComponentClass;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.BuildCaptureWidget.OnSpinBoxValueChanged_LightRadius Size 4
class FOnSpinBoxValueChanged_LightRadius
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdService.CreateMainAccount Size 8
class FCreateMainAccount
{

 public: 
	struct UKdAccount* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.InputLimitValue Size 16
class FInputLimitValue
{

 public: 
	float YawMin;  // Offset: 0 Size: 4
	float YawMax;  // Offset: 4 Size: 4
	float InputYawScale;  // Offset: 8 Size: 4
	float BaseTurnRate;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MajorResultWidget.OnButtonReleased_DetailInfo Size 4
class FOnButtonReleased_DetailInfo
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.StudioSetting Size 88
class FStudioSetting
{

 public: 
	char pad_0[88];  // Offset: 0 Size: 88



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.StudioDef Size 184
class FStudioDef
{

 public: 
	char pad_0[184];  // Offset: 0 Size: 184



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.TierResultGppCountingInfo Size 28
class FTierResultGppCountingInfo
{

 public: 
	float MinGpp;  // Offset: 0 Size: 4
	float MaxGpp;  // Offset: 4 Size: 4
	float BeginGpp;  // Offset: 8 Size: 4
	float EndGpp;  // Offset: 12 Size: 4
	float Duration;  // Offset: 16 Size: 4
	float PostDelay;  // Offset: 20 Size: 4
	float ElapsedTime;  // Offset: 24 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KeyInputInfoArray Size 16
class FKeyInputInfoArray
{

 public: 
	struct TArray<struct FKeyInputInfo> Array;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.GameplayKeyGuide.BoostGuide Size 1
class FBoostGuide
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bActivate : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.KeyInputInfo Size 24
class FKeyInputInfo
{

 public: 
	float Tick;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FString Key;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.RacingPassPageWidget.PurchaseRacingPassDialog_OnClickedPremiumPass Size 4
class FPurchaseRacingPassDialog_OnClickedPremiumPass
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.RecordUserCollisionInfo Size 56
class FRecordUserCollisionInfo
{

 public: 
	struct FString TargetNickName;  // Offset: 0 Size: 16
	struct FString TargetNpsn;  // Offset: 16 Size: 16
	struct FString TargetEnemyFlag;  // Offset: 32 Size: 16
	int32_t RecordUserCollision;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyLogicComponent.OnUpdatedPartyInviteStatus Size 1
class FOnUpdatedPartyInviteStatus
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bRefused : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_CommunityPageWidget.InviteMenu_Find_EditBoxTextChanged Size 24
class FInviteMenu_Find_EditBoxTextChanged
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.TMIItemEventData Size 96
class FTMIItemEventData
{

 public: 
	enum class ETMIItemCase EventType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float Tick;  // Offset: 4 Size: 4
	char ItemId;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct FString TargetNickName;  // Offset: 16 Size: 16
	struct FString TargetNpsn;  // Offset: 32 Size: 16
	struct FString TargetEnemyFlag;  // Offset: 48 Size: 16
	struct FString status;  // Offset: 64 Size: 16
	float LocX;  // Offset: 80 Size: 4
	float LocY;  // Offset: 84 Size: 4
	float LocZ;  // Offset: 88 Size: 4
	char rank;  // Offset: 92 Size: 1
	char Lap;  // Offset: 93 Size: 1
	char pad_94[2];  // Offset: 94 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.TMIRaceData Size 24
class FTMIRaceData
{

 public: 
	float LocX;  // Offset: 0 Size: 4
	float LocY;  // Offset: 4 Size: 4
	float LocZ;  // Offset: 8 Size: 4
	float Speed;  // Offset: 12 Size: 4
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bDrift : 1;  // Offset: 16 Size: 1
	char BoostKind;  // Offset: 17 Size: 1
	char rank;  // Offset: 18 Size: 1
	char Laps;  // Offset: 19 Size: 1
	float Tick;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartGameUserSettings.GetReflexAvailable Size 1
class FGetReflexAvailable
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.ToastTypeIconRow Size 56
// Inherited 8 bytes 
class FToastTypeIconRow : public FTableRowBase
{

 public: 
	enum class EToastType ToastType;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct TSoftObjectPtr<UPaperSprite> iconImage;  // Offset: 16 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.TrackEnvironment Size 64
// Inherited 8 bytes 
class FTrackEnvironment : public FTableRowBase
{

 public: 
	enum class ETrackEnvironmentType Type;  // Offset: 8 Size: 1
	char pad_9_1 : 7;  // Offset: 9 Size: 1
	bool bUseSkydome : 1;  // Offset: 9 Size: 1
	char pad_10[6];  // Offset: 10 Size: 6
	struct TSoftClassPtr<UObject> SpawnSkyDome;  // Offset: 16 Size: 40
	float MobileLightIntensity;  // Offset: 56 Size: 4
	char pad_60[4];  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.StickerMarketPageWidget.Widget_SearchPopup_OnTagSelectCheck Size 4
class FWidget_SearchPopup_OnTagSelectCheck
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.BuildCaptureWidget.OnSpinBoxValueChanged_CameraMoveSpeed Size 4
class FOnSpinBoxValueChanged_CameraMoveSpeed
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KartDrift.GimmickDoorData Size 12
class FGimmickDoorData
{

 public: 
	char pad_0[12];  // Offset: 0 Size: 12



 // Functions 
 public:
}; 
 
 //Function KartDrift.AccountEmoticon.OnCreateEmoticon Size 8
class FOnCreateEmoticon
{

 public: 
	struct UServerPacket* Packet;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.OnUnFocusOption Size 16
class FOnUnFocusOption
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UUserWidget* Widget;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_ListAllEvent Size 16
class FDev_ListAllEvent
{

 public: 
	struct FString seasonId;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.AccountADTEvent.OnPrGetADTEventAllReward Size 16
class FOnPrGetADTEventAllReward
{

 public: 
	struct FPrResult Result;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UPrPacket* ReceivedPacket;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.AccountMatch.RegisterMatch Size 56
class FRegisterMatch
{

 public: 
	struct TArray<enum class ERaceMode> GameType;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bInExclusive : 1;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3
	int32_t InMatchTargetType;  // Offset: 20 Size: 4
	struct TArray<int32_t> InTrackGroups;  // Offset: 24 Size: 16
	struct FString InGrandPrixId;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ModeSelectPageWidget.EnterKeyDialog_OnTextChanged Size 24
class FEnterKeyDialog_OnTextChanged
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.OnClickedLicenseMoveButton Size 4
class FOnClickedLicenseMoveButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.AchievementPageWidget.OnClickedAchievementCardDetailDialogBackButton Size 4
class FOnClickedAchievementCardDetailDialogBackButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClicked_Copy Size 4
class FOnClicked_Copy
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.SetWindowVisibility Size 1
class FSetWindowVisibility
{

 public: 
	enum class EWindowVisibility InVisibility;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.AchievementSummaryDialog.OnClickedSummaryTypeButton Size 4
class FOnClickedSummaryTypeButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseTargetActorSpawnComponent.OnAffectedBy Size 16
class FOnAffectedBy
{

 public: 
	struct AActor* Owner;  // Offset: 0 Size: 8
	struct AItem* Item;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdGameState.Multicast_Logout Size 8
class FMulticast_Logout
{

 public: 
	struct APawn* InPawn;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LiveryStickerPageWidget.OnPressedRotateR Size 4
class FOnPressedRotateR
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicensePageWidget.OnFocusedMission Size 4
class FOnFocusedMission
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdGameState.Multicast_NotifyServerTime Size 4
class FMulticast_NotifyServerTime
{

 public: 
	float InServerTime;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_CommunityPageWidget.PartyInvite_OnClickedInvitePartyButton Size 4
class FPartyInvite_OnClickedInvitePartyButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ScenarioGameState.Multicast_LogoutPawn Size 8
class FMulticast_LogoutPawn
{

 public: 
	struct APawn* InPawn;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClicked_PrevSlot Size 4
class FOnClicked_PrevSlot
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.AllLevelAutoDriveMain.ToggleLoop Size 4
class FToggleLoop
{

 public: 
	int32_t NotUsed;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClicked_UnGroup Size 4
class FOnClicked_UnGroup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.AllLevelAutoDriveMain.ToggleOneLap Size 4
class FToggleOneLap
{

 public: 
	int32_t NotUsed;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.BuildCaptureWidget.OnSpinBoxValueChanged_LightRed Size 4
class FOnSpinBoxValueChanged_LightRed
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.EnableAllLevelAutoDriveOptions.Finish Size 4
class FFinish
{

 public: 
	int32_t LapCount;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.GrandPrixPageWidget.OnClickedRewardDialogShowTierDetailButton Size 4
class FOnClickedRewardDialogShowTierDetailButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_InfoPageWidget.OnFocused_ChallengeList Size 4
class FOnFocused_ChallengeList
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.AnimatedNumberTextBlock.OnAnimFinished Size 4
class FOnAnimFinished
{

 public: 
	int32_t FinishedNum;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseDistanceWidget.UpdateDistanceAndThreshold Size 8
class FUpdateDistanceAndThreshold
{

 public: 
	float InDistance;  // Offset: 0 Size: 4
	float InThreshold;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ApproachWidget.AddApproachKart Size 4
class FAddApproachKart
{

 public: 
	int32_t Add;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_ProfileEditPageWidget.OnClickedEmblemTab Size 4
class FOnClickedEmblemTab
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.MoveLiveryStickerLayerMouseX Size 4
class FMoveLiveryStickerLayerMouseX
{

 public: 
	float InDelta;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.BuildCaptureWidget.OnChangeCamera Size 4
class FOnChangeCamera
{

 public: 
	float InValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.BuildCaptureWidget.OnSpinBoxValueChanged_CameraFocalLength Size 4
class FOnSpinBoxValueChanged_CameraFocalLength
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.BuildCaptureWidget.OnSpinBoxValueChanged_CameraFocusDistance Size 4
class FOnSpinBoxValueChanged_CameraFocusDistance
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedPurchaseButton Size 4
class FOnClickedPurchaseButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.EventChallengePageWidget.EventChallenge_OnClickedBackButton Size 4
class FEventChallenge_OnClickedBackButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ModeSelectPageWidget.ItemGuideDetailPopup_OnClickedCloseButton Size 4
class FItemGuideDetailPopup_OnClickedCloseButton
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.BuildCaptureWidget.OnSpinBoxValueChanged_CameraMoveInterpSpeed Size 4
class FOnSpinBoxValueChanged_CameraMoveInterpSpeed
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.BuildCaptureWidget.OnSpinBoxValueChanged_DeadZone Size 4
class FOnSpinBoxValueChanged_DeadZone
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_ScenarioPawnPhysic Size 1
class FDev_ScenarioPawnPhysic
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInEnable : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.BuildCaptureWidget.OnSpinBoxValueChanged_LightBlue Size 4
class FOnSpinBoxValueChanged_LightBlue
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.BuildCaptureWidget.OnSpinBoxValueChanged_LightGreen Size 4
class FOnSpinBoxValueChanged_LightGreen
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.BuildCaptureWidget.OnSpinBoxValueChanged_LightIntensity Size 4
class FOnSpinBoxValueChanged_LightIntensity
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LiveryStickerPageWidget.OnMoveToPrevWrappingLayer Size 4
class FOnMoveToPrevWrappingLayer
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.BuildCaptureWidget.OnSpinBoxValueChanged_LightOuterConeAngle Size 4
class FOnSpinBoxValueChanged_LightOuterConeAngle
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.BuildCaptureWidget.OnSpinBoxValueChanged_SetCameraFocusDistanceSpeed Size 4
class FOnSpinBoxValueChanged_SetCameraFocusDistanceSpeed
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.BuildCaptureWidget.OnTextChanged_CameraTrackFilter Size 24
class FOnTextChanged_CameraTrackFilter
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.ButtonContainerTemplate.OnCheck Size 4
class FOnCheck
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryEditPageWidget.OnClickLiveryDelete Size 4
class FOnClickLiveryDelete
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ButtonContainerTemplate.OnFocus Size 4
class FOnFocus
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PresetPageWidget.OnClickedUse Size 4
class FOnClickedUse
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceHudWidget.OnVoiceChatOnOffButtonClicked Size 4
class FOnVoiceChatOnOffButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.TimeAttackSelectRankerDialog.OnClickedNextTabButton Size 4
class FOnClickedNextTabButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomGamePageWidget.OnClickedBannedUserInviteButton Size 4
class FOnClickedBannedUserInviteButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MaterialFxComponent.StopFx Size 16
class FStopFx
{

 public: 
	float EndFadeTime;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UCurveFloat* FadeWeightCurve;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.TimeAttackSelectRankerDialog.OnClickedPrevTabButton Size 4
class FOnClickedPrevTabButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_AchievementPageWidget.OnClickedSortButton Size 4
class FOnClickedSortButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ChattingPageWidget.OnSubmitChat Size 4
class FOnSubmitChat
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_CommonPopupReward.OnChangeInitalRewardStep Size 4
class FOnChangeInitalRewardStep
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CommunityPageWidget.InviteMenu_Find_OnFindRiderComplete Size 16
class FInviteMenu_Find_OnFindRiderComplete
{

 public: 
	struct TArray<struct FAccountPlatformData> accountData;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartUpgradePageWidget.UpgradeDialog_CloseDialog Size 4
class FUpgradeDialog_CloseDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CommunityPageWidget.MainDialog_OnLinkAccountClicked Size 4
class FMainDialog_OnLinkAccountClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CommunityPageWidget.OnConfirmUserInfo Size 4
class FOnConfirmUserInfo
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CommunityLogicComponent.OnDisablePartyInviteButton Size 16
class FOnDisablePartyInviteButton
{

 public: 
	struct FString InAccountId;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.CommunityLogicComponent.OnShowToastPopup Size 48
class FOnShowToastPopup
{

 public: 
	struct FText TitleText;  // Offset: 0 Size: 24
	struct FText DescText;  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_CommunityPageWidget.FriendMenu_CloseDialog Size 4
class FFriendMenu_CloseDialog
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicensePageWidget.OnClickedOpenContentItem Size 4
class FOnClickedOpenContentItem
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_CommunityPageWidget.InviteMenu_Find_OnFindFriend Size 4
class FInviteMenu_Find_OnFindFriend
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_CommunityPageWidget.InviteMenu_Find_ShowFindPopup Size 4
class FInviteMenu_Find_ShowFindPopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.WebPageWidget.HandleUrlChanged Size 24
class FHandleUrlChanged
{

 public: 
	struct FText NewURL;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_CommunityPageWidget.InviteMenu_OnCloseButtonClicked Size 4
class FInviteMenu_OnCloseButtonClicked
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LoginPageWidget.ChangeLanguage_CloseDialog Size 4
class FChangeLanguage_CloseDialog
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseNotifiedItemCubeComponent.AuthNewItem Size 16
class FAuthNewItem
{

 public: 
	struct AGoItem_Cube* InCube;  // Offset: 0 Size: 8
	enum class EItemType ReturnValue;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_RetirePersonalResultPlayer Size 8
class FDev_RetirePersonalResultPlayer
{

 public: 
	int32_t PlayerNumber;  // Offset: 0 Size: 4
	float RemainingDistance;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_CommunityPageWidget.InviteMenu_Recommend_OnClickedAddBtn Size 4
class FInviteMenu_Recommend_OnClickedAddBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RacingPassPageWidget.PurchaseConfirmDialog_OnClickedShowKcoinPriceDetail Size 4
class FPurchaseConfirmDialog_OnClickedShowKcoinPriceDetail
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_CommunityPageWidget.InviteUserMenu_OnCloseButtonClicked Size 4
class FInviteUserMenu_OnCloseButtonClicked
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_CommunityPageWidget.MainDialog_OnCloseButtonClicked Size 4
class FMainDialog_OnCloseButtonClicked
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartGameUserSettings.SetAutoFriendReject Size 1
class FSetAutoFriendReject
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnable : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayControlPageWidget.OnClickedNextTab Size 4
class FOnClickedNextTab
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_CommunityPageWidget.OnClickedPreTab Size 4
class FOnClickedPreTab
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryEditPageWidget.OnClickPaintColorReset Size 4
class FOnClickPaintColorReset
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CharAnimInstance.OnAsyncMontageLoadCompleted Size 80
class FOnAsyncMontageLoadCompleted
{

 public: 
	struct TSet<struct FSoftObjectPath> InAssetPathContainer;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_CommunityPageWidget.PartyInvite_ChangeTab Size 4
class FPartyInvite_ChangeTab
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_CommunityPageWidget.PartyInvite_OnFocusedInvitePartyButton Size 4
class FPartyInvite_OnFocusedInvitePartyButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseMissionTitleWidget.OnNextDriftMission Size 16
class FOnNextDriftMission
{

 public: 
	float KeepNSeconds;  // Offset: 0 Size: 4
	float ReuseInNSeconds;  // Offset: 4 Size: 4
	float InNSeconds;  // Offset: 8 Size: 4
	int32_t UseNTimes;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyLogicComponent.OnUpdateRiderInfo Size 8
class FOnUpdateRiderInfo
{

 public: 
	enum class EUserLevelUpdatedType InType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t InLevel;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CouponPageWidget.OnOpenCouponResultDialog Size 40
class FOnOpenCouponResultDialog
{

 public: 
	enum class EPrCouponResult Result;  // Offset: 0 Size: 4
	int32_t ErrorCode;  // Offset: 4 Size: 4
	struct TArray<struct FKtItem> Items;  // Offset: 8 Size: 16
	struct TArray<struct FString> Duplicates;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartUpgradePageWidget.OnClickedGearPlusBtn Size 4
class FOnClickedGearPlusBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomGamePageWidget.OnClickedBackButtonInModeChangeDialog Size 4
class FOnClickedBackButtonInModeChangeDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ProfileEditPageWidget.OnUnFocusedTagButton Size 4
class FOnUnFocusedTagButton
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomGamePageWidget.OnClickedBackButtonInTrackChangeDialog Size 4
class FOnClickedBackButtonInTrackChangeDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.EventPageWidget.OnAttendanceEntryClicked Size 4
class FOnAttendanceEntryClicked
{

 public: 
	int32_t ItemIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomGamePageWidget.OnClickedChangeModeButton Size 4
class FOnClickedChangeModeButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomGamePageWidget.OnClickedChangeTrackButton Size 4
class FOnClickedChangeTrackButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomGamePageWidget.OnClickedUserInfo Size 4
class FOnClickedUserInfo
{

 public: 
	int32_t UserSlotIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomGamePageWidget.OnFocusedUserInfo Size 4
class FOnFocusedUserInfo
{

 public: 
	int32_t UserSlotIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomGamePageWidget.OnPlayerVoiceChatState Size 8
class FOnPlayerVoiceChatState
{

 public: 
	int32_t InCustomMemberIndex;  // Offset: 0 Size: 4
	int32_t InVoiceChatStatus;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemComponent.ServerEndCasting Size 16
class FServerEndCasting
{

 public: 
	int32_t InItemSequence;  // Offset: 0 Size: 4
	enum class EItemType ItemType;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3
	struct UItemComponent* Target;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.CreateLicenseReportWidget.OnClickedNextButton Size 4
class FOnClickedNextButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomGamePageWidget.OnShowCustomGameToastPopup Size 48
class FOnShowCustomGameToastPopup
{

 public: 
	struct FText InTitleText;  // Offset: 0 Size: 24
	struct FText InContentText;  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_EmoticonPageWidget.OnEmoticonClicked Size 4
class FOnEmoticonClicked
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClicked_CompleteEditToColor Size 4
class FOnClicked_CompleteEditToColor
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CharAnimInstance.OnMontageEnded Size 16
class FOnMontageEnded
{

 public: 
	struct UAnimMontage* AnimMontage;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bInterrupted : 1;  // Offset: 8 Size: 1
	enum class ECharacterMontage InState;  // Offset: 9 Size: 1
	char pad_10[2];  // Offset: 10 Size: 2
	int32_t NumLoops;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_EmoticonPageWidget.OnEmoticonHovered Size 4
class FOnEmoticonHovered
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PremiumChallengePageWidget.OnClickedShortCut Size 4
class FOnClickedShortCut
{

 public: 
	int32_t nIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.UpdateRestTimeInConfirmItemList Size 8
class FUpdateRestTimeInConfirmItemList
{

 public: 
	struct FDateTime ServerTime;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.CommunityLogicComponent.OnCustomGameInviteReceived Size 128
class FOnCustomGameInviteReceived
{

 public: 
	struct FString SessionId;  // Offset: 0 Size: 16
	struct FKtAccountProfile Inviter;  // Offset: 16 Size: 96
	struct FString InviterAccountId;  // Offset: 112 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.PremiumChallengePageWidget.OnRewardListButtonClicked Size 4
class FOnRewardListButtonClicked
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.EventPageWidget.ChangeADTStep Size 4
class FChangeADTStep
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PredictHelper.Predict_jieunjung_ver44 Size 40
class FPredict_jieunjung_ver44
{

 public: 
	float DeltaTime;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<float> Inputs;  // Offset: 8 Size: 16
	struct TArray<float> ReturnValue;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.MailPageWidget.OnClickedItemListButton Size 4
class FOnClickedItemListButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnStaffButtonClicked Size 4
class FOnStaffButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.EventPageWidget.OnClickedRewardDetailButton Size 4
class FOnClickedRewardDetailButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.EventPageWidget.OnFocusedVDTButton Size 4
class FOnFocusedVDTButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceHudWidget.RemoveChildFromSlot Size 16
class FRemoveChildFromSlot
{

 public: 
	struct FName SlotName;  // Offset: 0 Size: 8
	struct UWidget* Widget;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.EventPageWidget.SendADTRewardPacket Size 4
class FSendADTRewardPacket
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_EventPageWidget.OnClickedChangeToRightTabButton Size 4
class FOnClickedChangeToRightTabButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.GaragePageWidget.OnClickedEmotionStorageBackButton Size 4
class FOnClickedEmotionStorageBackButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdLevelLoader.OnAllLevelStreamingComplete Size 4
class FOnAllLevelStreamingComplete
{

 public: 
	int32_t InLinkID;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayReadyPageWidget.OnClickedPresetButton Size 4
class FOnClickedPresetButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_StudioPageWidget.OnSettingsButtonClicked Size 4
class FOnSettingsButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartChangeDialog.OnClickedStudioButton Size 4
class FOnClickedStudioButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_GaragePageWidget.OnClickedNextEmotionStorage Size 4
class FOnClickedNextEmotionStorage
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_GaragePageWidget.OnClickedNextSubTab Size 4
class FOnClickedNextSubTab
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_GaragePageWidget.OnClickedPrevCharacterTab Size 4
class FOnClickedPrevCharacterTab
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_GaragePageWidget.OnClickedPrevMainTab Size 4
class FOnClickedPrevMainTab
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryComponent.Server_EquipLiveryDesign Size 16
class FServer_EquipLiveryDesign
{

 public: 
	struct FString LiveryUniqueId;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopWidgetLogicComponent.UpdateCashItemList Size 16
class FUpdateCashItemList
{

 public: 
	struct TArray<struct FKtShopStock> Items;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_ScenarioResetScenario Size 48
class FDev_ScenarioResetScenario
{

 public: 
	struct FString InCategoryID;  // Offset: 0 Size: 16
	struct FString InGroupID;  // Offset: 16 Size: 16
	struct FString InScenarioID;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.PSOCollectWidget.OnComboBoxSelectionChanged_Wheel Size 32
class FOnComboBoxSelectionChanged_Wheel
{

 public: 
	struct FString InSelectedItem;  // Offset: 0 Size: 16
	struct FString InSelectedItemKey;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_GaragePageWidget.OnClickedPrevSubTab Size 4
class FOnClickedPrevSubTab
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_LobbyPageWidget.OnReleasedRotatePawnButton Size 4
class FOnReleasedRotatePawnButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_SimpleAODecalMaxDist Size 4
class FDev_SimpleAODecalMaxDist
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.GrandPrixPageWidget.OnClickedRewardDialogBackButton Size 4
class FOnClickedRewardDialogBackButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.SetBackgroundColor Size 16
class FSetBackgroundColor
{

 public: 
	struct FLinearColor NewBackgroundColor;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.GrandPrixPageWidget.OnClickedRewardDialogShowRankingDetailButton Size 4
class FOnClickedRewardDialogShowRankingDetailButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.GrandPrixPageWidget.OnClickedShowDetailRecordButton Size 4
class FOnClickedShowDetailRecordButton
{

 public: 
	int32_t nIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicensePageWidget.OnClickedShowRewardButton Size 4
class FOnClickedShowRewardButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_GrandPrixPageWidget.OnClickedRewardDialogShowRewardButton Size 4
class FOnClickedRewardDialogShowRewardButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.InfoPageWidget.OnClickedbtnGrandPrixRecord Size 4
class FOnClickedbtnGrandPrixRecord
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdLevelLoader.OnSingleLevelStreamingComplete Size 4
class FOnSingleLevelStreamingComplete
{

 public: 
	int32_t InLinkID;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.InfoPageWidget.OnClickedProfileEdit Size 4
class FOnClickedProfileEdit
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicensePageWidget.OnClickedShowRewardListButton Size 4
class FOnClickedShowRewardListButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.GetUserWidgetObject Size 8
class FGetUserWidgetObject
{

 public: 
	struct UUserWidget* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_InfoPageWidget.OnFocused_ActivityList Size 4
class FOnFocused_ActivityList
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartUpgradePageWidget.ApplyGearDialog_OnClickedApplyBtn Size 4
class FApplyGearDialog_OnClickedApplyBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicensePageWidget.OnClickedRewardItem Size 4
class FOnClickedRewardItem
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartUpgradePageWidget.OnClickedResetGearBtn Size 4
class FOnClickedResetGearBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MiniGameDialog.StartGame Size 4
class FStartGame
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PageListTemplate.OnClickedButton Size 4
class FOnClickedButton
{

 public: 
	int32_t PageIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartUpgradePageWidget.OnClickedReturnGearBtn Size 4
class FOnClickedReturnGearBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartUpgradePageWidget.UpgradeDialog_OnClickedUpgradBtn Size 4
class FUpgradeDialog_OnClickedUpgradBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartUpgradePageWidget.UpgradeResult_CloseDialog Size 4
class FUpgradeResult_CloseDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_KartUpgradePageWidget.OnClickedFocusdGearMinusBtn Size 4
class FOnClickedFocusdGearMinusBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_KartUpgradePageWidget.OnFocusedGearSlot Size 4
class FOnFocusedGearSlot
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ControlPawnFXWidget.OnComboBoxSelection_Suffer Size 24
class FOnComboBoxSelection_Suffer
{

 public: 
	struct FString SelectedItem;  // Offset: 0 Size: 16
	enum class ESelectInfo SelectionType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicensePageWidget.OnClickedLicenseClearConfirmButton Size 4
class FOnClickedLicenseClearConfirmButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.MoveLiveryLayerY Size 4
class FMoveLiveryLayerY
{

 public: 
	float InDelta;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryEditPageWidget.OnClickCloseReportPopup Size 4
class FOnClickCloseReportPopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClickDeleteAllWrappingItem Size 4
class FOnClickDeleteAllWrappingItem
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ProfileEditPageWidget.OnClickedSaveTagButton Size 4
class FOnClickedSaveTagButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.CloseShopPurchaseConfirmDialog Size 4
class FCloseShopPurchaseConfirmDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClickDeleteWrappingItem Size 4
class FOnClickDeleteWrappingItem
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClicked_ColorEdit Size 4
class FOnClicked_ColorEdit
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClickExitSave Size 4
class FOnClickExitSave
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClicked_CompleteEdit Size 4
class FOnClicked_CompleteEdit
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MediaPlayerTemplate.OnMediaOpened Size 16
class FOnMediaOpened
{

 public: 
	struct FString OpenedUrl;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClicked_Delete Size 4
class FOnClicked_Delete
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.PurchaseLevelDialog_OnClickedMaxLevel Size 4
class FPurchaseLevelDialog_OnClickedMaxLevel
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClicked_Edit Size 4
class FOnClicked_Edit
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClicked_Group Size 4
class FOnClicked_Group
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryEditPageWidget.OnClicked_LiveryMode Size 4
class FOnClicked_LiveryMode
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayReadyPageWidget.InfoModifyDialog_OnClickedConfirmButton Size 4
class FInfoModifyDialog_OnClickedConfirmButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.DedicatedLobbyPlayerController.Server_AddLog Size 24
class FServer_AddLog
{

 public: 
	struct FText InLog;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryEditPageWidget.OnClicked_Mat Size 4
class FOnClicked_Mat
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClicked_NextSlot Size 4
class FOnClicked_NextSlot
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryEditPageWidget.OnClicked_PaintColorSave Size 4
class FOnClicked_PaintColorSave
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryEditPageWidget.OnClicked_PaintGamutNext Size 4
class FOnClicked_PaintGamutNext
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LoginPageWidget.OnClickedNoticeDialogClose Size 4
class FOnClickedNoticeDialogClose
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryEditPageWidget.OnClicked_PaintToWrapping Size 4
class FOnClicked_PaintToWrapping
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClicked_ShapeDelete Size 4
class FOnClicked_ShapeDelete
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClicked_ShapeTabNext Size 4
class FOnClicked_ShapeTabNext
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryEditPageWidget.OnClicked_ShowKartDialog Size 4
class FOnClicked_ShowKartDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnKcoinButtonClicked Size 4
class FOnKcoinButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClicked_StickerSave Size 4
class FOnClicked_StickerSave
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryEditPageWidget.OnClicked_WrappingToPaint Size 4
class FOnClicked_WrappingToPaint
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClickSave Size 4
class FOnClickSave
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnEditValueTextMoveNext Size 4
class FOnEditValueTextMoveNext
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnEditValueTextMovePre Size 4
class FOnEditValueTextMovePre
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ControlDirectingWidget.OnComboBoxSelection_MajorFinishSequence Size 24
class FOnComboBoxSelection_MajorFinishSequence
{

 public: 
	struct FString SelectedItem;  // Offset: 0 Size: 16
	enum class ESelectInfo SelectionType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnPaintColorRowItemClickedButton Size 16
class FOnPaintColorRowItemClickedButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UObject* ItemObj;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClicked_MySticker Size 4
class FOnClicked_MySticker
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.SetTickWhenOffscreen Size 1
class FSetTickWhenOffscreen
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bWantTickWhenOffscreen : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnPosXTextChanged Size 24
class FOnPosXTextChanged
{

 public: 
	struct FText InText;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnPosYTextChanged Size 24
class FOnPosYTextChanged
{

 public: 
	struct FText InText;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryEditPageWidget.OnShowMaterialContextMenu Size 4
class FOnShowMaterialContextMenu
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnSizeHeightTextChanged Size 24
class FOnSizeHeightTextChanged
{

 public: 
	struct FText InText;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnSizeWidthTextChanged Size 24
class FOnSizeWidthTextChanged
{

 public: 
	struct FText InText;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryEditPageWidget.OnWrappingItemClickButton Size 4
class FOnWrappingItemClickButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LootPlateAnimInstance.SetRingParamName Size 16
class FSetRingParamName
{

 public: 
	struct FName RingLightParamName;  // Offset: 0 Size: 8
	struct FName RingBaseParamName;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.SideMenuPageWidget.Report_ClosePlayerSelectDialog Size 4
class FReport_ClosePlayerSelectDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PSOCollectWidget.OnComboBoxSelectionChanged_Balloon Size 32
class FOnComboBoxSelectionChanged_Balloon
{

 public: 
	struct FString InSelectedItem;  // Offset: 0 Size: 16
	struct FString InSelectedItemKey;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseCoinCounterWidget.AddCoin Size 4
class FAddCoin
{

 public: 
	int32_t Num;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryEditPageWidget.OnWrappinMenu Size 4
class FOnWrappinMenu
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.RemoveEditValuePopup Size 4
class FRemoveEditValuePopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.RotateLiveryLayer Size 4
class FRotateLiveryLayer
{

 public: 
	float InDelta;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_LiveryStickerPageWidget.OnClicked_StickerListNext Size 4
class FOnClicked_StickerListNext
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_LiveryStickerPageWidget.OnClicked_StickerListPrev Size 4
class FOnClicked_StickerListPrev
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CharAnimInstance.InitializeCharacterLookAt Size 12
class FInitializeCharacterLookAt
{

 public: 
	struct FRotator InRotator;  // Offset: 0 Size: 12



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_LiveryStickerPageWidget.OnClicked_UseFixedUnit Size 4
class FOnClicked_UseFixedUnit
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_LiveryStickerPageWidget.OnNavigationStickerItemList Size 16
class FOnNavigationStickerItemList
{

 public: 
	enum class EUINavigation UINavigation;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct UWidget* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartSkillLogicComponent.OnKartSkillFailed Size 4
class FOnKartSkillFailed
{

 public: 
	enum class EPrKartSkillResult InResultCode;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.AccountReset_OnClickedAccountResetCancelBtn Size 4
class FAccountReset_OnClickedAccountResetCancelBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryReportViewerPageWidget.OnClicked_Confirm Size 4
class FOnClicked_Confirm
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryReportViewerPageWidget.OnClicked_ReportTab Size 4
class FOnClicked_ReportTab
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryReportViewerPageWidget.OnClicked_Restriction Size 4
class FOnClicked_Restriction
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryReportViewerPageWidget.OnClickedConfirm_StickerRestriction Size 4
class FOnClickedConfirm_StickerRestriction
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryReportViewerPageWidget.OnNavigationEditableText Size 16
class FOnNavigationEditableText
{

 public: 
	enum class EUINavigation UINavigation;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct UWidget* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryReportViewerPageWidget.OnNavigationListView Size 16
class FOnNavigationListView
{

 public: 
	enum class EUINavigation UINavigation;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct UWidget* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.MoveLiveryStickerLayerMouseY Size 4
class FMoveLiveryStickerLayerMouseY
{

 public: 
	float InDelta;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_NxAPurchase Size 40
class FDev_NxAPurchase
{

 public: 
	struct FString Category;  // Offset: 0 Size: 16
	struct FString stockId;  // Offset: 16 Size: 16
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool bDirect : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryStickerPageWidget.OnClicked_Preview Size 4
class FOnClicked_Preview
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.CloseLobbyPopup Size 4
class FCloseLobbyPopup
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnChallengeListScrollableChanged Size 1
class FOnChallengeListScrollableChanged
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bScrollable : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnCharacterOnOffKart Size 1
class FOnCharacterOnOffKart
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bGetOnKart : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnClickedLiveryReportVewerButton Size 4
class FOnClickedLiveryReportVewerButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_OptionPageWidget.OnCustomDataUpdated Size 16
class FOnCustomDataUpdated
{

 public: 
	struct UUserWidget* Widget;  // Offset: 0 Size: 8
	int32_t InParam;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnClickedBackButtonInAttendaceEventPopup Size 4
class FOnClickedBackButtonInAttendaceEventPopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnClickedBackButtonInGrandPrixFinalResultPopup Size 4
class FOnClickedBackButtonInGrandPrixFinalResultPopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_SetRetireCount Size 4
class FDev_SetRetireCount
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnClickedBackgroundButtonInAchievementCompletedPopup Size 4
class FOnClickedBackgroundButtonInAchievementCompletedPopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PauseComponent.OnClickedChallengeButton Size 4
class FOnClickedChallengeButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnClickedConfirmButtonInLoginEventPopup Size 4
class FOnClickedConfirmButtonInLoginEventPopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceProgressComponent.ClientUpdateData Size 8
class FClientUpdateData
{

 public: 
	float InTotalLapTime;  // Offset: 0 Size: 4
	float InBestLapTime;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnClickedLicenseNoticePopupMoveLicense Size 4
class FOnClickedLicenseNoticePopupMoveLicense
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnQuitButtonClicked Size 4
class FOnQuitButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseMessageWidget.ChargeGauge Size 24
class FChargeGauge
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnRemoveEmoticonWidget Size 16
class FOnRemoveEmoticonWidget
{

 public: 
	struct AOutGamePawn* OutGamePawn;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bVisible : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnShortcutMenuCloseButtonClicked Size 4
class FOnShortcutMenuCloseButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnShowCommonMenuButtonClicked Size 4
class FOnShowCommonMenuButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ScenarioSequenceDirector.DisableKartSimulatePhysics Size 8
class FDisableKartSimulatePhysics
{

 public: 
	struct AActor* InActor;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnSocialButtonClicked Size 4
class FOnSocialButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.OnUpdateEmoticonWidget Size 40
class FOnUpdateEmoticonWidget
{

 public: 
	struct FString accountId;  // Offset: 0 Size: 16
	enum class EOutGamePawnType LobbyPawnType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7
	struct FString EmoticonItemId;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyPageWidget.SetEnableReadyAndCancel Size 1
class FSetEnableReadyAndCancel
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnable : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_LobbyPageWidget.OnPressedRotateCharacterButton Size 4
class FOnPressedRotateCharacterButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ModeSelectPageWidget.MatchMode_OnClickedPresetButton Size 4
class FMatchMode_OnClickedPresetButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PlayMissionComponent.ServerSetPlayMissionDefAndRewardForCheat Size 96
class FServerSetPlayMissionDefAndRewardForCheat
{

 public: 
	struct FKtPlayMissionDef InMissionDef;  // Offset: 0 Size: 64
	struct FKtPlayMissionRewardDef InReward;  // Offset: 64 Size: 32



 // Functions 
 public:
}; 
 
 //Function KartDrift.LoginPageWidget.ChangeSelectedServer Size 4
class FChangeSelectedServer
{

 public: 
	int32_t _;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LoginPageWidget.ConnectNexonArenaConfirm Size 4
class FConnectNexonArenaConfirm
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.DedicatedLobbyPlayerState.Server_RequestJourney Size 72
class FServer_RequestJourney
{

 public: 
	struct FString InTrackAlias;  // Offset: 0 Size: 16
	enum class ERaceMode InRaceMode;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7
	struct FString InGameMode;  // Offset: 24 Size: 16
	struct FString InTrackPackageName;  // Offset: 40 Size: 16
	struct FString InParams;  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LoginPageWidget.OnCinematicMainOpened Size 4
class FOnCinematicMainOpened
{

 public: 
	int32_t InPlaylistIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LoginPageWidget.OnCinematicMainSkipButton Size 4
class FOnCinematicMainSkipButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MiniGameDialog.CloseDialog Size 4
class FCloseDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_CommunityPageWidget.InviteUserMenu_OnActionButtonClicked Size 4
class FInviteUserMenu_OnActionButtonClicked
{

 public: 
	int32_t ButtonType;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdService.CreateDebugAccount Size 8
class FCreateDebugAccount
{

 public: 
	struct UKdAccount* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.LoginPageWidget.OnCinematicSeasonSkipButton Size 4
class FOnCinematicSeasonSkipButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LoginPageWidget.OnClickedControlKeyConfirm Size 4
class FOnClickedControlKeyConfirm
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LoginPageWidget.OnClickLoginButton Size 4
class FOnClickLoginButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LoginLogicComponent.OnCreateNicknameResult Size 24
class FOnCreateNicknameResult
{

 public: 
	enum class EPrSetRiderNameResult InCreateResult;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FString InNotSupportedLetter;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LoginPageWidget.OnIdBoxCommitted Size 32
class FOnIdBoxCommitted
{

 public: 
	struct FText InText;  // Offset: 0 Size: 24
	enum class ETextCommit InCommitMethod;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.LoginPageWidget.OpenTermsOfService Size 4
class FOpenTermsOfService
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_SteamPurchase Size 32
class FDev_SteamPurchase
{

 public: 
	struct FString Category;  // Offset: 0 Size: 16
	struct FString stockId;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LoginPageWidget.RequestRiderNameDuplicateCheck Size 16
class FRequestRiderNameDuplicateCheck
{

 public: 
	struct FString InRiderName;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_AODecalMaxOpacity Size 4
class FDev_AODecalMaxOpacity
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LoginPageWidget.ResolvePatchEvent Size 4
class FResolvePatchEvent
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemComponent.Server_OverlappedWith Size 8
class FServer_OverlappedWith
{

 public: 
	struct AGoItem_Cube* Target;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartGameUserSettings.GetAutoFriendReject Size 1
class FGetAutoFriendReject
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.LoginPageWidget.WaitForLinkToNexonArena Size 4
class FWaitForLinkToNexonArena
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LoginLogicComponent.OnWaitExpireAccount Size 4
class FOnWaitExpireAccount
{

 public: 
	int32_t ExpireSec;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LootBoxPageWidget.OnDetailButtonFocused Size 4
class FOnDetailButtonFocused
{

 public: 
	int32_t Btn_Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnToyVerifyPayment Size 1
class FOnToyVerifyPayment
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bSucceed : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_PresetPageWidget.OnDetailViewButtonClicked Size 4
class FOnDetailViewButtonClicked
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MailPageWidget.OnClickedDeleteKeyIcon Size 4
class FOnClickedDeleteKeyIcon
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MailPageWidget.OnClickedInBoxTab Size 4
class FOnClickedInBoxTab
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_RaceGame Size 8
class FDev_RaceGame
{

 public: 
	struct FName LevelName;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.MailPageWidget.OnClickedReceiveButton Size 4
class FOnClickedReceiveButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemWaterbomb.ClientBeginOverlap Size 168
class FClientBeginOverlap
{

 public: 
	struct UPrimitiveComponent* OverlappedComponent;  // Offset: 0 Size: 8
	struct AActor* OtherActor;  // Offset: 8 Size: 8
	struct UPrimitiveComponent* OtherComp;  // Offset: 16 Size: 8
	int32_t OtherBodyIndex;  // Offset: 24 Size: 4
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool bFromSweep : 1;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3
	struct FHitResult SweepResult;  // Offset: 32 Size: 136



 // Functions 
 public:
}; 
 
 //Function KartDrift.MailPageWidget.OnClickedSentMailBoxTab Size 4
class FOnClickedSentMailBoxTab
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MailPageWidget.OnShowMailRewardPopup Size 16
class FOnShowMailRewardPopup
{

 public: 
	struct TArray<struct FString> InItemArray;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.ShowRiderNameChangeDialog Size 4
class FShowRiderNameChangeDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MailPageWidget.OnShowMessageMailPopup Size 16
class FOnShowMessageMailPopup
{

 public: 
	struct FString MailDesc;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.MailPageWidget.OnShowWarningPopup Size 104
class FOnShowWarningPopup
{

 public: 
	struct FText Title;  // Offset: 0 Size: 24
	struct FText DescText;  // Offset: 24 Size: 24
	struct FText DescText2;  // Offset: 48 Size: 24
	struct FText SubText;  // Offset: 72 Size: 24
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bIsCancelButton : 1;  // Offset: 96 Size: 1
	char pad_97[7];  // Offset: 97 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.PurchaseLevelDialog_OnClickedIncrease Size 4
class FPurchaseLevelDialog_OnClickedIncrease
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MailPageWidget.OnShowWarningPopupSimple Size 1
class FOnShowWarningPopupSimple
{

 public: 
	enum class EMailWarningPopupType Type;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.MailPageWidget.OnTryGetSelected_InboxMail Size 8
class FOnTryGetSelected_InboxMail
{

 public: 
	int32_t OutMailIndex;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool ReturnValue : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function KartDrift.MailPageWidget.ReceiveAllMail Size 4
class FReceiveAllMail
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseSpeedLimitWidget.OnNextSpeedLimit Size 8
class FOnNextSpeedLimit
{

 public: 
	float SuccessSpeed;  // Offset: 0 Size: 4
	int32_t Score;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_MailPageWidget.OnClickedNextPage Size 4
class FOnClickedNextPage
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PageListTemplate.OnClickedNextPageList Size 4
class FOnClickedNextPageList
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_MailPageWidget.OnClickedPrevPage Size 4
class FOnClickedPrevPage
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MainmenuPageWidget.OnUpdateGameStartAlertFromPartyPopup Size 4
class FOnUpdateGameStartAlertFromPartyPopup
{

 public: 
	float WaitTime;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MainmenuPageWidget.OnClickedGameStartAlertPopupReturnButton Size 4
class FOnClickedGameStartAlertPopupReturnButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MainmenuPageWidget.OnMainmenuActivateTab Size 3
class FOnMainmenuActivateTab
{

 public: 
	enum class EPageCase PageCase;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bFocusToDefault : 1;  // Offset: 1 Size: 1
	char pad_2_1 : 7;  // Offset: 2 Size: 1
	bool bAsyncLoad : 1;  // Offset: 2 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.MainmenuPageWidget.OnShowGameStartAlertFromPartyPopup Size 4
class FOnShowGameStartAlertFromPartyPopup
{

 public: 
	float WaitTime;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ModeSelectPageWidget.EnterKeyDialog_OnClickedCancelKey Size 4
class FEnterKeyDialog_OnClickedCancelKey
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ModeSelectPageWidget.EnterKeyDialog_OnClickedEnterKey Size 4
class FEnterKeyDialog_OnClickedEnterKey
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ModeSelectPageWidget.ItemGuidePopup_OnClickedShowDetailButton Size 4
class FItemGuidePopup_OnClickedShowDetailButton
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ModeSelectPageWidget.License_OnClickedShowReward Size 4
class FLicense_OnClickedShowReward
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ModeSelectPageWidget.MatchMode_OnClickedChatButton Size 4
class FMatchMode_OnClickedChatButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ModeSelectPageWidget.MatchMode_OnClickedMatchStartButton Size 4
class FMatchMode_OnClickedMatchStartButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ModeSelectPageWidget.MatchMode_OnClickedMoveToLicenseButton Size 4
class FMatchMode_OnClickedMoveToLicenseButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ModeSelectPageWidget.MatchMode_OnClickedShowItemGuideButton Size 4
class FMatchMode_OnClickedShowItemGuideButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnTextChangedOnEnterDateOfBirthPopup Size 24
class FOnTextChangedOnEnterDateOfBirthPopup
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.ModeSelectPageWidget.MatchMode_OnModeChecked Size 4
class FMatchMode_OnModeChecked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ModeSelectPageWidget.MatchMode_OnModeUnchecked Size 4
class FMatchMode_OnModeUnchecked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ModeSelectPageWidget.Speed_OnClickedShowSpeedGuide Size 4
class FSpeed_OnClickedShowSpeedGuide
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_ModeSelectPageWidget.ItemGuideDetailPopup_OnItemFocused Size 4
class FItemGuideDetailPopup_OnItemFocused
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_ModeSelectPageWidget.OnClickedNextModeButton Size 4
class FOnClickedNextModeButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.NormalChallengePageWidget.NormalChallenge_OnClickedBackButton Size 4
class FNormalChallenge_OnClickedBackButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.AccountReset_OnChangedAccountResetText Size 24
class FAccountReset_OnChangedAccountResetText
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_KrPcPurchase Size 32
class FDev_KrPcPurchase
{

 public: 
	struct FString Category;  // Offset: 0 Size: 16
	struct FString stockId;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.AccountReset_OnCommittedAccountResetText Size 32
class FAccountReset_OnCommittedAccountResetText
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24
	enum class ETextCommit CommitMethod;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_KartChangeDialog.OnClickedEquipItem Size 4
class FOnClickedEquipItem
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.StudioPageWidget.OnStudioSettingsBackButtonClicked Size 4
class FOnStudioSettingsBackButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.CultureOptionUpdate Size 16
class FCultureOptionUpdate
{

 public: 
	struct UUserWidget* Widget;  // Offset: 0 Size: 8
	int32_t InParam;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.EnableOptionUpdate Size 16
class FEnableOptionUpdate
{

 public: 
	struct UUserWidget* Widget;  // Offset: 0 Size: 8
	int32_t InParam;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemFeedWidget.OnItemFeed Size 128
class FOnItemFeed
{

 public: 
	enum class EItemType UsedItemType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t UsedItemId;  // Offset: 4 Size: 4
	struct TSoftObjectPtr<ULevelSequence> FeedMirrorSequence;  // Offset: 8 Size: 40
	float FeedMirrorTime;  // Offset: 48 Size: 4
	char pad_52[12];  // Offset: 52 Size: 12
	struct FTransform SpawnTransform;  // Offset: 64 Size: 48
	struct AActor* TargetActor;  // Offset: 112 Size: 8
	char pad_120[8];  // Offset: 120 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.NullGetter Size 8
class FNullGetter
{

 public: 
	struct UUserWidget* Widget;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.NullSetter Size 8
class FNullSetter
{

 public: 
	struct UUserWidget* Widget;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.OnClickedRevertOptionCancel Size 4
class FOnClickedRevertOptionCancel
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseAllySpawnComponent.AddInfo Size 40
class FAddInfo
{

 public: 
	struct FHitInfo HitInfo;  // Offset: 0 Size: 40



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_SetHiddenContent Size 2
class FDev_SetHiddenContent
{

 public: 
	enum class EContentType ContentType;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bIsHidden : 1;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LiveryStickerPageWidget.OnUnChecked_UseLayerScaleY Size 4
class FOnUnChecked_UseLayerScaleY
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_GetValue Size 16
class FDev_GetValue
{

 public: 
	struct FString VariableName;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.OnExitAfterSaveClicked Size 4
class FOnExitAfterSaveClicked
{

 public: 
	int32_t NotUsed;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.OnExitWithoutSaveClicked Size 4
class FOnExitWithoutSaveClicked
{

 public: 
	int32_t NotUsed;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.OnMuteButtonClicked Size 4
class FOnMuteButtonClicked
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.OnNoLongerEnglishPopupConfirmed Size 4
class FOnNoLongerEnglishPopupConfirmed
{

 public: 
	int32_t NotUsed;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.GetManuallyRedraw Size 1
class FGetManuallyRedraw
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.OnPlayPreviewButtonClicked Size 4
class FOnPlayPreviewButtonClicked
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.OnResetButtonClicked Size 4
class FOnResetButtonClicked
{

 public: 
	int32_t NotUsed;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.OnResetPopupConfirmed Size 4
class FOnResetPopupConfirmed
{

 public: 
	int32_t NotUsed;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.OnSaveButtonClicked Size 4
class FOnSaveButtonClicked
{

 public: 
	int32_t NotUsed;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.OnSelectOptionComboButton Size 16
class FOnSelectOptionComboButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UUserWidget* Widget;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemSlotComponent.Multicast_UseSlotChanger Size 4
class FMulticast_UseSlotChanger
{

 public: 
	int32_t InSlotChangerCount;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedShowPurchaseConfirmList Size 4
class FOnClickedShowPurchaseConfirmList
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_TMITickLogLatency Size 4
class FDev_TMITickLogLatency
{

 public: 
	float InLatency;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.OtherRiderLiveryOptionUpdate Size 16
class FOtherRiderLiveryOptionUpdate
{

 public: 
	struct UUserWidget* Widget;  // Offset: 0 Size: 8
	int32_t InParam;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionPageWidget.SyncOptionUpdate Size 16
class FSyncOptionUpdate
{

 public: 
	struct UUserWidget* Widget;  // Offset: 0 Size: 8
	int32_t InParam;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_OptionPageWidget.CustomerQR_CloseDialog Size 4
class FCustomerQR_CloseDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_OptionPageWidget.CustomerQR_OpenDialog Size 4
class FCustomerQR_OpenDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartMovementReplication.ServerListenInputLog Size 24
class FServerListenInputLog
{

 public: 
	struct TArray<struct FInputLog> Logs;  // Offset: 0 Size: 16
	int32_t BeginIndex;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_OptionPageWidget.OnClickedAccountResetBtn Size 4
class FOnClickedAccountResetBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_OptionPageWidget.OnFocusedCouponBtn Size 4
class FOnFocusedCouponBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_OptionPageWidget.OnMainScrollBoxScrolled Size 4
class FOnMainScrollBoxScrolled
{

 public: 
	float CurrentOffset;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_OptionPageWidget.OnSelectOptionKeyButton Size 16
class FOnSelectOptionKeyButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UUserWidget* Widget;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_OptionPageWidget.OnUnFocusKeyOption Size 16
class FOnUnFocusKeyOption
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UUserWidget* Widget;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdPlayerState.Server_SetClientWinCount Size 4
class FServer_SetClientWinCount
{

 public: 
	int32_t WinCount;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MainMenuCameraManageComponent.GetCurrentCamera Size 8
class FGetCurrentCamera
{

 public: 
	struct AMainMenuKartPawnCamera* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.PremiumChallengePageWidget.OnClickedPremiumChallengeSlot Size 4
class FOnClickedPremiumChallengeSlot
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PremiumChallengePageWidget.PremiumChallenge_OnClickedBackButton Size 4
class FPremiumChallenge_OnClickedBackButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.DedicatedLobbyGameState.Multicast_AddLog Size 24
class FMulticast_AddLog
{

 public: 
	struct FText InLog;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdService.SetDevRiderName Size 16
class FSetDevRiderName
{

 public: 
	struct FString riderName;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_PremiumChallengePageWidget.OnFocusedPremiumChallengeSlot Size 4
class FOnFocusedPremiumChallengeSlot
{

 public: 
	int32_t SlotIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemBarricade.ClientEndOverlap Size 32
class FClientEndOverlap
{

 public: 
	struct UPrimitiveComponent* OverlappedComponent;  // Offset: 0 Size: 8
	struct AActor* OtherActor;  // Offset: 8 Size: 8
	struct UPrimitiveComponent* OtherComp;  // Offset: 16 Size: 8
	int32_t OtherBodyIndex;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.TransformAnimationComponent.OnLerpAnimScale Size 4
class FOnLerpAnimScale
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_PremiumChallengePageWidget.PremiumChallenge_OnClickedPrevTab Size 4
class FPremiumChallenge_OnClickedPrevTab
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ScenarioSequenceDirector.OnFinishedExpressionWidgetAnimation Size 8
class FOnFinishedExpressionWidgetAnimation
{

 public: 
	struct UScenarioWidgetBase* InWidget;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.PresetPageWidget.OnClickedConfirmRegister Size 4
class FOnClickedConfirmRegister
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PresetPageWidget.OnClickedPresetSlot Size 4
class FOnClickedPresetSlot
{

 public: 
	int32_t PresetSlotInIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_StudioPageWidget.OnCloseButtonClicked Size 4
class FOnCloseButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PresetPageWidget.OnOverwritePresetButtonClicked Size 4
class FOnOverwritePresetButtonClicked
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PresetPageWidget.OnUsePresetButtonClicked Size 4
class FOnUsePresetButtonClicked
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_RacingPassPageWidget.OnClicked_PurchaseLevel Size 4
class FOnClicked_PurchaseLevel
{

 public: 
	int32_t rewardIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnCheckedStateAgree Size 4
class FOnCheckedStateAgree
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedConfirmPurchase Size 4
class FOnClickedConfirmPurchase
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_GetItem Size 1
class FDev_GetItem
{

 public: 
	char Type;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnUncheckedStateAgree Size 4
class FOnUncheckedStateAgree
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LobbyPageWidget.ShowMyKcoinPopup Size 4
class FShowMyKcoinPopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PauseComponent.OnClickedRestartButton Size 4
class FOnClickedRestartButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RacingPassPageWidget.PurchaseConfirmDialog_OnClickedBack Size 4
class FPurchaseConfirmDialog_OnClickedBack
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.PurchaseLevelDialog_OnClickedBack Size 4
class FPurchaseLevelDialog_OnClickedBack
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.PurchaseLevelDialog_OnClickedDecrease Size 4
class FPurchaseLevelDialog_OnClickedDecrease
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RacingPassPageWidget.PurchaseRacingPassDialog_OnClickedBack Size 4
class FPurchaseRacingPassDialog_OnClickedBack
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RacingPassPageWidget.PurchaseRacingPassDialog_OnClickedPremiumPassBundle Size 4
class FPurchaseRacingPassDialog_OnClickedPremiumPassBundle
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RacingPassPageWidget.RacingPass_OnClickedBackButton Size 4
class FRacingPass_OnClickedBackButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryLogicComponent.OnDeletedSticker Size 4
class FOnDeletedSticker
{

 public: 
	int32_t ID;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RacingPassPageWidget.RacingPass_OnClickedKeyIconChallenge Size 4
class FRacingPass_OnClickedKeyIconChallenge
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RacingPassPageWidget.RacingPass_OnClickedKeyIconRacingPass Size 4
class FRacingPass_OnClickedKeyIconRacingPass
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RacingPassPageWidget.RacingPass_OnClickedKeyIconShowItemList Size 4
class FRacingPass_OnClickedKeyIconShowItemList
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RacingPassPageWidget.RacingPass_OnClickedKeyIconStudio Size 4
class FRacingPass_OnClickedKeyIconStudio
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RacingPassPageWidget.RacingPass_OnClickedPurchaseLevelButton Size 4
class FRacingPass_OnClickedPurchaseLevelButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_RacingPassPageWidget.OnClickedRacingPassRewardItem Size 4
class FOnClickedRacingPassRewardItem
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedConfirmOnKcoinList Size 4
class FOnClickedConfirmOnKcoinList
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.ShowNotEnoughBalancePopup Size 4
class FShowNotEnoughBalancePopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_RacingPassPageWidget.FocusRacingPassRewardItem Size 8
class FFocusRacingPassRewardItem
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bForceLoadPawn : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_RacingPassPageWidget.OnFocusedRacingPassRewardItem Size 4
class FOnFocusedRacingPassRewardItem
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_RacingPassPageWidget.OnUnfocusedRacingPassRewardItem Size 4
class FOnUnfocusedRacingPassRewardItem
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.StickerMarketPageWidget.Widget_StickerPopup_OnConfirmButtonClick Size 4
class FWidget_StickerPopup_OnConfirmButtonClick
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ScenarioPageWidget.OnMessageNextButtonClicked Size 4
class FOnMessageNextButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.ClosePurchaseRacingPassStockItemCompletePopup Size 4
class FClosePurchaseRacingPassStockItemCompletePopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.CloseShopPurchaseConfirmStockItemAllDialog Size 4
class FCloseShopPurchaseConfirmStockItemAllDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickConfirmDialogConfirmBtn Size 4
class FOnClickConfirmDialogConfirmBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedBackOnKcoinList Size 4
class FOnClickedBackOnKcoinList
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedBackOnMyKcoinPopup Size 4
class FOnClickedBackOnMyKcoinPopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedBackOnPurchaseWidget Size 4
class FOnClickedBackOnPurchaseWidget
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedCancelOnConfirmListDialog Size 4
class FOnClickedCancelOnConfirmListDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.SideMenuLogicComponent.OnReportResultReadyInAccount Size 4
class FOnReportResultReadyInAccount
{

 public: 
	enum class EPrSendReportResult Result;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedCancelOnEnterDateOfBirthPopup Size 4
class FOnClickedCancelOnEnterDateOfBirthPopup
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedCancelPurchaseResult Size 4
class FOnClickedCancelPurchaseResult
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_OverlapItemCube Size 4
class FDev_OverlapItemCube
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedCashKcoinLucci Size 4
class FOnClickedCashKcoinLucci
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedCommercialLaw Size 4
class FOnClickedCommercialLaw
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.StudioPageWidget.OnStudioBackButtonClicked Size 4
class FOnStudioBackButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedConfirmOnConfirmListDialog Size 4
class FOnClickedConfirmOnConfirmListDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedConfirmPurchaseResult Size 4
class FOnClickedConfirmPurchaseResult
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_StudioPageWidget.OnPressedAutoRightRotateMode Size 4
class FOnPressedAutoRightRotateMode
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedFocusableButtonInMain Size 4
class FOnClickedFocusableButtonInMain
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedFriendListEntry Size 4
class FOnClickedFriendListEntry
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedKcoinListButton Size 4
class FOnClickedKcoinListButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedKcoinPackageEntryButton Size 4
class FOnClickedKcoinPackageEntryButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedMainTabNext Size 4
class FOnClickedMainTabNext
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdSequenceDirector.OnSkipOrRemoved Size 16
class FOnSkipOrRemoved
{

 public: 
	struct AActor* Actor;  // Offset: 0 Size: 8
	enum class EEndPlayReason EndPlayReason;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedMainTabPrev Size 4
class FOnClickedMainTabPrev
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_CustomGamePageWidget.OnClickedSelectButtonInModeChangeDialog Size 4
class FOnClickedSelectButtonInModeChangeDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedMyKcoinInfo Size 4
class FOnClickedMyKcoinInfo
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedPaymentLaw Size 4
class FOnClickedPaymentLaw
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedPricePreview Size 4
class FOnClickedPricePreview
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.DedicatedLobbyGameState.Multicast_RaceDesc Size 24
class FMulticast_RaceDesc
{

 public: 
	struct FString InTrackAlias;  // Offset: 0 Size: 16
	enum class ERaceMode InRaceMode;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyLogicComponent.OnUpdateLobbyPawn Size 1
class FOnUpdateLobbyPawn
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEquipment : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedPromotionItem Size 4
class FOnClickedPromotionItem
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedPromotionPrev Size 4
class FOnClickedPromotionPrev
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedPurchaseConfirmStockItem Size 4
class FOnClickedPurchaseConfirmStockItem
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedShowAgreeTerms Size 4
class FOnClickedShowAgreeTerms
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedToggleFriendList Size 4
class FOnClickedToggleFriendList
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnClickedWithDrawSubscription Size 4
class FOnClickedWithDrawSubscription
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.FuncLib_Blueprint.TeamColorOf Size 52
class FTeamColorOf
{

 public: 
	enum class ERaceTeamType TeamID;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FTeamColor ReturnValue;  // Offset: 4 Size: 48



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnConfirmPurchasingItem Size 16
class FOnConfirmPurchasingItem
{

 public: 
	struct TArray<struct FString> StockItemIDs;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.FuncLib_Blueprint.BP_MessageDialog Size 24
class FBP_MessageDialog
{

 public: 
	struct FText Message;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnFocusFocusableButtonInDetail Size 4
class FOnFocusFocusableButtonInDetail
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnFocusFocusableButtonInKCoinList Size 4
class FOnFocusFocusableButtonInKCoinList
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnFocusFocusableButtonInKCoinPackageList Size 4
class FOnFocusFocusableButtonInKCoinPackageList
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnPickupConfirmItem Size 16
class FOnPickupConfirmItem
{

 public: 
	struct TArray<struct FString> ShopStockItemIDs;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnRefundConfirmItem Size 16
class FOnRefundConfirmItem
{

 public: 
	struct TArray<struct FString> ShopStockItemIDs;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.SideMenuPageWidget.Main_OnAnnouncmentClicked Size 4
class FMain_OnAnnouncmentClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.OnToyRequestToyBillingProduct Size 4
class FOnToyRequestToyBillingProduct
{

 public: 
	int32_t ErrorCode;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.GetOwnerPlayer Size 8
class FGetOwnerPlayer
{

 public: 
	struct ULocalPlayer* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.RequestRiderNameChangeReserve Size 16
class FRequestRiderNameChangeReserve
{

 public: 
	struct FString InRiderName;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.ShowFailInventoryAddStockPopup Size 4
class FShowFailInventoryAddStockPopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_CommunityPageWidget.FriendMenu_OnActionButtonClicked Size 4
class FFriendMenu_OnActionButtonClicked
{

 public: 
	int32_t ButtonType;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopPageWidget.ShowNxACheckoutWidget Size 16
class FShowNxACheckoutWidget
{

 public: 
	struct FString LoadURL;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.SideMenuPageWidget.BlockList_CloseDialog Size 4
class FBlockList_CloseDialog
{

 public: 
	int32_t NotUsed;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.SetPivot Size 8
class FSetPivot
{

 public: 
	struct FVector2D InPivot;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.SideMenuPageWidget.Main_OnCloseButtonClicked Size 4
class FMain_OnCloseButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdHelper.GetKdInstance Size 16
class FGetKdInstance
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UKdGameInstance* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.RacingPassLogicComponent.OnSeasonChanged Size 8
class FOnSeasonChanged
{

 public: 
	struct UKtSeasonDataSet* Data;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.SideMenuPageWidget.Main_OnReportClicked Size 4
class FMain_OnReportClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.SideMenuPageWidget.Main_OnTermsAndConditionsClicked Size 4
class FMain_OnTermsAndConditionsClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.SideMenuPageWidget.OnKeyGuideShowWASDButtonClicked Size 4
class FOnKeyGuideShowWASDButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_SideMenuPageWidget.Report_OnSubcategoryCloseButtonClicked Size 4
class FReport_OnSubcategoryCloseButtonClicked
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KeyRebindingLibrary.ApplyGamepadPreset Size 40
class FApplyGamepadPreset
{

 public: 
	struct TArray<struct FInputActionKeyMapping> InputAction;  // Offset: 0 Size: 16
	struct TArray<struct FInputAxisKeyMapping> InputAxis;  // Offset: 16 Size: 16
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool bSaveSetting : 1;  // Offset: 32 Size: 1
	char pad_33_1 : 7;  // Offset: 33 Size: 1
	bool bSaveConfig : 1;  // Offset: 33 Size: 1
	char pad_34_1 : 7;  // Offset: 34 Size: 1
	bool ReturnValue : 1;  // Offset: 34 Size: 1
	char pad_35[5];  // Offset: 35 Size: 5



 // Functions 
 public:
}; 
 
 //Function KartDrift.SideMenuPageWidget.Report_CloseMainCategorySelectDialog Size 4
class FReport_CloseMainCategorySelectDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseMissionTitleWidget.OnDriftMissionStartTimer Size 1
class FOnDriftMissionStartTimer
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bStartTimer : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.SideMenuPageWidget.Report_MainCategoryOnClickedPlayerReportButton Size 4
class FReport_MainCategoryOnClickedPlayerReportButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.SideMenuPageWidget.Report_Send Size 4
class FReport_Send
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.SideMenuPageWidget.TermsAndConditions_CloseDialog Size 4
class FTermsAndConditions_CloseDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_SideMenuPageWidget.Report_OnClickedShowGamerCardButton Size 4
class FReport_OnClickedShowGamerCardButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_SetSQTime Size 4
class FDev_SetSQTime
{

 public: 
	float Time;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.StickerMarketPageWidget.OnClicked_MainTab_Left Size 4
class FOnClicked_MainTab_Left
{

 public: 
	int32_t nIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.StickerMarketPageWidget.OnClicked_MainTab_Right Size 4
class FOnClicked_MainTab_Right
{

 public: 
	int32_t nIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.StickerMarketPageWidget.OnClicked_Search Size 4
class FOnClicked_Search
{

 public: 
	int32_t nIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdPlayerController.SetServerTickRate Size 4
class FSetServerTickRate
{

 public: 
	float InTickRate;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.StickerMarketPageWidget.OnClicked_Upload Size 4
class FOnClicked_Upload
{

 public: 
	int32_t nIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.StickerMarketPageWidget.Widget_ReportDialog_OnConfirmButtonClick Size 4
class FWidget_ReportDialog_OnConfirmButtonClick
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemComponent.Server_GimmickItemAffect Size 16
class FServer_GimmickItemAffect
{

 public: 
	struct UObject* Gimmick;  // Offset: 0 Size: 8
	UObject* ReactionClass;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.StickerMarketPageWidget.Widget_ReportDialog_OnItemChecked Size 4
class FWidget_ReportDialog_OnItemChecked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.StickerMarketPageWidget.Widget_SearchPopup_OnTagSelectUncheck Size 4
class FWidget_SearchPopup_OnTagSelectUncheck
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.StickerMarketPageWidget.Widget_StockPopup_BookmarkButtonClick Size 4
class FWidget_StockPopup_BookmarkButtonClick
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_DisconnectPersonalResultPlayer Size 4
class FDev_DisconnectPersonalResultPlayer
{

 public: 
	int32_t PlayerNumber;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.StickerMarketPageWidget.Widget_StockPopup_ConfirmButtonClick Size 4
class FWidget_StockPopup_ConfirmButtonClick
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.StickerMarketPageWidget.Widget_TagSelectPopup_OnTagSelectClick Size 4
class FWidget_TagSelectPopup_OnTagSelectClick
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.StickerMarketPageWidget.Widget_TextInput_ConfirmClick Size 4
class FWidget_TextInput_ConfirmClick
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LoadingTimeComponent.ServerSetLoadingSecond Size 4
class FServerSetLoadingSecond
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.StickerMarketPageWidget.Widget_TextInputPopup_OnTextChanged Size 24
class FWidget_TextInputPopup_OnTextChanged
{

 public: 
	struct FText ChangedText;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.StickerMarketPageWidget.Widget_UploadPopup_OnNewNameClick Size 4
class FWidget_UploadPopup_OnNewNameClick
{

 public: 
	int32_t BtnIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdLevelLoader.OnUnloadLevelStreamingComplete Size 4
class FOnUnloadLevelStreamingComplete
{

 public: 
	int32_t InLinkID;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.TimeAttackPageWidget.OnClickedNextRankingBoardTabButton Size 4
class FOnClickedNextRankingBoardTabButton
{

 public: 
	int32_t nIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.TimeAttackPageWidget.OnClickedPrevRankingBoardTabButton Size 4
class FOnClickedPrevRankingBoardTabButton
{

 public: 
	int32_t nIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PSOCollectWidget.OnButtonReleased_MajorIntroSequence Size 1
class FOnButtonReleased_MajorIntroSequence
{

 public: 
	char InSequenceType;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.TimeAttackPageWidget.OnClickedSelectRankerButton Size 4
class FOnClickedSelectRankerButton
{

 public: 
	int32_t nIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.TimeAttackPageWidget.OnClickedStartTimeAttackButton Size 4
class FOnClickedStartTimeAttackButton
{

 public: 
	int32_t nIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.TimeAttackPageWidget.OnClickedWatchGameReplayButton Size 4
class FOnClickedWatchGameReplayButton
{

 public: 
	int32_t nIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.TimeAttackPageWidget.TrackChangeDialogOnTrackChanged Size 16
class FTrackChangeDialogOnTrackChanged
{

 public: 
	struct FString InTrackAlias;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_TimeAttackPageWidget.OnClickedNextRankingBoardPageButton Size 4
class FOnClickedNextRankingBoardPageButton
{

 public: 
	int32_t nIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_OpenShadowQuest Size 32
class FDev_OpenShadowQuest
{

 public: 
	struct FString ReplayFileName;  // Offset: 0 Size: 16
	int32_t SubGameMode;  // Offset: 16 Size: 4
	int32_t ShadowStartTime;  // Offset: 20 Size: 4
	int32_t MaxDistance;  // Offset: 24 Size: 4
	int32_t TimeLimit;  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.TimeAttackPersonalResultWidget.OnClickedExitGame Size 4
class FOnClickedExitGame
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.TimeAttackPersonalResultWidget.OnClickedRetryGame Size 4
class FOnClickedRetryGame
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.C_TimeAttackSelectRankerDialog.OnClickedGamerCardButton Size 4
class FOnClickedGamerCardButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartRiderTrackEffectStatics.ActivateWaterSplashEffect Size 32
class FActivateWaterSplashEffect
{

 public: 
	struct AActor* TargetActor;  // Offset: 0 Size: 8
	struct UParticleSystem* Effect;  // Offset: 8 Size: 8
	float ActiveTimeSeconds;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct UParticleSystemComponent* ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.CharAnimInstance.CharacterLookAt Size 16
class FCharacterLookAt
{

 public: 
	struct FRotator InRotator;  // Offset: 0 Size: 12
	float DeltaTime;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseJumpPhysicsZone.OnCrashKart Size 24
class FOnCrashKart
{

 public: 
	enum class ECollisionChannel CollisionObjectType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t CrashLevel;  // Offset: 4 Size: 4
	float HitVelocity;  // Offset: 8 Size: 4
	struct FVector CrashLocation;  // Offset: 12 Size: 12



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartSkeletalMeshComponent.OnClientVerified Size 1
class FOnClientVerified
{

 public: 
	enum class EClientVerifierOrder InOrder;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.CheatComponent.Server_OverrideTotalTime Size 12
class FServer_OverrideTotalTime
{

 public: 
	int32_t Minute;  // Offset: 0 Size: 4
	int32_t Second;  // Offset: 4 Size: 4
	int32_t Millisecond;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CheatComponent.Server_TMITickLogLatency Size 4
class FServer_TMITickLogLatency
{

 public: 
	float InLatency;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ComboBoxStringExpandWithSearch.OnGenerateWidget Size 24
class FOnGenerateWidget
{

 public: 
	struct FString InItem;  // Offset: 0 Size: 16
	struct UWidget* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.CommunityLogicComponent.OnGfsAccountPlatformDataUpdated Size 240
class FOnGfsAccountPlatformDataUpdated
{

 public: 
	struct FAccountPlatformData Data;  // Offset: 0 Size: 240



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_GoToReplayTimeSeconds Size 4
class FDev_GoToReplayTimeSeconds
{

 public: 
	float TargetTimeSecond;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CommunityLogicComponent.OnGfsFriendRequestReceived Size 240
class FOnGfsFriendRequestReceived
{

 public: 
	struct FAccountPlatformData Data;  // Offset: 0 Size: 240



 // Functions 
 public:
}; 
 
 //Function KartDrift.CommunityLogicComponent.OnUpdatePartyInvitation Size 1
class FOnUpdatePartyInvitation
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bRefused : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.CommunityLogicComponent.OpenAccountLinkWeb Size 4
class FOpenAccountLinkWeb
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_MailPageWidget.OnClickedDeleteButton Size 4
class FOnClickedDeleteButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ControlDirectingWidget.OnComboBoxSelection_MajorPodiumSequence Size 24
class FOnComboBoxSelection_MajorPodiumSequence
{

 public: 
	struct FString SelectedItem;  // Offset: 0 Size: 16
	enum class ESelectInfo SelectionType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.ControlPawnEquipWidget.OnComboBoxSelectionChanged_Character Size 24
class FOnComboBoxSelectionChanged_Character
{

 public: 
	struct FString SelectedItem;  // Offset: 0 Size: 16
	enum class ESelectInfo SelectionType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.PSOCollectWidget.OnComboBoxSelectionChanged_Costume Size 32
class FOnComboBoxSelectionChanged_Costume
{

 public: 
	struct FString InSelectedItem;  // Offset: 0 Size: 16
	struct FString InSelectedItemKey;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ControlPawnEquipWidget.OnComboBoxSelectionChanged_Kart Size 24
class FOnComboBoxSelectionChanged_Kart
{

 public: 
	struct FString SelectedItem;  // Offset: 0 Size: 16
	enum class ESelectInfo SelectionType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.PSOCollectWidget.OnComboBoxSelectionChanged_Parts Size 32
class FOnComboBoxSelectionChanged_Parts
{

 public: 
	struct FString InSelectedItem;  // Offset: 0 Size: 16
	struct FString InSelectedItemKey;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceTimeMulticastHelperComponent.ClientRelaySetAuthBeginRaceTime Size 16
class FClientRelaySetAuthBeginRaceTime
{

 public: 
	struct UObject* RelayTarget;  // Offset: 0 Size: 8
	float Time;  // Offset: 8 Size: 4
	float IntroTime;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ControlPawnFXWidget.OnComboBoxSelection_Sit Size 24
class FOnComboBoxSelection_Sit
{

 public: 
	struct FString SelectedItem;  // Offset: 0 Size: 16
	enum class ESelectInfo SelectionType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.GetCylinderArcAngle Size 4
class FGetCylinderArcAngle
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.GetGeometryMode Size 1
class FGetGeometryMode
{

 public: 
	enum class EWidgetGeometryMode ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.GetMaterialInstance Size 8
class FGetMaterialInstance
{

 public: 
	struct UMaterialInstanceDynamic* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceRankComponent.SetLaps Size 4
class FSetLaps
{

 public: 
	int32_t InLapCount;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.GetPivot Size 8
class FGetPivot
{

 public: 
	struct FVector2D ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.FuncLib_Blueprint.MoveGridSlots Size 32
class FMoveGridSlots
{

 public: 
	struct UGridPanel* FromRow;  // Offset: 0 Size: 8
	struct UGridPanel* ToPanel;  // Offset: 8 Size: 8
	int32_t ToRow;  // Offset: 16 Size: 4
	struct FVector2D AddNudge;  // Offset: 20 Size: 8
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.GetRedrawTime Size 4
class FGetRedrawTime
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.GetRenderTarget Size 8
class FGetRenderTarget
{

 public: 
	struct UTextureRenderTarget2D* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_NxAPickup Size 16
class FDev_NxAPickup
{

 public: 
	struct FString transactionId;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.GetTickWhenOffscreen Size 1
class FGetTickWhenOffscreen
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.GetWidget Size 8
class FGetWidget
{

 public: 
	struct UUserWidget* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.GetWidgetSpace Size 1
class FGetWidgetSpace
{

 public: 
	enum class EWidgetSpace ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.GetWindowFocusable Size 1
class FGetWindowFocusable
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_DelLivery Size 4
class FDev_DelLivery
{

 public: 
	int32_t ID;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAssetManager.SetItemID Size 16
class FSetItemID
{

 public: 
	struct FString inString;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.GetWindowVisiblility Size 1
class FGetWindowVisiblility
{

 public: 
	enum class EWindowVisibility ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.ScenarioSequenceDirector.SetMessageHUDWidget Size 32
class FSetMessageHUDWidget
{

 public: 
	struct AActor* InActor;  // Offset: 0 Size: 8
	struct FScenarioMessageHUDWidgetDataGroup InDataGroup;  // Offset: 8 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.IsWidgetVisible Size 1
class FIsWidgetVisible
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartGameUserSettings.SetFlashIndicatorEnabled Size 1
class FSetFlashIndicatorEnabled
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnabled : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.SetCylinderArcAngle Size 4
class FSetCylinderArcAngle
{

 public: 
	float InCylinderArcAngle;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.SetDrawAtDesiredSize Size 1
class FSetDrawAtDesiredSize
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInDrawAtDesiredSize : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.SetDrawSize Size 8
class FSetDrawSize
{

 public: 
	struct FVector2D Size;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.SetGeometryMode Size 1
class FSetGeometryMode
{

 public: 
	enum class EWidgetGeometryMode InGeometryMode;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LoginPageWidget.ChangeLanguage_ShowComboPanel Size 4
class FChangeLanguage_ShowComboPanel
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.SetManuallyRedraw Size 1
class FSetManuallyRedraw
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bUseManualRedraw : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.SetOwnerPlayer Size 8
class FSetOwnerPlayer
{

 public: 
	struct ULocalPlayer* LocalPlayer;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.SetRedrawTime Size 4
class FSetRedrawTime
{

 public: 
	float InRedrawTime;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.SetTickMode Size 1
class FSetTickMode
{

 public: 
	enum class ETickMode InTickMode;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.SetTintColorAndOpacity Size 16
class FSetTintColorAndOpacity
{

 public: 
	struct FLinearColor NewTintColorAndOpacity;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.DedicatedLobbyPlayerController.OnDediWidgetChatCommitted Size 32
class FOnDediWidgetChatCommitted
{

 public: 
	struct FText InText;  // Offset: 0 Size: 24
	enum class ETextCommit InCommitMethod;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.SetTwoSided Size 1
class FSetTwoSided
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bWantTwoSided : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.SetWidget Size 8
class FSetWidget
{

 public: 
	struct UUserWidget* Widget;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.CustomWidgetComponent.SetWindowFocusable Size 1
class FSetWindowFocusable
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInWindowFocusable : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.DedicatedLobbyPlayerController.Server_AddChat Size 24
class FServer_AddChat
{

 public: 
	struct FText InChat;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayModeSelectLogicComponent.OnSelectMode Size 4
class FOnSelectMode
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.DedicatedLobbyPlayerState.Server_SendClientDesc Size 288
class FServer_SendClientDesc
{

 public: 
	struct FDedicatedLobbyPlayerDesc InDesc;  // Offset: 0 Size: 288



 // Functions 
 public:
}; 
 
 //Function KartDrift.DedicatedLobbyWidget.AddLog Size 24
class FAddLog
{

 public: 
	struct FText InText;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_LoadReplay Size 4
class FDev_LoadReplay
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.DepthDebugCameraActor.ReceiveEditorTick Size 4
class FReceiveEditorTick
{

 public: 
	float DeltaTime;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PSOCollectWidget.OnButtonReleased_ItemAffectBy Size 1
class FOnButtonReleased_ItemAffectBy
{

 public: 
	char InItemType;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.EnvironmentTriggerBox.TriggerBeginOverlap Size 168
class FTriggerBeginOverlap
{

 public: 
	struct UPrimitiveComponent* OverlappedComponent;  // Offset: 0 Size: 8
	struct AActor* OtherActor;  // Offset: 8 Size: 8
	struct UPrimitiveComponent* OtherComp;  // Offset: 16 Size: 8
	int32_t OtherBodyIndex;  // Offset: 24 Size: 4
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool bFromSweep : 1;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3
	struct FHitResult SweepResult;  // Offset: 32 Size: 136



 // Functions 
 public:
}; 
 
 //Function KartDrift.PSOCollectWidget.OnButtonReleased_MajorFinishSequence Size 1
class FOnButtonReleased_MajorFinishSequence
{

 public: 
	char InSequenceType;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.PSOCollectWidget.OnButtonReleased_MajorPodiumSequence Size 1
class FOnButtonReleased_MajorPodiumSequence
{

 public: 
	char InSequenceType;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.DevResolutionWidget.ResolutionSelected Size 24
class FResolutionSelected
{

 public: 
	struct FString SelectedItem;  // Offset: 0 Size: 16
	enum class ESelectInfo SelectionType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemComponent.Server_RequestOnAffectedBy Size 16
class FServer_RequestOnAffectedBy
{

 public: 
	struct FItemAffectParam Param;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.RacingPassLogicComponent.OnUpdatePartyState Size 1
class FOnUpdatePartyState
{

 public: 
	enum class EPartyChageState ChangeState;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_RacingPassPageWidget.OnSubEntryClicked Size 4
class FOnSubEntryClicked
{

 public: 
	int32_t rewardIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdForceFeedbackComponent.StopForceFeedback Size 8
class FStopForceFeedback
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdHelper.GetInst Size 16
class FGetInst
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UKdService* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.FuncLib_Blueprint.IndividualOthersColor Size 48
class FIndividualOthersColor
{

 public: 
	struct FTeamColor ReturnValue;  // Offset: 0 Size: 48



 // Functions 
 public:
}; 
 
 //Function KartDrift.FuncLib_Blueprint.MoveGridHeader Size 16
class FMoveGridHeader
{

 public: 
	struct UGridPanel* FromHeader;  // Offset: 0 Size: 8
	struct UGridPanel* ToPanel;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.TMIMulticastHelperComponent.MulticastRelaySendResultData Size 40
class FMulticastRelaySendResultData
{

 public: 
	struct UObject* RelayTarget;  // Offset: 0 Size: 8
	struct TArray<struct FMajorGamePlayerData> InPlayerContainer;  // Offset: 8 Size: 16
	struct TArray<struct FMajorGameTeamData> InTeamContainer;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.FuncLib_Blueprint.RemoveRowsBelow Size 16
class FRemoveRowsBelow
{

 public: 
	struct UGridPanel* GridPanel;  // Offset: 0 Size: 8
	int32_t BeginRowInclusive;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceRankMulticastHelperComponent.ClientRelayOnFinish Size 24
class FClientRelayOnFinish
{

 public: 
	struct UObject* RelayTarget;  // Offset: 0 Size: 8
	struct UObject* KdPawn;  // Offset: 8 Size: 8
	int32_t rank;  // Offset: 16 Size: 4
	float TotalTime;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayReadyPageWidget.InfoModifyDialog_OnClickedBackButton Size 4
class FInfoModifyDialog_OnClickedBackButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.GameplayControlTypeSelectDialog.OnClickedGameplayControlTypeConfirm Size 4
class FOnClickedGameplayControlTypeConfirm
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.GameplayKeyGuide.DriftGuide Size 2
class FDriftGuide
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bLeft : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bActivate : 1;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.WrongWayWidget.OnWrongWay Size 1
class FOnWrongWay
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bWrongWay : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.TouchKeyGuideWidget.UpdateItemSlot Size 24
class FUpdateItemSlot
{

 public: 
	struct TArray<enum class EItemType> ItemTypes;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bActivate : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.LobbyLogicComponent.OnStartMatch Size 16
class FOnStartMatch
{

 public: 
	struct TArray<enum class ERaceMode> GameType;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.RacingPassLogicComponent.OnUserLevelUpdated Size 8
class FOnUserLevelUpdated
{

 public: 
	enum class EUserLevelUpdatedType InType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t InLevel;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceHudWidget.AddChildToSlot Size 24
class FAddChildToSlot
{

 public: 
	struct FName SlotName;  // Offset: 0 Size: 8
	struct UWidget* Widget;  // Offset: 8 Size: 8
	struct UPanelSlot* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.SpawnMagnetPawnList.OnComponentBeginOverlap Size 168
class FOnComponentBeginOverlap
{

 public: 
	struct UPrimitiveComponent* OverlappedComponent;  // Offset: 0 Size: 8
	struct AActor* OtherActor;  // Offset: 8 Size: 8
	struct UPrimitiveComponent* OtherComp;  // Offset: 16 Size: 8
	int32_t OtherBodyIndex;  // Offset: 24 Size: 4
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool bFromSweep : 1;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3
	struct FHitResult SweepResult;  // Offset: 32 Size: 136



 // Functions 
 public:
}; 
 
 //Function KartDrift.WaterReaction.StrokeByAxis Size 4
class FStrokeByAxis
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.TouchInstanceBoosterButton.OnAssistEnable Size 1
class FOnAssistEnable
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnable : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_InfoPageWidget.OnClickedBackButton_GrandPrix Size 4
class FOnClickedBackButton_GrandPrix
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.TouchInstanceBoosterButton.OnGuideInstanceBoost Size 1
class FOnGuideInstanceBoost
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bReadyInstanceBoost : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemWaterfly.MulticastBeginCasting Size 16
class FMulticastBeginCasting
{

 public: 
	struct UItemComponent* Attacker;  // Offset: 0 Size: 8
	struct UItemComponent* Victim;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemAngel.MulticastDefend Size 8
class FMulticastDefend
{

 public: 
	struct UItemComponent* InVictim;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemSnowstorm.BeginOverlap Size 168
class FBeginOverlap
{

 public: 
	struct UPrimitiveComponent* OverlappedComponent;  // Offset: 0 Size: 8
	struct AActor* OtherActor;  // Offset: 8 Size: 8
	struct UPrimitiveComponent* OtherComp;  // Offset: 16 Size: 8
	int32_t OtherBodyIndex;  // Offset: 24 Size: 4
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool bFromSweep : 1;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3
	struct FHitResult SweepResult;  // Offset: 32 Size: 136



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemBarricade.ClientBarricadeHit Size 176
class FClientBarricadeHit
{

 public: 
	struct UPrimitiveComponent* HitComponent;  // Offset: 0 Size: 8
	struct AActor* OtherActor;  // Offset: 8 Size: 8
	struct UPrimitiveComponent* OtherComp;  // Offset: 16 Size: 8
	struct FVector NormalImpulse;  // Offset: 24 Size: 12
	struct FHitResult Hit;  // Offset: 36 Size: 136
	char pad_172[4];  // Offset: 172 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemMine.MulticastSpawn Size 24
class FMulticastSpawn
{

 public: 
	struct UItemComponent* User;  // Offset: 0 Size: 8
	struct TArray<struct FVector> MineLocations;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemComponent.MultiCast_GimmickItemAffect Size 16
class FMultiCast_GimmickItemAffect
{

 public: 
	struct UObject* Gimmick;  // Offset: 0 Size: 8
	UObject* ReactionClass;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemComponent.Multicast_OnSlotLock Size 4
class FMulticast_OnSlotLock
{

 public: 
	float Time;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_OptionPageWidget.OnCustomHUDButtonUnfocused Size 4
class FOnCustomHUDButtonUnfocused
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemComponent.MulticastAffectedBy Size 24
class FMulticastAffectedBy
{

 public: 
	struct UItemComponent* User;  // Offset: 0 Size: 8
	enum class EItemType Type;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3
	int32_t ItemId;  // Offset: 12 Size: 4
	enum class EItemFilterResult Result;  // Offset: 16 Size: 4
	enum class EItemType BlockType;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemComponent.ServerBeginCasting Size 8
class FServerBeginCasting
{

 public: 
	int32_t InItemSequence;  // Offset: 0 Size: 4
	enum class EItemType ItemType;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function KartDrift.SideMenuLogicComponent.OnRecentGameDataReadyInAccount Size 64
class FOnRecentGameDataReadyInAccount
{

 public: 
	struct FKtRecentGame RecentGame;  // Offset: 0 Size: 64



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemComponent.ServerSpawnItem Size 8
class FServerSpawnItem
{

 public: 
	enum class EItemType ItemType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	enum class ESpawnItemReason Reason;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartMovementReplication.ServerSetKartRepMovement Size 64
class FServerSetKartRepMovement
{

 public: 
	struct FKartRepMovement InKartRepMovement;  // Offset: 0 Size: 64



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemCubesComponent.MulticastRespawn Size 8
class FMulticastRespawn
{

 public: 
	struct AGoItem_Cube* Cube;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.DEV_PlayCharacterMontage Size 1
class FDEV_PlayCharacterMontage
{

 public: 
	enum class ECharacterMontage InMontage;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemFeedWidget.OnCutoff Size 8
class FOnCutoff
{

 public: 
	enum class EItemType UsedItemType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t UsedItemId;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemFeedWidget.OnNewActorAdded Size 16
class FOnNewActorAdded
{

 public: 
	enum class EItemType UsedItemType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t UsedItemId;  // Offset: 4 Size: 4
	struct AActor* TargetActor;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemListPopup.CancleButton Size 4
class FCancleButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemRocketFirstRank.MulticastReachedTarget Size 8
class FMulticastReachedTarget
{

 public: 
	struct UItemComponent* User;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.PawnSequenceComponent.Server_PlaySeuqence Size 1
class FServer_PlaySeuqence
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIsPlaying : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemSiren.OnSirenOverlap Size 168
class FOnSirenOverlap
{

 public: 
	struct UPrimitiveComponent* OverlappedComponent;  // Offset: 0 Size: 8
	struct AActor* OtherActor;  // Offset: 8 Size: 8
	struct UPrimitiveComponent* OtherComp;  // Offset: 16 Size: 8
	int32_t OtherBodyIndex;  // Offset: 24 Size: 4
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool bFromSweep : 1;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3
	struct FHitResult SweepResult;  // Offset: 32 Size: 136



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemSlotBunch.GuideBoostItem Size 1
class FGuideBoostItem
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool Active : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemSlotComponent.Multicast_ChangeItemUsable Size 1
class FMulticast_ChangeItemUsable
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool Value : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemSlotComponent.Multicast_SpawnItem Size 24
class FMulticast_SpawnItem
{

 public: 
	struct AItem* NewItem;  // Offset: 0 Size: 8
	enum class EItemType ItemType;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3
	int32_t Index;  // Offset: 12 Size: 4
	int32_t ItemSequence;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemTacticalRowWidget.Clear Size 4
class FClear
{

 public: 
	int32_t ID;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_CommunityPageWidget.InviteMenu_OnSearchTextChanged Size 24
class FInviteMenu_OnSearchTextChanged
{

 public: 
	struct FText NewText;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemTacticalRowWidget.Succeeded Size 48
class FSucceeded
{

 public: 
	enum class EHitState HitState;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct UTexture2D* Texture;  // Offset: 8 Size: 8
	struct UTexture2D* TextureSmall;  // Offset: 16 Size: 8
	struct FText Name;  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.ItemUfo.MulticastAffecting Size 8
class FMulticastAffecting
{

 public: 
	struct UItemComponent* InVictim;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryLogicComponent.OnDeletedLivery Size 4
class FOnDeletedLivery
{

 public: 
	int32_t InLiveryId;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartGameUserSettings.GetAutoPartyInviteReject Size 1
class FGetAutoPartyInviteReject
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartGameUserSettings.GetForceFeedbackEffect Size 1
class FGetForceFeedbackEffect
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartGameUserSettings.GetReflexMode Size 1
class FGetReflexMode
{

 public: 
	enum class EKdReflexMode ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceTimeComponent.GetBeginGameTime Size 4
class FGetBeginGameTime
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartGameUserSettings.GetShowOtherRiderLivery Size 1
class FGetShowOtherRiderLivery
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartGameUserSettings.GetShowOtherRiderNames Size 1
class FGetShowOtherRiderNames
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartGameUserSettings.SetAutoPartyInviteReject Size 1
class FSetAutoPartyInviteReject
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnable : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartGameUserSettings.SetAutoPartyJoinReject Size 1
class FSetAutoPartyJoinReject
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnable : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartGameUserSettings.SetCultureIndex Size 4
class FSetCultureIndex
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.WebPageWidget.LoadURL Size 16
class FLoadURL
{

 public: 
	struct FString NewURL;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartGameUserSettings.SetReflexMode Size 1
class FSetReflexMode
{

 public: 
	enum class EKdReflexMode Mode;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartGameUserSettings.SetShowOtherRiderLivery Size 1
class FSetShowOtherRiderLivery
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnable : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartMovementComponent.MakeImpulse Size 4
class FMakeImpulse
{

 public: 
	float Multiplier;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartMovementReplication.OnComponentHitEvent Size 176
class FOnComponentHitEvent
{

 public: 
	struct UPrimitiveComponent* HitComponent;  // Offset: 0 Size: 8
	struct AActor* OtherActor;  // Offset: 8 Size: 8
	struct UPrimitiveComponent* OtherComp;  // Offset: 16 Size: 8
	struct FVector NormalImpulse;  // Offset: 24 Size: 12
	struct FHitResult Hit;  // Offset: 36 Size: 136
	char pad_172[4];  // Offset: 172 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RiderNameChangeDialog.OnClickedRiderNameChangeBtn Size 4
class FOnClickedRiderNameChangeBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MultiplayTestPlayerController.SendCreateSessionRequest Size 16
class FSendCreateSessionRequest
{

 public: 
	struct FString RegionId;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartMovementComponent.SetDriveMode Size 1
class FSetDriveMode
{

 public: 
	char DriveMode;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartMovementComponent.SetGravityFromGroundNormal Size 1
class FSetGravityFromGroundNormal
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool InActivate : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartMovementReplication.Client_Impulse Size 32
class FClient_Impulse
{

 public: 
	struct FVector NormalImpulse;  // Offset: 0 Size: 12
	char pad_12[4];  // Offset: 12 Size: 4
	struct AActor* OtherActor;  // Offset: 16 Size: 8
	float OnHitTimeStamp;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartSkillLogicComponent.OnActivatePageWidget Size 1
class FOnActivatePageWidget
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bActivate : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceCounterWidget.EndRaceCountdown Size 4
class FEndRaceCountdown
{

 public: 
	float CountdownFinishTime;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_SetDisableContent Size 2
class FDev_SetDisableContent
{

 public: 
	enum class EContentType ContentType;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bIsDisable : 1;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartSkillLogicComponent.OnClosedInsufficientKoinWarningDialog Size 4
class FOnClosedInsufficientKoinWarningDialog
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartSkillLogicComponent.OnUpdateKartExp Size 24
class FOnUpdateKartExp
{

 public: 
	struct FString KartID;  // Offset: 0 Size: 16
	int32_t UpdatedExp;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartSkillLogicComponent.OnUpdateKartSkillNode Size 8
class FOnUpdateKartSkillNode
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bSucceed : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function KartDrift.KartUpgradeLogicComponent.ShowKartUpgradeResult Size 2
class FShowKartUpgradeResult
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIsSuccess : 1;  // Offset: 0 Size: 1
	enum class EKtItemGrade KartGrade;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_ADTEventReward Size 4
class FDev_ADTEventReward
{

 public: 
	int32_t step;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdSequenceDirector.SetPawnInit Size 32
class FSetPawnInit
{

 public: 
	struct APawn* Pawn;  // Offset: 0 Size: 8
	struct USequencerEquipData* DataAsset;  // Offset: 8 Size: 8
	struct FString PawnName;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_GetFromTitleStorage Size 16
class FDev_GetFromTitleStorage
{

 public: 
	struct FString TargetXuid;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_GfsGetUsersByPlatformNickname Size 16
class FDev_GfsGetUsersByPlatformNickname
{

 public: 
	struct FString nickName;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_GfsSetPresence Size 16
class FDev_GfsSetPresence
{

 public: 
	struct FString newStatus;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_Gift Size 48
class FDev_Gift
{

 public: 
	struct FString ReceiverNpsn;  // Offset: 0 Size: 16
	struct FString stockId;  // Offset: 16 Size: 16
	struct FString currency;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_Http Size 64
class FDev_Http
{

 public: 
	struct FString verb;  // Offset: 0 Size: 16
	struct FString URL;  // Offset: 16 Size: 16
	struct FString Header;  // Offset: 32 Size: 16
	struct FString Body;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseObjectSpawnComponent.OnTarget Size 8
class FOnTarget
{

 public: 
	struct AActor* Owner;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_InviteParty Size 16
class FDev_InviteParty
{

 public: 
	struct FString accountId;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_Join Size 16
class FDev_Join
{

 public: 
	struct FString GameName;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_KrPcPickup Size 4
class FDev_KrPcPickup
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_LicenseClear Size 40
class FDev_LicenseClear
{

 public: 
	struct FString InLicenseGroupId;  // Offset: 0 Size: 16
	struct FString InLicenseMissionId;  // Offset: 16 Size: 16
	int32_t InStarCount;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_LiveSendInviteFriend Size 16
class FDev_LiveSendInviteFriend
{

 public: 
	struct FString xuid;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_LootBox_SetContinualResultItem Size 80
class FDev_LootBox_SetContinualResultItem
{

 public: 
	struct FString ItemIdWithCount1st;  // Offset: 0 Size: 16
	struct FString ItemIdWithCount2nd;  // Offset: 16 Size: 16
	struct FString ItemIdWithCount3rd;  // Offset: 32 Size: 16
	struct FString ItemIdWithCount4th;  // Offset: 48 Size: 16
	struct FString ItemIdWithCount5th;  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_LootBox_SetContinualResultType Size 5
class FDev_LootBox_SetContinualResultType
{

 public: 
	enum class EKtItemType ItemType1st;  // Offset: 0 Size: 1
	enum class EKtItemType ItemType2nd;  // Offset: 1 Size: 1
	enum class EKtItemType ItemType3rd;  // Offset: 2 Size: 1
	enum class EKtItemType ItemType4th;  // Offset: 3 Size: 1
	enum class EKtItemType ItemType5th;  // Offset: 4 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_Party Size 16
class FDev_Party
{

 public: 
	struct FString TargetAccountId;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_PrintInvenItem Size 16
class FDev_PrintInvenItem
{

 public: 
	struct FString ItemIdPattern;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_SetTestPlatformType Size 2
class FDev_SetTestPlatformType
{

 public: 
	enum class EKtPlatform machinePlatform;  // Offset: 0 Size: 1
	enum class EKtAccountPlatform AccountPlatform;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_ShowConfirmDialog Size 32
class FDev_ShowConfirmDialog
{

 public: 
	struct FString Message;  // Offset: 0 Size: 16
	struct FString Title;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_TutorialComplete Size 2
class FDev_TutorialComplete
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bCompleted : 1;  // Offset: 0 Size: 1
	enum class EKtGameplayControlType GameplayControlType;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdAccountCheat.Dev_VDTEventReward Size 4
class FDev_VDTEventReward
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LiveryStickerPageWidget.OnPressedRotateL Size 4
class FOnPressedRotateL
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_AddNoticeMessage Size 24
class FDev_AddNoticeMessage
{

 public: 
	struct FText NoticeMessage;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_AssistOptions Size 8
class FDev_AssistOptions
{

 public: 
	int32_t Options;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bEnable : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_BroadcastVoiceStatusChange Size 24
class FDev_BroadcastVoiceStatusChange
{

 public: 
	struct FString accountId;  // Offset: 0 Size: 16
	int32_t status;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_ChangeCostume Size 16
class FDev_ChangeCostume
{

 public: 
	struct FString ID;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_ChangePlatform_All Size 4
class FDev_ChangePlatform_All
{

 public: 
	int32_t platform;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_GenerateMajorDummyPodiumData Size 1
class FDev_GenerateMajorDummyPodiumData
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInDiet : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_HideCategory Size 8
class FDev_HideCategory
{

 public: 
	int32_t CategoryID;  // Offset: 0 Size: 4
	int32_t IsVisible;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayReadyPageWidget.OnClickedChangeInfoButton Size 4
class FOnClickedChangeInfoButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_HideNameTag Size 1
class FDev_HideNameTag
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bHide : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_HideUIType1 Size 1
class FDev_HideUIType1
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bHide : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_HideUIType2 Size 1
class FDev_HideUIType2
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bHide : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.MajorPlayerState.Server_RequestTMIPlayerData Size 16
class FServer_RequestTMIPlayerData
{

 public: 
	struct FString InUniqueIdentifier;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_LoadTrackAsset Size 16
class FDev_LoadTrackAsset
{

 public: 
	struct FString TrackName;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_LogoutReason Size 16
class FDev_LogoutReason
{

 public: 
	struct FString Reason;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_ScenarioActivateGroup Size 32
class FDev_ScenarioActivateGroup
{

 public: 
	struct FString InCategoryID;  // Offset: 0 Size: 16
	struct FString InGroupID;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_TrackChangeDialog.OnMoveLicenseButtonClicked Size 4
class FOnMoveLicenseButtonClicked
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_ScenarioSetConditionCountToActivate Size 4
class FDev_ScenarioSetConditionCountToActivate
{

 public: 
	int32_t InValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_SetAITeleport Size 8
class FDev_SetAITeleport
{

 public: 
	float InputKey;  // Offset: 0 Size: 4
	float Speed;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_SetAIToRacerCheckTick Size 8
class FDev_SetAIToRacerCheckTick
{

 public: 
	int64_t InTick;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_SetPersonalResultPlayerInfo Size 12
class FDev_SetPersonalResultPlayerInfo
{

 public: 
	int32_t PlayerNumber;  // Offset: 0 Size: 4
	int32_t rank;  // Offset: 4 Size: 4
	float RemainingDistance;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_SetPlayMission Size 4
class FDev_SetPlayMission
{

 public: 
	int32_t playMissionId;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_SetSQDistance Size 4
class FDev_SetSQDistance
{

 public: 
	int32_t Distance;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_SetValue Size 32
class FDev_SetValue
{

 public: 
	struct FString VariableName;  // Offset: 0 Size: 16
	struct FString Value;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_SetWinningStreak Size 4
class FDev_SetWinningStreak
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_ShowPersonalResultWidget Size 4
class FDev_ShowPersonalResultWidget
{

 public: 
	int32_t PlayerCount;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_ShowSQDistanceWidget Size 8
class FDev_ShowSQDistanceWidget
{

 public: 
	int32_t DistancePoint;  // Offset: 0 Size: 4
	int32_t DistanceRadius;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LiveryStickerPageWidget.OnUnChecked_UseLayerScaleX Size 4
class FOnUnChecked_UseLayerScaleX
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_ShowSQTimeWidget Size 4
class FDev_ShowSQTimeWidget
{

 public: 
	float Radius;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_ShowSQTimeWidgetWithDistance Size 12
class FDev_ShowSQTimeWidgetWithDistance
{

 public: 
	float TimeRadius;  // Offset: 0 Size: 4
	int32_t DistancePoint;  // Offset: 4 Size: 4
	int32_t DistanceRadius;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_SimpleAODecalMaxOpacity Size 4
class FDev_SimpleAODecalMaxOpacity
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_SimpleAODecalVisibility Size 1
class FDev_SimpleAODecalVisibility
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool Value : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_StartRecord Size 1
class FDev_StartRecord
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bStart : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_StartReplay Size 1
class FDev_StartReplay
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bStart : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_StartUnrealReplay Size 16
class FDev_StartUnrealReplay
{

 public: 
	struct FString ReplayName;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdCheatManager.Dev_StraightWinCount Size 4
class FDev_StraightWinCount
{

 public: 
	int32_t InCount;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_ModeSelectPageWidget.OnClickedGrandPrixSelectButton Size 4
class FOnClickedGrandPrixSelectButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LevelBGMControlComponent.PlayLastBGM Size 1
class FPlayLastBGM
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdForceFeedbackComponent.SetActiveForceFeedback Size 1
class FSetActiveForceFeedback
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bActive : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdPlayerController.Server_SetServerTickRate Size 4
class FServer_SetServerTickRate
{

 public: 
	float InTickRate;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdPlayerState.Server_ForceReadiedClient Size 1
class FServer_ForceReadiedClient
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInReady : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdProfilerWidget.GetFPSChartDeltaTime Size 4
class FGetFPSChartDeltaTime
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdProfilerWidget.GetFrameRateLimit Size 4
class FGetFrameRateLimit
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdProfilerWidget.IsActiveStats Size 1
class FIsActiveStats
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdSequenceDirector.UseItemForceTransform Size 64
class FUseItemForceTransform
{

 public: 
	struct APawn* Pawn;  // Offset: 0 Size: 8
	enum class EItemType ItemType;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct FTransform TargetTransform;  // Offset: 16 Size: 48



 // Functions 
 public:
}; 
 
 //Function KartDrift.KdService.GetDevRiderName Size 16
class FGetDevRiderName
{

 public: 
	struct FString ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.KeyRebindingLibrary.RemoveActionMapping Size 12
class FRemoveActionMapping
{

 public: 
	struct FName ActionName;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bGamepadOnly : 1;  // Offset: 8 Size: 1
	char pad_9_1 : 7;  // Offset: 9 Size: 1
	bool bSaveSetting : 1;  // Offset: 9 Size: 1
	char pad_10_1 : 7;  // Offset: 10 Size: 1
	bool bSaveConfig : 1;  // Offset: 10 Size: 1
	char pad_11_1 : 7;  // Offset: 11 Size: 1
	bool ReturnValue : 1;  // Offset: 11 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.KeyRebindingLibrary.RemoveAxisKeyMapping Size 48
class FRemoveAxisKeyMapping
{

 public: 
	struct FInputAxisKeyMapping RemoveKey;  // Offset: 0 Size: 40
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bSaveSetting : 1;  // Offset: 40 Size: 1
	char pad_41_1 : 7;  // Offset: 41 Size: 1
	bool ReturnValue : 1;  // Offset: 41 Size: 1
	char pad_42[6];  // Offset: 42 Size: 6



 // Functions 
 public:
}; 
 
 //Function KartDrift.LapWidget.SetCurrentLapCount Size 4
class FSetCurrentLapCount
{

 public: 
	int32_t LapCount;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceProgressComponent.SetMaxLapCount Size 4
class FSetMaxLapCount
{

 public: 
	int32_t InMaxLapCount;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LevelBGMControlComponent.ChangePitchMultiplier Size 8
class FChangePitchMultiplier
{

 public: 
	float PitchValue;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool ReturnValue : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function KartDrift.LevelBGMControlComponent.PlayAnyOf Size 1
class FPlayAnyOf
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bForce : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.LevelBGMControlComponent.RandomBGMPlay Size 1
class FRandomBGMPlay
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseAIDistanceWidget.OnDisableAIDistance Size 1
class FOnDisableAIDistance
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bDisable : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.ResetComponent.NotifyActorBeginOverlap Size 16
class FNotifyActorBeginOverlap
{

 public: 
	struct AActor* MyActor;  // Offset: 0 Size: 8
	struct AActor* OtherActor;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseAIDistanceWidget.OnUpdateAIDistance Size 8
class FOnUpdateAIDistance
{

 public: 
	float AIDistance;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bWarning : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseAllySpawnComponent.OnAttackFailedItem Size 16
class FOnAttackFailedItem
{

 public: 
	struct APawn* InPawn;  // Offset: 0 Size: 8
	enum class EItemType InType;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseSequenceDecodingComponent.OnClickedPlayButton Size 4
class FOnClickedPlayButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseAllySpawnComponent.OnAttackSucceedItem Size 16
class FOnAttackSucceedItem
{

 public: 
	struct APawn* InPawn;  // Offset: 0 Size: 8
	enum class EItemType InType;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseBossHPWidget.SetProgress Size 8
class FSetProgress
{

 public: 
	float Damage;  // Offset: 0 Size: 4
	float InProgress;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseMessageWidget.Nice Size 8
class FNice
{

 public: 
	int32_t MentIndex;  // Offset: 0 Size: 4
	int32_t Score;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiveryReportViewerEntryObject.OnViewerItemClickButton Size 4
class FOnViewerItemClickButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseGaugeChargingWidget.OnUpdateGaugeChargeGoal Size 8
class FOnUpdateGaugeChargeGoal
{

 public: 
	float InPercentageMoreThan;  // Offset: 0 Size: 4
	float InPercentageLessThan;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_SideMenuPageWidget.Report_OnBlockOnSubmitChecked Size 4
class FReport_OnBlockOnSubmitChecked
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MajorResultWidget.OnButtonReleased_Exit_OneParam Size 4
class FOnButtonReleased_Exit_OneParam
{

 public: 
	int32_t NotUsed;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MiniGameDialog.MatchTheCards Size 4
class FMatchTheCards
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseIceBallQuestWidget.OnDriftClear Size 4
class FOnDriftClear
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LiveryStickerPageWidget.OnUnChecked_UseFixedUnit Size 4
class FOnUnChecked_UseFixedUnit
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseSequenceDecodingComponent.OnClickedPauseButton Size 4
class FOnClickedPauseButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ScenarioMessageWidget.OnParseText Size 24
class FOnParseText
{

 public: 
	struct FString InText;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool InIsStyleCode : 1;  // Offset: 16 Size: 1
	char pad_17_1 : 7;  // Offset: 17 Size: 1
	bool InIsCarriageReturn : 1;  // Offset: 17 Size: 1
	char pad_18[6];  // Offset: 18 Size: 6



 // Functions 
 public:
}; 
 
 //Function KartDrift.LoginLogicComponent.OnLinkConfirm Size 32
class FOnLinkConfirm
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bSuccess : 1;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FText ErrorMsg;  // Offset: 8 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseRocketQuestWidget.OnNewQuest Size 16
class FOnNewQuest
{

 public: 
	struct TArray<int32_t> QuestList;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopWidgetLogicComponent.OnRiderNameChangeConfirmError Size 24
class FOnRiderNameChangeConfirmError
{

 public: 
	enum class EPrSetRiderNameResult InRiderNameCheckResult;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FString InNotSupportedLetter;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.PauseComponent.OnClickedExitButton Size 4
class FOnClickedExitButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.CreateLicenseSequenceSkipWidget.SkipSequence Size 4
class FSkipSequence
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseScoreComponent.AddScore_float Size 12
class FAddScore_float
{

 public: 
	float floatData;  // Offset: 0 Size: 4
	float BaseScore;  // Offset: 4 Size: 4
	enum class ELicenseScoreReason Reason;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseSequenceDirector.PlayLicenseCaption Size 32
class FPlayLicenseCaption
{

 public: 
	struct FString Caption;  // Offset: 0 Size: 16
	float CaptionTime;  // Offset: 16 Size: 4
	float PauseTime;  // Offset: 20 Size: 4
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bSeperateMobileCaption : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.LODPerformanceTestWidget.GetNumVertices Size 8
class FGetNumVertices
{

 public: 
	int32_t LODIndex;  // Offset: 0 Size: 4
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseSequenceDirector.SetPawnInitWithMovement Size 32
class FSetPawnInitWithMovement
{

 public: 
	struct APawn* Pawn;  // Offset: 0 Size: 8
	struct USequencerEquipData* DataAsset;  // Offset: 8 Size: 8
	struct FString PawnName;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseSequenceDecodingComponent.OnClickedSkipButton Size 4
class FOnClickedSkipButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LicenseSpeedLimitWidget.OnInitializeSpeedLimit Size 32
class FOnInitializeSpeedLimit
{

 public: 
	struct TArray<float> MinSpeed;  // Offset: 0 Size: 16
	struct TArray<float> MaxSpeed;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LiverySubsystem.OnRemovedLevel Size 16
class FOnRemovedLevel
{

 public: 
	struct ULevel* Level;  // Offset: 0 Size: 8
	struct UWorld* World;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.LODPerformanceTestWidget.SetLODSkeletalMesh Size 4
class FSetLODSkeletalMesh
{

 public: 
	int32_t LODIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_CommunityPageWidget.MainDialog_OnAcceptInvitationClicked Size 4
class FMainDialog_OnAcceptInvitationClicked
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.LoginLogicComponent.OnRiderNameDuplicateCheck Size 24
class FOnRiderNameDuplicateCheck
{

 public: 
	enum class EPrSetRiderNameResult InCreateResult;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FString InNotSupportedLetter;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.LootBoxLogicComponent.OnCompletedLoadPawn Size 8
class FOnCompletedLoadPawn
{

 public: 
	struct AOutGamePawn* LoadedPawn;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_CommunityPageWidget.InviteMenu_OnAcceptButtonClicked Size 4
class FInviteMenu_OnAcceptButtonClicked
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_CommunityPageWidget.InviteMenu_OnRejectButtonClicked Size 4
class FInviteMenu_OnRejectButtonClicked
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_CommunityPageWidget.InviteMenu_OnSearchButtonClicked Size 4
class FInviteMenu_OnSearchButtonClicked
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_EventPageWidget.OnClickedADTLastStepButton Size 4
class FOnClickedADTLastStepButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_EventPageWidget.OnClickedttendanceLastStepButton Size 4
class FOnClickedttendanceLastStepButton
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LiveryStickerPageWidget.OnChecked_UseFixedUnit Size 4
class FOnChecked_UseFixedUnit
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LiveryStickerPageWidget.OnChecked_UseLayerScaleY Size 4
class FOnChecked_UseLayerScaleY
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LiveryStickerPageWidget.OnClicked_SubColorBack Size 4
class FOnClicked_SubColorBack
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LiveryStickerPageWidget.OnMoveToNextWrappingLayer Size 4
class FOnMoveToNextWrappingLayer
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LiveryStickerPageWidget.OnReleasedRotate Size 4
class FOnReleasedRotate
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LiveryStickerPageWidget.OnStickerListScrolled Size 4
class FOnStickerListScrolled
{

 public: 
	float InOffset;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LobbyPageWidget.OnCloseMyKcoinPopup Size 4
class FOnCloseMyKcoinPopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LoginPageWidget.ChangeLanguage_CloseComboPanel Size 4
class FChangeLanguage_CloseComboPanel
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LoginPageWidget.OnClearCacheData Size 4
class FOnClearCacheData
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceTimeMulticastHelperComponent.MulticastRelaySetAuthBeginRaceTime Size 16
class FMulticastRelaySetAuthBeginRaceTime
{

 public: 
	struct UObject* RelayTarget;  // Offset: 0 Size: 8
	float Time;  // Offset: 8 Size: 4
	float IntroTime;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LoginPageWidget.OnClickedLoginCommonDialogCloseButton Size 4
class FOnClickedLoginCommonDialogCloseButton
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LoginPageWidget.OnClickedLoginCommonDialogConfirmButton Size 4
class FOnClickedLoginCommonDialogConfirmButton
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_OptionPageWidget.OnClickedLogoutBtn Size 4
class FOnClickedLogoutBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LoginPageWidget.OnClickedNickNameCreationDialogClose Size 4
class FOnClickedNickNameCreationDialogClose
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LoginPageWidget.OnClickedRepairButton Size 4
class FOnClickedRepairButton
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LoginPageWidget.OnCreateNoticeDialog Size 4
class FOnCreateNoticeDialog
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LoginPageWidget.OnPerformAutoRepair Size 4
class FOnPerformAutoRepair
{

 public: 
	int32_t ButtonIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_LoginPageWidget.ShowExitGamePopup Size 4
class FShowExitGamePopup
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_MailPageWidget.Mail_OnClickedShowCommunity Size 4
class FMail_OnClickedShowCommunity
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_OptionPageWidget.OnClickedCopyAccountNoBtn Size 4
class FOnClickedCopyAccountNoBtn
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_OptionPageWidget.CloseDropDownPopup Size 4
class FCloseDropDownPopup
{

 public: 
	int32_t NotUsed;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_OptionPageWidget.OnClickedLogoutCancel Size 4
class FOnClickedLogoutCancel
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_OptionPageWidget.OnCusomizableWidgetScaleChanged Size 4
class FOnCusomizableWidgetScaleChanged
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.TMIRecordPawnEventComponent.ServerSendTMIRaceEventData Size 28
class FServerSendTMIRaceEventData
{

 public: 
	struct FTMIRaceEventData InTMIRaceEventData;  // Offset: 0 Size: 28



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_OptionPageWidget.OnCustomDialogCloseButtonPressed Size 4
class FOnCustomDialogCloseButtonPressed
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_OptionPageWidget.OnCustomDialogResetButtonPressed Size 4
class FOnCustomDialogResetButtonPressed
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PlayMissionComponent.Client_BroadcastPlayMissionProgressUpdate Size 4
class FClient_BroadcastPlayMissionProgressUpdate
{

 public: 
	int32_t InMissionProgress;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_OptionPageWidget.OnCustomizableWidgetDisableButtonUnchecked Size 4
class FOnCustomizableWidgetDisableButtonUnchecked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_OptionPageWidget.OnCustomizeButtonClicked Size 4
class FOnCustomizeButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_OptionPageWidget.OnCustomMenuHideButtonClicked Size 4
class FOnCustomMenuHideButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_OptionPageWidget.OnCustomMenuOpenButtonClicked Size 4
class FOnCustomMenuOpenButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_SideMenuPageWidget.Report_OnBlockOnSubmitUnchecked Size 4
class FReport_OnBlockOnSubmitUnchecked
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_SideMenuPageWidget.Report_OnSubmitDialogCloseButtonClicked Size 4
class FReport_OnSubmitDialogCloseButtonClicked
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_StudioPageWidget.OnPressedAutoLeftRotateMode Size 4
class FOnPressedAutoLeftRotateMode
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.M_StudioPageWidget.OnReleasedRotateMode Size 4
class FOnReleasedRotateMode
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MailLogicComponent.UpdateKcoin Size 4
class FUpdateKcoin
{

 public: 
	int32_t KcoinCount;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MailLogicComponent.UpdateLucci Size 4
class FUpdateLucci
{

 public: 
	int32_t LucciCount;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MainMenuCameraManageComponent.GetCamera Size 16
class FGetCamera
{

 public: 
	enum class EPawnCameraType CameraTye;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct AMainMenuKartPawnCamera* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.MainMenuCameraManageComponent.GetCameraComponent Size 16
class FGetCameraComponent
{

 public: 
	enum class EPawnCameraType CameraTye;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct UCameraComponent* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.WarningPopup.CancelButtonFocused Size 4
class FCancelButtonFocused
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MajorPlayerState.Client_SendTMIPlayerData Size 64
class FClient_SendTMIPlayerData
{

 public: 
	struct FTMIMajorDietData InData;  // Offset: 0 Size: 64



 // Functions 
 public:
}; 
 
 //Function KartDrift.MajorResultWidget.OnButtonReleased_BaseInfo Size 4
class FOnButtonReleased_BaseInfo
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ScenarioGameState.OnFirstAsyncLoadCompleted Size 80
class FOnFirstAsyncLoadCompleted
{

 public: 
	struct TSet<struct FSoftObjectPath> InAssetPathContainer;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //Function KartDrift.MajorResultWidget.OnButtonReleased_BaseInfo_OneParam Size 4
class FOnButtonReleased_BaseInfo_OneParam
{

 public: 
	int32_t NotUsed;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayReadyPageWidget.InfoModifyDialog_OnDescriptionEditBoxTextChanged Size 24
class FInfoModifyDialog_OnDescriptionEditBoxTextChanged
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.MajorResultWidget.OnButtonReleased_DetailInfo_OneParam Size 4
class FOnButtonReleased_DetailInfo_OneParam
{

 public: 
	int32_t NotUsed;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MajorSequenceComponent.OnVerified Size 1
class FOnVerified
{

 public: 
	enum class EClientVerifierOrder InOrder;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.ModelAttachZone.MulticastAttachModel Size 8
class FMulticastAttachModel
{

 public: 
	struct AKdPawn* Pawn;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.MovieSceneFMODAudioSection.GetSound Size 8
class FGetSound
{

 public: 
	struct UFMODEvent* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.MovieSceneFMODAudioSection.GetStartOffset Size 4
class FGetStartOffset
{

 public: 
	struct FFrameNumber ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.MovieSceneFMODAudioSection.SetSound Size 8
class FSetSound
{

 public: 
	struct UFMODEvent* InSound;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionBarWidget.OnHover Size 4
class FOnHover
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionBarWidget.OnSliderValueChanged Size 4
class FOnSliderValueChanged
{

 public: 
	float InValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.OptionLogicComponent.OnShowToyPlate Size 1
class FOnShowToyPlate
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bPause : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.ScenarioSequenceDirector.JumpToCharacterMontageSection Size 16
class FJumpToCharacterMontageSection
{

 public: 
	struct AActor* InActor;  // Offset: 0 Size: 8
	struct FName SectionName;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.ScenarioSequenceDirector.PlayBGM Size 8
class FPlayBGM
{

 public: 
	struct UFMODEvent* InEvent;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.ScenarioSequenceDirector.SetLoopFrame Size 4
class FSetLoopFrame
{

 public: 
	int32_t InDurationFrame;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ScenarioSequenceDirector.SetRepeatSection Size 12
class FSetRepeatSection
{

 public: 
	int32_t InStartFrame;  // Offset: 0 Size: 4
	int32_t InDurationFrame;  // Offset: 4 Size: 4
	int32_t LoopingCount;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.OutGameScenarioSequenceDirector.ShowBeginnerBalloonAppearAnimation Size 24
class FShowBeginnerBalloonAppearAnimation
{

 public: 
	struct AActor* InActor;  // Offset: 0 Size: 8
	struct FString FxTypeString;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.PacketCaptureComponent.MakeSpline Size 4
class FMakeSpline
{

 public: 
	int32_t RecordIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PacketCaptureComponent.StartRecord_AIPathIndex Size 12
class FStartRecord_AIPathIndex
{

 public: 
	int32_t PathIndex;  // Offset: 0 Size: 4
	int32_t DataIndex;  // Offset: 4 Size: 4
	float Speed;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PageListTemplate.OnClickedPrevPageList Size 4
class FOnClickedPrevPageList
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PageListTemplate.OnFocusedButton Size 4
class FOnFocusedButton
{

 public: 
	int32_t PageIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.PawnManageComponent.PlayAnimationKartOnOff Size 2
class FPlayAnimationKartOnOff
{

 public: 
	enum class EOutGamePawnType PawnType;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bOn : 1;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.PawnStateComponent.CheckLogout Size 8
class FCheckLogout
{

 public: 
	struct APawn* InPawn;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.PhysXKartAnimInstance.IsPick Size 1
class FIsPick
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.PlayMissionComponent.CheckMissionStateOnNotifyFinish Size 8
class FCheckMissionStateOnNotifyFinish
{

 public: 
	struct APawn* Pawn;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.PlayMissionComponent.Client_BroadcastPlayMissionStateUpdate Size 1
class FClient_BroadcastPlayMissionStateUpdate
{

 public: 
	enum class EPlayMissionState NextMissionState;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.QuickMatchSubsystem.OnPartyMemberUpdated Size 1
class FOnPartyMemberUpdated
{

 public: 
	enum class EPartyChageState NewState;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceHudWidget.ClearChildFromSlot Size 8
class FClearChildFromSlot
{

 public: 
	struct FName SlotName;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceProgressComponent.Server_CheckPoint Size 16
class FServer_CheckPoint
{

 public: 
	struct ACheckPoint* LastCP;  // Offset: 0 Size: 8
	struct ACheckPoint* CP;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceRankMulticastHelperComponent.MulticastRelayOnFinish Size 24
class FMulticastRelayOnFinish
{

 public: 
	struct UObject* RelayTarget;  // Offset: 0 Size: 8
	struct UObject* KdPawn;  // Offset: 8 Size: 8
	int32_t rank;  // Offset: 16 Size: 4
	float TotalTime;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceRankMulticastHelperComponent.MulticastRelayOnRetire Size 16
class FMulticastRelayOnRetire
{

 public: 
	struct UObject* RelayTarget;  // Offset: 0 Size: 8
	struct UObject* KdPawn;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceRankWidget.IsLocalPlayMode Size 1
class FIsLocalPlayMode
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceRetireCounterWidget.BeginRetireCountdown Size 4
class FBeginRetireCountdown
{

 public: 
	float CountdownFinishTime;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceTimeComponent.GetBeginRaceTime Size 4
class FGetBeginRaceTime
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceTimeMulticastHelperComponent.ClientRelaySetAuthEndRaceTime Size 16
class FClientRelaySetAuthEndRaceTime
{

 public: 
	struct UObject* RelayTarget;  // Offset: 0 Size: 8
	float Time;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.RaceTimeMulticastHelperComponent.MulticastRelaySetAuthEndRaceTime Size 16
class FMulticastRelaySetAuthEndRaceTime
{

 public: 
	struct UObject* RelayTarget;  // Offset: 0 Size: 8
	float Time;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayControlLogicComponent.PinTargetButtonClicked Size 4
class FPinTargetButtonClicked
{

 public: 
	int32_t DummyIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayControlPageWidget.CloseReplayMenu Size 4
class FCloseReplayMenu
{

 public: 
	int32_t DummyIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayControlPageWidget.OpenReplayMenu Size 4
class FOpenReplayMenu
{

 public: 
	int32_t DummyIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayDetailLogicComponent.OnSaveReplay Size 4
class FOnSaveReplay
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayDetailPageWidget.OnNextTabClicked Size 4
class FOnNextTabClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ReplayDetailPageWidget.OnPreviousTabClicked Size 4
class FOnPreviousTabClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.ResetComponent.Multicast_Reset Size 24
class FMulticast_Reset
{

 public: 
	struct FVector TargetPoint;  // Offset: 0 Size: 12
	struct FRotator TargetRotator;  // Offset: 12 Size: 12



 // Functions 
 public:
}; 
 
 //Function KartDrift.RiderNameChangeDialog.OnRiderNameTextChanged Size 24
class FOnRiderNameTextChanged
{

 public: 
	struct FText InRiderNameText;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.ScenarioItemCube.SetActivation Size 16
class FSetActivation
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool InActivate : 1;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct AActor* InOverlap;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.ScenarioExpressionSwitcherWidget.OnFinished Size 8
class FOnFinished
{

 public: 
	struct UScenarioWidgetBase* InWidgetBase;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.ScenarioLevelSequencePlayer.SetNoJumpCutInSameCamera Size 1
class FSetNoJumpCutInSameCamera
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bNoJump : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.ScenarioLevelSequencePlayer.SetOverrideCameraCutParams Size 1
class FSetOverrideCameraCutParams
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInOverride : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.ScenarioWidgetComponent.OnFinishedDelegate Size 8
class FOnFinishedDelegate
{

 public: 
	struct UScenarioWidgetBase* InWidget;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.ServiceLogicComponent.OnCheatEditboxChanged Size 24
class FOnCheatEditboxChanged
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.ServiceLogicComponent.OnCheatEditboxSubmit Size 32
class FOnCheatEditboxSubmit
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24
	enum class ETextCommit CommitMethod;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.ServiceLogicComponent.OnNoticeMessage Size 24
class FOnNoticeMessage
{

 public: 
	struct FText Message;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShadowQuestLogicComponent.OnPageActivated Size 1
class FOnPageActivated
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bActivated : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopWidgetLogicComponent.OnRiderNameChangeReserve Size 24
class FOnRiderNameChangeReserve
{

 public: 
	enum class EPrSetRiderNameResult InRiderNameCheckResult;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FString InNotSupportedLetter;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopWidgetLogicComponent.UpdateConfirmItemList Size 16
class FUpdateConfirmItemList
{

 public: 
	struct TArray<struct FKtShopStock> Items;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopWidgetLogicComponent.UpdateKcoinItemList Size 16
class FUpdateKcoinItemList
{

 public: 
	struct TArray<struct FKtShopStock> Items;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.ShopWidgetLogicComponent.UpdateShopItemList Size 16
class FUpdateShopItemList
{

 public: 
	struct TArray<struct FKtShopStock> Items;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.SideMenuLogicComponent.IsSideMenuDialogActive Size 1
class FIsSideMenuDialogActive
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.SoundManager.End Size 1
class FEnd
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.SoundManager.Start Size 16
class FStart
{

 public: 
	struct UWorld* NewWorld;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function KartDrift.SpeedGuideDialog.OnClickedSpeedGuideConfirm Size 4
class FOnClickedSpeedGuideConfirm
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.SVGToolsMeshComponent.GetMesh Size 8
class FGetMesh
{

 public: 
	struct USVGToolsMesh* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.SVGToolsMeshComponent.SetMesh Size 16
class FSetMesh
{

 public: 
	struct USVGToolsMesh* Mesh;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bCopyMaterial : 1;  // Offset: 8 Size: 1
	char pad_9_1 : 7;  // Offset: 9 Size: 1
	bool ReturnValue : 1;  // Offset: 9 Size: 1
	char pad_10[6];  // Offset: 10 Size: 6



 // Functions 
 public:
}; 
 
 //Function KartDrift.TargetFinderComponent.Multicast_ChangeTargetTo Size 8
class FMulticast_ChangeTargetTo
{

 public: 
	struct AActor* Target;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.TargetFinderComponent.Server_ChangeTargetTo Size 8
class FServer_ChangeTargetTo
{

 public: 
	struct AActor* Target;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function KartDrift.TeamBoostComponent.ServerAddTeamBooster Size 8
class FServerAddTeamBooster
{

 public: 
	float LastProgress;  // Offset: 0 Size: 4
	float MaxDriftGauge;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.TMIMulticastHelperComponent.ClientRelaySendResultData Size 40
class FClientRelaySendResultData
{

 public: 
	struct UObject* RelayTarget;  // Offset: 0 Size: 8
	struct TArray<struct FMajorGamePlayerData> InPlayerContainer;  // Offset: 8 Size: 16
	struct TArray<struct FMajorGameTeamData> InTeamContainer;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function KartDrift.TouchStartBoosterButton.OnStartBoosterStateChanged Size 1
class FOnStartBoosterStateChanged
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInIsEnabled : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.TouchKeyGuideWidget.GuideBoost Size 1
class FGuideBoost
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bActivate : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.TouchKeyGuideWidget.GuideInstanceBoost Size 1
class FGuideInstanceBoost
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bActivate : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.TouchKeyGuideWidget.GuideReset Size 1
class FGuideReset
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bActivate : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function KartDrift.TrackGimmick_Door.OnComponentHit_Left Size 176
class FOnComponentHit_Left
{

 public: 
	struct UPrimitiveComponent* HitComponent;  // Offset: 0 Size: 8
	struct AActor* OtherActor;  // Offset: 8 Size: 8
	struct UPrimitiveComponent* OtherComp;  // Offset: 16 Size: 8
	struct FVector NormalImpulse;  // Offset: 24 Size: 12
	struct FHitResult Hit;  // Offset: 36 Size: 136
	char pad_172[4];  // Offset: 172 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.TrackGimmick_Door.OnComponentHit_Right Size 176
class FOnComponentHit_Right
{

 public: 
	struct UPrimitiveComponent* HitComponent;  // Offset: 0 Size: 8
	struct AActor* OtherActor;  // Offset: 8 Size: 8
	struct UPrimitiveComponent* OtherComp;  // Offset: 16 Size: 8
	struct FVector NormalImpulse;  // Offset: 24 Size: 12
	struct FHitResult Hit;  // Offset: 36 Size: 136
	char pad_172[4];  // Offset: 172 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.TransformAnimationComponent.OnLerpAnimLoc Size 4
class FOnLerpAnimLoc
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.TransformAnimationComponent.OnLerpAnimRot Size 4
class FOnLerpAnimRot
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.WarningPopup.ConfirmButtonClicked Size 4
class FConfirmButtonClicked
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.WarningPopup.ConfirmButtonFocused Size 4
class FConfirmButtonFocused
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function KartDrift.WarpZone.Warp Size 8
class FWarp
{

 public: 
	struct APawn* InPawn;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 