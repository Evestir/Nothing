#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FShopPurchasingInfo
{
public:
	FShopPurchasingInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FOnClickedPreviousModeButton
{
public:
	FOnClickedPreviousModeButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtPlayMissionEventFileDef
{
public:
	FKtPlayMissionEventFileDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtPlayMissionDef> Getmissions() {
		return memory.read<struct TArray<struct FKtPlayMissionDef>>(m_addr + 0);
	}
	struct TArray<struct FKtPlayMissionRewardPoolDef> GetmissionRewardPools() {
		return memory.read<struct TArray<struct FKtPlayMissionRewardPoolDef>>(m_addr + 16);
	}
	struct TArray<struct FKtPlayMissionEventDef> Getevents() {
		return memory.read<struct TArray<struct FKtPlayMissionEventDef>>(m_addr + 32);
	}
	int32_t GetrewardMailDays() {
		return memory.read<int32_t>(m_addr + 48);
	}
	struct FString GetrewardMailMessage() {
		return memory.read<struct FString>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDisplayToggleButtonChecked
{
public:
	FOnDisplayToggleButtonChecked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDummyIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnShowDriftMission__DelegateSignature
{
public:
	FOnShowDriftMission__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbShow() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnButtonTemplate_HoveredEvent__DelegateSignature
{
public:
	FOnButtonTemplate_HoveredEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedStudio
{
public:
	FOnClickedStudio(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKeyTexture
{
public:
	FKeyTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPaperSprite GetKeyTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPaperSprite(ptr_addr);
	}
	struct UPaperSprite GetKeyTexture_Focus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UPaperSprite(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAccountPlatformData
{
public:
	FAccountPlatformData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtAccountPlatform Getplatform() {
		return memory.read<enum class EKtAccountPlatform>(m_addr + 0);
	}
	bool GetbAccountLinkGuest() {
		return memory.read<bool>(m_addr + 1);
	}
	struct FString Getnpsn() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FString Getxuid() {
		return memory.read<struct FString>(m_addr + 24);
	}
	struct FString GetpsnAccountId() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetriderName() {
		return memory.read<struct FString>(m_addr + 56);
	}
	struct FString Getemblem() {
		return memory.read<struct FString>(m_addr + 72);
	}
	struct FString GetgamerTag() {
		return memory.read<struct FString>(m_addr + 88);
	}
	struct FString GetonlineId() {
		return memory.read<struct FString>(m_addr + 104);
	}
	struct FString GetnexonTag() {
		return memory.read<struct FString>(m_addr + 120);
	}
	bool GetliveOnline() {
		return memory.read<bool>(m_addr + 136);
	}
	bool GetliveOnlineKartRider() {
		return memory.read<bool>(m_addr + 137);
	}
	struct FString GetliveRichPresence() {
		return memory.read<struct FString>(m_addr + 144);
	}
	bool GetpsnOnline() {
		return memory.read<bool>(m_addr + 160);
	}
	bool GetpsnOnlineKartRider() {
		return memory.read<bool>(m_addr + 161);
	}
	struct FString GetpsnRichPresence() {
		return memory.read<struct FString>(m_addr + 168);
	}
	struct FString GetgfsPresence() {
		return memory.read<struct FString>(m_addr + 184);
	}
	struct FString GetgfsPlatformType() {
		return memory.read<struct FString>(m_addr + 200);
	}
	struct FString GetgfsPlatformNickname() {
		return memory.read<struct FString>(m_addr + 216);
	}
	int32_t GetgfsId() {
		return memory.read<int32_t>(m_addr + 232);
	}

private:
	std::uint64_t m_addr = 0;
};class FStandbyLoadingEvent__DelegateSignature
{
public:
	FStandbyLoadingEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCount() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnItemFeedCutoff__DelegateSignature
{
public:
	FOnItemFeedCutoff__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EItemType GetUsedItemType() {
		return memory.read<enum class EItemType>(m_addr + 0);
	}
	int32_t GetItemId() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTickDelegate__DelegateSignature
{
public:
	FOnTickDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetinDeltaTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPartsSet
{
public:
	FPartsSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<enum class EItemCategoryType, int32_t> GetValues() {
		return memory.read<struct TMap<enum class EItemCategoryType, int32_t>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnButtonTemplate_FocusedEvent__DelegateSignature
{
public:
	FOnButtonTemplate_FocusedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FStickerBlock
{
public:
	FStickerBlock(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int64_t GetblockId() {
		return memory.read<int64_t>(m_addr + 0);
	}
	int64_t GetstickerStockId() {
		return memory.read<int64_t>(m_addr + 8);
	}
	struct FDateTime GetblockDate() {
		return memory.read<struct FDateTime>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnGuideUseItem__DelegateSignature
{
public:
	FOnGuideUseItem__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<enum class EItemType> GetItemType() {
		return memory.read<struct TArray<enum class EItemType>>(m_addr + 0);
	}
	bool GetbActivate() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRacingPassDef
{
public:
	FRacingPassDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Gettrophy_lucciExchangeRate() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedLicenseMoveButtonInTrackChangeDialog
{
public:
	FOnClickedLicenseMoveButtonInTrackChangeDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnStartBoostEnabled__DelegateSignature
{
public:
	FOnStartBoostEnabled__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInIsEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnQuickMatchingButtonClicked
{
public:
	FOnQuickMatchingButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnShowShortcutMenuButtonClicked
{
public:
	FOnShowShortcutMenuButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClientKtKartSkillTreeSetDef
{
public:
	FClientKtKartSkillTreeSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtClientKartSkillTreeDef> GetkartSkillTreeDefVector() {
		return memory.read<struct TArray<struct FKtClientKartSkillTreeDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FReporteeInfo
{
public:
	FReporteeInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FInviteMenu_Request_OnClickedAddBtn
{
public:
	FInviteMenu_Request_OnClickedAddBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnButtonTemplate_ReleasedEvent__DelegateSignature
{
public:
	FOnButtonTemplate_ReleasedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_PlayMajorPodiumSequence
{
public:
	FDev_PlayMajorPodiumSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMajorPodiumSequenceType GetInType() {
		return memory.read<enum class EMajorPodiumSequenceType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedLicenseMoveButtonInModeChangeDialog
{
public:
	FOnClickedLicenseMoveButtonInModeChangeDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDriftMissionDriftCount
{
public:
	FOnDriftMissionDriftCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInDriftCount() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientKartSkillSetDef
{
public:
	FKtClientKartSkillSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtClientKartSkillDef> GetkartSkillDefVector() {
		return memory.read<struct TArray<struct FKtClientKartSkillDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnLicenseNextSpeedLimit__DelegateSignature
{
public:
	FOnLicenseNextSpeedLimit__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSuccessSpeed() {
		return memory.read<float>(m_addr + 0);
	}
	int32_t GetScore() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnWaterBombEvent
{
public:
	FOnWaterBombEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EItemType GetUsedItemType() {
		return memory.read<enum class EItemType>(m_addr + 0);
	}
	int32_t GetUsedItemId() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct TSoftObjectPtr<ULevelSequence> GetDummySequence() {
		return memory.read<struct TSoftObjectPtr<ULevelSequence>>(m_addr + 8);
	}
	float GetDummyTime() {
		return memory.read<float>(m_addr + 48);
	}
	struct FTransform GetSpawnTransform() {
		return memory.read<struct FTransform>(m_addr + 64);
	}
	struct AActor GetInTargetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAnnouncementUrl
{
public:
	FGetAnnouncementUrl(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtKartBodyParam
{
public:
	FKtKartBodyParam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMass() {
		return memory.read<float>(m_addr + 0);
	}
	float GetforwardAccelForce() {
		return memory.read<float>(m_addr + 4);
	}
	float GetdriftEscapeForce() {
		return memory.read<float>(m_addr + 8);
	}
	float GetbackwardAccelForce() {
		return memory.read<float>(m_addr + 12);
	}
	float GetgripBrake() {
		return memory.read<float>(m_addr + 16);
	}
	float GetslipBrake() {
		return memory.read<float>(m_addr + 20);
	}
	bool GetuseTransformBooster() {
		return memory.read<bool>(m_addr + 24);
	}
	float GettransAccelFactor() {
		return memory.read<float>(m_addr + 28);
	}
	float GetboostAccelFactor() {
		return memory.read<float>(m_addr + 32);
	}
	float GetnormalBoosterTime() {
		return memory.read<float>(m_addr + 36);
	}
	float GetteamBoosterTime() {
		return memory.read<float>(m_addr + 40);
	}
	float GetanimalBoosterTime() {
		return memory.read<float>(m_addr + 44);
	}
	float GetstartBoosterTime() {
		return memory.read<float>(m_addr + 48);
	}
	float GetstartBoosterTimeItem() {
		return memory.read<float>(m_addr + 52);
	}
	float GetstartBoosterTimeSpeed() {
		return memory.read<float>(m_addr + 56);
	}
	float GetstartForwardAccelFactor() {
		return memory.read<float>(m_addr + 60);
	}
	float GetstartForwardAccelFactorItem() {
		return memory.read<float>(m_addr + 64);
	}
	float GetstartForwardAccelFactorSpeed() {
		return memory.read<float>(m_addr + 68);
	}
	float GetmaxSteerDeg() {
		return memory.read<float>(m_addr + 72);
	}
	float GetsteerConstraint() {
		return memory.read<float>(m_addr + 76);
	}
	float GetfrontGripFactor() {
		return memory.read<float>(m_addr + 80);
	}
	float GetrearGripFactor() {
		return memory.read<float>(m_addr + 84);
	}
	float GetdriftTrigFactor() {
		return memory.read<float>(m_addr + 88);
	}
	float GetdriftTrigTime() {
		return memory.read<float>(m_addr + 92);
	}
	float GetdriftSlipFactor() {
		return memory.read<float>(m_addr + 96);
	}
	float GetcornerDrawFactor() {
		return memory.read<float>(m_addr + 100);
	}
	float GetdriftLeanFactor() {
		return memory.read<float>(m_addr + 104);
	}
	float GetsteerLeanFactor() {
		return memory.read<float>(m_addr + 108);
	}
	float GetdriftMaxGauge() {
		return memory.read<float>(m_addr + 112);
	}
	float GetdriftGaugePreservePercent() {
		return memory.read<float>(m_addr + 116);
	}
	float GetairFriction() {
		return memory.read<float>(m_addr + 120);
	}
	float GetdragFactor() {
		return memory.read<float>(m_addr + 124);
	}
	float GetantiCollideBalance() {
		return memory.read<float>(m_addr + 128);
	}
	float GetdraftMulAccelFactor() {
		return memory.read<float>(m_addr + 132);
	}
	int32_t GetdraftTick() {
		return memory.read<int32_t>(m_addr + 136);
	}
	float GetdriftBoostMulAccelFactor() {
		return memory.read<float>(m_addr + 140);
	}
	int32_t GetdriftBoostTick() {
		return memory.read<int32_t>(m_addr + 144);
	}
	float GetchargeBoostBySpeed() {
		return memory.read<float>(m_addr + 148);
	}
	bool GetbUseExtendedAfterBooster() {
		return memory.read<bool>(m_addr + 152);
	}
	float GetboostAccelFactorOnlyItem() {
		return memory.read<float>(m_addr + 156);
	}
	float GetevadeForce() {
		return memory.read<float>(m_addr + 160);
	}
	bool GetbMotorCycleType() {
		return memory.read<bool>(m_addr + 164);
	}
	int32_t GetspeedSlotCapacity() {
		return memory.read<int32_t>(m_addr + 168);
	}
	int32_t GetitemSlotCapacity() {
		return memory.read<int32_t>(m_addr + 172);
	}
	int32_t GetspecialSlotCapacity() {
		return memory.read<int32_t>(m_addr + 176);
	}
	float GetautoChargeLowSpeed() {
		return memory.read<float>(m_addr + 180);
	}
	bool GetbTransformAutoCharge() {
		return memory.read<bool>(m_addr + 184);
	}
	float GetdescEngineGrade() {
		return memory.read<float>(m_addr + 188);
	}
	float GetdescBalance() {
		return memory.read<float>(m_addr + 192);
	}
	float GetdescStability() {
		return memory.read<float>(m_addr + 196);
	}
	float GetdescEnchantCap() {
		return memory.read<float>(m_addr + 200);
	}
	float GetdescCornering() {
		return memory.read<float>(m_addr + 204);
	}
	float GetTransformTime() {
		return memory.read<float>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimationPresetDef
{
public:
	FAnimationPresetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetAnimationName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetbPlayReverse() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FDataTableTableRow
{
public:
	FDataTableTableRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ETableType GetTableType() {
		return memory.read<enum class ETableType>(m_addr + 8);
	}
	bool GetIsKtStyleDataTable() {
		return memory.read<bool>(m_addr + 9);
	}
	struct TSoftObjectPtr<UDataTable> GetTableObject() {
		return memory.read<struct TSoftObjectPtr<UDataTable>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FTermsAndConditions_OnServiceButtonClicked
{
public:
	FTermsAndConditions_OnServiceButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnButtonTemplate_ClickedEvent__DelegateSignature
{
public:
	FOnButtonTemplate_ClickedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHitInfo
{
public:
	FHitInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UItemComponent GetAttacker() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UItemComponent(ptr_addr);
	}
	struct UItemComponent GetVictim() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UItemComponent(ptr_addr);
	}
	struct UItemComponent GetBlockCaster() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UItemComponent(ptr_addr);
	}
	float GetTime() {
		return memory.read<float>(m_addr + 24);
	}
	enum class EItemType GetItemId() {
		return memory.read<enum class EItemType>(m_addr + 28);
	}
	enum class EItemType GetBlockItemId() {
		return memory.read<enum class EItemType>(m_addr + 29);
	}
	int32_t GetItemUniqueId() {
		return memory.read<int32_t>(m_addr + 32);
	}
	enum class EHitState GetHitState() {
		return memory.read<enum class EHitState>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryWrappingArray_Ver3
{
public:
	FLiveryWrappingArray_Ver3(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELiveryPaintType GetSection() {
		return memory.read<enum class ELiveryPaintType>(m_addr + 0);
	}
	struct TArray<struct FLiveryWrappingDesc_Ver3> GetWrappingArray() {
		return memory.read<struct TArray<struct FLiveryWrappingDesc_Ver3>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSelectedControlTrack__DelegateSignature
{
public:
	FOnSelectedControlTrack__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetInSelectedItemKey() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedRewardListButton
{
public:
	FOnClickedRewardListButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnButtonTemplate_PressedEvent__DelegateSignature
{
public:
	FOnButtonTemplate_PressedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedChallengeToggleButton
{
public:
	FOnClickedChallengeToggleButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_HideUIAll
{
public:
	FDev_HideUIAll(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbHide() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCrashKart__DelegateSignature
{
public:
	FOnCrashKart__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECollisionChannel GetCollisionObjectType() {
		return memory.read<enum class ECollisionChannel>(m_addr + 0);
	}
	int32_t GetCrashLevel() {
		return memory.read<int32_t>(m_addr + 4);
	}
	float GetCrashVelocity() {
		return memory.read<float>(m_addr + 8);
	}
	struct FVector GetCrashLocation() {
		return memory.read<struct FVector>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtSeasonDef
{
public:
	FKtSeasonDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetseasonCount() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetseasonPeriod() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientQuestDailySeasonDef
{
public:
	FKtClientQuestDailySeasonDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetrewardStockId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TMap<struct FString, struct FKtClientQuestDailyDef> GetquestDailyDefMap() {
		return memory.read<struct TMap<struct FString, struct FKtClientQuestDailyDef>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnButtonTemplate_UnHoveredEvent__DelegateSignature
{
public:
	FOnButtonTemplate_UnHoveredEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnGfsFriendSearchDelegate__DelegateSignature
{
public:
	FOnGfsFriendSearchDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAccountPlatformData> GetData() {
		return memory.read<struct TArray<struct FAccountPlatformData>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTimeAttackRankerListContainer
{
public:
	FTimeAttackRankerListContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FOnComponentHit
{
public:
	FOnComponentHit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetHitComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct UPrimitiveComponent GetOtherComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct FVector GetNormalImpulse() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct FHitResult GetHit() {
		return memory.read<struct FHitResult>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryStickerDesc
{
public:
	FLiveryStickerDesc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetLabel() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct TArray<struct FLiveryWrappingDesc> GetWrappingDescArray() {
		return memory.read<struct TArray<struct FLiveryWrappingDesc>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnExitReplayButtonClicked
{
public:
	FOnExitReplayButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDummyIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTargetFinderDelegate__DelegateSignature
{
public:
	FTargetFinderDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EAimState GetState() {
		return memory.read<enum class EAimState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveActionKeyMapping
{
public:
	FRemoveActionKeyMapping(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FInputActionKeyMapping GetRemoveKey() {
		return memory.read<struct FInputActionKeyMapping>(m_addr + 0);
	}
	bool GetbSaveSetting() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 41);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEntryObject_ClickedEvent__DelegateSignature
{
public:
	FOnEntryObject_ClickedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UObject GetItemObj() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMain_OnPresetClicked
{
public:
	FMain_OnPresetClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMainDialog_OnAddFriendButtonClicked
{
public:
	FMainDialog_OnAddFriendButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSeasonUpdatedDelegate__DelegateSignature
{
public:
	FOnSeasonUpdatedDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonUpdatedType GetUpdatedType() {
		return memory.read<enum class ESeasonUpdatedType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_ShowLoadingScreen
{
public:
	FDev_ShowLoadingScreen(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTipPoolId() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMoveToLicenseButtonClicked
{
public:
	FOnMoveToLicenseButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCsTeamScoreChange
{
public:
	FCsTeamScoreChange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCsTeamScore Getprev() {
		return memory.read<struct FCsTeamScore>(m_addr + 0);
	}
	struct FCsTeamScore GetNext() {
		return memory.read<struct FCsTeamScore>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnButtonTemplate_UnfocusedEvent__DelegateSignature
{
public:
	FOnButtonTemplate_UnfocusedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDisableCustomGameInviteDelegate__DelegateSignature
{
public:
	FOnDisableCustomGameInviteDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInAccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnLicenseRemoveObstarcle__DelegateSignature
{
public:
	FOnLicenseRemoveObstarcle__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateDesc
{
public:
	FUpdateDesc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDedicatedLobbyPlayerDesc GetInDesc() {
		return memory.read<struct FDedicatedLobbyPlayerDesc>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnButtonTemplate_CheckedEvent__DelegateSignature
{
public:
	FOnButtonTemplate_CheckedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnChangeItemSlotSpec__DelegateSignature
{
public:
	FOnChangeItemSlotSpec__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInSlotCount() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOptionInfo
{
public:
	FOptionInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOptionFocusIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetSavedOptionIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetOptionIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	float GetSavedOptionValue() {
		return memory.read<float>(m_addr + 12);
	}
	float GetOptionValue() {
		return memory.read<float>(m_addr + 16);
	}
	float GetMinValue() {
		return memory.read<float>(m_addr + 20);
	}
	float GetMaxValue() {
		return memory.read<float>(m_addr + 24);
	}
	enum class EOptionsCategory GetCategory() {
		return memory.read<enum class EOptionsCategory>(m_addr + 28);
	}
	enum class EOptionBarType GetOptionBarType() {
		return memory.read<enum class EOptionBarType>(m_addr + 29);
	}
	bool GetbRestart() {
		return memory.read<bool>(m_addr + 30);
	}
	struct TArray<struct FText> GetItemLabels() {
		return memory.read<struct TArray<struct FText>>(m_addr + 32);
	}
	struct FText GetOptionExplainLabel() {
		return memory.read<struct FText>(m_addr + 48);
	}
	struct FKeyInfo GetKeyInfo() {
		return memory.read<struct FKeyInfo>(m_addr + 72);
	}
	struct FKeyInfo GetSavedKeyInfo() {
		return memory.read<struct FKeyInfo>(m_addr + 144);
	}
	enum class EKeyPreset GetKeyPreset() {
		return memory.read<enum class EKeyPreset>(m_addr + 216);
	}
	bool GetbKeyEdit() {
		return memory.read<bool>(m_addr + 220);
	}
	struct TArray<struct FText> GetColumnItems() {
		return memory.read<struct TArray<struct FText>>(m_addr + 224);
	}
	int32_t GetNotifyRevertOptionIndex() {
		return memory.read<int32_t>(m_addr + 240);
	}
	struct TArray<struct FText> GetNotifyExplainLabels() {
		return memory.read<struct TArray<struct FText>>(m_addr + 248);
	}
	struct TArray<struct FText> GetNotifyTitleLabels() {
		return memory.read<struct TArray<struct FText>>(m_addr + 264);
	}
	struct TArray<bool> GetChildEnables() {
		return memory.read<struct TArray<bool>>(m_addr + 280);
	}
	bool GetChildEnabledAloneWhenDisable() {
		return memory.read<bool>(m_addr + 296);
	}
	bool GetChildUseHyphen() {
		return memory.read<bool>(m_addr + 297);
	}
	struct TWeakObjectPtr<UUserWidget> GetWidgetPtr() {
		return memory.read<struct TWeakObjectPtr<UUserWidget>>(m_addr + 300);
	}
	struct TWeakObjectPtr<UUserWidget> GetParentWidgetPtr() {
		return memory.read<struct TWeakObjectPtr<UUserWidget>>(m_addr + 308);
	}
	struct TArray<struct TWeakObjectPtr<UUserWidget>> GetChildWidgetPtrs() {
		return memory.read<struct TArray<struct TWeakObjectPtr<UUserWidget>>>(m_addr + 320);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAddScore__DelegateSignature
{
public:
	FOnAddScore__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInScore() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class ELicenseScoreReason GetReason() {
		return memory.read<enum class ELicenseScoreReason>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnBeginOverlap
{
public:
	FOnBeginOverlap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetOverlappedComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct UPrimitiveComponent GetOtherComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UPrimitiveComponent(ptr_addr);
	}
	int32_t GetOtherBodyIndex() {
		return memory.read<int32_t>(m_addr + 24);
	}
	bool GetbFromSweep() {
		return memory.read<bool>(m_addr + 28);
	}
	struct FHitResult GetSweepResult() {
		return memory.read<struct FHitResult>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTwoSided
{
public:
	FGetTwoSided(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioKeyLayoutData
{
public:
	FScenarioKeyLayoutData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FScenarioKeyData> GetKeyDataContainer() {
		return memory.read<struct TArray<struct FScenarioKeyData>>(m_addr + 0);
	}
	float GetEmphasizeDelayBegin() {
		return memory.read<float>(m_addr + 16);
	}
	float GetEmphasizeDelayEnd() {
		return memory.read<float>(m_addr + 20);
	}
	struct FText GetDescript() {
		return memory.read<struct FText>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnButtonClickedEvent__DelegateSignature
{
public:
	FOnButtonClickedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedCancelOnPurchaseResultDialog
{
public:
	FOnClickedCancelOnPurchaseResultDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPrevTab_Info
{
public:
	FOnClickedPrevTab_Info(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnScrolled
{
public:
	FOnScrolled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetOffset() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSpinBoxValueChanged_CameraRotateInterpSpeed
{
public:
	FOnSpinBoxValueChanged_CameraRotateInterpSpeed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FServer_SetAITeleport
{
public:
	FServer_SetAITeleport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInputKey() {
		return memory.read<float>(m_addr + 0);
	}
	float GetSpeed() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerSetClientEvents
{
public:
	FServerSetClientEvents(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetHitKart() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetHitWall() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FVolumetricFogQuality
{
public:
	FVolumetricFogQuality(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetQuality() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetGridPixelSize() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetGridSizeZ() {
		return memory.read<int32_t>(m_addr + 8);
	}
	float GetDistance() {
		return memory.read<float>(m_addr + 12);
	}
	int32_t GetShadow() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAttachedMeshCurveData
{
public:
	FAttachedMeshCurveData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSlotName() {
		return memory.read<struct FName>(m_addr + 16);
	}
	int32_t GetMaterialIndex() {
		return memory.read<int32_t>(m_addr + 24);
	}
	struct UMeshComponent GetAttachedMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMiniGameData
{
public:
	FMiniGameData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetShowTime() {
		return memory.read<float>(m_addr + 8);
	}
	float GetPenaltyTime() {
		return memory.read<float>(m_addr + 12);
	}
	float GetrewardTime() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnButtonTemplate_UncheckedEvent__DelegateSignature
{
public:
	FOnButtonTemplate_UncheckedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayCharacterAnimation
{
public:
	FPlayCharacterAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetInActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	enum class ECharacterAnimGraphState GetInAnimState() {
		return memory.read<enum class ECharacterAnimGraphState>(m_addr + 8);
	}
	enum class ECharacterMontage GetInMontage() {
		return memory.read<enum class ECharacterMontage>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnGuideInstanceBoost__DelegateSignature
{
public:
	FOnGuideInstanceBoost__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetGuideBoost() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseSequenceUI
{
public:
	FLicenseSequenceUI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbItemSlot() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbTachometer() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetbBoostGauge() {
		return memory.read<bool>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDriftMissionStartTimer__DelegateSignature
{
public:
	FOnDriftMissionStartTimer__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbStartTimer() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnInviteJoinParty
{
public:
	FOnInviteJoinParty(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetJoinedUserName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticast_AddChat
{
public:
	FMulticast_AddChat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInChat() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFinished__DelegateSignature
{
public:
	FOnFinished__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickServerChangeButton
{
public:
	FOnClickServerChangeButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FConfirmDialogButtonInfo
{
public:
	FConfirmDialogButtonInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FOnPageWidgetActivated__DelegateSignature
{
public:
	FOnPageWidgetActivated__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbActivate() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_GfsDeclineFriendRequest
{
public:
	FDev_GfsDeclineFriendRequest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetaccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnWrongWayChecked__DelegateSignature
{
public:
	FOnWrongWayChecked__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbWrongWay() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMatchInfo
{
public:
	FMatchInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FOnComboBoxSelectionChanged_Booster
{
public:
	FOnComboBoxSelectionChanged_Booster(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetInSelectedItemKey() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtTrophySaleDef
{
public:
	FKtTrophySaleDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetsaleCount() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetsaleRate() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSelectedControlDirecting__DelegateSignature
{
public:
	FOnSelectedControlDirecting__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	char GetInIndex() {
		return memory.read<char>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnButtonControlDirecting__DelegateSignature
{
public:
	FOnButtonControlDirecting__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetInIndex() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientQuestWeeklyDef
{
public:
	FKtClientQuestWeeklyDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetseasonWeekIdx() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FKtClientQuestDef GetquestDef() {
		return memory.read<struct FKtClientQuestDef>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtItemTable
{
public:
	FKtItemTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtItemDef> GetitemDefVector() {
		return memory.read<struct TArray<struct FKtItemDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtLootboxStock
{
public:
	FKtLootboxStock(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetstockId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class EKtLootboxType GetboxType() {
		return memory.read<enum class EKtLootboxType>(m_addr + 16);
	}
	struct TArray<struct FKtStockItem> GetstockItemVector() {
		return memory.read<struct TArray<struct FKtStockItem>>(m_addr + 24);
	}
	struct FNullableDateTime GetuseStartDate() {
		return memory.read<struct FNullableDateTime>(m_addr + 40);
	}
	struct FNullableDateTime GetuseEndDate() {
		return memory.read<struct FNullableDateTime>(m_addr + 56);
	}
	struct FKtBonusItem GetbonusItem() {
		return memory.read<struct FKtBonusItem>(m_addr + 72);
	}
	struct TArray<int32_t> GetsubListIdVector() {
		return memory.read<struct TArray<int32_t>>(m_addr + 96);
	}
	struct TArray<struct FKtLootboxSet> GetsetVector() {
		return memory.read<struct TArray<struct FKtLootboxSet>>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnHitWall
{
public:
	FOnHitWall(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetNormalImpulse() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FHitResult GetHit() {
		return memory.read<struct FHitResult>(m_addr + 12);
	}
	bool GetbHitBarricade() {
		return memory.read<bool>(m_addr + 148);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedCouponBtn
{
public:
	FOnClickedCouponBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKartBoostChangedSignature__DelegateSignature
{
public:
	FKartBoostChangedSignature__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EBoostKind GetNewBoost() {
		return memory.read<enum class EBoostKind>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FEquippedSkillInfo
{
public:
	FEquippedSkillInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKartSkillType GetSkillType() {
		return memory.read<enum class EKartSkillType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticastAffectTo
{
public:
	FMulticastAffectTo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UItemComponent GetUser() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UItemComponent(ptr_addr);
	}
	struct UItemComponent GetTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UItemComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedSelectButton
{
public:
	FOnClickedSelectButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCameraBlendInfo
{
public:
	FCameraBlendInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBlendTime() {
		return memory.read<float>(m_addr + 0);
	}
	enum class EViewTargetBlendFunction GetBlendFunc() {
		return memory.read<enum class EViewTargetBlendFunction>(m_addr + 4);
	}
	float GetBlendExp() {
		return memory.read<float>(m_addr + 8);
	}
	bool GetbLockOutgoing() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSelectedControlPawnEquip__DelegateSignature
{
public:
	FOnSelectedControlPawnEquip__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetSelectedItemKey() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FReplaceItemIdInfoRow
{
public:
	FReplaceItemIdInfoRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FReplaceItemIdInfo> GetInfoList() {
		return memory.read<struct TArray<struct FReplaceItemIdInfo>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateVDTEvent
{
public:
	FOnUpdateVDTEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetEventID() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSelectedControlPawnFX__DelegateSignature
{
public:
	FOnSelectedControlPawnFX__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	char GetInEnumType() {
		return memory.read<char>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseDriftMissionGateDef
{
public:
	FLicenseDriftMissionGateDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDistance() {
		return memory.read<float>(m_addr + 0);
	}
	float GetRightVectorOffset() {
		return memory.read<float>(m_addr + 4);
	}
	float GetZOffset() {
		return memory.read<float>(m_addr + 8);
	}
	struct FRotator GetRotationOffset() {
		return memory.read<struct FRotator>(m_addr + 12);
	}
	struct FVector GetGateScale() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct FTransform GetGateTransform() {
		return memory.read<struct FTransform>(m_addr + 48);
	}
	struct FVector GetLeftPosition() {
		return memory.read<struct FVector>(m_addr + 96);
	}
	struct FVector GetRightPosition() {
		return memory.read<struct FVector>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickCloseWarningPopup
{
public:
	FOnClickCloseWarningPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnButtonControlPawnFX__DelegateSignature
{
public:
	FOnButtonControlPawnFX__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetInEnumType() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTeamBoostGauge
{
public:
	FTeamBoostGauge(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCurrentRatio() {
		return memory.read<float>(m_addr + 16);
	}
	float GetCumulated() {
		return memory.read<float>(m_addr + 20);
	}
	int32_t GetMemberCount() {
		return memory.read<int32_t>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FKartGetItemSuccessSignature__DelegateSignature
{
public:
	FKartGetItemSuccessSignature__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSlotId() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class EItemType GetType() {
		return memory.read<enum class EItemType>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedTagTab
{
public:
	FOnClickedTagTab(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FStickerMarketStatus
{
public:
	FStickerMarketStatus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FOnKartAccountLoginNeedAccountLinkSelect__DelegateSignature
{
public:
	FOnKartAccountLoginNeedAccountLinkSelect__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbAllowAccountLinkGuest() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbMustAccountLink() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtRacingPassSetDef
{
public:
	FKtRacingPassSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Getshop_stockID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString Getshop_PackagestockID() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString Getshop_LevelstockID() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct TArray<struct FKtTrophySaleDef> GetsaleRateVector() {
		return memory.read<struct TArray<struct FKtTrophySaleDef>>(m_addr + 48);
	}
	struct TMap<struct FString, struct FKtRacingPassDef> GetracingPassDefMap() {
		return memory.read<struct TMap<struct FString, struct FKtRacingPassDef>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FButtonOff
{
public:
	FButtonOff(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnChangedCameraRotation__DelegateSignature
{
public:
	FOnChangedCameraRotation__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRotator GetNewRotation() {
		return memory.read<struct FRotator>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateLiveryCamera__DelegateSignature
{
public:
	FOnUpdateLiveryCamera__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetInLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetInDir() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	float GetInArmLength() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGuideCounterSteer
{
public:
	FGuideCounterSteer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbPositive() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbActivate() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FFixedCameraData
{
public:
	FFixedCameraData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetForwardDistance() {
		return memory.read<float>(m_addr + 8);
	}
	float GetRoadCheckZLowerBound() {
		return memory.read<float>(m_addr + 12);
	}
	float GetRoadCheckZUpperBound() {
		return memory.read<float>(m_addr + 16);
	}
	float GetZDistanceFromRoad() {
		return memory.read<float>(m_addr + 20);
	}
	float GetDefaultFOV() {
		return memory.read<float>(m_addr + 24);
	}
	float GetResetDistanceThreshold() {
		return memory.read<float>(m_addr + 28);
	}
	float GetForwardMaxVelocity() {
		return memory.read<float>(m_addr + 32);
	}
	float GetForwardAcceleration() {
		return memory.read<float>(m_addr + 36);
	}
	float GetForwardFriction() {
		return memory.read<float>(m_addr + 40);
	}
	float GetRightMaxVelocity() {
		return memory.read<float>(m_addr + 44);
	}
	float GetRightAcceleration() {
		return memory.read<float>(m_addr + 48);
	}
	float GetRightFriction() {
		return memory.read<float>(m_addr + 52);
	}
	float GetPitchMaxVelocity() {
		return memory.read<float>(m_addr + 56);
	}
	float GetPitchAcceleration() {
		return memory.read<float>(m_addr + 60);
	}
	float GetPitchFriction() {
		return memory.read<float>(m_addr + 64);
	}
	float GetYawMaxVelocity() {
		return memory.read<float>(m_addr + 68);
	}
	float GetYawAcceleration() {
		return memory.read<float>(m_addr + 72);
	}
	float GetYawFriction() {
		return memory.read<float>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnStickerItemClickButton
{
public:
	FOnStickerItemClickButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDrawSize
{
public:
	FGetDrawSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FListAllEventByCheat
{
public:
	FListAllEventByCheat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetseasonId() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayMontageNTimes
{
public:
	FPlayMontageNTimes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECharacterMontage GetInState() {
		return memory.read<enum class ECharacterMontage>(m_addr + 0);
	}
	int32_t GetNumLoops() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FKartGetBoostItemSignature__DelegateSignature
{
public:
	FKartGetBoostItemSignature__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EItemType GetBoostKind() {
		return memory.read<enum class EItemType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtQuestData
{
public:
	FKtQuestData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtMissionData> GetmissionDataVector() {
		return memory.read<struct TArray<struct FKtMissionData>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FToggleMute
{
public:
	FToggleMute(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInAccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtMailAttachment
{
public:
	FKtMailAttachment(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKtStock Getstock() {
		return memory.read<struct FKtStock>(m_addr + 0);
	}
	struct TArray<struct FKtStockItem> Getprice() {
		return memory.read<struct TArray<struct FKtStockItem>>(m_addr + 32);
	}
	struct FString GetorderId() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString Getcurrency() {
		return memory.read<struct FString>(m_addr + 64);
	}
	float GetrealPrice() {
		return memory.read<float>(m_addr + 80);
	}
	int64_t Getlog_cash_idx() {
		return memory.read<int64_t>(m_addr + 88);
	}
	struct FString Getreceipt_key() {
		return memory.read<struct FString>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSendHitInfo__DelegateSignature
{
public:
	FOnSendHitInfo__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FHitInfo GetInfo() {
		return memory.read<struct FHitInfo>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMyIpAddress
{
public:
	FGetMyIpAddress(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateGaugeChargeGoal__DelegateSignature
{
public:
	FOnUpdateGaugeChargeGoal__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetPercentageMoreThan() {
		return memory.read<float>(m_addr + 0);
	}
	float GetPercentageLessThan() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FRequestChangeRadierName
{
public:
	FRequestChangeRadierName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInRiderName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	float GetRemainReserveTime() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedMoveToLicenseButton
{
public:
	FOnClickedMoveToLicenseButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdate_ShortCutButtonVisibility
{
public:
	FOnUpdate_ShortCutButtonVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbVisibility() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtGrandPrixSetDef
{
public:
	FKtGrandPrixSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtGrandPrixDef> GetgrandPrixDefVector() {
		return memory.read<struct TArray<struct FKtGrandPrixDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseKeyState
{
public:
	FLicenseKeyState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FTMIMajorDietData
{
public:
	FTMIMajorDietData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetUniqueIdentifier() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TArray<struct FTMIMajorDietModeData> GetTMIItemModeData() {
		return memory.read<struct TArray<struct FTMIMajorDietModeData>>(m_addr + 16);
	}
	struct FTMIRaceEventData GetTMIRaceEventData() {
		return memory.read<struct FTMIRaceEventData>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnItemFeed__DelegateSignature
{
public:
	FOnItemFeed__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EItemType GetUsedItemType() {
		return memory.read<enum class EItemType>(m_addr + 0);
	}
	int32_t GetItemId() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct TSoftObjectPtr<ULevelSequence> GetFeedMirrorSequence() {
		return memory.read<struct TSoftObjectPtr<ULevelSequence>>(m_addr + 8);
	}
	float GetFeedMirrorTime() {
		return memory.read<float>(m_addr + 48);
	}
	struct FTransform GetSpawnTransform() {
		return memory.read<struct FTransform>(m_addr + 64);
	}
	struct AActor GetTargetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayMontage
{
public:
	FPlayMontage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKartPlayingMontageState GetInState() {
		return memory.read<enum class EKartPlayingMontageState>(m_addr + 0);
	}
	float GetInPlayRate() {
		return memory.read<float>(m_addr + 4);
	}
	enum class EMontagePlayReturnType GetReturnValueType() {
		return memory.read<enum class EMontagePlayReturnType>(m_addr + 8);
	}
	float GetInTimeToStartMontageAt() {
		return memory.read<float>(m_addr + 12);
	}
	bool GetbStopAllMontages() {
		return memory.read<bool>(m_addr + 16);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDriftMissionDriftCount__DelegateSignature
{
public:
	FOnDriftMissionDriftCount__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDriftCount() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGameLiftRacePlayerInfo
{
public:
	FGameLiftRacePlayerInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetplayerId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FKtSessionPlayerAuxData GetauxData() {
		return memory.read<struct FKtSessionPlayerAuxData>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticastEaten
{
public:
	FMulticastEaten(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AGoItem_Cube GetCube() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AGoItem_Cube(ptr_addr);
	}
	struct AActor GetTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNewActorAddedToItemFeed__DelegateSignature
{
public:
	FOnNewActorAddedToItemFeed__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EItemType GetUsedItemType() {
		return memory.read<enum class EItemType>(m_addr + 0);
	}
	int32_t GetItemId() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct AActor GetTargetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FWidgetAnimationTransition
{
public:
	FWidgetAnimationTransition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FOnUpdateHP__DelegateSignature
{
public:
	FOnUpdateHP__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDamage() {
		return memory.read<float>(m_addr + 0);
	}
	float GetPercent() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEditableTextCommitted_Enter
{
public:
	FOnEditableTextCommitted_Enter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	enum class ETextCommit GetInCommitMethod() {
		return memory.read<enum class ETextCommit>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryWrappingDescCompressed
{
public:
	FLiveryWrappingDescCompressed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELiveryWrappingCategory GetCategory() {
		return memory.read<enum class ELiveryWrappingCategory>(m_addr + 0);
	}
	char GetIndexInCategory() {
		return memory.read<char>(m_addr + 1);
	}
	uint16_t GetColorOverrideIndex() {
		return memory.read<uint16_t>(m_addr + 2);
	}
	uint16_t GetTranslationX() {
		return memory.read<uint16_t>(m_addr + 4);
	}
	uint16_t GetTranslationY() {
		return memory.read<uint16_t>(m_addr + 6);
	}
	uint16_t GetScaleX() {
		return memory.read<uint16_t>(m_addr + 8);
	}
	uint16_t GetScaleY() {
		return memory.read<uint16_t>(m_addr + 10);
	}
	uint16_t GetRotation() {
		return memory.read<uint16_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedFocusdGearPlusBtn
{
public:
	FOnClickedFocusdGearPlusBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtSessionRaceObserverRequest
{
public:
	FKtSessionRaceObserverRequest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetplayerId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FKtAccountProfile GetProfile() {
		return memory.read<struct FKtAccountProfile>(m_addr + 16);
	}
	struct FString GetredisChannelName() {
		return memory.read<struct FString>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnComboBoxSelection_RaceMode
{
public:
	FOnComboBoxSelection_RaceMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class ESelectInfo GetSelectionType() {
		return memory.read<enum class ESelectInfo>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlaySurfaceForceFeedback
{
public:
	FPlaySurfaceForceFeedback(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPhysicalMaterial GetPM() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPhysicalMaterial(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAffectedBy__DelegateSignature
{
public:
	FOnAffectedBy__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct AItem GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNumber
{
public:
	FSetNumber(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNewNumber() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtDefaultPartsDef
{
public:
	FKtDefaultPartsDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FString> GetdefaultPartsItemMap() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedBackBtn
{
public:
	FOnClickedBackBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKdGameLogoutDelegate__DelegateSignature
{
public:
	FKdGameLogoutDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetInPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FShowExpressionWidget
{
public:
	FShowExpressionWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UScenarioExpressionWidget GetInExpressionClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UScenarioExpressionWidget(ptr_addr);
	}
	UScenarioExpressionWidget GetInMobileExpressionClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UScenarioExpressionWidget(ptr_addr);
	}
	float GetInStartAtTime() {
		return memory.read<float>(m_addr + 16);
	}
	int32_t GetInNumLoopsToPlay() {
		return memory.read<int32_t>(m_addr + 20);
	}
	enum class EUMGSequencePlayMode GetInPlayMode() {
		return memory.read<enum class EUMGSequencePlayMode>(m_addr + 24);
	}
	float GetInPlaybackSpeed() {
		return memory.read<float>(m_addr + 28);
	}
	bool GetInbRestoreState() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtContentSettingSetDef
{
public:
	FKtContentSettingSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetLastUpdateDate() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FReportDef Getreport() {
		return memory.read<struct FReportDef>(m_addr + 24);
	}
	struct FRacingPassDef GetracingPass() {
		return memory.read<struct FRacingPassDef>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdatedSticker
{
public:
	FOnUpdatedSticker(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetID() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FFrontFollowCameraData
{
public:
	FFrontFollowCameraData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNormalFov() {
		return memory.read<float>(m_addr + 8);
	}
	float GetBoostFov() {
		return memory.read<float>(m_addr + 12);
	}
	float GetOrientInterpTime() {
		return memory.read<float>(m_addr + 16);
	}
	float GetSpeedDecreaseInterpTime() {
		return memory.read<float>(m_addr + 20);
	}
	float GetSpeedIncreaseInterpTime() {
		return memory.read<float>(m_addr + 24);
	}
	float GetBoostFovInterpTime() {
		return memory.read<float>(m_addr + 28);
	}
	float GetNormalFovInterpTime() {
		return memory.read<float>(m_addr + 32);
	}
	float GetDefaultDistanceFromTarget() {
		return memory.read<float>(m_addr + 36);
	}
	float GetDistancePerTargetSpeed() {
		return memory.read<float>(m_addr + 40);
	}
	float GetCameraLocationPitch() {
		return memory.read<float>(m_addr + 44);
	}
	float GetMaxZoomInDistance() {
		return memory.read<float>(m_addr + 48);
	}
	float GetMaxZoomOutDistance() {
		return memory.read<float>(m_addr + 52);
	}
	float GetZoomMaxVelocity() {
		return memory.read<float>(m_addr + 56);
	}
	float GetZoomFriction() {
		return memory.read<float>(m_addr + 60);
	}
	float GetZoomAcceleration() {
		return memory.read<float>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnBeginRaceTimer__DelegateSignature
{
public:
	FOnBeginRaceTimer__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBeginTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAccount
{
public:
	FGetAccount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UKdAccount GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UKdAccount(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayLucciReward
{
public:
	FPlayLucciReward(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getacquired() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t Getrewarded() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t Getavailable() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKartSkillNodeUpdateDelegate__DelegateSignature
{
public:
	FKartSkillNodeUpdateDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetbSucceed() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FMultiplierWithbMuted
{
public:
	FMultiplierWithbMuted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMultiplier() {
		return memory.read<float>(m_addr + 0);
	}
	bool GetbMuted() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FMain_OnStaffClicked
{
public:
	FMain_OnStaffClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseAllyActorInfo
{
public:
	FLicenseAllyActorInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetUniqueId() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRacingPass_OnClickedPurchaseRacingPassButton
{
public:
	FRacingPass_OnClickedPurchaseRacingPassButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtPlayMissionPoolItem
{
public:
	FKtPlayMissionPoolItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetRate() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetplayMissionId() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FString GetplayMissionRewardPoolId() {
		return memory.read<struct FString>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FKartSkillFailedDelegate__DelegateSignature
{
public:
	FKartSkillFailedDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPrKartSkillResult GetInResultCode() {
		return memory.read<enum class EPrKartSkillResult>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAssistDelegate__DelegateSignature
{
public:
	FOnAssistDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbParam() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientItemDef
{
public:
	FKtClientItemDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetItemName() {
		return memory.read<struct FText>(m_addr + 56);
	}
	struct FText GetitemDesc() {
		return memory.read<struct FText>(m_addr + 80);
	}
	struct TSoftObjectPtr<UTexture2D> GetImage() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnGuideDrift__DelegateSignature
{
public:
	FOnGuideDrift__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbLeft() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbDrift() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtQuestSetData
{
public:
	FKtQuestSetData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FKtQuestData> GetquestDataMap() {
		return memory.read<struct TMap<struct FString, struct FKtQuestData>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAccountPlatformDataPSN
{
public:
	FAccountPlatformDataPSN(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetpsnAccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetonlineId() {
		return memory.read<struct FString>(m_addr + 16);
	}
	bool GetpsnOnline() {
		return memory.read<bool>(m_addr + 32);
	}
	bool GetpsnOnlineKartRider() {
		return memory.read<bool>(m_addr + 33);
	}
	struct FString GetpsnRichPresence() {
		return memory.read<struct FString>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FItemListPopup
{
public:
	FItemListPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<struct FString> GetStockIDList() {
		return memory.read<struct TArray<struct FString>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtKartSkillExtraBodyParam
{
public:
	FKtKartSkillExtraBodyParam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetdragFactor() {
		return memory.read<float>(m_addr + 0);
	}
	float GetforwardAccelForce() {
		return memory.read<float>(m_addr + 4);
	}
	float GetstartForwardAccelFactor() {
		return memory.read<float>(m_addr + 8);
	}
	float GetdriftEscapeForce() {
		return memory.read<float>(m_addr + 12);
	}
	float GettransAccelFactor() {
		return memory.read<float>(m_addr + 16);
	}
	float GetnormalBoosterTime() {
		return memory.read<float>(m_addr + 20);
	}
	float GetteamBoosterTime() {
		return memory.read<float>(m_addr + 24);
	}
	float GetstartBoosterTime() {
		return memory.read<float>(m_addr + 28);
	}
	float GetsteerConstraint() {
		return memory.read<float>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAxisKeys
{
public:
	FGetAxisKeys(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetAxisName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetbPositive() {
		return memory.read<bool>(m_addr + 8);
	}
	struct TArray<struct FKey> GetReturnValue() {
		return memory.read<struct TArray<struct FKey>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnLicenseSuccessMessage__DelegateSignature
{
public:
	FOnLicenseSuccessMessage__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtUseItem
{
public:
	FKtUseItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetItemId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetitemCount() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTextCommittedEvent__DelegateSignature
{
public:
	FOnTextCommittedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	enum class ETextCommit GetCommitMethod() {
		return memory.read<enum class ETextCommit>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FKdTextInlineImageDecoratorData
{
public:
	FKdTextInlineImageDecoratorData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FName, struct FSlateBrush> GetStateAndBrushMap() {
		return memory.read<struct TMap<struct FName, struct FSlateBrush>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPremiumChallenge_OnClickedNextTab
{
public:
	FPremiumChallenge_OnClickedNextTab(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnGuideCounterSteer__DelegateSignature
{
public:
	FOnGuideCounterSteer__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetPositive() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetGuide() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioMaterialInstanceInterpolation
{
public:
	FScenarioMaterialInstanceInterpolation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetVariable() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TSoftObjectPtr<UCurveFloat> GetCurve() {
		return memory.read<struct TSoftObjectPtr<UCurveFloat>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FLootBoxOpenResult
{
public:
	FLootBoxOpenResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FOnCompleteLap__DelegateSignature
{
public:
	FOnCompleteLap__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCompleletedLapCount() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTextChangedEvent__DelegateSignature
{
public:
	FOnTextChangedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOpenItemListPopup
{
public:
	FOpenItemListPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNotUsed() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientQuestDef
{
public:
	FKtClientQuestDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtClientMissionDef> GetmissionDefVector() {
		return memory.read<struct TArray<struct FKtClientMissionDef>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedFocusableButtonInKCoinList
{
public:
	FOnClickedFocusableButtonInKCoinList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInventoryItemKrPc
{
public:
	FInventoryItemKrPc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetstockId() {
		return memory.read<struct FString>(m_addr + 8);
	}
	bool GetbCanRefund() {
		return memory.read<bool>(m_addr + 24);
	}
	struct FDateTime GetorderDate() {
		return memory.read<struct FDateTime>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetHitchFrameTimeThreshold
{
public:
	FSetHitchFrameTimeThreshold(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtKartSkillTreeSetDefVec
{
public:
	FKtKartSkillTreeSetDefVec(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtKartSkillTreeNodeSetDef> GetkartSkillTreeDefVector() {
		return memory.read<struct TArray<struct FKtKartSkillTreeNodeSetDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryWrappingGroup_Ver3
{
public:
	FLiveryWrappingGroup_Ver3(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetHeadOffset() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<struct FLiveryWrappingGroupHeadInfo_Ver3> GetHeadInfo() {
		return memory.read<struct TArray<struct FLiveryWrappingGroupHeadInfo_Ver3>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnOptionsParsed__DelegateSignature
{
public:
	FOnOptionsParsed__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtRacingPassDef
{
public:
	FKtRacingPassDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtRacingPassType GetpassType() {
		return memory.read<enum class EKtRacingPassType>(m_addr + 0);
	}
	int32_t GetaccumTrophy() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FString GetracingPass_stockID() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FString GetpremiumPass_stockID() {
		return memory.read<struct FString>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnLicenseNice__DelegateSignature
{
public:
	FOnLicenseNice__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMentIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetScore() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FReplaceItemIdInfo
{
public:
	FReplaceItemIdInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMinRangeItemCount() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetReplaceItemId() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtQuestEmblemDef
{
public:
	FKtQuestEmblemDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetquestPeriod() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FKtQuestDef GetquestDef() {
		return memory.read<struct FKtQuestDef>(m_addr + 16);
	}
	enum class EKtEmblemQuestGrade GetemblemQuestGrade() {
		return memory.read<enum class EKtEmblemQuestGrade>(m_addr + 32);
	}
	enum class EKtEmblemQuestCategory GetemblemQuestCategory() {
		return memory.read<enum class EKtEmblemQuestCategory>(m_addr + 33);
	}
	enum class EKtEmblemQuestTendency GetemblemQuestTendency() {
		return memory.read<enum class EKtEmblemQuestTendency>(m_addr + 34);
	}
	bool GetfirstAchievementOption() {
		return memory.read<bool>(m_addr + 35);
	}
	bool GetglobalAnnouncementOption() {
		return memory.read<bool>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnInitializeSpeedLimit__DelegateSignature
{
public:
	FOnInitializeSpeedLimit__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<float> GetMinSpeed() {
		return memory.read<struct TArray<float>>(m_addr + 0);
	}
	struct TArray<float> GetMaxSpeed() {
		return memory.read<struct TArray<float>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_ChangeKartParts
{
public:
	FDev_ChangeKartParts(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ETableType GetType() {
		return memory.read<enum class ETableType>(m_addr + 0);
	}
	struct FString GetKey() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_MakeSticker
{
public:
	FOnClicked_MakeSticker(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNextDriftMission__DelegateSignature
{
public:
	FOnNextDriftMission__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetKeepNSeconds() {
		return memory.read<float>(m_addr + 0);
	}
	float GetReuseInNSeconds() {
		return memory.read<float>(m_addr + 4);
	}
	float GetInNSeconds() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetUseNTimes() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateAIDistance__DelegateSignature
{
public:
	FOnUpdateAIDistance__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetAIDistance() {
		return memory.read<float>(m_addr + 0);
	}
	bool GetbWarning() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocusedNpaCodeBtn
{
public:
	FOnFocusedNpaCodeBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtGrandPrixMainTierDef
{
public:
	FKtGrandPrixMainTierDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtGrandPrixMainTier GetmainTier() {
		return memory.read<enum class EKtGrandPrixMainTier>(m_addr + 0);
	}
	struct TArray<struct FKtGrandPrixSubTierDef> GetsubTiers() {
		return memory.read<struct TArray<struct FKtGrandPrixSubTierDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FReport_ClosePlayerReportInputDialog
{
public:
	FReport_ClosePlayerReportInputDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtModeSelectDataList
{
public:
	FKtModeSelectDataList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtModeSelectData> Getlist() {
		return memory.read<struct TArray<struct FKtModeSelectData>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDisableAIDistance__DelegateSignature
{
public:
	FOnDisableAIDistance__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbDisable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateDistance__DelegateSignature
{
public:
	FOnUpdateDistance__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDistance() {
		return memory.read<float>(m_addr + 0);
	}
	float GetThreshold() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtOptionSetting
{
public:
	FKtOptionSetting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtUse2ndPwd Getuse2ndPwd() {
		return memory.read<enum class EKtUse2ndPwd>(m_addr + 0);
	}
	bool GetassistDisabled() {
		return memory.read<bool>(m_addr + 1);
	}
	enum class EKtGameplayControlType GetplayControlType() {
		return memory.read<enum class EKtGameplayControlType>(m_addr + 2);
	}
	int32_t GetmatchLatency() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct TMap<struct FString, struct FString> GetgameOptions() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetKartRepMovement
{
public:
	FSetKartRepMovement(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKartRepMovement GetInKartRepMovement() {
		return memory.read<struct FKartRepMovement>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCompleteLoadPawn
{
public:
	FOnCompleteLoadPawn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AOutGamePawn GetLoadedPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AOutGamePawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FActiveScenario
{
public:
	FActiveScenario(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCategoryID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetGroupID() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct TArray<struct FActiveScenarioState> GetScenarioContainer() {
		return memory.read<struct TArray<struct FActiveScenarioState>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnWarning__DelegateSignature
{
public:
	FOnWarning__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbWarning() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryCache
{
public:
	FLiveryCache(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveryDesignDesc GetLiveryDesignDesc() {
		return memory.read<struct FLiveryDesignDesc>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FGameModeData
{
public:
	FGameModeData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftClassPtr<UObject> GetGameMode() {
		return memory.read<struct TSoftClassPtr<UObject>>(m_addr + 0);
	}
	struct TSoftClassPtr<UObject> GetAIPawnClass() {
		return memory.read<struct TSoftClassPtr<UObject>>(m_addr + 40);
	}
	struct FText GetModeName() {
		return memory.read<struct FText>(m_addr + 80);
	}
	struct TSet<struct TSoftObjectPtr<UObject>> GetPreCachedAssetContainer() {
		return memory.read<struct TSet<struct TSoftObjectPtr<UObject>>>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnLicenseAddCoin__DelegateSignature
{
public:
	FOnLicenseAddCoin__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNum() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseSpeedColorInfo
{
public:
	FLicenseSpeedColorInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMinSpeed() {
		return memory.read<float>(m_addr + 0);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientQuestEmblemMissionDef
{
public:
	FKtClientQuestEmblemMissionDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FOnGfsFriendRemoved
{
public:
	FOnGfsFriendRemoved(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAccountPlatformData GetData() {
		return memory.read<struct FAccountPlatformData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKartEffectEvent
{
public:
	FKartEffectEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKartEffectData> GetAlways() {
		return memory.read<struct TArray<struct FKartEffectData>>(m_addr + 0);
	}
	struct TArray<struct FKartEffectData> GetIdle() {
		return memory.read<struct TArray<struct FKartEffectData>>(m_addr + 16);
	}
	struct TArray<struct FKartEffectData> GetAccel() {
		return memory.read<struct TArray<struct FKartEffectData>>(m_addr + 32);
	}
	struct TArray<struct FKartEffectData> GetTransformAccel() {
		return memory.read<struct TArray<struct FKartEffectData>>(m_addr + 48);
	}
	struct TArray<struct FKartEffectData> GetBoostByItem() {
		return memory.read<struct TArray<struct FKartEffectData>>(m_addr + 64);
	}
	struct TArray<struct FKartEffectData> GetTransformBoostByItem() {
		return memory.read<struct TArray<struct FKartEffectData>>(m_addr + 80);
	}
	struct TArray<struct FKartEffectData> GetBoostByDrift() {
		return memory.read<struct TArray<struct FKartEffectData>>(m_addr + 96);
	}
	struct TArray<struct FKartEffectData> GetTransformBoostByDrift() {
		return memory.read<struct TArray<struct FKartEffectData>>(m_addr + 112);
	}
	struct TArray<struct FKartEffectData> GetDrift() {
		return memory.read<struct TArray<struct FKartEffectData>>(m_addr + 128);
	}
	struct TArray<struct FKartEffectData> GetBoostWheel() {
		return memory.read<struct TArray<struct FKartEffectData>>(m_addr + 144);
	}
	struct TArray<struct FKartEffectData> GetBrake() {
		return memory.read<struct TArray<struct FKartEffectData>>(m_addr + 160);
	}
	struct TArray<struct FName> GetFrontLampSocketNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 176);
	}
	struct TArray<struct FKartEffectData> GetSlipStream() {
		return memory.read<struct TArray<struct FKartEffectData>>(m_addr + 192);
	}
	struct TArray<struct FKartEffectData> GetDrafting() {
		return memory.read<struct TArray<struct FKartEffectData>>(m_addr + 208);
	}
	struct TArray<struct FKartEffectData> GetBoostZone() {
		return memory.read<struct TArray<struct FKartEffectData>>(m_addr + 224);
	}
	struct TArray<struct FKartEffectData> GetBoostDelivery() {
		return memory.read<struct TArray<struct FKartEffectData>>(m_addr + 240);
	}
	struct TArray<struct FKartEffectData> GetTransformed() {
		return memory.read<struct TArray<struct FKartEffectData>>(m_addr + 256);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnQuestSuccess__DelegateSignature
{
public:
	FOnQuestSuccess__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbSuccess() {
		return memory.read<bool>(m_addr + 0);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickCloseSave
{
public:
	FOnClickCloseSave(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientLicenseMissionDef
{
public:
	FKtClientLicenseMissionDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMissionLevelIndex() {
		return memory.read<int32_t>(m_addr + 80);
	}
	struct FText GetMissionTitle() {
		return memory.read<struct FText>(m_addr + 88);
	}
	struct TArray<enum class EItemType> GetMissionUseItemList() {
		return memory.read<struct TArray<enum class EItemType>>(m_addr + 112);
	}
	enum class ELicenseMissionScoreType GetScoreType() {
		return memory.read<enum class ELicenseMissionScoreType>(m_addr + 128);
	}
	struct FText GetMissionTipText() {
		return memory.read<struct FText>(m_addr + 136);
	}
	bool GetbSeparateMobileDescText() {
		return memory.read<bool>(m_addr + 160);
	}
	struct TArray<struct FString> GetMissionDescText() {
		return memory.read<struct TArray<struct FString>>(m_addr + 168);
	}
	struct TArray<struct TSoftObjectPtr<UTexture2D>> GetMissionDescImg() {
		return memory.read<struct TArray<struct TSoftObjectPtr<UTexture2D>>>(m_addr + 184);
	}

private:
	std::uint64_t m_addr = 0;
};class FMatchMode_ShowMatchingSettingsPopup
{
public:
	FMatchMode_ShowMatchingSettingsPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClientBlockUseItem
{
public:
	FClientBlockUseItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDisableButtonClicked
{
public:
	FOnDisableButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedConfirmAllOnConfirmListDialog
{
public:
	FOnClickedConfirmAllOnConfirmListDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticast_PlaySequence
{
public:
	FMulticast_PlaySequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsPlaying() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNewQuest__DelegateSignature
{
public:
	FOnNewQuest__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> GetQuestList() {
		return memory.read<struct TArray<int32_t>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FStandCameraData
{
public:
	FStandCameraData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTargetLocationInterpTime() {
		return memory.read<float>(m_addr + 8);
	}
	float GetDefaultFOV() {
		return memory.read<float>(m_addr + 12);
	}
	float GetMinFOV() {
		return memory.read<float>(m_addr + 16);
	}
	float GetFovDecreasePerDistance() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_Websocket
{
public:
	FDev_Websocket(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetURL() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_PaintColorReset
{
public:
	FOnClicked_PaintColorReset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FFMOD_TriggerData
{
public:
	FFMOD_TriggerData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<AFMODAmbientSound> GetFMOD_Actor() {
		return memory.read<struct TSoftObjectPtr<AFMODAmbientSound>>(m_addr + 0);
	}
	float GetFMOD_Volume() {
		return memory.read<float>(m_addr + 40);
	}
	float GetFMOD_Pitch() {
		return memory.read<float>(m_addr + 44);
	}
	bool GetFMOD_Play() {
		return memory.read<bool>(m_addr + 48);
	}
	struct TMap<struct FName, float> GetParameters() {
		return memory.read<struct TMap<struct FName, float>>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FSendVDTRewardPacket
{
public:
	FSendVDTRewardPacket(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnReplicatedClientDesc__DelegateSignature
{
public:
	FOnReplicatedClientDesc__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDedicatedLobbyPlayerDesc GetInDesc() {
		return memory.read<struct FDedicatedLobbyPlayerDesc>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnWarning
{
public:
	FOnWarning(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbWarning() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_Purchase
{
public:
	FDev_Purchase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetstockId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString Getcurrency() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDisplayToggleButtonUnchecked
{
public:
	FOnDisplayToggleButtonUnchecked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDummyIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKdOutGamePawnTransform
{
public:
	FKdOutGamePawnTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtItemType GetItemType() {
		return memory.read<enum class EKtItemType>(m_addr + 8);
	}
	struct FString GetReplaceItemId() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct TMap<enum class EOutGamePawnType, struct FKdOutGamePawnTransformData> GetPawnTypeToTransformDataMap() {
		return memory.read<struct TMap<enum class EOutGamePawnType, struct FKdOutGamePawnTransformData>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedShowEmotionStorage
{
public:
	FOnClickedShowEmotionStorage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDedicatedLobbyPlayerDesc
{
public:
	FDedicatedLobbyPlayerDesc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbLineupKart() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FKartDesc GetKartDesc() {
		return memory.read<struct FKartDesc>(m_addr + 8);
	}
	struct FCharacterDesc GetCharacterDesc() {
		return memory.read<struct FCharacterDesc>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnScreenShotButtonClicked
{
public:
	FOnScreenShotButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeBGM
{
public:
	FChangeBGM(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFMODEvent GetEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UFMODEvent(ptr_addr);
	}
	bool GetbForce() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FCsGameData
{
public:
	FCsGameData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetteamName() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}
	struct TMap<struct FString, struct FCsPlayerScore> GetplayerScore() {
		return memory.read<struct TMap<struct FString, struct FCsPlayerScore>>(m_addr + 16);
	}
	struct TArray<struct FCsTeamScore> GetteamScore() {
		return memory.read<struct TArray<struct FCsTeamScore>>(m_addr + 96);
	}
	struct TArray<struct FCsRaceResult> GetRaceResult() {
		return memory.read<struct TArray<struct FCsRaceResult>>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FCharacterDesc
{
public:
	FCharacterDesc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCharacterId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetCostumeId() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetMotionFinishId() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FString GetMotionRetireId() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetMotionVictoryId() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FString GetMotionDefeatId() {
		return memory.read<struct FString>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryWrappingArrayCompressed
{
public:
	FLiveryWrappingArrayCompressed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FLiveryWrappingDescCompressed> GetWrappingDesc() {
		return memory.read<struct TArray<struct FLiveryWrappingDescCompressed>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtSpecialItemsDef
{
public:
	FKtSpecialItemsDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetExp() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString Gettrophy() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetkartExp() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FString GetseasonPass() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString Getlucci() {
		return memory.read<struct FString>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticastBorn
{
public:
	FMulticastBorn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 12);
	}
	float GetTargetHeight() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FKartDesc
{
public:
	FKartDesc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetBody() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetFront() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetSide() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FString GetBack() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetWheel() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FString GetHandle() {
		return memory.read<struct FString>(m_addr + 80);
	}
	struct FString GetPlate() {
		return memory.read<struct FString>(m_addr + 96);
	}
	struct FString GetBooster() {
		return memory.read<struct FString>(m_addr + 112);
	}
	struct FString GetLiveryUniqueId() {
		return memory.read<struct FString>(m_addr + 128);
	}
	int32_t GetLiveryRevision() {
		return memory.read<int32_t>(m_addr + 144);
	}
	struct FString GetBalloon() {
		return memory.read<struct FString>(m_addr + 152);
	}
	struct FString GetSkidMark() {
		return memory.read<struct FString>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnShowRewardDialogDelegate__DelegateSignature
{
public:
	FOnShowRewardDialogDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPrCouponResult GetCouponResult() {
		return memory.read<enum class EPrCouponResult>(m_addr + 0);
	}
	int32_t GetErrorCode() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct TArray<struct FKtItem> GetItems() {
		return memory.read<struct TArray<struct FKtItem>>(m_addr + 8);
	}
	struct TArray<struct FString> GetDuplicates() {
		return memory.read<struct TArray<struct FString>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDediWidgetItemReleased__DelegateSignature
{
public:
	FOnDediWidgetItemReleased__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDedicatedLobbyPlayerDesc GetInDesc() {
		return memory.read<struct FDedicatedLobbyPlayerDesc>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDediWidgetChatCommitted__DelegateSignature
{
public:
	FOnDediWidgetChatCommitted__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	enum class ETextCommit GetInCommitMethod() {
		return memory.read<enum class ETextCommit>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnChecked_UseLayerScaleX
{
public:
	FOnChecked_UseLayerScaleX(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDediWidgetJourneyButtonReleased__DelegateSignature
{
public:
	FOnDediWidgetJourneyButtonReleased__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInTrackAlias() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class ERaceMode GetInRaceMode() {
		return memory.read<enum class ERaceMode>(m_addr + 16);
	}
	struct FString GetInGameMode() {
		return memory.read<struct FString>(m_addr + 24);
	}
	struct FString GetInTrackPackageName() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetInParams() {
		return memory.read<struct FString>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FInfoPageData_Profile
{
public:
	FInfoPageData_Profile(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FForceFeedbackTable
{
public:
	FForceFeedbackTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UForceFeedbackEffect GetEffect() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UForceFeedbackEffect(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtSessionRacePlayerRequest
{
public:
	FKtSessionRacePlayerRequest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKtRacePlayerSummary Getsummary() {
		return memory.read<struct FKtRacePlayerSummary>(m_addr + 0);
	}
	struct TArray<enum class EKtAccountFlag> GetplayerFlag() {
		return memory.read<struct TArray<enum class EKtAccountFlag>>(m_addr + 192);
	}
	struct FKtItemPreview GetitemPreview() {
		return memory.read<struct FKtItemPreview>(m_addr + 208);
	}
	struct FKtKartBodyParam GetbodyParam() {
		return memory.read<struct FKtKartBodyParam>(m_addr + 376);
	}
	struct FKtSessionPlayerAuxData GetauxData() {
		return memory.read<struct FKtSessionPlayerAuxData>(m_addr + 592);
	}
	struct UObject GetplayMission() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 752);
		return struct UObject(ptr_addr);
	}
	struct TMap<struct FString, struct FString> GetcustomProperty() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 760);
	}
	struct FString GetliverySignedUrl() {
		return memory.read<struct FString>(m_addr + 840);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryWrappingArray
{
public:
	FLiveryWrappingArray(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELiveryPaintType GetSection() {
		return memory.read<enum class ELiveryPaintType>(m_addr + 0);
	}
	struct TArray<struct FLiveryWrappingDesc> GetWrappingArray() {
		return memory.read<struct TArray<struct FLiveryWrappingDesc>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnScenarioWidget__DelegateSignature
{
public:
	FOnScenarioWidget__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UScenarioWidgetBase GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UScenarioWidgetBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAccountLogined__DelegateSignature
{
public:
	FOnAccountLogined__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetResult() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientQuestSetDef
{
public:
	FKtClientQuestSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FKtClientQuestDef> GetquestDefMap() {
		return memory.read<struct TMap<struct FString, struct FKtClientQuestDef>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGearInfo
{
public:
	FGearInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getgear() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FKtGearParam GetParam() {
		return memory.read<struct FKtGearParam>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMicOnOffButtonClicked
{
public:
	FOnMicOnOffButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCustomGameToastDelegate__DelegateSignature
{
public:
	FOnCustomGameToastDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetTitleText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct FText GetDescText() {
		return memory.read<struct FText>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_UseSticker
{
public:
	FOnClicked_UseSticker(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdatedPresetDelegate__DelegateSignature
{
public:
	FOnUpdatedPresetDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbSuccess() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedNextMainTab
{
public:
	FOnClickedNextMainTab(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryPaintDesc_Ver2
{
public:
	FLiveryPaintDesc_Ver2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetGlobalColorOverride() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}
	int32_t GetIndexInCollection() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCustomHUDButtonFocused
{
public:
	FOnCustomHUDButtonFocused(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FWidgetAnimationNode
{
public:
	FWidgetAnimationNode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FOnChangedPresetDelegate__DelegateSignature
{
public:
	FOnChangedPresetDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbSuccess() {
		return memory.read<bool>(m_addr + 0);
	}
	int32_t GetPresetIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedOpenMailPage
{
public:
	FOnClickedOpenMailPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnChangedLiveryDelegate__DelegateSignature
{
public:
	FOnChangedLiveryDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetID() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdatedCashInfoDelegate__DelegateSignature
{
public:
	FOnUpdatedCashInfoDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	double GetCashCount() {
		return memory.read<double>(m_addr + 0);
	}
	struct FString GetCurrencyType() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticastRelayRaceGameResult
{
public:
	FMulticastRelayRaceGameResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetRelayTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FRaceGameResult GetResult() {
		return memory.read<struct FRaceGameResult>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdatedBalanceInfoDelegate__DelegateSignature
{
public:
	FOnUpdatedBalanceInfoDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetBalanceCount() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEmoticonReceived
{
public:
	FOnEmoticonReceived(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetaccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class EEmoticonType GetemoticonType() {
		return memory.read<enum class EEmoticonType>(m_addr + 16);
	}
	struct FString GetEmoticonItemId() {
		return memory.read<struct FString>(m_addr + 24);
	}
	bool GetbHasEmotion() {
		return memory.read<bool>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FStickerStockFull
{
public:
	FStickerStockFull(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FStickerStock Getstock() {
		return memory.read<struct FStickerStock>(m_addr + 0);
	}
	struct FNullableDateTime GetdropDate() {
		return memory.read<struct FNullableDateTime>(m_addr + 120);
	}
	struct FDateTime GetlastUpdate() {
		return memory.read<struct FDateTime>(m_addr + 136);
	}
	struct FString GettagText() {
		return memory.read<struct FString>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDrawAtDesiredSize
{
public:
	FGetDrawAtDesiredSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnWaitExpireAccountDelegate__DelegateSignature
{
public:
	FOnWaitExpireAccountDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetExpireSec() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateKcoin
{
public:
	FOnUpdateKcoin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetKcoin() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnShowKartUpgradeResult
{
public:
	FOnShowKartUpgradeResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsSuccess() {
		return memory.read<bool>(m_addr + 0);
	}
	enum class EKtItemGrade GetKartGrade() {
		return memory.read<enum class EKtItemGrade>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnKartAccountLoginAccountLinkConfirm__DelegateSignature
{
public:
	FOnKartAccountLoginAccountLinkConfirm__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbSuccess() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FText GetErrorMsg() {
		return memory.read<struct FText>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnButtonReleased_Motion
{
public:
	FOnButtonReleased_Motion(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetInMontage() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtGrandPrixRankReward
{
public:
	FKtGrandPrixRankReward(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> Getranking() {
		return memory.read<struct TArray<int32_t>>(m_addr + 0);
	}
	int32_t GetminRaceCount() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct TArray<struct FString> GetrewardStockIds() {
		return memory.read<struct TArray<struct FString>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedGearMinusBtn
{
public:
	FOnClickedGearMinusBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FServer_SetDisconnected
{
public:
	FServer_SetDisconnected(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerListenAutoDrive
{
public:
	FServerListenAutoDrive(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetInAutoDrive() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNickNameCreateResult__DelegateSignature
{
public:
	FOnNickNameCreateResult__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPrSetRiderNameResult GetCreateResult() {
		return memory.read<enum class EPrSetRiderNameResult>(m_addr + 0);
	}
	struct FString GetNotSupportedLetter() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnItemExpireDelegate__DelegateSignature
{
public:
	FOnItemExpireDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtItem> GetItemExpireVector() {
		return memory.read<struct TArray<struct FKtItem>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSeasonUpdated
{
public:
	FOnSeasonUpdated(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonUpdatedType GetUpdatedType() {
		return memory.read<enum class ESeasonUpdatedType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtItem
{
public:
	FKtItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetItemId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FKtItemData GetitemData() {
		return memory.read<struct FKtItemData>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIGameScenario_UserFrontUsing
{
public:
	FAIGameScenario_UserFrontUsing(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRemainDistance() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetTargetRank() {
		return memory.read<int32_t>(m_addr + 12);
	}
	float GetStayTime() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FFriendInfoGfs
{
public:
	FFriendInfoGfs(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Getnpsn() {
		return memory.read<struct FString>(m_addr + 0);
	}
	double GetepochLastModified() {
		return memory.read<double>(m_addr + 16);
	}
	struct FString GetconnectedGameId() {
		return memory.read<struct FString>(m_addr + 24);
	}
	struct FString GetPlatformType() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetplatformNickname() {
		return memory.read<struct FString>(m_addr + 56);
	}
	struct FString Getpresence() {
		return memory.read<struct FString>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FKartSequenceDelegateInfo
{
public:
	FKartSequenceDelegateInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FKtItemData
{
public:
	FKtItemData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetitemCount() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FDateTime GetitemExpireTime() {
		return memory.read<struct FDateTime>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtInitalRewardRow
{
public:
	FKtInitalRewardRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetitemVector() {
		return memory.read<struct TArray<struct FString>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKdLootSpawnFxParam
{
public:
	FKdLootSpawnFxParam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFxTypeString() {
		return memory.read<struct FString>(m_addr + 0);
	}
	float GetPlayTime() {
		return memory.read<float>(m_addr + 16);
	}
	float GetStartFadeTime() {
		return memory.read<float>(m_addr + 20);
	}
	float GetEndFadeTime() {
		return memory.read<float>(m_addr + 24);
	}
	float GetCycleTime() {
		return memory.read<float>(m_addr + 28);
	}
	bool GetbLoop() {
		return memory.read<bool>(m_addr + 32);
	}
	bool GetbReverse() {
		return memory.read<bool>(m_addr + 33);
	}
	struct UCurveFloat GetWeightCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetCycleCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UCurveFloat(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSortableGamePlayerData
{
public:
	FSortableGamePlayerData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FOnLiveFriendDelegate__DelegateSignature
{
public:
	FOnLiveFriendDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAccountPlatformData> GetAccountPlatformDataVector() {
		return memory.read<struct TArray<struct FAccountPlatformData>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPSNFriendDelegate__DelegateSignature
{
public:
	FOnPSNFriendDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAccountPlatformData> GetAccountPlatformDataVector() {
		return memory.read<struct TArray<struct FAccountPlatformData>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtSessionRaceResultPlayer
{
public:
	FKtSessionRaceResultPlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetplayerId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetAI() {
		return memory.read<bool>(m_addr + 16);
	}
	enum class EKtRaceAiType GetaiType() {
		return memory.read<enum class EKtRaceAiType>(m_addr + 17);
	}
	struct FString GetraceResultKey() {
		return memory.read<struct FString>(m_addr + 24);
	}
	int32_t Getstatus() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetTeam() {
		return memory.read<int32_t>(m_addr + 44);
	}
	int32_t Getrank() {
		return memory.read<int32_t>(m_addr + 48);
	}
	int32_t GetTime() {
		return memory.read<int32_t>(m_addr + 52);
	}
	int32_t GetbestTime() {
		return memory.read<int32_t>(m_addr + 56);
	}
	bool GetallRetire() {
		return memory.read<bool>(m_addr + 60);
	}
	int32_t GetProgress() {
		return memory.read<int32_t>(m_addr + 64);
	}
	int32_t Getmileage() {
		return memory.read<int32_t>(m_addr + 68);
	}
	int32_t GetovertakeActionCount() {
		return memory.read<int32_t>(m_addr + 72);
	}
	int32_t GetsmallboostActionCount() {
		return memory.read<int32_t>(m_addr + 76);
	}
	int32_t GetdraftActionCount() {
		return memory.read<int32_t>(m_addr + 80);
	}
	int32_t GetcrashActionCount() {
		return memory.read<int32_t>(m_addr + 84);
	}
	int32_t GetitemGainActionCount() {
		return memory.read<int32_t>(m_addr + 88);
	}
	int32_t GetdriftActionCount() {
		return memory.read<int32_t>(m_addr + 92);
	}
	int32_t GetresetActionCount() {
		return memory.read<int32_t>(m_addr + 96);
	}
	struct TMap<struct FString, int32_t> GetgoItemUseMap() {
		return memory.read<struct TMap<struct FString, int32_t>>(m_addr + 104);
	}
	struct TMap<struct FString, int32_t> GetgoItemSuccessMap() {
		return memory.read<struct TMap<struct FString, int32_t>>(m_addr + 184);
	}
	struct TMap<struct FString, int32_t> GetgoItemDefenceMap() {
		return memory.read<struct TMap<struct FString, int32_t>>(m_addr + 264);
	}
	struct TMap<struct FString, int32_t> GetgoItemAttackMap() {
		return memory.read<struct TMap<struct FString, int32_t>>(m_addr + 344);
	}
	struct TMap<struct FString, int32_t> GetgoItemAttackedMap() {
		return memory.read<struct TMap<struct FString, int32_t>>(m_addr + 424);
	}
	struct TMap<struct FString, int32_t> GetgoItemGainMap() {
		return memory.read<struct TMap<struct FString, int32_t>>(m_addr + 504);
	}
	struct UObject GetplayMission() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct UObject(ptr_addr);
	}
	float GetloadingSecond() {
		return memory.read<float>(m_addr + 592);
	}
	struct TMap<struct FString, struct FString> GetcustomPropertyUpdate() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 600);
	}

private:
	std::uint64_t m_addr = 0;
};class FRecordedPawnData
{
public:
	FRecordedPawnData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FClientAlertRed
{
public:
	FClientAlertRed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbOn() {
		return memory.read<bool>(m_addr + 0);
	}
	float GetLifeTime() {
		return memory.read<float>(m_addr + 4);
	}
	struct AItem GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtItemPreview
{
public:
	FKtItemPreview(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKtItemPreset GetitemPresetOn() {
		return memory.read<struct FKtItemPreset>(m_addr + 0);
	}
	int32_t GetbeginnerFlag() {
		return memory.read<int32_t>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedMissionPlay
{
public:
	FOnClickedMissionPlay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPartyReadyState
{
public:
	FPartyReadyState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsPartyJoined() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbIsPartyLeader() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetbIsReadyGame() {
		return memory.read<bool>(m_addr + 2);
	}
	bool GetbIsLeaderReadyGame() {
		return memory.read<bool>(m_addr + 3);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientQuestWeeklySeasonDef
{
public:
	FKtClientQuestWeeklySeasonDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FKtClientQuestWeeklyDef> GetquestWeeklyDefMap() {
		return memory.read<struct TMap<struct FString, struct FKtClientQuestWeeklyDef>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_PauseReplay
{
public:
	FDev_PauseReplay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbPause() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioKeyData
{
public:
	FScenarioKeyData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FScenarioKey GetKey() {
		return memory.read<struct FScenarioKey>(m_addr + 0);
	}
	struct FText GetKey_Descript() {
		return memory.read<struct FText>(m_addr + 16);
	}
	bool GetbActionKey() {
		return memory.read<bool>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FMain_OnKeyGuideClicked
{
public:
	FMain_OnKeyGuideClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReport_OnReportInputTextChanged
{
public:
	FReport_OnReportInputTextChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnGfsFriendDataDelegate__DelegateSignature
{
public:
	FOnGfsFriendDataDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAccountPlatformData GetData() {
		return memory.read<struct FAccountPlatformData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_KrPcRefund
{
public:
	FDev_KrPcRefund(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentCameraType
{
public:
	FGetCurrentCameraType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPawnCameraType GetReturnValue() {
		return memory.read<enum class EPawnCameraType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPartyInvite_OnCloseButtonClicked
{
public:
	FPartyInvite_OnCloseButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientMissionDef
{
public:
	FKtClientMissionDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetmissionDesc() {
		return memory.read<struct FText>(m_addr + 232);
	}
	enum class EKtClientMissionProgressType GetprogressType() {
		return memory.read<enum class EKtClientMissionProgressType>(m_addr + 256);
	}
	struct TArray<struct FString> Getreplacements() {
		return memory.read<struct TArray<struct FString>>(m_addr + 264);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnGfsToastPopupDelegate__DelegateSignature
{
public:
	FOnGfsToastPopupDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetTitleText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct FText GetDescText() {
		return memory.read<struct FText>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioCondition
{
public:
	FScenarioCondition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EScenarioConditionType GetConditionType() {
		return memory.read<enum class EScenarioConditionType>(m_addr + 0);
	}
	enum class EItemType GetItemType() {
		return memory.read<enum class EItemType>(m_addr + 1);
	}
	enum class EBoostKind GetBoostKind() {
		return memory.read<enum class EBoostKind>(m_addr + 2);
	}
	int32_t GetMaxCount() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAccountPlatformDataUpdated__DelegateSignature
{
public:
	FOnAccountPlatformDataUpdated__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAccountPlatformData GetAccountPlatformData() {
		return memory.read<struct FAccountPlatformData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedConfirmOnEnterDateOfBirthPopup
{
public:
	FOnClickedConfirmOnEnterDateOfBirthPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_ScreenShot
{
public:
	FOnClicked_ScreenShot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedDetailRecordDialogBackButton
{
public:
	FOnClickedDetailRecordDialogBackButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUserLevelUpdatedDelegate__DelegateSignature
{
public:
	FOnUserLevelUpdatedDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EUserLevelUpdatedType GetInType() {
		return memory.read<enum class EUserLevelUpdatedType>(m_addr + 0);
	}
	int32_t GetInLevel() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticast_UseItem
{
public:
	FMulticast_UseItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_FinishPersonalResultPlayer
{
public:
	FDev_FinishPersonalResultPlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPlayerNumber() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t Getrank() {
		return memory.read<int32_t>(m_addr + 4);
	}
	float GetFinishTime() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryWrappingTransform
{
public:
	FLiveryWrappingTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetColorOverride() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}
	struct FVector2D GetTranslation() {
		return memory.read<struct FVector2D>(m_addr + 16);
	}
	struct FVector2D GetScale() {
		return memory.read<struct FVector2D>(m_addr + 24);
	}
	float GetRotation() {
		return memory.read<float>(m_addr + 32);
	}
	float GetTranslucency() {
		return memory.read<float>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateKartExp__DelegateSignature
{
public:
	FOnUpdateKartExp__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetKartID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetUpdatedExp() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtStaffCreditsSetDef
{
public:
	FKtStaffCreditsSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetscrollDurationSeconds() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct TArray<struct FKtStaffCreditsDef> GetstaffCreditsDefVector() {
		return memory.read<struct TArray<struct FKtStaffCreditsDef>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayNumberAnim
{
public:
	FPlayNumberAnim(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetAnimDur() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCommunityInviteButtonDelegate__DelegateSignature
{
public:
	FCommunityInviteButtonDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInAccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnKartUpgradeResultDelegate__DelegateSignature
{
public:
	FOnKartUpgradeResultDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbSuccess() {
		return memory.read<bool>(m_addr + 0);
	}
	enum class EKtItemGrade GetKartGrade() {
		return memory.read<enum class EKtItemGrade>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnShowToyPlateDelegate__DelegateSignature
{
public:
	FOnShowToyPlateDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbPause() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNgmVersionInfo
{
public:
	FNgmVersionInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSignature() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetPatchAddr() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientGrandPrixTierSetDef
{
public:
	FKtClientGrandPrixTierSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtClientGrandPrixMainTierDef> GettierDefVector() {
		return memory.read<struct TArray<struct FKtClientGrandPrixMainTierDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedManagingEquip
{
public:
	FOnClickedManagingEquip(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPreviousTab
{
public:
	FOnClickedPreviousTab(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeLiveryLayerScaleX
{
public:
	FChangeLiveryLayerScaleX(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInDelta() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedConfirmButtonInAttendaceEventPopup
{
public:
	FOnClickedConfirmButtonInAttendaceEventPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnExpiredConfirmItemTime
{
public:
	FOnExpiredConfirmItemTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetExpiredShopStockItemID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetExpiredShopStockItemIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FFMODPlayHelper
{
public:
	FFMODPlayHelper(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFMODAudioComponent GetFMODAudio() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UFMODAudioComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEmoticonButtonClicked
{
public:
	FOnEmoticonButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPartyInviteUpdateDelegate__DelegateSignature
{
public:
	FPartyInviteUpdateDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbRefused() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateEventDelegate__DelegateSignature
{
public:
	FOnUpdateEventDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetEventID() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHeadlightData
{
public:
	FHeadlightData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 0);
	}
	float GetIntensity() {
		return memory.read<float>(m_addr + 48);
	}
	float GetAttenuationRadius() {
		return memory.read<float>(m_addr + 52);
	}
	float GetOuterConeAngle() {
		return memory.read<float>(m_addr + 56);
	}
	struct FName GetAttachSocketName() {
		return memory.read<struct FName>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMatchRegisteredDelegate__DelegateSignature
{
public:
	FOnMatchRegisteredDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<enum class ERaceMode> GetGameType() {
		return memory.read<struct TArray<enum class ERaceMode>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FJoinPartyReplyDelegate__DelegateSignature
{
public:
	FJoinPartyReplyDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetJoinedUserName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDisablePartyInviteDelegate__DelegateSignature
{
public:
	FOnDisablePartyInviteDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInAccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientKartSkillTreeDef
{
public:
	FKtClientKartSkillTreeDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetskillTreeId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FText GetskillTreeName() {
		return memory.read<struct FText>(m_addr + 16);
	}
	struct FString GetpageWidgetName() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct TArray<struct FKtClientKartSkillTreeNodeDef> Getnodes() {
		return memory.read<struct TArray<struct FKtClientKartSkillTreeNodeDef>>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtInitialDef
{
public:
	FKtInitialDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetitemVector() {
		return memory.read<struct TArray<struct FString>>(m_addr + 8);
	}
	struct FKtItemPreset GetitemPreset() {
		return memory.read<struct FKtItemPreset>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdatePartyMemberDelegate__DelegateSignature
{
public:
	FUpdatePartyMemberDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPartyChageState GetChangeState() {
		return memory.read<enum class EPartyChageState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPlayerReportResultDelegate__DelegateSignature
{
public:
	FOnPlayerReportResultDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPrSendReportResult GetReportResult() {
		return memory.read<enum class EPrSendReportResult>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_SetDriftBoostParam
{
public:
	FDev_SetDriftBoostParam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDriftBoostParam() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioSequenceData
{
public:
	FScenarioSequenceData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<ULevelSequence> GetSequence() {
		return memory.read<struct TSoftObjectPtr<ULevelSequence>>(m_addr + 0);
	}
	struct FString GetBindingPawnName() {
		return memory.read<struct FString>(m_addr + 40);
	}
	bool GetbClearRoad() {
		return memory.read<bool>(m_addr + 56);
	}
	struct FMovieSceneSequencePlaybackSettings GetPlaybackSettings() {
		return memory.read<struct FMovieSceneSequencePlaybackSettings>(m_addr + 60);
	}
	struct FScenarioTriggerTarget GetTriggerContainer() {
		return memory.read<struct FScenarioTriggerTarget>(m_addr + 80);
	}
	bool GetbOverrideCameraCut() {
		return memory.read<bool>(m_addr + 112);
	}
	bool GetbNoJumpCutInSameCamera() {
		return memory.read<bool>(m_addr + 113);
	}
	bool GetbCanSkip() {
		return memory.read<bool>(m_addr + 114);
	}
	struct ALevelSequenceActor GetLevelSequenceActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct ALevelSequenceActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtAsyncRequestId
{
public:
	FKtAsyncRequestId(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetloginId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetreqUid() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMinimapZoom
{
public:
	FGetMinimapZoom(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPartyToastDelegate__DelegateSignature
{
public:
	FOnPartyToastDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetTitleText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct FText GetDescText() {
		return memory.read<struct FText>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FCustomGameInviteData
{
public:
	FCustomGameInviteData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKtAccountProfile GetProfile() {
		return memory.read<struct FKtAccountProfile>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnGetRecentPlayersDelegate__DelegateSignature
{
public:
	FOnGetRecentPlayersDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKtRecentGame GetRecentGame() {
		return memory.read<struct FKtRecentGame>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtKartItemSkillTreeSetDef
{
public:
	FKtKartItemSkillTreeSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FString> GetSkillTreeSetDefMap() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FTMIItemModeData
{
public:
	FTMIItemModeData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetGain() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetUse() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetAggression() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetAttackSuccess() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetAttackFailure() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetBeThreatened() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetDefenseSuccess() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetDefenseFailure() {
		return memory.read<int32_t>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocusMode
{
public:
	FOnFocusMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtRecentGame
{
public:
	FKtRecentGame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetgameId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class ERaceMode GetraceMode() {
		return memory.read<enum class ERaceMode>(m_addr + 16);
	}
	struct FDateTime GetupdateDate() {
		return memory.read<struct FDateTime>(m_addr + 24);
	}
	struct TArray<struct FKtTeamResult> GetteamResults() {
		return memory.read<struct TArray<struct FKtTeamResult>>(m_addr + 32);
	}
	struct TArray<struct FKtRecentPlayer> GetrecentPlayers() {
		return memory.read<struct TArray<struct FKtRecentPlayer>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTotalRaceTime
{
public:
	FGetTotalRaceTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClientTimeAttackTrackAliasSetDef
{
public:
	FClientTimeAttackTrackAliasSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FClientTimeAttackTrackAliasDef> GettrackAliasDefVector() {
		return memory.read<struct TArray<struct FClientTimeAttackTrackAliasDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtCumulativePlayData
{
public:
	FKtCumulativePlayData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetplayTimeMin() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<int32_t> GetplatformLoginData() {
		return memory.read<struct TArray<int32_t>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_ShapeTabPrev
{
public:
	FOnClicked_ShapeTabPrev(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtSessionRaceResultCommon
{
public:
	FKtSessionRaceResultCommon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GettotalPlayers() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetteamMemberCount() {
		return memory.read<int32_t>(m_addr + 4);
	}
	enum class EGameType GetGameType() {
		return memory.read<enum class EGameType>(m_addr + 8);
	}
	enum class ERaceType GetraceType() {
		return memory.read<enum class ERaceType>(m_addr + 9);
	}
	enum class ERaceMode GetraceMode() {
		return memory.read<enum class ERaceMode>(m_addr + 10);
	}
	struct FString GettrackId() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetgameId() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FString GetgrandPrixId() {
		return memory.read<struct FString>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnReplicatedClientDesc
{
public:
	FOnReplicatedClientDesc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDedicatedLobbyPlayerDesc GetInDesc() {
		return memory.read<struct FDedicatedLobbyPlayerDesc>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtRecentPlayer
{
public:
	FKtRecentPlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetaccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetriderName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetemblemId() {
		return memory.read<struct FString>(m_addr + 32);
	}
	enum class EKtAccountPlatform Getplatform() {
		return memory.read<enum class EKtAccountPlatform>(m_addr + 48);
	}
	struct FString GetKartID() {
		return memory.read<struct FString>(m_addr + 56);
	}
	enum class EKtItemGrade GetKartGrade() {
		return memory.read<enum class EKtItemGrade>(m_addr + 72);
	}
	int32_t GetTeam() {
		return memory.read<int32_t>(m_addr + 76);
	}
	bool GetisSameTeam() {
		return memory.read<bool>(m_addr + 80);
	}
	bool GetisResultUpdated() {
		return memory.read<bool>(m_addr + 81);
	}
	int32_t Getrank() {
		return memory.read<int32_t>(m_addr + 84);
	}
	int32_t GetTime() {
		return memory.read<int32_t>(m_addr + 88);
	}
	bool GetisWin() {
		return memory.read<bool>(m_addr + 92);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedWarningDialogBackButton
{
public:
	FOnClickedWarningDialogBackButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtTeamResult
{
public:
	FKtTeamResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTeam() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t Getrank() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOverlayMaterialData
{
public:
	FOverlayMaterialData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSlotName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetElementIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetOverlayIndex() {
		return memory.read<int32_t>(m_addr + 12);
	}
	struct UMaterialInterface GetOverlayMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UMaterialInterface(ptr_addr);
	}
	struct TArray<struct FOverlayMaterialCurveData> GetCurveValue() {
		return memory.read<struct TArray<struct FOverlayMaterialCurveData>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedNpaCodeBtn
{
public:
	FOnClickedNpaCodeBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnExpiredValidTime__DelegateSignature
{
public:
	FOnExpiredValidTime__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetItemId() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtMobileStoreReviewOpenInfo
{
public:
	FKtMobileStoreReviewOpenInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetAndroidCount() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetIOSCount() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FDateTime GetAndroidLatestOpenTime() {
		return memory.read<struct FDateTime>(m_addr + 8);
	}
	struct FDateTime GetIOSLatestOpenTime() {
		return memory.read<struct FDateTime>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSelected__DelegateSignature
{
public:
	FOnSelected__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetSelectedWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnShowToastPopupDelegate__DelegateSignature
{
public:
	FOnShowToastPopupDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetTitleText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct FText GetDescText() {
		return memory.read<struct FText>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FKdWidgetNavigationRuleElement
{
public:
	FKdWidgetNavigationRuleElement(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMatchMode_OnMatchingSettingsBackButtonClicked
{
public:
	FMatchMode_OnMatchingSettingsBackButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnServerTimeElapsed__DelegateSignature
{
public:
	FOnServerTimeElapsed__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDateTime GetServerTime() {
		return memory.read<struct FDateTime>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTargetVectorAnimInfo
{
public:
	FTargetVectorAnimInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetStart() {
		return memory.read<struct FVector>(m_addr + 48);
	}
	struct FVector GetDest() {
		return memory.read<struct FVector>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseSpeedGateDef
{
public:
	FLicenseSpeedGateDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDistance() {
		return memory.read<float>(m_addr + 0);
	}
	float GetRightVectorOffset() {
		return memory.read<float>(m_addr + 4);
	}
	float GetZOffset() {
		return memory.read<float>(m_addr + 8);
	}
	float GetYawOffset() {
		return memory.read<float>(m_addr + 12);
	}
	struct FRotator GetRotationOffset() {
		return memory.read<struct FRotator>(m_addr + 16);
	}
	struct FVector GetGateScale() {
		return memory.read<struct FVector>(m_addr + 28);
	}
	struct FTransform GetGateTransform() {
		return memory.read<struct FTransform>(m_addr + 48);
	}
	struct FVector GetLeftPosition() {
		return memory.read<struct FVector>(m_addr + 96);
	}
	struct FVector GetRightPosition() {
		return memory.read<struct FVector>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateCash__DelegateSignature
{
public:
	FOnUpdateCash__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCount() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtTimeAttack
{
public:
	FKtTimeAttack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GettrackId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GettimeAttackUniqueId() {
		return memory.read<struct FString>(m_addr + 16);
	}
	int32_t GetrecordTime() {
		return memory.read<int32_t>(m_addr + 32);
	}
	int32_t GetrecordMileage() {
		return memory.read<int32_t>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FKdPlatformConstValue
{
public:
	FKdPlatformConstValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtPlatform GetKtPlatform() {
		return memory.read<enum class EKtPlatform>(m_addr + 8);
	}
	bool GetbIsHighlighted() {
		return memory.read<bool>(m_addr + 9);
	}
	struct TSoftObjectPtr<UPaperSprite> GetPlatformImage() {
		return memory.read<struct TSoftObjectPtr<UPaperSprite>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnOption_Select__DelegateSignature
{
public:
	FOnOption_Select__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtEventChallengeInfo
{
public:
	FKtEventChallengeInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GeteventChallengeId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FDateTime GetachievedDate() {
		return memory.read<struct FDateTime>(m_addr + 16);
	}
	int32_t GetCurrentCount() {
		return memory.read<int32_t>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_PauseGame
{
public:
	FDev_PauseGame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbPause() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSetBoost
{
public:
	FOnSetBoost(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EBoostKind GetBoostKind() {
		return memory.read<enum class EBoostKind>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_Grouping
{
public:
	FOnClicked_Grouping(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtGrandPrixRaceResult
{
public:
	FKtGrandPrixRaceResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetplayerId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t Getgpp() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetaddGpp() {
		return memory.read<int32_t>(m_addr + 20);
	}
	enum class EKtGrandPrixSubTier Gettier() {
		return memory.read<enum class EKtGrandPrixSubTier>(m_addr + 24);
	}
	bool GetisNewTier() {
		return memory.read<bool>(m_addr + 25);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDifficulty
{
public:
	FSetDifficulty(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ERaceMode GetType() {
		return memory.read<enum class ERaceMode>(m_addr + 0);
	}
	int32_t Getgrade() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeLiveryLayerScaleY
{
public:
	FChangeLiveryLayerScaleY(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInDelta() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FButtonStyleTag
{
public:
	FButtonStyleTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDataTable GetDataTable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UDataTable(ptr_addr);
	}
	struct FName GetNormalTag() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FName GetFocusTag() {
		return memory.read<struct FName>(m_addr + 16);
	}
	struct FName GetCheckTag() {
		return memory.read<struct FName>(m_addr + 24);
	}
	struct FName GetPressTag() {
		return memory.read<struct FName>(m_addr + 32);
	}
	struct FName GetHoverTag() {
		return memory.read<struct FName>(m_addr + 40);
	}
	struct FName GetDisableTag() {
		return memory.read<struct FName>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnOption_ChangeFocusItem__DelegateSignature
{
public:
	FOnOption_ChangeFocusItem__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_EnableReflex
{
public:
	FDev_EnableReflex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetMode() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_OverrideTotalTime
{
public:
	FDev_OverrideTotalTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMinute() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetSecond() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetMillisecond() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtSubList
{
public:
	FKtSubList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetID() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<struct FKtLootboxComposition> GetcompositionVector() {
		return memory.read<struct TArray<struct FKtLootboxComposition>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateNewAccount
{
public:
	FCreateNewAccount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnOption_Focused__DelegateSignature
{
public:
	FOnOption_Focused__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedConfirm_Delete
{
public:
	FOnClickedConfirm_Delete(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAchievementMatrixCounter
{
public:
	FAchievementMatrixCounter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FKtQuestDailySeasonDef
{
public:
	FKtQuestDailySeasonDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetrewardStockId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TMap<struct FString, struct FKtQuestDailyDef> GetquestDailyDefMap() {
		return memory.read<struct TMap<struct FString, struct FKtQuestDailyDef>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAchievementCounter
{
public:
	FAchievementCounter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FAchievementInfo
{
public:
	FAchievementInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetseasonNum() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct FText GetTitle() {
		return memory.read<struct FText>(m_addr + 24);
	}
	enum class EAchievementCategory GetCategory() {
		return memory.read<enum class EAchievementCategory>(m_addr + 48);
	}
	enum class EKtEmblemQuestGrade Getgrade() {
		return memory.read<enum class EKtEmblemQuestGrade>(m_addr + 49);
	}
	int32_t GetprogressCurrentCount() {
		return memory.read<int32_t>(m_addr + 52);
	}
	int32_t GetprogressMaxCount() {
		return memory.read<int32_t>(m_addr + 56);
	}
	float GetachievedUserRatio() {
		return memory.read<float>(m_addr + 60);
	}
	struct FDateTime GetachieveDate() {
		return memory.read<struct FDateTime>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtLiverySticker
{
public:
	FKtLiverySticker(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetliveryStickerId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetliveryStickerUniqueId() {
		return memory.read<struct FString>(m_addr + 16);
	}
	int64_t GetcreateTime() {
		return memory.read<int64_t>(m_addr + 32);
	}
	int64_t GetexpireTime() {
		return memory.read<int64_t>(m_addr + 40);
	}
	enum class EKtLiveryState GetState() {
		return memory.read<enum class EKtLiveryState>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientCheatListDef
{
public:
	FKtClientCheatListDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetCheatTextVector() {
		return memory.read<struct TArray<struct FString>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateVDTEventProgress
{
public:
	FUpdateVDTEventProgress(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetEventID() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAchievementSeasonInfo
{
public:
	FAchievementSeasonInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetseasonId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetseasonCount() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct FString GetseasonNumberKey() {
		return memory.read<struct FString>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedConfirmButtonUserInfoPopup
{
public:
	FOnClickedConfirmButtonUserInfoPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtAccountProfile
{
public:
	FKtAccountProfile(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetriderName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class EKtAccountPlatform Getplatform() {
		return memory.read<enum class EKtAccountPlatform>(m_addr + 16);
	}
	struct FString GetplatformProfileName() {
		return memory.read<struct FString>(m_addr + 24);
	}
	struct FString GetplatformProfileId() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetcountryCode() {
		return memory.read<struct FString>(m_addr + 56);
	}
	enum class EKtPlatform GetmachinePlatform() {
		return memory.read<enum class EKtPlatform>(m_addr + 72);
	}
	struct FString GetemblemId() {
		return memory.read<struct FString>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FKdVersionCheckerNgmServerInfo
{
public:
	FKdVersionCheckerNgmServerInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetURL() {
		return memory.read<struct FString>(m_addr + 16);
	}
	bool GetbDefault() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSpinBoxValueChanged_LightInnerConeAngle
{
public:
	FOnSpinBoxValueChanged_LightInnerConeAngle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseMovableActorInfo
{
public:
	FLicenseMovableActorInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStart() {
		return memory.read<float>(m_addr + 0);
	}
	float GetEnd() {
		return memory.read<float>(m_addr + 4);
	}
	float GetDistance() {
		return memory.read<float>(m_addr + 8);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 12);
	}
	struct FVector GetStartLocation() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	struct FVector GetEndLocation() {
		return memory.read<struct FVector>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FCachedQuestInfo
{
public:
	FCachedQuestInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCachedQuestID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class EChallengeChangedStat GetCachedMissionStat() {
		return memory.read<enum class EChallengeChangedStat>(m_addr + 16);
	}
	enum class EKtQuestType GetCachedQuestType() {
		return memory.read<enum class EKtQuestType>(m_addr + 17);
	}

private:
	std::uint64_t m_addr = 0;
};class FADTEventData
{
public:
	FADTEventData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<char> GetRewardedSteps() {
		return memory.read<struct TArray<char>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FVDTEventData
{
public:
	FVDTEventData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> GetRewardedCount() {
		return memory.read<struct TArray<int32_t>>(m_addr + 16);
	}
	struct TArray<int32_t> GetRewardedIndex() {
		return memory.read<struct TArray<int32_t>>(m_addr + 32);
	}
	enum class EKtADTEventType GetSubEventType() {
		return memory.read<enum class EKtADTEventType>(m_addr + 49);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtMissionDef
{
public:
	FKtMissionDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetmissionId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class EKtMissionType GetmissionType() {
		return memory.read<enum class EKtMissionType>(m_addr + 16);
	}
	struct TArray<struct FKtMissionTriggerDef> GetmissionTriggerDefVector() {
		return memory.read<struct TArray<struct FKtMissionTriggerDef>>(m_addr + 24);
	}
	struct FKtMissionCounterDef GetmissionCounterDef() {
		return memory.read<struct FKtMissionCounterDef>(m_addr + 40);
	}
	int32_t GetmissionCount() {
		return memory.read<int32_t>(m_addr + 192);
	}
	struct FString GetrewardStockId() {
		return memory.read<struct FString>(m_addr + 200);
	}
	struct FString GetrewardMessage() {
		return memory.read<struct FString>(m_addr + 216);
	}

private:
	std::uint64_t m_addr = 0;
};class FApplyGearDialog_CloseDialog
{
public:
	FApplyGearDialog_CloseDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoginEventDefFile
{
public:
	FLoginEventDefFile(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FLoginEventDef> Getevents() {
		return memory.read<struct TArray<struct FLoginEventDef>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInviteMenu_Request_OnClickedRejectBtn
{
public:
	FInviteMenu_Request_OnClickedRejectBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGazeCameraData
{
public:
	FGazeCameraData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetForwardDistance() {
		return memory.read<float>(m_addr + 8);
	}
	float GetUpDistance() {
		return memory.read<float>(m_addr + 12);
	}
	float GetRightDistance() {
		return memory.read<float>(m_addr + 16);
	}
	float GetRoadCheckZLowerBound() {
		return memory.read<float>(m_addr + 20);
	}
	float GetRoadCheckZUpperBound() {
		return memory.read<float>(m_addr + 24);
	}
	float GetZDistanceFromRoad() {
		return memory.read<float>(m_addr + 28);
	}
	float GetLocationInterpTime() {
		return memory.read<float>(m_addr + 32);
	}
	float GetResetDistanceThreshold() {
		return memory.read<float>(m_addr + 36);
	}
	float GetMinFOV() {
		return memory.read<float>(m_addr + 40);
	}
	float GetMaxFOV() {
		return memory.read<float>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FWrappingCollection
{
public:
	FWrappingCollection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELiveryWrappingCategory GetWrappingCategory() {
		return memory.read<enum class ELiveryWrappingCategory>(m_addr + 0);
	}
	struct FText GetCategoryName() {
		return memory.read<struct FText>(m_addr + 8);
	}
	struct TArray<struct FWrappingCollectionItem> GetWrappingcollectionItemList() {
		return memory.read<struct TArray<struct FWrappingCollectionItem>>(m_addr + 32);
	}
	bool GetbApplyColorOverride() {
		return memory.read<bool>(m_addr + 48);
	}
	bool GetbEnableCollection() {
		return memory.read<bool>(m_addr + 49);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_PaintGamutPrev
{
public:
	FOnClicked_PaintGamutPrev(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoginEventDef
{
public:
	FLoginEventDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	enum class ELoginEventType GetType() {
		return memory.read<enum class ELoginEventType>(m_addr + 32);
	}
	struct FString GetstartDate() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetendDate() {
		return memory.read<struct FString>(m_addr + 56);
	}
	struct FString GetStartTime() {
		return memory.read<struct FString>(m_addr + 72);
	}
	struct FString GetEndTime() {
		return memory.read<struct FString>(m_addr + 88);
	}
	struct FString GetrewardStockId() {
		return memory.read<struct FString>(m_addr + 104);
	}
	struct FString GetTitle() {
		return memory.read<struct FString>(m_addr + 120);
	}
	struct FString GetDescription() {
		return memory.read<struct FString>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedMission
{
public:
	FOnClickedMission(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllTrackAliases
{
public:
	FGetAllTrackAliases(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FName> GetReturnValue() {
		return memory.read<struct TArray<struct FName>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGrandPrixFinalResult
{
public:
	FGrandPrixFinalResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FGrandPrixDetailRecord
{
public:
	FGrandPrixDetailRecord(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FAssignDecalTextureFromLiveryEditor
{
public:
	FAssignDecalTextureFromLiveryEditor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture2D GetInDecalTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FInitCheckPoints
{
public:
	FInitCheckPoints(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInLapCount() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientInventoryDef
{
public:
	FKtClientInventoryDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetLastUpdateDate() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct TArray<struct FKtClientItemDef> GetitemDefVector() {
		return memory.read<struct TArray<struct FKtClientItemDef>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientKartSkillDef
{
public:
	FKtClientKartSkillDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetskillName() {
		return memory.read<struct FText>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseRemovableObstacleInfo
{
public:
	FLicenseRemovableObstacleInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDistance() {
		return memory.read<float>(m_addr + 0);
	}
	float GetSpeed() {
		return memory.read<float>(m_addr + 4);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 8);
	}
	struct UCurveVector GetCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UCurveVector(ptr_addr);
	}
	struct UCurveVector GetRotationCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UCurveVector(ptr_addr);
	}
	struct UStaticMesh GetMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UStaticMesh(ptr_addr);
	}
	struct UFMODEvent GetSoundEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UFMODEvent(ptr_addr);
	}
	struct FVector GetSavedLocation() {
		return memory.read<struct FVector>(m_addr + 48);
	}
	struct FVector GetSavedDirection() {
		return memory.read<struct FVector>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};class FKartSkillNodeInfo
{
public:
	FKartSkillNodeInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKartSkillType GetSkillType() {
		return memory.read<enum class EKartSkillType>(m_addr + 0);
	}
	struct FKtClientKartSkillTreeNodeDef GetNodeDef() {
		return memory.read<struct FKtClientKartSkillTreeNodeDef>(m_addr + 8);
	}
	struct TArray<int32_t> GetChildNodes() {
		return memory.read<struct TArray<int32_t>>(m_addr + 168);
	}
	struct TArray<int32_t> GetParentNodes() {
		return memory.read<struct TArray<int32_t>>(m_addr + 184);
	}
	enum class EKartSkillStateCase GetState() {
		return memory.read<enum class EKartSkillStateCase>(m_addr + 200);
	}

private:
	std::uint64_t m_addr = 0;
};class FSortByRankWithLocalPlayerPriority
{
public:
	FSortByRankWithLocalPlayerPriority(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOwningPawnTeamNo() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetOwningPawnUniqueIdentifier() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClosed_RacingPassPurchaseCompletePopup
{
public:
	FOnClosed_RacingPassPurchaseCompletePopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtKartSkillTreeNodeDef
{
public:
	FKtKartSkillTreeNodeDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetnodeId() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FString GetskillId() {
		return memory.read<struct FString>(m_addr + 24);
	}
	enum class EKtItemGrade Getgrade() {
		return memory.read<enum class EKtItemGrade>(m_addr + 40);
	}
	struct TArray<struct FString> GetChildren() {
		return memory.read<struct TArray<struct FString>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FUiDataTableListRow
{
public:
	FUiDataTableListRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EUiTableType GetUiTableType() {
		return memory.read<enum class EUiTableType>(m_addr + 8);
	}
	struct TSoftObjectPtr<UDataTable> GetTableObject() {
		return memory.read<struct TSoftObjectPtr<UDataTable>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSelectOptionButton
{
public:
	FOnSelectOptionButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_RewardListButton
{
public:
	FOnClicked_RewardListButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetrewardIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientKartSkillTreeNodeDef
{
public:
	FKtClientKartSkillTreeNodeDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GeticonWidgetName() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FString GetlineWidgetName() {
		return memory.read<struct FString>(m_addr + 80);
	}
	struct FString GetnavigateLeftId() {
		return memory.read<struct FString>(m_addr + 96);
	}
	struct FString GetnavigateRightId() {
		return memory.read<struct FString>(m_addr + 112);
	}
	struct FString GetnavigateUpId() {
		return memory.read<struct FString>(m_addr + 128);
	}
	struct FString GetnavigateDownId() {
		return memory.read<struct FString>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtPlayMissionRewardDef
{
public:
	FKtPlayMissionRewardDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetRate() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetbRewardExp() {
		return memory.read<bool>(m_addr + 4);
	}
	struct FString GetrewardStockId() {
		return memory.read<struct FString>(m_addr + 8);
	}
	int32_t GetrewardExpRate() {
		return memory.read<int32_t>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FMailCache
{
public:
	FMailCache(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKtMail GetMail() {
		return memory.read<struct FKtMail>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtMail
{
public:
	FKtMail(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKtMailAccount Getrecipient() {
		return memory.read<struct FKtMailAccount>(m_addr + 0);
	}
	struct FKtMailAccount Getsender() {
		return memory.read<struct FKtMailAccount>(m_addr + 72);
	}
	enum class EKtMailType GetType() {
		return memory.read<enum class EKtMailType>(m_addr + 144);
	}
	char GetFlag() {
		return memory.read<char>(m_addr + 145);
	}
	struct FString GetmailId() {
		return memory.read<struct FString>(m_addr + 152);
	}
	struct FString GetMessage() {
		return memory.read<struct FString>(m_addr + 168);
	}
	struct FString GetstockId() {
		return memory.read<struct FString>(m_addr + 184);
	}
	struct FKtMailAttachment Getattachment() {
		return memory.read<struct FKtMailAttachment>(m_addr + 200);
	}
	struct FDateTime GetcreateDate() {
		return memory.read<struct FDateTime>(m_addr + 312);
	}
	struct FNullableDateTime GetexpireDate() {
		return memory.read<struct FNullableDateTime>(m_addr + 320);
	}
	enum class EKtAccountPlatform GetshopAccountPlatform() {
		return memory.read<enum class EKtAccountPlatform>(m_addr + 336);
	}
	enum class EKtPlatform GetshopMachinePlatform() {
		return memory.read<enum class EKtPlatform>(m_addr + 337);
	}
	struct FString GetReason() {
		return memory.read<struct FString>(m_addr + 344);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdatePartyMember
{
public:
	FOnUpdatePartyMember(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPartyChageState GetChangeState() {
		return memory.read<enum class EPartyChageState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtKartUpgradeSetDef
{
public:
	FKtKartUpgradeSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtKartUpgradeDef> GetkartUpgradeDefVector() {
		return memory.read<struct TArray<struct FKtKartUpgradeDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FInputLog
{
public:
	FInputLog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTime() {
		return memory.read<float>(m_addr + 0);
	}
	struct FString GetKey() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FPredict_jieunjung_ver47
{
public:
	FPredict_jieunjung_ver47(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDeltaTime() {
		return memory.read<float>(m_addr + 0);
	}
	struct TArray<float> GetInputs() {
		return memory.read<struct TArray<float>>(m_addr + 8);
	}
	struct TArray<float> GetReturnValue() {
		return memory.read<struct TArray<float>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtStockItem
{
public:
	FKtStockItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetItemId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetitemCount() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetitemTime() {
		return memory.read<int32_t>(m_addr + 20);
	}
	bool GetbPreview() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FPartyInfo
{
public:
	FPartyInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKtMatchRequestData GetquickMatchData() {
		return memory.read<struct FKtMatchRequestData>(m_addr + 0);
	}
	struct FString GetxblSessionUri() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetpsnSessionUri() {
		return memory.read<struct FString>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtShopPriceInfo
{
public:
	FKtShopPriceInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Getcurrency() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t Getprice() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetsalePrice() {
		return memory.read<int32_t>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FCancelButtonClicked
{
public:
	FCancelButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAccountForPlayer
{
public:
	FGetAccountForPlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLocalPlayerId() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UKdAccount GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UKdAccount(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCouponIdTextChanged
{
public:
	FOnCouponIdTextChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtStock
{
public:
	FKtStock(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetstockId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TArray<struct FKtStockItem> GetstockItemVector() {
		return memory.read<struct TArray<struct FKtStockItem>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FMoveLiveryLayerX
{
public:
	FMoveLiveryLayerX(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInDelta() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseTable
{
public:
	FLicenseTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetGroupID() {
		return memory.read<struct FString>(m_addr + 8);
	}
	float GetMissionTime() {
		return memory.read<float>(m_addr + 24);
	}
	struct FText GetMissionTimeOverText() {
		return memory.read<struct FText>(m_addr + 32);
	}
	struct TArray<struct FLicenseMission> GetMissionContainer() {
		return memory.read<struct TArray<struct FLicenseMission>>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtEmergencyEventDef
{
public:
	FKtEmergencyEventDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GeteventIds() {
		return memory.read<struct TArray<struct FString>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtMailAccount
{
public:
	FKtMailAccount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	enum class EKtAccountPlatform Getplatform() {
		return memory.read<enum class EKtAccountPlatform>(m_addr + 32);
	}
	struct FString GetnexonTag() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetemblemId() {
		return memory.read<struct FString>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtShopStock
{
public:
	FKtShopStock(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetstockId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TArray<struct FKtStockItem> GetstockItemVector() {
		return memory.read<struct TArray<struct FKtStockItem>>(m_addr + 16);
	}
	struct TArray<struct FKtStockItem> GetbonusStockItemVector() {
		return memory.read<struct TArray<struct FKtStockItem>>(m_addr + 32);
	}
	struct FString GetstockName() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetstockDesc() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FString GetdetailDesc() {
		return memory.read<struct FString>(m_addr + 80);
	}
	struct FString GetstockImage() {
		return memory.read<struct FString>(m_addr + 96);
	}
	struct FString GetpromotionImage() {
		return memory.read<struct FString>(m_addr + 112);
	}
	struct FString GetpromotionDesc() {
		return memory.read<struct FString>(m_addr + 128);
	}
	struct FNullableDateTime GetsaleStartDate() {
		return memory.read<struct FNullableDateTime>(m_addr + 144);
	}
	struct FNullableDateTime GetsaleEndDate() {
		return memory.read<struct FNullableDateTime>(m_addr + 160);
	}
	struct TArray<struct FKtShopPriceInfo> Getprices() {
		return memory.read<struct TArray<struct FKtShopPriceInfo>>(m_addr + 176);
	}
	bool GetisGiftable() {
		return memory.read<bool>(m_addr + 192);
	}
	struct FString GetTag() {
		return memory.read<struct FString>(m_addr + 200);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtTimeAttackTrack
{
public:
	FKtTimeAttackTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GettrackId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetCount() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocusFocusableButtonInMain
{
public:
	FOnFocusFocusableButtonInMain(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTimeAttackCache
{
public:
	FTimeAttackCache(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRaceSaveGameLatestPtr GetTimeAttackSaveGame() {
		return memory.read<struct FRaceSaveGameLatestPtr>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_ShowEditValuePopup
{
public:
	FOnClicked_ShowEditValuePopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKartEffectData
{
public:
	FKartEffectData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSoftObjectPath GetParticleSystem() {
		return memory.read<struct FSoftObjectPath>(m_addr + 0);
	}
	struct FName GetAttachBoneName() {
		return memory.read<struct FName>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtTimeAttackRanker
{
public:
	FKtTimeAttackRanker(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getrank() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetlapTime() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FString GetaccountId() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FString GetriderName() {
		return memory.read<struct FString>(m_addr + 24);
	}
	struct FString Getcountry() {
		return memory.read<struct FString>(m_addr + 40);
	}
	enum class EKtAccountPlatform Getplatform() {
		return memory.read<enum class EKtAccountPlatform>(m_addr + 56);
	}
	enum class EPlatformCategory GetplatformCategory() {
		return memory.read<enum class EPlatformCategory>(m_addr + 57);
	}
	struct FString GetemblemItemIdOn() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FKtItemPreview Getpreview() {
		return memory.read<struct FKtItemPreview>(m_addr + 80);
	}
	int32_t GetkartLevel() {
		return memory.read<int32_t>(m_addr + 248);
	}
	enum class EKtItemGrade GetKartGrade() {
		return memory.read<enum class EKtItemGrade>(m_addr + 252);
	}
	struct FString GetreplayPath() {
		return memory.read<struct FString>(m_addr + 256);
	}

private:
	std::uint64_t m_addr = 0;
};class FBeginRaceCountdown
{
public:
	FBeginRaceCountdown(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBeginTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedGameLeaveBtn
{
public:
	FOnClickedGameLeaveBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtItemPreset
{
public:
	FKtItemPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FString> GetitemMap() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 0);
	}
	struct FKtLivery Getlivery() {
		return memory.read<struct FKtLivery>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticastDestructUsingPhysics
{
public:
	FMulticastDestructUsingPhysics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FVector_NetQuantize GetImpulsePoint() {
		return memory.read<struct FVector_NetQuantize>(m_addr + 4);
	}
	float GetImpulseSize() {
		return memory.read<float>(m_addr + 16);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct FRotator GetRotator() {
		return memory.read<struct FRotator>(m_addr + 32);
	}
	struct UItemComponent GetVictim() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UItemComponent(ptr_addr);
	}
	enum class EItemFilterResult GetResult() {
		return memory.read<enum class EItemFilterResult>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FBuildCaptureLightInfo
{
public:
	FBuildCaptureLightInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetIntensity() {
		return memory.read<float>(m_addr + 0);
	}
	struct FColor GetColor() {
		return memory.read<struct FColor>(m_addr + 4);
	}
	float GetInnerConeAngle() {
		return memory.read<float>(m_addr + 8);
	}
	float GetOuterConeAngle() {
		return memory.read<float>(m_addr + 12);
	}
	float GetAttenuationRadius() {
		return memory.read<float>(m_addr + 16);
	}
	struct FTransform GetLightTransfrom() {
		return memory.read<struct FTransform>(m_addr + 32);
	}
	int32_t GetAttachIndex() {
		return memory.read<int32_t>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSelectButtonClicked
{
public:
	FOnSelectButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNotUsed() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCustomMaterialFx
{
public:
	FCustomMaterialFx(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct TSoftObjectPtr<UMaterialInterface>, struct TSoftObjectPtr<UMaterialInterface>> GetMaterialMap() {
		return memory.read<struct TMap<struct TSoftObjectPtr<UMaterialInterface>, struct TSoftObjectPtr<UMaterialInterface>>>(m_addr + 0);
	}
	struct TSoftObjectPtr<UMaterialInterface> GetDefaultMaterial() {
		return memory.read<struct TSoftObjectPtr<UMaterialInterface>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtLivery
{
public:
	FKtLivery(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetliveryId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetLiveryUniqueId() {
		return memory.read<struct FString>(m_addr + 16);
	}
	int32_t GetLiveryRevision() {
		return memory.read<int32_t>(m_addr + 32);
	}
	struct FString GetKartID() {
		return memory.read<struct FString>(m_addr + 40);
	}
	int64_t GetcreateTime() {
		return memory.read<int64_t>(m_addr + 56);
	}
	int64_t GetexpireTime() {
		return memory.read<int64_t>(m_addr + 64);
	}
	enum class EKtLiveryState GetState() {
		return memory.read<enum class EKtLiveryState>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FRaceGameResult
{
public:
	FRaceGameResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetprevExp() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetnextExp() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetprevKartExp() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetnextKartExp() {
		return memory.read<int32_t>(m_addr + 12);
	}
	struct FPlayLucciReward Getlucci() {
		return memory.read<struct FPlayLucciReward>(m_addr + 16);
	}
	struct FString GetgrandPrixId() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct TArray<struct FKtGrandPrixRaceResult> GetgpRaceResults() {
		return memory.read<struct TArray<struct FKtGrandPrixRaceResult>>(m_addr + 48);
	}
	int32_t GetplayMissionExp() {
		return memory.read<int32_t>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIItemUse_DistProbability
{
public:
	FAIItemUse_DistProbability(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDistance() {
		return memory.read<float>(m_addr + 0);
	}
	float GetProbability() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FAwsLatencyInfo
{
public:
	FAwsLatencyInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Getregion() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetpingMs() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FPredict_hwanghou_GLU_light
{
public:
	FPredict_hwanghou_GLU_light(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDeltaTime() {
		return memory.read<float>(m_addr + 0);
	}
	struct TArray<float> GetInputs() {
		return memory.read<struct TArray<float>>(m_addr + 8);
	}
	struct TArray<float> GetReturnValue() {
		return memory.read<struct TArray<float>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtGrandPrixTierReward
{
public:
	FKtGrandPrixTierReward(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtGrandPrixMainTier GetmainTier() {
		return memory.read<enum class EKtGrandPrixMainTier>(m_addr + 0);
	}
	int32_t GetminRaceCount() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct TArray<struct FString> GetrewardStockIds() {
		return memory.read<struct TArray<struct FString>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FPartyMemberInfo
{
public:
	FPartyMemberInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetaccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FKtAccountProfile GetProfile() {
		return memory.read<struct FKtAccountProfile>(m_addr + 16);
	}
	struct FString GetuserName() {
		return memory.read<struct FString>(m_addr + 112);
	}
	bool GetpartyBoss() {
		return memory.read<bool>(m_addr + 128);
	}
	bool Getready() {
		return memory.read<bool>(m_addr + 129);
	}
	struct FKtItemPreview GetitemPreview() {
		return memory.read<struct FKtItemPreview>(m_addr + 136);
	}
	int32_t GetjoinId() {
		return memory.read<int32_t>(m_addr + 304);
	}
	struct FString GetclientStage() {
		return memory.read<struct FString>(m_addr + 312);
	}
	struct FString GetclientStageParam() {
		return memory.read<struct FString>(m_addr + 328);
	}
	struct FString GetliverySignedUrl() {
		return memory.read<struct FString>(m_addr + 344);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientLicenseGroupDef
{
public:
	FKtClientLicenseGroupDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetGroupTitle() {
		return memory.read<struct FText>(m_addr + 48);
	}
	struct TArray<struct FText> GetOpenContentName() {
		return memory.read<struct TArray<struct FText>>(m_addr + 72);
	}
	struct TArray<struct TSoftObjectPtr<UTexture2D>> GetOpenContentImg() {
		return memory.read<struct TArray<struct TSoftObjectPtr<UTexture2D>>>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};class FResetGearDialog_CloseDialog
{
public:
	FResetGearDialog_CloseDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientQuestEmblemMissionSetDef
{
public:
	FKtClientQuestEmblemMissionSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtClientQuestEmblemMissionDef> GetmissionDefVector() {
		return memory.read<struct TArray<struct FKtClientQuestEmblemMissionDef>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtMatchRequestData
{
public:
	FKtMatchRequestData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<enum class ERaceMode> GetraceModes() {
		return memory.read<struct TArray<enum class ERaceMode>>(m_addr + 0);
	}
	int32_t GetaiOption() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct TArray<int32_t> GettrackGroups() {
		return memory.read<struct TArray<int32_t>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtGrandPrixTierSetDef
{
public:
	FKtGrandPrixTierSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtGrandPrixMainTierDef> GettierDefVector() {
		return memory.read<struct TArray<struct FKtGrandPrixMainTierDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDisableCustomGameInviteButton
{
public:
	FOnDisableCustomGameInviteButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInAccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerSettingToClient
{
public:
	FServerSettingToClient(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetpingServers() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetmultiplayDiscoveryServiceUrl() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetnetRetryPolicy() {
		return memory.read<struct FString>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetForceFeedbackEffect
{
public:
	FSetForceFeedbackEffect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDeleteReplay
{
public:
	FOnDeleteReplay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGameAskPartyJoinData
{
public:
	FGameAskPartyJoinData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetTargetAccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FKtAccountProfile GetTargetProfile() {
		return memory.read<struct FKtAccountProfile>(m_addr + 16);
	}
	int32_t GetrecvPackId() {
		return memory.read<int32_t>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FCanInstanceBoost
{
public:
	FCanInstanceBoost(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbActivate() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryItemInfo
{
public:
	FLiveryItemInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetStickerID() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FDateTime GetRestrictionExpireTime() {
		return memory.read<struct FDateTime>(m_addr + 8);
	}
	bool GetbEnable() {
		return memory.read<bool>(m_addr + 16);
	}
	bool GetbEmpty() {
		return memory.read<bool>(m_addr + 17);
	}
	int32_t GetItemIndex() {
		return memory.read<int32_t>(m_addr + 20);
	}
	struct TArray<struct FString> GetSVGFilePathList() {
		return memory.read<struct TArray<struct FString>>(m_addr + 24);
	}
	struct TArray<struct FLiveryWrappingTransform> GetTransformList() {
		return memory.read<struct TArray<struct FLiveryWrappingTransform>>(m_addr + 40);
	}
	bool GetbShowChecked() {
		return memory.read<bool>(m_addr + 56);
	}
	bool GetbChecked() {
		return memory.read<bool>(m_addr + 57);
	}
	int32_t GetGroupSize() {
		return memory.read<int32_t>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};class FCsMember
{
public:
	FCsMember(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetaccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FKtAccountProfile GetProfile() {
		return memory.read<struct FKtAccountProfile>(m_addr + 16);
	}
	int32_t GetSlot() {
		return memory.read<int32_t>(m_addr + 112);
	}
	bool GetisSpectator() {
		return memory.read<bool>(m_addr + 116);
	}
	int32_t GetjoinId() {
		return memory.read<int32_t>(m_addr + 120);
	}
	struct FString GetchId() {
		return memory.read<struct FString>(m_addr + 128);
	}
	struct FString GetKartID() {
		return memory.read<struct FString>(m_addr + 144);
	}
	struct FString GetemblemId() {
		return memory.read<struct FString>(m_addr + 160);
	}
	int32_t GetExp() {
		return memory.read<int32_t>(m_addr + 176);
	}
	int32_t GetLevel() {
		return memory.read<int32_t>(m_addr + 180);
	}
	int32_t GetkartExp() {
		return memory.read<int32_t>(m_addr + 184);
	}
	int32_t GetkartLevel() {
		return memory.read<int32_t>(m_addr + 188);
	}
	enum class EKtItemGrade GetKartGrade() {
		return memory.read<enum class EKtItemGrade>(m_addr + 192);
	}
	enum class EKtLicenseGroupType GetLicense() {
		return memory.read<enum class EKtLicenseGroupType>(m_addr + 193);
	}
	int32_t GetbeginnerFlag() {
		return memory.read<int32_t>(m_addr + 196);
	}
	enum class EKtGrandPrixSubTier GetregularGrandPrixTier() {
		return memory.read<enum class EKtGrandPrixSubTier>(m_addr + 200);
	}
	int32_t GetState() {
		return memory.read<int32_t>(m_addr + 204);
	}
	int32_t GetreadyState() {
		return memory.read<int32_t>(m_addr + 208);
	}
	struct FString GetlastUpdateTime() {
		return memory.read<struct FString>(m_addr + 216);
	}
	bool GetcrossPlay() {
		return memory.read<bool>(m_addr + 232);
	}
	bool GetAI() {
		return memory.read<bool>(m_addr + 233);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateSeasonAlarm
{
public:
	FOnUpdateSeasonAlarm(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsNewSeasonOpen() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGameAskInviteData
{
public:
	FGameAskInviteData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInviteAccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetPartyId() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetInviteUserName() {
		return memory.read<struct FString>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtKartSkillBaseDefVec
{
public:
	FKtKartSkillBaseDefVec(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtKartSkillBaseDef> GetkartSkillDefVector() {
		return memory.read<struct TArray<struct FKtKartSkillBaseDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientLicenseGroupSetDef
{
public:
	FKtClientLicenseGroupSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetLastUpdateDate() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct TArray<struct FKtClientLicenseGroupDef> GetgroupDefVector() {
		return memory.read<struct TArray<struct FKtClientLicenseGroupDef>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnGfsFriendAdded
{
public:
	FOnGfsFriendAdded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAccountPlatformData GetNewFriend() {
		return memory.read<struct FAccountPlatformData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSoundInfo
{
public:
	FSoundInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFMODAudioComponent GetAudioComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UFMODAudioComponent(ptr_addr);
	}
	int8_t GetSoundType() {
		return memory.read<int8_t>(m_addr + 8);
	}
	int64_t GetID() {
		return memory.read<int64_t>(m_addr + 16);
	}
	struct FString GetSoundName() {
		return memory.read<struct FString>(m_addr + 24);
	}
	uint32_t GetFlag() {
		return memory.read<uint32_t>(m_addr + 40);
	}
	bool GetIsStop() {
		return memory.read<bool>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnRowItemClickedButton
{
public:
	FOnRowItemClickedButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UObject GetItemObj() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FTimeAttackSeasonRecordsContainer
{
public:
	FTimeAttackSeasonRecordsContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FAchievementTendencyInfo
{
public:
	FAchievementTendencyInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtEmblemQuestTendency GetTendency() {
		return memory.read<enum class EKtEmblemQuestTendency>(m_addr + 0);
	}
	int32_t GetCurrentCount() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetMaxCount() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIGameScenarioRow
{
public:
	FAIGameScenarioRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAIGameScenario_LastAttack1st> GetLastAttack1st() {
		return memory.read<struct TArray<struct FAIGameScenario_LastAttack1st>>(m_addr + 8);
	}
	struct TArray<struct FAIGameScenario_UserFrontUsing> GetUserFrontUsing() {
		return memory.read<struct TArray<struct FAIGameScenario_UserFrontUsing>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioKeyGuideAnimData
{
public:
	FScenarioKeyGuideAnimData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKey_EmphasizeLoop() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetKey_EmphasizeLoopRate() {
		return memory.read<float>(m_addr + 8);
	}
	struct FName GetKey_EmphasizeDelay() {
		return memory.read<struct FName>(m_addr + 12);
	}
	struct FName GetKey_Focus() {
		return memory.read<struct FName>(m_addr + 20);
	}
	struct FName GetKey_UnFocus() {
		return memory.read<struct FName>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWidgetSpace
{
public:
	FSetWidgetSpace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EWidgetSpace GetNewSpace() {
		return memory.read<enum class EWidgetSpace>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedNextPageButton
{
public:
	FOnClickedNextPageButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIGameScenario
{
public:
	FAIGameScenario(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDelay() {
		return memory.read<float>(m_addr + 0);
	}
	enum class EItemType GetItemType() {
		return memory.read<enum class EItemType>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FCsRaceResult
{
public:
	FCsRaceResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetgameNum() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetgameId() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FDateTime GetTime() {
		return memory.read<struct FDateTime>(m_addr + 24);
	}
	enum class ERaceMode GetraceMode() {
		return memory.read<enum class ERaceMode>(m_addr + 32);
	}
	struct FString GetTrack() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct TArray<struct FKtRaceResultSummary> GetPlayer() {
		return memory.read<struct TArray<struct FKtRaceResultSummary>>(m_addr + 56);
	}
	struct TArray<struct FKtTeamResult> GetTeam() {
		return memory.read<struct TArray<struct FKtTeamResult>>(m_addr + 72);
	}
	struct TArray<struct FString> GetteamName() {
		return memory.read<struct TArray<struct FString>>(m_addr + 88);
	}
	struct TMap<struct FString, struct FCsPlayerScoreChange> GetplayerScoreChange() {
		return memory.read<struct TMap<struct FString, struct FCsPlayerScoreChange>>(m_addr + 104);
	}
	struct TArray<struct FCsTeamScoreChange> GetteamScoreChange() {
		return memory.read<struct TArray<struct FCsTeamScoreChange>>(m_addr + 184);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnReleasedRotateCharacterButton
{
public:
	FOnReleasedRotateCharacterButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTrafficConeHit
{
public:
	FOnTrafficConeHit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetHitComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct UPrimitiveComponent GetOtherComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct FVector GetNormalImpulse() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct FHitResult GetHit() {
		return memory.read<struct FHitResult>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FModeSelectSaveData
{
public:
	FModeSelectSaveData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbNotifiedRetired() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FFrontSwingCameraData
{
public:
	FFrontSwingCameraData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNormalFov() {
		return memory.read<float>(m_addr + 8);
	}
	float GetBoostFov() {
		return memory.read<float>(m_addr + 12);
	}
	float GetOrientInterpTime() {
		return memory.read<float>(m_addr + 16);
	}
	float GetSpeedDecreaseInterpTime() {
		return memory.read<float>(m_addr + 20);
	}
	float GetSpeedIncreaseInterpTime() {
		return memory.read<float>(m_addr + 24);
	}
	float GetBoostFovInterpTime() {
		return memory.read<float>(m_addr + 28);
	}
	float GetNormalFovInterpTime() {
		return memory.read<float>(m_addr + 32);
	}
	float GetDefaultDistanceFromTarget() {
		return memory.read<float>(m_addr + 36);
	}
	float GetDistancePerTargetSpeed() {
		return memory.read<float>(m_addr + 40);
	}
	float GetCameraLocationPitch() {
		return memory.read<float>(m_addr + 44);
	}
	float GetMaxZoomInDistance() {
		return memory.read<float>(m_addr + 48);
	}
	float GetMaxZoomOutDistance() {
		return memory.read<float>(m_addr + 52);
	}
	float GetZoomMaxVelocity() {
		return memory.read<float>(m_addr + 56);
	}
	float GetZoomFriction() {
		return memory.read<float>(m_addr + 60);
	}
	float GetZoomAcceleration() {
		return memory.read<float>(m_addr + 64);
	}
	float GetCameraViewPitch() {
		return memory.read<float>(m_addr + 68);
	}
	struct TSoftObjectPtr<UCurveFloat> GetSwingAngleCurve() {
		return memory.read<struct TSoftObjectPtr<UCurveFloat>>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtMissionCounterDef
{
public:
	FKtMissionCounterDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtMissionCounterType GetcounterType() {
		return memory.read<enum class EKtMissionCounterType>(m_addr + 0);
	}
	bool GetcountOnceForDay() {
		return memory.read<bool>(m_addr + 1);
	}
	struct FKtMissionCounterConditionDef GetcounterConditionDef() {
		return memory.read<struct FKtMissionCounterConditionDef>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIGameScenario_LastAttack1st
{
public:
	FAIGameScenario_LastAttack1st(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetAttackProgress() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIItemUse_Progress
{
public:
	FAIItemUse_Progress(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetProgress() {
		return memory.read<float>(m_addr + 0);
	}
	float GetProbability() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtKartBodyParamNameDef
{
public:
	FKtKartBodyParamNameDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtKartBodyDef> GetKartBodyParamNames() {
		return memory.read<struct TArray<struct FKtKartBodyDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateADTEvent
{
public:
	FOnUpdateADTEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetEventID() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeAttendanceStep
{
public:
	FChangeAttendanceStep(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetAttendanceStep() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_BoosterDistance
{
public:
	FDev_BoosterDistance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDistance() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtKartUpgradeInfo
{
public:
	FKtKartUpgradeInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtItemGrade Getgrade() {
		return memory.read<enum class EKtItemGrade>(m_addr + 0);
	}
	struct FKtKartGearInfo GetGearInfo() {
		return memory.read<struct FKtKartGearInfo>(m_addr + 8);
	}
	struct FKtKartSkillInfo GetskillInfo() {
		return memory.read<struct FKtKartSkillInfo>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIItemUse_DiffRankProbability
{
public:
	FAIItemUse_DiffRankProbability(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDiffRank() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetProbability() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoginEventRawData
{
public:
	FLoginEventRawData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetEventID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetloginEventType() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct FDateTime GetstartDate() {
		return memory.read<struct FDateTime>(m_addr + 24);
	}
	struct FDateTime GetendDate() {
		return memory.read<struct FDateTime>(m_addr + 32);
	}
	struct FKtStock GetrewardStock() {
		return memory.read<struct FKtStock>(m_addr + 40);
	}
	struct FString GettitleKeyOrText() {
		return memory.read<struct FString>(m_addr + 72);
	}
	struct FString GetdescriptionKeyOrText() {
		return memory.read<struct FString>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIItemUse_RankProbability
{
public:
	FAIItemUse_RankProbability(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getrank() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetProbability() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocusedAccountResetBtn
{
public:
	FOnFocusedAccountResetBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIItemWaterlockEscapeSetting
{
public:
	FAIItemWaterlockEscapeSetting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetEscapeButtonClickCycle() {
		return memory.read<float>(m_addr + 0);
	}
	float GetProbability() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCustomizableWidgetDisableButtonChecked
{
public:
	FOnCustomizableWidgetDisableButtonChecked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticast_ReduceTimer
{
public:
	FMulticast_ReduceTimer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UActorComponent GetComponentClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UActorComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayForceFeedback
{
public:
	FPlayForceFeedback(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddAxisMapping
{
public:
	FAddAxisMapping(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FInputAxisKeyMapping GetNewKeyMapping() {
		return memory.read<struct FInputAxisKeyMapping>(m_addr + 0);
	}
	bool GetbSaveSetting() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetbSaveConfig() {
		return memory.read<bool>(m_addr + 41);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 42);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIItemUseRule
{
public:
	FAIItemUseRule(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EItemType GetItemType() {
		return memory.read<enum class EItemType>(m_addr + 0);
	}
	struct TArray<struct UAIItemUseCondition> GetConditions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct UAIItemUseCondition>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtRiderNameChange
{
public:
	FKtRiderNameChange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetchangeCount() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FDateTime GetchangeDate() {
		return memory.read<struct FDateTime>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIKartRow
{
public:
	FAIKartRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKartDesc GetKartDesc() {
		return memory.read<struct FKartDesc>(m_addr + 8);
	}
	struct FString GetBodyName() {
		return memory.read<struct FString>(m_addr + 192);
	}
	struct FString GetFrontName() {
		return memory.read<struct FString>(m_addr + 208);
	}
	struct FString GetSideName() {
		return memory.read<struct FString>(m_addr + 224);
	}
	struct FString GetBackName() {
		return memory.read<struct FString>(m_addr + 240);
	}
	struct FString GetWheelName() {
		return memory.read<struct FString>(m_addr + 256);
	}
	struct FString GetHandleName() {
		return memory.read<struct FString>(m_addr + 272);
	}
	struct FString GetPlateName() {
		return memory.read<struct FString>(m_addr + 288);
	}
	struct FString GetBoosterName() {
		return memory.read<struct FString>(m_addr + 304);
	}
	struct FString GetBalloonName() {
		return memory.read<struct FString>(m_addr + 320);
	}
	struct FString GetSkidMarkName() {
		return memory.read<struct FString>(m_addr + 336);
	}

private:
	std::uint64_t m_addr = 0;
};class FInventoryItemNxA
{
public:
	FInventoryItemNxA(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GettransactionId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetstockId() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnActivateBlankPage
{
public:
	FOnActivateBlankPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPageCase GetPageCase() {
		return memory.read<enum class EPageCase>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAICharacterRow
{
public:
	FAICharacterRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetAIName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FString GetCharacterId() {
		return memory.read<struct FString>(m_addr + 24);
	}
	struct FString GetCharacterName() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetCostumeId() {
		return memory.read<struct FString>(m_addr + 56);
	}
	struct FString GetCostumeName() {
		return memory.read<struct FString>(m_addr + 72);
	}
	struct FName GetPresetId() {
		return memory.read<struct FName>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNoti_FMODParam
{
public:
	FAnimNoti_FMODParam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedCustomGameStartButton
{
public:
	FOnClickedCustomGameStartButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAuthServerPendingRequest
{
public:
	FAuthServerPendingRequest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPqPacket GetPqPacket() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPqPacket(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FItemTypeSet
{
public:
	FItemTypeSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<enum class EKtItemType, int32_t> GetValues() {
		return memory.read<struct TMap<enum class EKtItemType, int32_t>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtPiggy
{
public:
	FKtPiggy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKtPiggyDef Getdef() {
		return memory.read<struct FKtPiggyDef>(m_addr + 0);
	}
	struct FDateTime GetopenTime() {
		return memory.read<struct FDateTime>(m_addr + 64);
	}
	int32_t GetopenCount() {
		return memory.read<int32_t>(m_addr + 72);
	}
	struct FDateTime GetrewardTime() {
		return memory.read<struct FDateTime>(m_addr + 80);
	}
	struct FString GetrewardSeed() {
		return memory.read<struct FString>(m_addr + 88);
	}
	struct TArray<struct FKtPiggyOpenReward> GetopenRewards() {
		return memory.read<struct TArray<struct FKtPiggyOpenReward>>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCustomerCenterButtonClicked
{
public:
	FOnCustomerCenterButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNotUsed() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtGearParam
{
public:
	FKtGearParam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetdragFactor() {
		return memory.read<float>(m_addr + 0);
	}
	float GetforwardAccelForce() {
		return memory.read<float>(m_addr + 4);
	}
	float GetbackwardAccelForce() {
		return memory.read<float>(m_addr + 8);
	}
	float GettransAccelFactor() {
		return memory.read<float>(m_addr + 12);
	}
	float GetstartForwardAccelFactorItem() {
		return memory.read<float>(m_addr + 16);
	}
	float GetstartForwardAccelFactorSpeed() {
		return memory.read<float>(m_addr + 20);
	}
	float GetdriftBoostMulAccelFactor() {
		return memory.read<float>(m_addr + 24);
	}
	float GetnormalBoosterTime() {
		return memory.read<float>(m_addr + 28);
	}
	float GetteamBoosterTime() {
		return memory.read<float>(m_addr + 32);
	}
	float GetstartBoosterTime() {
		return memory.read<float>(m_addr + 36);
	}
	float GetstartBoosterTimeItem() {
		return memory.read<float>(m_addr + 40);
	}
	float GetstartBoosterTimeSpeed() {
		return memory.read<float>(m_addr + 44);
	}
	int32_t GetdriftBoostTick() {
		return memory.read<int32_t>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FTMIRecordPawnEvent
{
public:
	FTMIRecordPawnEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbTickState() {
		return memory.read<bool>(m_addr + 0);
	}
	bool Getblock() {
		return memory.read<bool>(m_addr + 1);
	}
	float GetTime() {
		return memory.read<float>(m_addr + 4);
	}
	bool GetbPostRecord() {
		return memory.read<bool>(m_addr + 8);
	}
	float GetDelay() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseMission
{
public:
	FLicenseMission(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetPlayerStartName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	enum class ELicenseMissionType GetmissionType() {
		return memory.read<enum class ELicenseMissionType>(m_addr + 8);
	}
	enum class EItemType GetMissionItem() {
		return memory.read<enum class EItemType>(m_addr + 9);
	}
	struct FString GetTriggerID() {
		return memory.read<struct FString>(m_addr + 16);
	}
	int32_t GetQuestCount() {
		return memory.read<int32_t>(m_addr + 32);
	}
	float GetSucceededExpressionTime() {
		return memory.read<float>(m_addr + 36);
	}
	float GetFailedExpressionTime() {
		return memory.read<float>(m_addr + 40);
	}
	bool GetbCanReset() {
		return memory.read<bool>(m_addr + 44);
	}
	bool GetbCanRetry() {
		return memory.read<bool>(m_addr + 45);
	}
	enum class ELicenseUseSubMissionResultType GeteUseSubMissionResult() {
		return memory.read<enum class ELicenseUseSubMissionResultType>(m_addr + 46);
	}
	struct FText GetSubMissionFailText() {
		return memory.read<struct FText>(m_addr + 48);
	}
	int32_t GetWidgetFlags() {
		return memory.read<int32_t>(m_addr + 72);
	}
	struct TArray<struct TSoftClassPtr<UObject>> GetBeginWidget() {
		return memory.read<struct TArray<struct TSoftClassPtr<UObject>>>(m_addr + 80);
	}
	struct TArray<struct TSoftClassPtr<UObject>> GetSucceededWidget() {
		return memory.read<struct TArray<struct TSoftClassPtr<UObject>>>(m_addr + 96);
	}
	struct TArray<struct TSoftClassPtr<UObject>> GetFailedWidget() {
		return memory.read<struct TArray<struct TSoftClassPtr<UObject>>>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FItemSlotSet
{
public:
	FItemSlotSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<enum class EKtItemSlot, int32_t> GetValues() {
		return memory.read<struct TMap<enum class EKtItemSlot, int32_t>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedChatButton
{
public:
	FOnClickedChatButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKartAdditionalSkillData
{
public:
	FKartAdditionalSkillData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbFastWaterReaction() {
		return memory.read<bool>(m_addr + 0);
	}
	struct TMap<enum class EItemType, struct FGainItemOnAffected> GetGainItemOnAffected() {
		return memory.read<struct TMap<enum class EItemType, struct FGainItemOnAffected>>(m_addr + 8);
	}
	struct TMap<enum class EItemType, struct FSpecialGainItem> GetSpecialGainItem() {
		return memory.read<struct TMap<enum class EItemType, struct FSpecialGainItem>>(m_addr + 88);
	}
	struct TMap<enum class EItemType, struct FGainItemOnUse> GetGainItemOnUse() {
		return memory.read<struct TMap<enum class EItemType, struct FGainItemOnUse>>(m_addr + 168);
	}
	struct TMap<enum class EItemType, struct FDefendItemOnAffect> GetDefendItemOnAffect() {
		return memory.read<struct TMap<enum class EItemType, struct FDefendItemOnAffect>>(m_addr + 248);
	}
	struct TMap<enum class EItemType, struct FGainItemOnDefend> GetGainItemOnDefend() {
		return memory.read<struct TMap<enum class EItemType, struct FGainItemOnDefend>>(m_addr + 328);
	}

private:
	std::uint64_t m_addr = 0;
};class FCameraCalculators
{
public:
	FCameraCalculators(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UCameraCalculator> GetCalculators() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UCameraCalculator>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPrevPageButton
{
public:
	FOnClickedPrevPageButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGainItemOnDefend
{
public:
	FGainItemOnDefend(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EItemType GetChangeItem() {
		return memory.read<enum class EItemType>(m_addr + 0);
	}
	float GetProbability() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FServer_SetBoosterDistance
{
public:
	FServer_SetBoosterDistance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDistance() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtStockCommonDef
{
public:
	FKtStockCommonDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtStockDef> GetstockDefVector() {
		return memory.read<struct TArray<struct FKtStockDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGainItemOnAffected
{
public:
	FGainItemOnAffected(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EItemType GetChangeItem() {
		return memory.read<enum class EItemType>(m_addr + 0);
	}
	float GetProbability() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedEquipAllButton
{
public:
	FOnClickedEquipAllButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDefendItemOnAffect
{
public:
	FDefendItemOnAffect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetProbability() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnLoadComplete
{
public:
	FOnLoadComplete(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSet<struct FSoftObjectPath> GetInAssetPathContainer() {
		return memory.read<struct TSet<struct FSoftObjectPath>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGainItemOnUse
{
public:
	FGainItemOnUse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EItemType GetChangeItem() {
		return memory.read<enum class EItemType>(m_addr + 0);
	}
	float GetProbability() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAchievementClickedSummaryTypeButton
{
public:
	FOnAchievementClickedSummaryTypeButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetHitchFrameTimeThreshold
{
public:
	FGetHitchFrameTimeThreshold(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpecialGainItem
{
public:
	FSpecialGainItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EItemType GetChangeItem() {
		return memory.read<enum class EItemType>(m_addr + 0);
	}
	float GetProbability() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FEditValue
{
public:
	FEditValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FBelongingDataAssetRow
{
public:
	FBelongingDataAssetRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<UDataAsset> GetDataAsset() {
		return memory.read<struct TSoftObjectPtr<UDataAsset>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FBuildCaptureValueInfo
{
public:
	FBuildCaptureValueInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FLicense_OnClickedEnterLicense
{
public:
	FLicense_OnClickedEnterLicense(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCustomGameInfo
{
public:
	FCustomGameInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetbossAccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetgameKey() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct UObject Getsession() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UObject(ptr_addr);
	}
	int32_t GetmaxMemberCount() {
		return memory.read<int32_t>(m_addr + 40);
	}
	struct TArray<struct FCsMember> Getmembers() {
		return memory.read<struct TArray<struct FCsMember>>(m_addr + 48);
	}
	struct FString GetsessionReqId() {
		return memory.read<struct FString>(m_addr + 64);
	}
	int32_t GetgameNum() {
		return memory.read<int32_t>(m_addr + 80);
	}
	int32_t GetjoinId() {
		return memory.read<int32_t>(m_addr + 84);
	}
	struct FString GetxblSessionUri() {
		return memory.read<struct FString>(m_addr + 88);
	}
	struct FString GetpsnSessionUri() {
		return memory.read<struct FString>(m_addr + 104);
	}
	bool GetobserverMode() {
		return memory.read<bool>(m_addr + 120);
	}
	struct TArray<struct FCsObserver> Getobservers() {
		return memory.read<struct TArray<struct FCsObserver>>(m_addr + 128);
	}
	struct FCsGameOption GetgameOption() {
		return memory.read<struct FCsGameOption>(m_addr + 144);
	}
	struct FCsGameData GetgameData() {
		return memory.read<struct FCsGameData>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};class FBuildCaptureCameraInfo
{
public:
	FBuildCaptureCameraInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFocusDistance() {
		return memory.read<float>(m_addr + 0);
	}
	struct TWeakObjectPtr<AActor> GetTrackTargetActor() {
		return memory.read<struct TWeakObjectPtr<AActor>>(m_addr + 4);
	}
	struct TWeakObjectPtr<AActor> GetBindActor() {
		return memory.read<struct TWeakObjectPtr<AActor>>(m_addr + 12);
	}
	struct TWeakObjectPtr<AActor> GetTargetActor() {
		return memory.read<struct TWeakObjectPtr<AActor>>(m_addr + 20);
	}
	float GetFocalLength() {
		return memory.read<float>(m_addr + 28);
	}
	float GetAperture() {
		return memory.read<float>(m_addr + 32);
	}
	struct FTransform GetCameraTransform() {
		return memory.read<struct FTransform>(m_addr + 48);
	}
	float GetMoveInterpSpeed() {
		return memory.read<float>(m_addr + 96);
	}
	float GetRotateInterpSpeed() {
		return memory.read<float>(m_addr + 100);
	}
	float GetDutchInterpSpeed() {
		return memory.read<float>(m_addr + 104);
	}
	float GetMoveSpeed() {
		return memory.read<float>(m_addr + 108);
	}
	float GetRotateSpeed() {
		return memory.read<float>(m_addr + 112);
	}
	int32_t GetAttachIndex() {
		return memory.read<int32_t>(m_addr + 116);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtTrackDef
{
public:
	FKtTrackDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetAlias() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetHackCheckTimeSeconds() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetLapCount() {
		return memory.read<int32_t>(m_addr + 20);
	}
	enum class EKtLevelType GetLevelType() {
		return memory.read<enum class EKtLevelType>(m_addr + 24);
	}
	struct FString GetThemeType() {
		return memory.read<struct FString>(m_addr + 32);
	}
	int32_t GetDifficulty() {
		return memory.read<int32_t>(m_addr + 48);
	}
	enum class EKtLicenseGroupType GetNeedLicense() {
		return memory.read<enum class EKtLicenseGroupType>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUnFocusedAttendanceReward
{
public:
	FOnUnFocusedAttendanceReward(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedAchievementCategoryButton
{
public:
	FOnClickedAchievementCategoryButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseItemTargetActorInfo
{
public:
	FLicenseItemTargetActorInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetSpawnColor() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}
	enum class EItemType GetTargetItem() {
		return memory.read<enum class EItemType>(m_addr + 16);
	}
	struct FText GetUniqueId() {
		return memory.read<struct FText>(m_addr + 24);
	}
	int32_t GetTeamIndex() {
		return memory.read<int32_t>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocusedNormalChallengeSlot
{
public:
	FOnFocusedNormalChallengeSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSlotIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMailIdWidgetPair
{
public:
	FMailIdWidgetPair(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UButtonTemplate GetMailWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UButtonTemplate(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedBackButton
{
public:
	FOnClickedBackButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FFirstPersonFollowCameraData
{
public:
	FFirstPersonFollowCameraData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetCameraOffset() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetCameraTargetOffset() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	float GetDefaultFOV() {
		return memory.read<float>(m_addr + 32);
	}
	float GetOrientInterpTime() {
		return memory.read<float>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedStartOrCancelButton
{
public:
	FOnClickedStartOrCancelButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryDesignDescCompressed
{
public:
	FLiveryDesignDescCompressed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<uint16_t> GetGlobalColorOverrideIndex() {
		return memory.read<struct TArray<uint16_t>>(m_addr + 0);
	}
	struct TArray<char> GetIndexInCollection() {
		return memory.read<struct TArray<char>>(m_addr + 16);
	}
	struct TArray<struct FLiveryWrappingArrayCompressed> GetWrappingArray() {
		return memory.read<struct TArray<struct FLiveryWrappingArrayCompressed>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FSideFollowCameraData
{
public:
	FSideFollowCameraData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMinZoomFactor() {
		return memory.read<float>(m_addr + 8);
	}
	float GetMaxZoomFactor() {
		return memory.read<float>(m_addr + 12);
	}
	float GetZoomFactorMaxVelocity() {
		return memory.read<float>(m_addr + 16);
	}
	float GetZoomFactorFriction() {
		return memory.read<float>(m_addr + 20);
	}
	float GetZoomFactorAcceleration() {
		return memory.read<float>(m_addr + 24);
	}
	float GetMinHeight() {
		return memory.read<float>(m_addr + 28);
	}
	float GetMaxHeight() {
		return memory.read<float>(m_addr + 32);
	}
	float GetHeightMaxVelocity() {
		return memory.read<float>(m_addr + 36);
	}
	float GetHeightFriction() {
		return memory.read<float>(m_addr + 40);
	}
	float GetHeightAcceleration() {
		return memory.read<float>(m_addr + 44);
	}
	float GetCameraLocationInterpTime() {
		return memory.read<float>(m_addr + 48);
	}
	float GetCameraRotationInterpTime() {
		return memory.read<float>(m_addr + 52);
	}
	float GetCameraMinHeightFromGround() {
		return memory.read<float>(m_addr + 56);
	}
	float GetDefaultFOV() {
		return memory.read<float>(m_addr + 60);
	}
	float GetCameraFocusFromTarget() {
		return memory.read<float>(m_addr + 64);
	}
	float GetRoadCheckUpperBound() {
		return memory.read<float>(m_addr + 68);
	}
	float GetRoadCheckLowerBound() {
		return memory.read<float>(m_addr + 72);
	}
	float GetRoadCheckUpperBoundFromKart() {
		return memory.read<float>(m_addr + 76);
	}
	struct TSoftObjectPtr<UCurveFloat> GetDistanceCurve() {
		return memory.read<struct TSoftObjectPtr<UCurveFloat>>(m_addr + 80);
	}
	struct TSoftObjectPtr<UCurveFloat> GetAngleCurve() {
		return memory.read<struct TSoftObjectPtr<UCurveFloat>>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};class FClientLapComplete
{
public:
	FClientLapComplete(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCompletedLapCount() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetCurrentLapTime() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtAchievementTendencySetDef
{
public:
	FKtAchievementTendencySetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetLastUpdateDate() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct TArray<struct FKtAchievementTendencyDef> GettendencySetDefVector() {
		return memory.read<struct TArray<struct FKtAchievementTendencyDef>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioGroup
{
public:
	FScenarioGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCategoryID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetGroupID() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct TMap<struct FString, struct FScenarioActions> GetActionGroupContainer() {
		return memory.read<struct TMap<struct FString, struct FScenarioActions>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FTopFollowCameraData
{
public:
	FTopFollowCameraData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDefaultZDistance() {
		return memory.read<float>(m_addr + 8);
	}
	float GetDefaultFOV() {
		return memory.read<float>(m_addr + 12);
	}
	float GetMinZDistance() {
		return memory.read<float>(m_addr + 16);
	}
	float GetMaxZDistance() {
		return memory.read<float>(m_addr + 20);
	}
	float GetKartForwardDistance() {
		return memory.read<float>(m_addr + 24);
	}
	float GetCameraTeleportThreshold() {
		return memory.read<float>(m_addr + 28);
	}
	float GetLocationInterpTime() {
		return memory.read<float>(m_addr + 32);
	}
	float GetZDistanceMaxVelocity() {
		return memory.read<float>(m_addr + 36);
	}
	float GetZDistanceAcceleration() {
		return memory.read<float>(m_addr + 40);
	}
	float GetZDistanceFriction() {
		return memory.read<float>(m_addr + 44);
	}
	float GetRollMaxVelocity() {
		return memory.read<float>(m_addr + 48);
	}
	float GetRollAcceleration() {
		return memory.read<float>(m_addr + 52);
	}
	float GetRollFriction() {
		return memory.read<float>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickConfirmDialogCancelBtn
{
public:
	FOnClickConfirmDialogCancelBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReport_ConfirmReport
{
public:
	FReport_ConfirmReport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHostGamePlayer
{
public:
	FHostGamePlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKtRacePlayerSummary Getsummary() {
		return memory.read<struct FKtRacePlayerSummary>(m_addr + 0);
	}
	struct FKtItemPreview GetitemPreview() {
		return memory.read<struct FKtItemPreview>(m_addr + 192);
	}
	struct TArray<enum class EKtAccountFlag> GetplayerFlag() {
		return memory.read<struct TArray<enum class EKtAccountFlag>>(m_addr + 360);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedNextTab_Info
{
public:
	FOnClickedNextTab_Info(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCustomDialogSaveButtonPressed
{
public:
	FOnCustomDialogSaveButtonPressed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDriveCameraData
{
public:
	FDriveCameraData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMinLength() {
		return memory.read<float>(m_addr + 8);
	}
	float GetMaxLength() {
		return memory.read<float>(m_addr + 12);
	}
	float GetMinHeight() {
		return memory.read<float>(m_addr + 16);
	}
	float GetMaxHeight() {
		return memory.read<float>(m_addr + 20);
	}
	float GetDistanceCoefficient() {
		return memory.read<float>(m_addr + 24);
	}
	float GetHeightCoefficient() {
		return memory.read<float>(m_addr + 28);
	}
	float GetCameraLagSpeed() {
		return memory.read<float>(m_addr + 32);
	}
	float GetCameraLagMaxTimeStep() {
		return memory.read<float>(m_addr + 36);
	}
	float GetCameraRotationLagSpeed() {
		return memory.read<float>(m_addr + 40);
	}
	float GetMinCameraPitchRadians() {
		return memory.read<float>(m_addr + 44);
	}
	float GetCameraPitchSpeedCoefficient() {
		return memory.read<float>(m_addr + 48);
	}
	float GetCameraLagMaxDistance() {
		return memory.read<float>(m_addr + 52);
	}
	float GetDropFactor() {
		return memory.read<float>(m_addr + 56);
	}
	float GetRefreshRate() {
		return memory.read<float>(m_addr + 60);
	}
	float GetAdditionalZ() {
		return memory.read<float>(m_addr + 64);
	}
	float GetUpDownFactor() {
		return memory.read<float>(m_addr + 68);
	}
	float GetZLagSpeed() {
		return memory.read<float>(m_addr + 72);
	}
	float GetNormalFov() {
		return memory.read<float>(m_addr + 76);
	}
	float GetNormalFovChangeFactor() {
		return memory.read<float>(m_addr + 80);
	}
	float GetBoostFov() {
		return memory.read<float>(m_addr + 84);
	}
	float GetBoostFovChangeFactor() {
		return memory.read<float>(m_addr + 88);
	}
	float GetMomentBoostFov() {
		return memory.read<float>(m_addr + 92);
	}
	float GetMomentBoostFovChangeFactor() {
		return memory.read<float>(m_addr + 96);
	}
	float GetZoneBoostFov() {
		return memory.read<float>(m_addr + 100);
	}
	float GetZoneBoostFovChangeFactor() {
		return memory.read<float>(m_addr + 104);
	}
	float GetRailAndBoostFov() {
		return memory.read<float>(m_addr + 108);
	}
	float GetRailAndBoostFovChangeFactor() {
		return memory.read<float>(m_addr + 112);
	}
	float GetMomentBoostFovSpeedMultiplier() {
		return memory.read<float>(m_addr + 116);
	}
	float GetArmSpeedBackwardCoefficient() {
		return memory.read<float>(m_addr + 120);
	}
	float GetArmSpeedForwardCoefficient() {
		return memory.read<float>(m_addr + 124);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_GfsCancelFriendRequest
{
public:
	FDev_GfsCancelFriendRequest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetaccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDriftMissionStruct
{
public:
	FDriftMissionStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EDriftMissionType GetmissionType() {
		return memory.read<enum class EDriftMissionType>(m_addr + 0);
	}
	float GetKeepNSeconds() {
		return memory.read<float>(m_addr + 4);
	}
	float GetReuseInNSeconds() {
		return memory.read<float>(m_addr + 8);
	}
	float GetInNSeconds() {
		return memory.read<float>(m_addr + 12);
	}
	int32_t GetUseNTimes() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateLucci
{
public:
	FOnUpdateLucci(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getlucci() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCameraModeData
{
public:
	FCameraModeData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECameraMode GetCameraMode() {
		return memory.read<enum class ECameraMode>(m_addr + 8);
	}
	struct FText GetLocModeName() {
		return memory.read<struct FText>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseStaticActorInfo
{
public:
	FLicenseStaticActorInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDistance() {
		return memory.read<float>(m_addr + 0);
	}
	struct FVector GetOffset() {
		return memory.read<struct FVector>(m_addr + 4);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 16);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct FVector GetDirection() {
		return memory.read<struct FVector>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FKdCategoryItemSet
{
public:
	FKdCategoryItemSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<enum class EItemCategoryType, int32_t> GetItemIDMap() {
		return memory.read<struct TMap<enum class EItemCategoryType, int32_t>>(m_addr + 0);
	}
	struct FString GetLiveryUniqueId() {
		return memory.read<struct FString>(m_addr + 80);
	}
	int32_t GetLiveryRevision() {
		return memory.read<int32_t>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCloseCouponDialog
{
public:
	FOnCloseCouponDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticastCasting
{
public:
	FMulticastCasting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UItemComponent GetUser() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UItemComponent(ptr_addr);
	}
	struct UItemComponent GetInVictim() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UItemComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedShadowButtonOff
{
public:
	FOnClickedShadowButtonOff(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCPFogData
{
public:
	FCPFogData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<AExponentialHeightFog> GetWorldFog() {
		return memory.read<struct TSoftObjectPtr<AExponentialHeightFog>>(m_addr + 0);
	}
	float GetFogMaxOpacity() {
		return memory.read<float>(m_addr + 40);
	}
	struct FLinearColor GetFogColor() {
		return memory.read<struct FLinearColor>(m_addr + 44);
	}
	float GetFogHeightFalloff() {
		return memory.read<float>(m_addr + 60);
	}
	float GetFogDensity() {
		return memory.read<float>(m_addr + 64);
	}
	float GetVolumetricFogScatteringDistribution() {
		return memory.read<float>(m_addr + 68);
	}
	float GetStartDistance() {
		return memory.read<float>(m_addr + 72);
	}
	float GetVolumetricFogDistance() {
		return memory.read<float>(m_addr + 76);
	}
	struct FColor GetVolumetricFogAlbedo() {
		return memory.read<struct FColor>(m_addr + 80);
	}
	struct FLinearColor GetVolumetricFogEmissive() {
		return memory.read<struct FLinearColor>(m_addr + 84);
	}
	float GetVolumetricFogExtinctionScale() {
		return memory.read<float>(m_addr + 100);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_PurchaseTier
{
public:
	FDev_PurchaseTier(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GettierCount() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtQuestSetDataComplete
{
public:
	FKtQuestSetDataComplete(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FString> GetquestIdCompleteVector() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FVerifyClient
{
public:
	FVerifyClient(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FFailed
{
public:
	FFailed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EHitState GetHitState() {
		return memory.read<enum class EHitState>(m_addr + 0);
	}
	struct UTexture2D GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UTexture2D(ptr_addr);
	}
	struct FText GetName() {
		return memory.read<struct FText>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeLanguage_OpenDialog
{
public:
	FChangeLanguage_OpenDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FColorTable
{
public:
	FColorTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateColor GetColorPreset() {
		return memory.read<struct FSlateColor>(m_addr + 8);
	}
	struct FSlateBrush GetBrushPreset() {
		return memory.read<struct FSlateBrush>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayKartAnimationByMontage
{
public:
	FPlayKartAnimationByMontage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetInActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct UAnimMontage GetMontageToPlay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UAnimMontage(ptr_addr);
	}
	float GetInPlayRate() {
		return memory.read<float>(m_addr + 16);
	}
	enum class EMontagePlayReturnType GetReturnValueType() {
		return memory.read<enum class EMontagePlayReturnType>(m_addr + 20);
	}
	float GetInTimeToStartMontageAt() {
		return memory.read<float>(m_addr + 24);
	}
	bool GetbStopAllMontages() {
		return memory.read<bool>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtModeSelectData
{
public:
	FKtModeSelectData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<char> GettrackDifficulty() {
		return memory.read<struct TArray<char>>(m_addr + 0);
	}
	struct TArray<char> GetMode() {
		return memory.read<struct TArray<char>>(m_addr + 16);
	}
	int32_t GetaiOption() {
		return memory.read<int32_t>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FTMIRaceEventData
{
public:
	FTMIRaceEventData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWallContact() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetKartContact() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetReset() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t Getovertake() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetSmallBoost() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t Getdraft() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetDrift() {
		return memory.read<int32_t>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerSetRaceGameResult
{
public:
	FServerSetRaceGameResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRaceGameResult GetInRaceGameResult() {
		return memory.read<struct FRaceGameResult>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKdMotionItemSetDef
{
public:
	FKdMotionItemSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, enum class ECharacterMontage> GetDefMap() {
		return memory.read<struct TMap<struct FString, enum class ECharacterMontage>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetShowOtherRiderNames
{
public:
	FSetShowOtherRiderNames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnLastUseItem
{
public:
	FOnLastUseItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetInPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}
	enum class EItemType GetInType() {
		return memory.read<enum class EItemType>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtToyPaymentInfo
{
public:
	FKtToyPaymentInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetproductId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetstampToken() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedCancelStandbyButton
{
public:
	FOnClickedCancelStandbyButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnComboBoxSelectionChanged_Plate
{
public:
	FOnComboBoxSelectionChanged_Plate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetInSelectedItemKey() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FPhysicSpec
{
public:
	FPhysicSpec(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMass() {
		return memory.read<float>(m_addr + 0);
	}
	float GetWidth() {
		return memory.read<float>(m_addr + 4);
	}
	float GetLength() {
		return memory.read<float>(m_addr + 8);
	}
	float GetMaxTravel() {
		return memory.read<float>(m_addr + 12);
	}
	float GetForwardAccel() {
		return memory.read<float>(m_addr + 16);
	}
	float GetdriftEscapeForce() {
		return memory.read<float>(m_addr + 20);
	}
	float GetBackwardAccel() {
		return memory.read<float>(m_addr + 24);
	}
	float GetgripBrake() {
		return memory.read<float>(m_addr + 28);
	}
	float GetslipBrake() {
		return memory.read<float>(m_addr + 32);
	}
	bool GetbUseTransformBooster() {
		return memory.read<bool>(m_addr + 36);
	}
	float GettransAccelFactor() {
		return memory.read<float>(m_addr + 40);
	}
	float GetboostAccelFactor() {
		return memory.read<float>(m_addr + 44);
	}
	float GetNormalBoostTime() {
		return memory.read<float>(m_addr + 48);
	}
	float GetItemBoostTime() {
		return memory.read<float>(m_addr + 52);
	}
	float GetTeamBoostTime() {
		return memory.read<float>(m_addr + 56);
	}
	float GetAnimalBoostTime() {
		return memory.read<float>(m_addr + 60);
	}
	float GetSuperBoostTime() {
		return memory.read<float>(m_addr + 64);
	}
	float GetStartBoostTimeItem() {
		return memory.read<float>(m_addr + 68);
	}
	float GetStartBoostTimeSpeed() {
		return memory.read<float>(m_addr + 72);
	}
	float GetStartForwardAccelItem() {
		return memory.read<float>(m_addr + 76);
	}
	float GetStartForwardAccelSpeed() {
		return memory.read<float>(m_addr + 80);
	}
	float GetmaxSteerDeg() {
		return memory.read<float>(m_addr + 84);
	}
	float GetsteerConstraint() {
		return memory.read<float>(m_addr + 88);
	}
	float GetfrontGripFactor() {
		return memory.read<float>(m_addr + 92);
	}
	float GetrearGripFactor() {
		return memory.read<float>(m_addr + 96);
	}
	float GetdriftTrigFactor() {
		return memory.read<float>(m_addr + 100);
	}
	float GetdriftTrigTime() {
		return memory.read<float>(m_addr + 104);
	}
	float GetdriftSlipFactor() {
		return memory.read<float>(m_addr + 108);
	}
	float GetdriftLeanFactor() {
		return memory.read<float>(m_addr + 112);
	}
	float GetsteerLeanFactor() {
		return memory.read<float>(m_addr + 116);
	}
	float GetcornerDrawFactor() {
		return memory.read<float>(m_addr + 120);
	}
	float GetdriftMaxGauge() {
		return memory.read<float>(m_addr + 124);
	}
	float GetdriftGaugePreservePercent() {
		return memory.read<float>(m_addr + 128);
	}
	float GetairFriction() {
		return memory.read<float>(m_addr + 132);
	}
	float GetdragFactor() {
		return memory.read<float>(m_addr + 136);
	}
	float GetantiCollideBalance() {
		return memory.read<float>(m_addr + 140);
	}
	float GetdraftMulAccelFactor() {
		return memory.read<float>(m_addr + 144);
	}
	uint32_t GetdraftTick() {
		return memory.read<uint32_t>(m_addr + 148);
	}
	float GetdriftBoostMulAccelFactor() {
		return memory.read<float>(m_addr + 152);
	}
	uint32_t GetdriftBoostTick() {
		return memory.read<uint32_t>(m_addr + 156);
	}
	float GetchargeBoostBySpeed() {
		return memory.read<float>(m_addr + 160);
	}
	bool GetbUseExtendedAfterBoost() {
		return memory.read<bool>(m_addr + 164);
	}
	float GetboostAccelFactorOnlyItem() {
		return memory.read<float>(m_addr + 168);
	}
	float GetevadeForce() {
		return memory.read<float>(m_addr + 172);
	}
	uint32_t GetspeedSlotCapacity() {
		return memory.read<uint32_t>(m_addr + 176);
	}
	uint32_t GetitemSlotCapacity() {
		return memory.read<uint32_t>(m_addr + 180);
	}
	uint32_t GetspecialSlotCapacity() {
		return memory.read<uint32_t>(m_addr + 184);
	}
	bool GetbMotorCycleType() {
		return memory.read<bool>(m_addr + 188);
	}
	float GetautoChargeLowSpeed() {
		return memory.read<float>(m_addr + 192);
	}
	bool GetbTransformAutoCharge() {
		return memory.read<bool>(m_addr + 196);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtRaceCount
{
public:
	FKtRaceCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetitemCount() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetspeedCount() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FDateTime GetupdateTime() {
		return memory.read<struct FDateTime>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtDefaultPartsSetDef
{
public:
	FKtDefaultPartsSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FKtDefaultPartsDef> GetdefaultPartsDefMap() {
		return memory.read<struct TMap<struct FString, struct FKtDefaultPartsDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCsPlayerScoreChange
{
public:
	FCsPlayerScoreChange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCsPlayerScore Getprev() {
		return memory.read<struct FCsPlayerScore>(m_addr + 0);
	}
	struct FCsPlayerScore GetNext() {
		return memory.read<struct FCsPlayerScore>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocusedEventChallengeSlot
{
public:
	FOnFocusedEventChallengeSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSlotIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtPlayLucciInfo
{
public:
	FKtPlayLucciInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getacquired() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t Getlimit() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FDateTime Getdeadline() {
		return memory.read<struct FDateTime>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtMissionTriggerConditionShadowDef
{
public:
	FKtMissionTriggerConditionShadowDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFilename() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class EKtShadowCondition GetshadowCondition() {
		return memory.read<enum class EKtShadowCondition>(m_addr + 16);
	}
	int32_t GetStartTime() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetdistanceOption() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GettimeOption() {
		return memory.read<int32_t>(m_addr + 28);
	}
	struct FString GetshadowName() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct TArray<struct FString> GetshadowItemVector() {
		return memory.read<struct TArray<struct FString>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnHitchDetected
{
public:
	FOnHitchDetected(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKdFrameHitchType GetHitchType() {
		return memory.read<enum class EKdFrameHitchType>(m_addr + 0);
	}
	float GetHitchDurationInSeconds() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedGameReplayButton
{
public:
	FOnClickedGameReplayButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtUserInfoView
{
public:
	FKtUserInfoView(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetriderName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class EKtAccountPlatform Getplatform() {
		return memory.read<enum class EKtAccountPlatform>(m_addr + 16);
	}
	struct FString GetemblemItemIdOn() {
		return memory.read<struct FString>(m_addr + 24);
	}
	struct FKtItemPreset GetitemPresetOn() {
		return memory.read<struct FKtItemPreset>(m_addr + 40);
	}
	int32_t GetExp() {
		return memory.read<int32_t>(m_addr + 200);
	}
	struct TArray<struct FString> GetTag() {
		return memory.read<struct TArray<struct FString>>(m_addr + 208);
	}
	struct FKtLicenseData GetlicenseData() {
		return memory.read<struct FKtLicenseData>(m_addr + 224);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_AODecalMaxDist
{
public:
	FDev_AODecalMaxDist(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtLicenseData
{
public:
	FKtLicenseData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FKtLicenseGroupData> GetlicenseGroupDataMap() {
		return memory.read<struct TMap<struct FString, struct FKtLicenseGroupData>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtLicenseGroupData
{
public:
	FKtLicenseGroupData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FKtLicenseMissionData> GetlicenseMissionDataMap() {
		return memory.read<struct TMap<struct FString, struct FKtLicenseMissionData>>(m_addr + 0);
	}
	struct FNullableDateTime GetbronzeAcquisitionDate() {
		return memory.read<struct FNullableDateTime>(m_addr + 80);
	}
	struct FNullableDateTime GetsilverAcquisitionDate() {
		return memory.read<struct FNullableDateTime>(m_addr + 96);
	}
	struct FNullableDateTime GetgoldAcquisitionDate() {
		return memory.read<struct FNullableDateTime>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtMissionTriggerConditionItemPresetDef
{
public:
	FKtMissionTriggerConditionItemPresetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetitemSlotCheckVector() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}
	enum class EKtItemGrade GetitemGrade() {
		return memory.read<enum class EKtItemGrade>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayerAudioVolumeSettings
{
public:
	FPlayerAudioVolumeSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMultiplierWithbMuted GetMaster() {
		return memory.read<struct FMultiplierWithbMuted>(m_addr + 0);
	}
	struct FMultiplierWithbMuted GetBGM() {
		return memory.read<struct FMultiplierWithbMuted>(m_addr + 8);
	}
	struct FMultiplierWithbMuted GetEffectAll() {
		return memory.read<struct FMultiplierWithbMuted>(m_addr + 16);
	}
	struct FMultiplierWithbMuted GetEffectKart() {
		return memory.read<struct FMultiplierWithbMuted>(m_addr + 24);
	}
	struct FMultiplierWithbMuted GetEffectCharacter() {
		return memory.read<struct FMultiplierWithbMuted>(m_addr + 32);
	}
	struct FMultiplierWithbMuted GetEffectAmbient() {
		return memory.read<struct FMultiplierWithbMuted>(m_addr + 40);
	}
	struct FMultiplierWithbMuted GetEffectInGame() {
		return memory.read<struct FMultiplierWithbMuted>(m_addr + 48);
	}
	struct FMultiplierWithbMuted GetEffectUI() {
		return memory.read<struct FMultiplierWithbMuted>(m_addr + 56);
	}
	bool GetVoiceChatEnable() {
		return memory.read<bool>(m_addr + 64);
	}
	int32_t GetVoiceChatOption() {
		return memory.read<int32_t>(m_addr + 68);
	}
	float GetVoiceChatVolume() {
		return memory.read<float>(m_addr + 72);
	}
	float GetMicVolume() {
		return memory.read<float>(m_addr + 76);
	}
	bool GetTTSEnable() {
		return memory.read<bool>(m_addr + 80);
	}
	bool GetSTTEnable() {
		return memory.read<bool>(m_addr + 81);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtLicenseMissionData
{
public:
	FKtLicenseMissionData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetstarCount() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<struct FDateTime> GetrewardDateVector() {
		return memory.read<struct TArray<struct FDateTime>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtRecentActivity
{
public:
	FKtRecentActivity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtRecentActivityType GetType() {
		return memory.read<enum class EKtRecentActivityType>(m_addr + 0);
	}
	struct FString GetContent() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FDateTime GetupdateDate() {
		return memory.read<struct FDateTime>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FCsPlayerScore
{
public:
	FCsPlayerScore(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetScore() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FItemGuideDetailPopup_OnItemSelectionChanged
{
public:
	FItemGuideDetailPopup_OnItemSelectionChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetSelectedItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedRiderNameCheckBtn
{
public:
	FOnClickedRiderNameCheckBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtRecommandFriend
{
public:
	FKtRecommandFriend(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetaccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetriderName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	enum class EKtAccountPlatform Getplatform() {
		return memory.read<enum class EKtAccountPlatform>(m_addr + 32);
	}
	struct FString GetemblemId() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetgameId() {
		return memory.read<struct FString>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticastActivate
{
public:
	FMulticastActivate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UItemComponent GetUser() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UItemComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseBossBananaPattern
{
public:
	FLicenseBossBananaPattern(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FLicenseBossBananaPatternInst> GetPatternInstList() {
		return memory.read<struct TArray<struct FLicenseBossBananaPatternInst>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryWrappingDesc_Ver3
{
public:
	FLiveryWrappingDesc_Ver3(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELiveryWrappingCategory GetCategory() {
		return memory.read<enum class ELiveryWrappingCategory>(m_addr + 0);
	}
	int32_t GetIndexInCategory() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FLiveryWrappingTransform GetTransform() {
		return memory.read<struct FLiveryWrappingTransform>(m_addr + 8);
	}
	struct TArray<struct FLiveryWrappingGroup_Ver3> GetGroupInfos() {
		return memory.read<struct TArray<struct FLiveryWrappingGroup_Ver3>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtTimeAttackRecord
{
public:
	FKtTimeAttackRecord(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GettrackId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetlapTime() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t Getmileage() {
		return memory.read<int32_t>(m_addr + 20);
	}
	struct FString GetKartID() {
		return memory.read<struct FString>(m_addr + 24);
	}
	int32_t GetkartLevel() {
		return memory.read<int32_t>(m_addr + 40);
	}
	enum class EKtItemGrade GetKartGrade() {
		return memory.read<enum class EKtItemGrade>(m_addr + 44);
	}
	int32_t GetbeginnerFlag() {
		return memory.read<int32_t>(m_addr + 48);
	}
	struct FString GetreplayPath() {
		return memory.read<struct FString>(m_addr + 56);
	}
	struct FDateTime GetupdateDate() {
		return memory.read<struct FDateTime>(m_addr + 72);
	}
	int32_t GetVersion() {
		return memory.read<int32_t>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSpinBoxValueChanged_CameraDutchInterpSpeed
{
public:
	FOnSpinBoxValueChanged_CameraDutchInterpSpeed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPlayerKartSpeed
{
public:
	FGetPlayerKartSpeed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPlayerIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtAttendanceEventInfo
{
public:
	FKtAttendanceEventInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetEventID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FDateTime GetlastInvokeDate() {
		return memory.read<struct FDateTime>(m_addr + 16);
	}
	int32_t GetinvokedCount() {
		return memory.read<int32_t>(m_addr + 24);
	}
	struct TArray<int32_t> GetreceivedNumbers() {
		return memory.read<struct TArray<int32_t>>(m_addr + 32);
	}
	struct FDateTime GetlastConfirmDate() {
		return memory.read<struct FDateTime>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedReportButton
{
public:
	FOnClickedReportButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtMissionTriggerDef
{
public:
	FKtMissionTriggerDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtMissionTriggerType GettriggerType() {
		return memory.read<enum class EKtMissionTriggerType>(m_addr + 0);
	}
	struct FKtMissionTriggerConditionDef GettriggerConditionDef() {
		return memory.read<struct FKtMissionTriggerConditionDef>(m_addr + 8);
	}
	struct FKtMissionTriggerConditionRaceResultDef GettriggerConditionRaceResultDef() {
		return memory.read<struct FKtMissionTriggerConditionRaceResultDef>(m_addr + 40);
	}
	struct FKtMissionTriggerConditionItemPresetDef GettriggerConditionItemPresetDef() {
		return memory.read<struct FKtMissionTriggerConditionItemPresetDef>(m_addr + 400);
	}
	struct FKtMissionTriggerConditionContentDef GettriggerConditionContentDef() {
		return memory.read<struct FKtMissionTriggerConditionContentDef>(m_addr + 424);
	}
	struct FKtMissionTriggerConditionOnceCheckDef GettriggerConditionOnceCheckDef() {
		return memory.read<struct FKtMissionTriggerConditionOnceCheckDef>(m_addr + 464);
	}
	struct FKtMissionTriggerConditionShadowDef GettriggerConditionShadowDef() {
		return memory.read<struct FKtMissionTriggerConditionShadowDef>(m_addr + 480);
	}

private:
	std::uint64_t m_addr = 0;
};class FOwnKartUpgradeInfo
{
public:
	FOwnKartUpgradeInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtItemGrade Getgrade() {
		return memory.read<enum class EKtItemGrade>(m_addr + 0);
	}
	struct FKtKartGearInfo GetGearInfo() {
		return memory.read<struct FKtKartGearInfo>(m_addr + 8);
	}
	int32_t GetkartExp() {
		return memory.read<int32_t>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtKartGearInfo
{
public:
	FKtKartGearInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, int32_t> GetgearSettings() {
		return memory.read<struct TMap<struct FString, int32_t>>(m_addr + 0);
	}
	int32_t GettotalGearCount() {
		return memory.read<int32_t>(m_addr + 80);
	}
	int32_t GetremainGearCount() {
		return memory.read<int32_t>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};class FCubeDataDebugSet
{
public:
	FCubeDataDebugSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FOnClickedGamePlayButton
{
public:
	FOnClickedGamePlayButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdate_SeasonTimeText
{
public:
	FOnUpdate_SeasonTimeText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetTimeText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtKartLevelDef
{
public:
	FKtKartLevelDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLevel() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetaccumExp() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetneedExp() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedItemOnlyView
{
public:
	FOnClickedItemOnlyView(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryStickerCache
{
public:
	FLiveryStickerCache(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveryStickerDesc GetLiveryStickerDesc() {
		return memory.read<struct FLiveryStickerDesc>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocusedAccountUnlinkBtn
{
public:
	FOnFocusedAccountUnlinkBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtKartSkillInfo
{
public:
	FKtKartSkillInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetskillPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<struct FString> GetequipSkillNodeIds() {
		return memory.read<struct TArray<struct FString>>(m_addr + 8);
	}
	struct FString GetexpItemId() {
		return memory.read<struct FString>(m_addr + 24);
	}
	int32_t GetexpItemCount() {
		return memory.read<int32_t>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtPiggyDefFile
{
public:
	FKtPiggyDefFile(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtPiggyDefItem> GetItems() {
		return memory.read<struct TArray<struct FKtPiggyDefItem>>(m_addr + 0);
	}
	struct TArray<struct FKtPiggyEvent> Getevents() {
		return memory.read<struct TArray<struct FKtPiggyEvent>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSizeWidthCommitted
{
public:
	FOnSizeWidthCommitted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	enum class ETextCommit GetInCommitMethod() {
		return memory.read<enum class ETextCommit>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FUseItem
{
public:
	FUseItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}
	enum class EItemType GetItemType() {
		return memory.read<enum class EItemType>(m_addr + 8);
	}
	struct TArray<struct FString> GetTargetPawn() {
		return memory.read<struct TArray<struct FString>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FManagedTick
{
public:
	FManagedTick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetinDeltaTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioKeyStateData
{
public:
	FScenarioKeyStateData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FKtPiggyEvent
{
public:
	FKtPiggyEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetType() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FDateTime GetStartTime() {
		return memory.read<struct FDateTime>(m_addr + 16);
	}
	struct FDateTime GetEndTime() {
		return memory.read<struct FDateTime>(m_addr + 24);
	}
	int32_t Getprob() {
		return memory.read<int32_t>(m_addr + 32);
	}
	struct FKtPiggyOpenReward GetopenReward() {
		return memory.read<struct FKtPiggyOpenReward>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedReceiveAllButton
{
public:
	FOnClickedReceiveAllButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FResetNumber
{
public:
	FResetNumber(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInitNum() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientGrandPrixDef
{
public:
	FKtClientGrandPrixDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<UTexture2D> GetimageEmblem() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 328);
	}
	struct TSoftObjectPtr<UTexture2D> GetimageButton() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 368);
	}
	struct FText GetTitle() {
		return memory.read<struct FText>(m_addr + 408);
	}
	struct FText GetDescription() {
		return memory.read<struct FText>(m_addr + 432);
	}
	struct FText Getqualification() {
		return memory.read<struct FText>(m_addr + 456);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtPiggyOpenReward
{
public:
	FKtPiggyOpenReward(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetcoinCount() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetstockId() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSingleModeLoadingTypeDef
{
public:
	FSingleModeLoadingTypeDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FSingleModeLoadingImageDef> GetLoadingImageDefArray() {
		return memory.read<struct TArray<struct FSingleModeLoadingImageDef>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSingleModeLoadingDef
{
public:
	FSingleModeLoadingDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FSingleModeLoadingTypeDef> GetLoadingTypeToDefMap() {
		return memory.read<struct TMap<struct FString, struct FSingleModeLoadingTypeDef>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_SetWASDInputs
{
public:
	FDev_SetWASDInputs(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbWASD() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtRiderInfo
{
public:
	FKtRiderInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetaccountId() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetriderName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	enum class EKtRiderState GetriderState() {
		return memory.read<enum class EKtRiderState>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtPiggyDefItem
{
public:
	FKtPiggyDefItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKtPiggyDef Getdef() {
		return memory.read<struct FKtPiggyDef>(m_addr + 0);
	}
	struct TArray<struct FKtPiggyOpenRestriction> GetopenRestrictions() {
		return memory.read<struct TArray<struct FKtPiggyOpenRestriction>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtPiggyOpenRestriction
{
public:
	FKtPiggyOpenRestriction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDateTime GetStartTime() {
		return memory.read<struct FDateTime>(m_addr + 0);
	}
	struct FDateTime GetEndTime() {
		return memory.read<struct FDateTime>(m_addr + 8);
	}
	int32_t GetopenCount() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUncheck
{
public:
	FOnUncheck(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFinalSelectButtonClicked
{
public:
	FOnFinalSelectButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FWidget_UploadPopup_OnCloseClick
{
public:
	FWidget_UploadPopup_OnCloseClick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetBtnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetKcoin
{
public:
	FSetKcoin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetKcoinCount() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKdTextRow
{
public:
	FKdTextRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInText() {
		return memory.read<struct FText>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtPiggyDef
{
public:
	FKtPiggyDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetType() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetpointItemId() {
		return memory.read<struct FString>(m_addr + 16);
	}
	int32_t GetpointMax() {
		return memory.read<int32_t>(m_addr + 32);
	}
	struct FKtPiggyOpenReward GetdefaultReward() {
		return memory.read<struct FKtPiggyOpenReward>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticast_SetValue
{
public:
	FMulticast_SetValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetValue() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPrGetVDTEventReward
{
public:
	FOnPrGetVDTEventReward(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPrResult GetResult() {
		return memory.read<struct FPrResult>(m_addr + 0);
	}
	struct UPrPacket GetReceivedPacket() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UPrPacket(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtPiggyState
{
public:
	FKtPiggyState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetopenCount() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetmaxOpenCount() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct FDateTime GetnextOpenTime() {
		return memory.read<struct FDateTime>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FVDTSubEvent
{
public:
	FVDTSubEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtADTEventType GetType() {
		return memory.read<enum class EKtADTEventType>(m_addr + 0);
	}
	int32_t Getdt() {
		return memory.read<int32_t>(m_addr + 4);
	}
	enum class EKtADTEventRewardType GetrewardType() {
		return memory.read<enum class EKtADTEventRewardType>(m_addr + 8);
	}
	struct TArray<struct FString> GetrewardStockIds() {
		return memory.read<struct TArray<struct FString>>(m_addr + 16);
	}
	struct FString GetMessage() {
		return memory.read<struct FString>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtDataStorePayload
{
public:
	FKtDataStorePayload(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetURL() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString Getverb() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct TMap<struct FString, struct FString> Getheaders() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 32);
	}
	struct FString GetBody() {
		return memory.read<struct FString>(m_addr + 112);
	}
	struct TArray<struct FString> GetvalueIndex() {
		return memory.read<struct TArray<struct FString>>(m_addr + 128);
	}
	struct FString GetMetaData() {
		return memory.read<struct FString>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedConfirm_LiveryRestriction
{
public:
	FOnClickedConfirm_LiveryRestriction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtLootBoxInfo
{
public:
	FKtLootBoxInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKtItem GetlootBoxItem() {
		return memory.read<struct FKtItem>(m_addr + 0);
	}
	struct FNullableDateTime GetuseStartDate() {
		return memory.read<struct FNullableDateTime>(m_addr + 32);
	}
	struct FNullableDateTime GetuseEndDate() {
		return memory.read<struct FNullableDateTime>(m_addr + 48);
	}
	struct TArray<struct FKtStockItem> GetexpectedItemVector() {
		return memory.read<struct TArray<struct FKtStockItem>>(m_addr + 64);
	}
	struct TArray<struct FKtStockItem> GetetcItemVector() {
		return memory.read<struct TArray<struct FKtStockItem>>(m_addr + 80);
	}
	bool GetbEmptyCandidates() {
		return memory.read<bool>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtSeasonSetDef
{
public:
	FKtSeasonSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FKtSeasonDef> GetseasonDefMap() {
		return memory.read<struct TMap<struct FString, struct FKtSeasonDef>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticastFireTo
{
public:
	FMulticastFireTo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UItemComponent GetUser() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UItemComponent(ptr_addr);
	}
	struct UItemComponent GetTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UItemComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FWidget_TextInputPopup_OnTextCommitted
{
public:
	FWidget_TextInputPopup_OnTextCommitted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetCommitText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	enum class ETextCommit GetCommitType() {
		return memory.read<enum class ETextCommit>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtLootboxStockDef
{
public:
	FKtLootboxStockDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCategoryName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TArray<struct FKtSubList> GetsubListVector() {
		return memory.read<struct TArray<struct FKtSubList>>(m_addr + 16);
	}
	struct TArray<struct FKtLootboxStock> GetstockDefVector() {
		return memory.read<struct TArray<struct FKtLootboxStock>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientQuestWeeklySetDef
{
public:
	FKtClientQuestWeeklySetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FKtClientQuestWeeklySeasonDef> GetquestWeeklySeasonDefMap() {
		return memory.read<struct TMap<struct FString, struct FKtClientQuestWeeklySeasonDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtLootboxSet
{
public:
	FKtLootboxSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetisDefaultSet() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FNullableDateTime GetsetStartDate() {
		return memory.read<struct FNullableDateTime>(m_addr + 8);
	}
	struct FNullableDateTime GetsetEndDate() {
		return memory.read<struct FNullableDateTime>(m_addr + 24);
	}
	struct TArray<struct FKtLootboxComposition> GetcompositionVector() {
		return memory.read<struct TArray<struct FKtLootboxComposition>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocusedAttendanceReward
{
public:
	FOnFocusedAttendanceReward(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndext() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtLootboxComposition
{
public:
	FKtLootboxComposition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtStockItem> GetcompositionItemVector() {
		return memory.read<struct TArray<struct FKtStockItem>>(m_addr + 0);
	}
	int32_t Getweight() {
		return memory.read<int32_t>(m_addr + 16);
	}
	bool GetexposeOnExpectedList() {
		return memory.read<bool>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMediaOpenFailed
{
public:
	FOnMediaOpenFailed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetOpenedUrl() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtBonusItem
{
public:
	FKtBonusItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtStockItem> GetbonusItemVector() {
		return memory.read<struct TArray<struct FKtStockItem>>(m_addr + 0);
	}
	int32_t GetperMille() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtGrandPrixDef
{
public:
	FKtGrandPrixDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	enum class ERaceMode GetraceMode() {
		return memory.read<enum class ERaceMode>(m_addr + 32);
	}
	struct FString GetpoolId() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct TArray<struct FString> GettrackList() {
		return memory.read<struct TArray<struct FString>>(m_addr + 56);
	}
	struct TArray<struct FString> GetallowCountries() {
		return memory.read<struct TArray<struct FString>>(m_addr + 72);
	}
	struct TArray<enum class EKtAccountPlatform> GetallowPlatforms() {
		return memory.read<struct TArray<enum class EKtAccountPlatform>>(m_addr + 88);
	}
	struct TArray<struct FString> GetallowItems() {
		return memory.read<struct TArray<struct FString>>(m_addr + 104);
	}
	struct TArray<struct FString> GetdenyItems() {
		return memory.read<struct TArray<struct FString>>(m_addr + 120);
	}
	struct FString GetrequiredLicense() {
		return memory.read<struct FString>(m_addr + 136);
	}
	int32_t GetlimitLevel() {
		return memory.read<int32_t>(m_addr + 152);
	}
	int32_t GetlimitTier() {
		return memory.read<int32_t>(m_addr + 156);
	}
	struct FString GeteligibilityMsg() {
		return memory.read<struct FString>(m_addr + 160);
	}
	struct FString GetrewardMsg() {
		return memory.read<struct FString>(m_addr + 176);
	}
	struct FKtGrandPrixSeason GetseasonInfo() {
		return memory.read<struct FKtGrandPrixSeason>(m_addr + 192);
	}
	struct FString GetstartDate() {
		return memory.read<struct FString>(m_addr + 216);
	}
	struct FString GetendDate() {
		return memory.read<struct FString>(m_addr + 232);
	}
	struct TArray<struct FString> GetallowTime() {
		return memory.read<struct TArray<struct FString>>(m_addr + 248);
	}
	struct FString GetrewardPeriod() {
		return memory.read<struct FString>(m_addr + 264);
	}
	struct FKtGrandPrixRewards Getrewards() {
		return memory.read<struct FKtGrandPrixRewards>(m_addr + 280);
	}

private:
	std::uint64_t m_addr = 0;
};class FResetPartyInviteButton
{
public:
	FResetPartyInviteButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInAccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientGrandPrixSubTierDef
{
public:
	FKtClientGrandPrixSubTierDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetName() {
		return memory.read<struct FText>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticastOnHit
{
public:
	FMulticastOnHit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UItemComponent GetInVictim() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UItemComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtTutorialRecord
{
public:
	FKtTutorialRecord(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetscenarioID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	float GetclearMillisecond() {
		return memory.read<float>(m_addr + 16);
	}
	int32_t GetboosterCounter() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetDriftCount() {
		return memory.read<int32_t>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedShowSummaryButton
{
public:
	FOnClickedShowSummaryButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtTutorialData
{
public:
	FKtTutorialData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbCompleted() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbAssistDisabled() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtLicenseTMIData
{
public:
	FKtLicenseTMIData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetretryCount() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetScore() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetclearLapTime() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetuseDriftCount() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetdriftHitCount() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetuseSmallBoostCount() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetuseBoostCount() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetgetBoostCount() {
		return memory.read<int32_t>(m_addr + 28);
	}
	struct TArray<struct FKtLicenseTMIMissionData> GetlicenseMissionData() {
		return memory.read<struct TArray<struct FKtLicenseTMIMissionData>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FCsObserver
{
public:
	FCsObserver(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetaccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FKtAccountProfile GetProfile() {
		return memory.read<struct FKtAccountProfile>(m_addr + 16);
	}
	int32_t GetjoinId() {
		return memory.read<int32_t>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPosYCommitted
{
public:
	FOnPosYCommitted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	enum class ETextCommit GetInCommitMethod() {
		return memory.read<enum class ETextCommit>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtLicenseTMIMissionData
{
public:
	FKtLicenseTMIMissionData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ENxLicenseMissionType GetmissionType() {
		return memory.read<enum class ENxLicenseMissionType>(m_addr + 0);
	}
	int32_t GetminCondition() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetmaxCondition() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetsuccessCount() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GettotalCount() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetobjectHitCount() {
		return memory.read<int32_t>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEmoticonFocused
{
public:
	FOnEmoticonFocused(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtLicenseGroupState
{
public:
	FKtLicenseGroupState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNullableDateTime GetbronzeAcquisitionDate() {
		return memory.read<struct FNullableDateTime>(m_addr + 0);
	}
	struct FNullableDateTime GetsilverAcquisitionDate() {
		return memory.read<struct FNullableDateTime>(m_addr + 16);
	}
	struct FNullableDateTime GetgoldAcquisitionDate() {
		return memory.read<struct FNullableDateTime>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FWidget_UploadPopup_OnTagEditClick
{
public:
	FWidget_UploadPopup_OnTagEditClick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetBtnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtPermissionData
{
public:
	FKtPermissionData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetcanChangeMT() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtReserveId
{
public:
	FKtReserveId(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtReserveIdType GetreserveIdType() {
		return memory.read<enum class EKtReserveIdType>(m_addr + 0);
	}
	struct FString GetreserveId() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtLicenseGroupDefSet
{
public:
	FKtLicenseGroupDefSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtLicenseGroupDef> GetgroupDefVector() {
		return memory.read<struct TArray<struct FKtLicenseGroupDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedTrackChangeButton
{
public:
	FOnClickedTrackChangeButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAnimationSelectionChanged
{
public:
	FOnAnimationSelectionChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class ESelectInfo GetSelectionType() {
		return memory.read<enum class ESelectInfo>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUPcVDTEventData
{
public:
	FOnUPcVDTEventData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UServerPacket GetInPacket() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UServerPacket(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtMailHeader
{
public:
	FKtMailHeader(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetmailId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	char GetFlag() {
		return memory.read<char>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtRaceResultSummary
{
public:
	FKtRaceResultSummary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetplayerId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t Getrank() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetTeam() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetTime() {
		return memory.read<int32_t>(m_addr + 24);
	}
	bool GetisWin() {
		return memory.read<bool>(m_addr + 28);
	}
	int32_t Getstatus() {
		return memory.read<int32_t>(m_addr + 32);
	}
	int32_t GetProgress() {
		return memory.read<int32_t>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtDiabledChatSetDef
{
public:
	FKtDiabledChatSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct TArray<struct FKtDisabledChatDef> GetreserveIdVector() {
		return memory.read<struct TArray<struct FKtDisabledChatDef>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtRacePlayerSummary
{
public:
	FKtRacePlayerSummary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKtAccountProfile GetProfile() {
		return memory.read<struct FKtAccountProfile>(m_addr + 0);
	}
	struct FString GetplayerId() {
		return memory.read<struct FString>(m_addr + 96);
	}
	int32_t GetSlot() {
		return memory.read<int32_t>(m_addr + 112);
	}
	int32_t GetTeam() {
		return memory.read<int32_t>(m_addr + 116);
	}
	int32_t GetLevel() {
		return memory.read<int32_t>(m_addr + 120);
	}
	int32_t GetExp() {
		return memory.read<int32_t>(m_addr + 124);
	}
	struct FString GetKartID() {
		return memory.read<struct FString>(m_addr + 128);
	}
	int32_t GetkartLevel() {
		return memory.read<int32_t>(m_addr + 144);
	}
	int32_t GetkartExp() {
		return memory.read<int32_t>(m_addr + 148);
	}
	enum class EKtItemGrade GetKartGrade() {
		return memory.read<enum class EKtItemGrade>(m_addr + 152);
	}
	struct FString GetchId() {
		return memory.read<struct FString>(m_addr + 160);
	}
	enum class EKtGrandPrixSubTier GetgrandPrixTier() {
		return memory.read<enum class EKtGrandPrixSubTier>(m_addr + 176);
	}
	int32_t GetbeginnerFlag() {
		return memory.read<int32_t>(m_addr + 180);
	}
	bool GetAI() {
		return memory.read<bool>(m_addr + 184);
	}
	enum class EKtRaceAiType GetaiType() {
		return memory.read<enum class EKtRaceAiType>(m_addr + 185);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtStockReward
{
public:
	FKtStockReward(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKtStock Getstock() {
		return memory.read<struct FKtStock>(m_addr + 0);
	}
	struct FString GetrewardMessage() {
		return memory.read<struct FString>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtMissionTriggerConditionContentDef
{
public:
	FKtMissionTriggerConditionContentDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtLiveryCondition GetliveryCondition() {
		return memory.read<enum class EKtLiveryCondition>(m_addr + 0);
	}
	enum class EKtPartyCondition GetpartyCondition() {
		return memory.read<enum class EKtPartyCondition>(m_addr + 1);
	}
	enum class EKtShopCondition GetshopCondition() {
		return memory.read<enum class EKtShopCondition>(m_addr + 2);
	}
	enum class EKtCustomGameCondition GetcustomGameCondition() {
		return memory.read<enum class EKtCustomGameCondition>(m_addr + 3);
	}
	enum class EKtKartSkillCondition GetkartSkillCondition() {
		return memory.read<enum class EKtKartSkillCondition>(m_addr + 4);
	}
	enum class EKtSeasonCondition GetseasonCondition() {
		return memory.read<enum class EKtSeasonCondition>(m_addr + 5);
	}
	enum class EKtEventRewardCondition GeteventRewradCondition() {
		return memory.read<enum class EKtEventRewardCondition>(m_addr + 6);
	}
	enum class EKtQuestCondition GetquestCondition() {
		return memory.read<enum class EKtQuestCondition>(m_addr + 7);
	}
	int32_t GettargetCount() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct TArray<struct FString> GetuseItemVector() {
		return memory.read<struct TArray<struct FString>>(m_addr + 16);
	}
	enum class EKtGrandPrixMainTier GettargetGrandprixTier() {
		return memory.read<enum class EKtGrandPrixMainTier>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtAchievementInfo
{
public:
	FKtAchievementInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetachievementId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FDateTime GetachievedDate() {
		return memory.read<struct FDateTime>(m_addr + 16);
	}
	struct FKtSeasonInfo GetachievedSeasonInfo() {
		return memory.read<struct FKtSeasonInfo>(m_addr + 24);
	}
	int32_t GetCurrentCount() {
		return memory.read<int32_t>(m_addr + 56);
	}
	float GetachievedUserRatio() {
		return memory.read<float>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_ScenarioPause
{
public:
	FDev_ScenarioPause(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbPause() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCustomWidgetComponentInstanceData
{
public:
	FCustomWidgetComponentInstanceData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FKtSeasonInfo
{
public:
	FKtSeasonInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetseasonId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class EKtSeasonState GetseasonState() {
		return memory.read<enum class EKtSeasonState>(m_addr + 16);
	}
	int32_t GetseasonWeekIdx() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetseasonDayIdx() {
		return memory.read<int32_t>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCustomizableWidgetOpacityChanged
{
public:
	FOnCustomizableWidgetOpacityChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtMissionData
{
public:
	FKtMissionData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getcompleted() {
		return memory.read<bool>(m_addr + 0);
	}
	int32_t GetmissionDayIdx() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetmissionCount() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpawnItemGradeEmitterAttached
{
public:
	FSpawnItemGradeEmitterAttached(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UParticleSystem GetEmitterTemplate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UParticleSystem(ptr_addr);
	}
	struct USceneComponent GetAttachToComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USceneComponent(ptr_addr);
	}
	struct FName GetAttachPointName() {
		return memory.read<struct FName>(m_addr + 16);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 36);
	}
	struct FVector GetScale() {
		return memory.read<struct FVector>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FMatchQueueList
{
public:
	FMatchQueueList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<enum class ERaceMode> GetraceModes() {
		return memory.read<struct TArray<enum class ERaceMode>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnLucciButtonClicked
{
public:
	FOnLucciButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryMaterialScalarParam
{
public:
	FLiveryMaterialScalarParam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParamName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetParamValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtShopPlatformMapDef
{
public:
	FKtShopPlatformMapDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FString> GetpsnMap() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 0);
	}
	struct TMap<struct FString, struct FString> GetxboxLiveMap() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 80);
	}
	struct TMap<struct FString, struct FString> GetandroidMap() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 160);
	}
	struct TMap<struct FString, struct FString> GetiOSMap() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtContentSettingDef
{
public:
	FKtContentSettingDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FReportDef Getreport() {
		return memory.read<struct FReportDef>(m_addr + 0);
	}
	struct FRacingPassDef GetracingPass() {
		return memory.read<struct FRacingPassDef>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtShopStockDef
{
public:
	FKtShopStockDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCategoryName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TArray<struct FKtShopStock> GetstockDefVector() {
		return memory.read<struct TArray<struct FKtShopStock>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateAlarm
{
public:
	FOnUpdateAlarm(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSet<struct FString> GetNewIds() {
		return memory.read<struct TSet<struct FString>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtItemDiff
{
public:
	FKtItemDiff(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetItemId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FKtItemData GetitemDataBefore() {
		return memory.read<struct FKtItemData>(m_addr + 16);
	}
	struct FKtItemData GetitemDataAfter() {
		return memory.read<struct FKtItemData>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseCoinActorInfo
{
public:
	FLicenseCoinActorInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELicenseCoinType GetCoinType() {
		return memory.read<enum class ELicenseCoinType>(m_addr + 0);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FServer_RequestPlayMissionProgressUpdate
{
public:
	FServer_RequestPlayMissionProgressUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInMissionProgress() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_GfsAcceptFriendRequest
{
public:
	FDev_GfsAcceptFriendRequest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetaccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtLevelSetDef
{
public:
	FKtLevelSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtLevelDef> GetlevelDefVector() {
		return memory.read<struct TArray<struct FKtLevelDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtSeasonStaticInfo
{
public:
	FKtSeasonStaticInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetseasonId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetseasonCount() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct FDateTime GetstartDate() {
		return memory.read<struct FDateTime>(m_addr + 24);
	}
	struct FDateTime GetendDate() {
		return memory.read<struct FDateTime>(m_addr + 32);
	}
	struct FString GetlevelTable() {
		return memory.read<struct FString>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCharacterState
{
public:
	FGetCharacterState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECharacterAnimGraphState GetReturnValue() {
		return memory.read<enum class ECharacterAnimGraphState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAccountPlatformDataGfs
{
public:
	FAccountPlatformDataGfs(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Getnpsn() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetnexonTag() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString Getpresence() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FString GetPlatformType() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetplatformNickname() {
		return memory.read<struct FString>(m_addr + 64);
	}
	int32_t GetgfsId() {
		return memory.read<int32_t>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FKartUpgradeFxParticleInfo
{
public:
	FKartUpgradeFxParticleInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<UParticleSystem> GetParticleObject() {
		return memory.read<struct TSoftObjectPtr<UParticleSystem>>(m_addr + 0);
	}
	struct FTransform GetParticleTransform() {
		return memory.read<struct FTransform>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_Menu
{
public:
	FOnClicked_Menu(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAccountPlatformDataLive
{
public:
	FAccountPlatformDataLive(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Getxuid() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetgamerTag() {
		return memory.read<struct FString>(m_addr + 16);
	}
	bool GetliveOnline() {
		return memory.read<bool>(m_addr + 32);
	}
	bool GetliveOnlineKartRider() {
		return memory.read<bool>(m_addr + 33);
	}
	struct FString GetliveRichPresence() {
		return memory.read<struct FString>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddActionMapping
{
public:
	FAddActionMapping(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FInputActionKeyMapping GetNewKeyMapping() {
		return memory.read<struct FInputActionKeyMapping>(m_addr + 0);
	}
	bool GetbSaveSetting() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetbSaveConfig() {
		return memory.read<bool>(m_addr + 41);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 42);
	}

private:
	std::uint64_t m_addr = 0;
};class FAccountPlatformDataKt
{
public:
	FAccountPlatformDataKt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtAccountPlatform Getplatform() {
		return memory.read<enum class EKtAccountPlatform>(m_addr + 0);
	}
	bool GetbAccountLinkGuest() {
		return memory.read<bool>(m_addr + 1);
	}
	struct FString Getnpsn() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FString Getxuid() {
		return memory.read<struct FString>(m_addr + 24);
	}
	struct FString GetriderName() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString Getemblem() {
		return memory.read<struct FString>(m_addr + 56);
	}
	struct FString GetgamerTag() {
		return memory.read<struct FString>(m_addr + 72);
	}
	struct FString GetpsnAccountId() {
		return memory.read<struct FString>(m_addr + 88);
	}
	struct FString GetonlineId() {
		return memory.read<struct FString>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};class FTMIBoosterStats
{
public:
	FTMIBoosterStats(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetBoostCount() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetBoostTimeMs() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetMiniBoostCount() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetTeamBoostCount() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetTotalBoostTimeMs() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FReportDef
{
public:
	FReportDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetmaxDailyReportCount() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetminumumCharacterCount() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetmaximumCharacterCount() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKartUpgradeFxMaterialInfo
{
public:
	FKartUpgradeFxMaterialInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetMatFxName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TSoftObjectPtr<UCurveFloat> GetMatFxCycleCurve() {
		return memory.read<struct TSoftObjectPtr<UCurveFloat>>(m_addr + 16);
	}
	struct TSoftObjectPtr<UCurveFloat> GetMatFxWeightCurve() {
		return memory.read<struct TSoftObjectPtr<UCurveFloat>>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryPaintTransform
{
public:
	FLiveryPaintTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FOnPageWidgetActivated
{
public:
	FOnPageWidgetActivated(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbActivate() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSingleModeLoadingImageDef
{
public:
	FSingleModeLoadingImageDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetImageName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t Getweight() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct FString GetPeriod() {
		return memory.read<struct FString>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedSelectedEmblemButton
{
public:
	FOnClickedSelectedEmblemButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FFeatureConfigDef
{
public:
	FFeatureConfigDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, bool> GetfeatureMap() {
		return memory.read<struct TMap<struct FString, bool>>(m_addr + 0);
	}
	struct TMap<struct FString, struct FContentsRestriction> Getrestrictions() {
		return memory.read<struct TMap<struct FString, struct FContentsRestriction>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_PlayMajorIntroSequence
{
public:
	FDev_PlayMajorIntroSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMajorIntroSequenceType GetInType() {
		return memory.read<enum class EMajorIntroSequenceType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryDesignDesc_Ver2
{
public:
	FLiveryDesignDesc_Ver2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetLabel() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct FLiveryPaintDesc_Ver2 GetPaintDesc() {
		return memory.read<struct FLiveryPaintDesc_Ver2>(m_addr + 24);
	}
	struct TArray<struct FLiveryWrappingDesc_Ver2> GetWrappingDescArray() {
		return memory.read<struct TArray<struct FLiveryWrappingDesc_Ver2>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FContentsRestriction
{
public:
	FContentsRestriction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<enum class EKtAccountPlatform> GetblacklistPlatforms() {
		return memory.read<struct TArray<enum class EKtAccountPlatform>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKartDecalChart
{
public:
	FKartDecalChart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetUVstart() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}
	struct FVector2D GetUVsize() {
		return memory.read<struct FVector2D>(m_addr + 16);
	}
	struct FVector2D GetUaxis() {
		return memory.read<struct FVector2D>(m_addr + 24);
	}
	struct FVector2D GetVaxis() {
		return memory.read<struct FVector2D>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtAttendanceEventSetDef
{
public:
	FKtAttendanceEventSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtAttendanceEventDef> Getevents() {
		return memory.read<struct TArray<struct FKtAttendanceEventDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FClientAlertBlue
{
public:
	FClientAlertBlue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbOn() {
		return memory.read<bool>(m_addr + 0);
	}
	float GetLifeTime() {
		return memory.read<float>(m_addr + 4);
	}
	struct AItem GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FDisappear
{
public:
	FDisappear(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetID() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDevUseBoost
{
public:
	FDevUseBoost(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetType() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetTime() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtAttendanceEventDef
{
public:
	FKtAttendanceEventDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetEventID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetDescription() {
		return memory.read<struct FString>(m_addr + 32);
	}
	enum class EKtAttendanceEventType GetType() {
		return memory.read<enum class EKtAttendanceEventType>(m_addr + 48);
	}
	struct FString GetstartDate() {
		return memory.read<struct FString>(m_addr + 56);
	}
	struct FString GetendDate() {
		return memory.read<struct FString>(m_addr + 72);
	}
	struct TArray<struct FString> GetrewardStockIds() {
		return memory.read<struct TArray<struct FString>>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSubmitCouponCode
{
public:
	FOnSubmitCouponCode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtKartChannelParamDef
{
public:
	FKtKartChannelParamDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FKtKartChannelParam GetchannelParam() {
		return memory.read<struct FKtKartChannelParam>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocusedTagButton
{
public:
	FOnFocusedTagButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedUseShadowButton
{
public:
	FOnClickedUseShadowButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCsGameOption
{
public:
	FCsGameOption(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GethideKart() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GethideCharacter() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSelect
{
public:
	FOnSelect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtKartChannelParam
{
public:
	FKtKartChannelParam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMass() {
		return memory.read<float>(m_addr + 0);
	}
	float GetairFriction() {
		return memory.read<float>(m_addr + 4);
	}
	float GetdragFactor() {
		return memory.read<float>(m_addr + 8);
	}
	float GetforwardAccelForce() {
		return memory.read<float>(m_addr + 12);
	}
	float GetbackwardAccelForce() {
		return memory.read<float>(m_addr + 16);
	}
	float GetgripBrake() {
		return memory.read<float>(m_addr + 20);
	}
	float GetslipBrake() {
		return memory.read<float>(m_addr + 24);
	}
	float GetmaxSteerDeg() {
		return memory.read<float>(m_addr + 28);
	}
	float GetsteerConstraint() {
		return memory.read<float>(m_addr + 32);
	}
	float GetfrontGripFactor() {
		return memory.read<float>(m_addr + 36);
	}
	float GetrearGripFactor() {
		return memory.read<float>(m_addr + 40);
	}
	float GetdriftTrigFactor() {
		return memory.read<float>(m_addr + 44);
	}
	float GetdriftTrigTime() {
		return memory.read<float>(m_addr + 48);
	}
	float GetdriftSlipFactor() {
		return memory.read<float>(m_addr + 52);
	}
	float GetdriftEscapeForce() {
		return memory.read<float>(m_addr + 56);
	}
	float GetcornerDrawFactor() {
		return memory.read<float>(m_addr + 60);
	}
	float GetdriftMaxGauge() {
		return memory.read<float>(m_addr + 64);
	}
	float GettransAccelFactor() {
		return memory.read<float>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUPcADTEventData
{
public:
	FOnUPcADTEventData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UServerPacket GetInPacket() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UServerPacket(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCrash
{
public:
	FOnCrash(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECollisionChannel GetCollisionObjectType() {
		return memory.read<enum class ECollisionChannel>(m_addr + 0);
	}
	int32_t GetCrashLevel() {
		return memory.read<int32_t>(m_addr + 4);
	}
	float GetHitVelocity() {
		return memory.read<float>(m_addr + 8);
	}
	struct FVector GetCrashLocation() {
		return memory.read<struct FVector>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtKartBodyDef
{
public:
	FKtKartBodyDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetkartItemId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetbodyParamName() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtKartBodyParamDef
{
public:
	FKtKartBodyParamDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FKtKartBodyParam GetbodyParam() {
		return memory.read<struct FKtKartBodyParam>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FMainDialog_OnRefuseInvitationClicked
{
public:
	FMainDialog_OnRefuseInvitationClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FJumpToKartMontageSection
{
public:
	FJumpToKartMontageSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetInActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct FName GetSectionName() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtKartSkillTreeNodeSetDef
{
public:
	FKtKartSkillTreeNodeSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetskillTreeId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TArray<struct FKtKartSkillTreeNodeDef> Getnodes() {
		return memory.read<struct TArray<struct FKtKartSkillTreeNodeDef>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FPendingSessionInvitation
{
public:
	FPendingSessionInvitation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPlatformSessionProperty GetSessionProperty() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 296);
		return struct UPlatformSessionProperty(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtKartSkillBaseDef
{
public:
	FKtKartSkillBaseDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetskillId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FKtKartSkillExtraBodyParam GetbodyParam() {
		return memory.read<struct FKtKartSkillExtraBodyParam>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FResetGearDialog_OnClickedResetBtn
{
public:
	FResetGearDialog_OnClickedResetBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnComboBoxSelection_ItemAffectBy
{
public:
	FOnComboBoxSelection_ItemAffectBy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class ESelectInfo GetSelectionType() {
		return memory.read<enum class ESelectInfo>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_WorldRenderingFlag
{
public:
	FDev_WorldRenderingFlag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInEnable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtKartLevelSetDef
{
public:
	FKtKartLevelSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtKartLevelDef> GetlevelDefVector() {
		return memory.read<struct TArray<struct FKtKartLevelDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCsTeamScore
{
public:
	FCsTeamScore(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getwin() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FWidgetAnimationCustomPlayData
{
public:
	FWidgetAnimationCustomPlayData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FKtKartGearSetDef
{
public:
	FKtKartGearSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtKartGearDef> GetkartGearDefVector() {
		return memory.read<struct TArray<struct FKtKartGearDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnGfsFriendRequestAccepted
{
public:
	FOnGfsFriendRequestAccepted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAccountPlatformData GetData() {
		return memory.read<struct FAccountPlatformData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtKartGearDef
{
public:
	FKtKartGearDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TArray<struct FGearInfo> GetparamVector() {
		return memory.read<struct TArray<struct FGearInfo>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FKartRepMovement
{
public:
	FKartRepMovement(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector_NetQuantize10 GetLocation() {
		return memory.read<struct FVector_NetQuantize10>(m_addr + 0);
	}
	struct FQuat GetQuaternion() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FVector_NetQuantize100 GetLinearVelocity() {
		return memory.read<struct FVector_NetQuantize100>(m_addr + 32);
	}
	struct FVector_NetQuantize100 GetAngularVelocity() {
		return memory.read<struct FVector_NetQuantize100>(m_addr + 44);
	}
	float GetTimestamp() {
		return memory.read<float>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FPurchaseConfirmDialog_InitPriceKcoinDetail
{
public:
	FPurchaseConfirmDialog_InitPriceKcoinDetail(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetShopStockItemID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct UUserWidget GetKcoinPreviewWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_RaceGameEx
{
public:
	FDev_RaceGameEx(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetLevelName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetraceType() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct FString GetParams() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtKartUpgradeDef
{
public:
	FKtKartUpgradeDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtItemGrade Getgrade() {
		return memory.read<enum class EKtItemGrade>(m_addr + 0);
	}
	struct FUpgradeInfo GetUpgradeInfo() {
		return memory.read<struct FUpgradeInfo>(m_addr + 4);
	}
	struct TMap<struct FString, int32_t> GetgearLimit() {
		return memory.read<struct TMap<struct FString, int32_t>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPrCouponUse
{
public:
	FOnPrCouponUse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetResult() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetInErrorCode() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct TArray<struct FKtItem> GetItems() {
		return memory.read<struct TArray<struct FKtItem>>(m_addr + 8);
	}
	struct TArray<struct FString> GetDuplicates() {
		return memory.read<struct TArray<struct FString>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpgradeInfo
{
public:
	FUpgradeInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetupgradeCost() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetProbability() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetadditionalGear() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetgearResetCost() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEndRaceCountdown
{
public:
	FOnEndRaceCountdown(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetEndTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtStockDef
{
public:
	FKtStockDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetstockId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetstockName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetstockDesc() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FString GetpackageFilePath() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct TArray<struct FString> GetstockItemVector() {
		return memory.read<struct TArray<struct FString>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FPartyMenu_OnActionButtonClicked
{
public:
	FPartyMenu_OnActionButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonType() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedNextCharacterTab
{
public:
	FOnClickedNextCharacterTab(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSpinBoxValueChanged_CameraRotateSpeed
{
public:
	FOnSpinBoxValueChanged_CameraRotateSpeed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayerMobileHUDTypeSettings
{
public:
	FPlayerMobileHUDTypeSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EHUDType GetSelectedHUDType() {
		return memory.read<enum class EHUDType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FVDTEventDef
{
public:
	FVDTEventDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	bool Getrepeat() {
		return memory.read<bool>(m_addr + 32);
	}
	struct FString GetstartDate() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetendDate() {
		return memory.read<struct FString>(m_addr + 56);
	}
	struct FString GetStartTime() {
		return memory.read<struct FString>(m_addr + 72);
	}
	struct FString GetEndTime() {
		return memory.read<struct FString>(m_addr + 88);
	}
	struct FString GetTitle() {
		return memory.read<struct FString>(m_addr + 104);
	}
	struct FString GetDescription() {
		return memory.read<struct FString>(m_addr + 120);
	}
	struct TArray<struct FVDTSubEvent> GetsubEvents() {
		return memory.read<struct TArray<struct FVDTSubEvent>>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateRestTimeInItemDetailWidget
{
public:
	FUpdateRestTimeInItemDetailWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDateTime GetServerTime() {
		return memory.read<struct FDateTime>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInfoModifyDialog_OnTitleEditBoxTextChanged
{
public:
	FInfoModifyDialog_OnTitleEditBoxTextChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTimeItemSpawnStruct
{
public:
	FTimeItemSpawnStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCycle() {
		return memory.read<float>(m_addr + 0);
	}
	float GetAddTime() {
		return memory.read<float>(m_addr + 4);
	}
	float GetDistance() {
		return memory.read<float>(m_addr + 8);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FVector GetDirection() {
		return memory.read<struct FVector>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FHitSoundCoolTimeData
{
public:
	FHitSoundCoolTimeData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<UFMODEvent> GetSoundEvent() {
		return memory.read<struct TSoftObjectPtr<UFMODEvent>>(m_addr + 8);
	}
	float GetCoolTime() {
		return memory.read<float>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FMajorPodiumDesc
{
public:
	FMajorPodiumDesc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMajorPodiumSequenceType GetSequenceType() {
		return memory.read<enum class EMajorPodiumSequenceType>(m_addr + 0);
	}
	enum class ERaceTeamType GetWinTeam() {
		return memory.read<enum class ERaceTeamType>(m_addr + 1);
	}
	enum class ERaceMode GetraceMode() {
		return memory.read<enum class ERaceMode>(m_addr + 2);
	}
	struct FString GetTrackName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct TArray<struct FString> GetPlayerIDContainer() {
		return memory.read<struct TArray<struct FString>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioMessageHUDWidgetData
{
public:
	FScenarioMessageHUDWidgetData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetPortaitImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FText GetSpeaker() {
		return memory.read<struct FText>(m_addr + 8);
	}
	struct TArray<struct FScenarioMessageData> GetStepContainer() {
		return memory.read<struct TArray<struct FScenarioMessageData>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FADTEventDef
{
public:
	FADTEventDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetstartDate() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FString GetendDate() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetStartTime() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FString GetEndTime() {
		return memory.read<struct FString>(m_addr + 80);
	}
	struct FString GetTitle() {
		return memory.read<struct FString>(m_addr + 96);
	}
	struct FString GetDescription() {
		return memory.read<struct FString>(m_addr + 112);
	}
	struct TArray<struct FADTEventStep> Getsteps() {
		return memory.read<struct TArray<struct FADTEventStep>>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_AffectItem
{
public:
	FDev_AffectItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EItemType GetItemType() {
		return memory.read<enum class EItemType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPromotionNext
{
public:
	FOnClickedPromotionNext(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayerConvenienceSettings
{
public:
	FPlayerConvenienceSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtGameplayControlType GetGameplayControlType() {
		return memory.read<enum class EKtGameplayControlType>(m_addr + 0);
	}
	bool GetDriftAssist() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetTrackGuideLineDisplay() {
		return memory.read<bool>(m_addr + 2);
	}
	bool GetMyDriveDirectionDisplay() {
		return memory.read<bool>(m_addr + 3);
	}
	bool GetBoosterUseDisplay() {
		return memory.read<bool>(m_addr + 4);
	}
	bool GetDriftBoosterDisplay() {
		return memory.read<bool>(m_addr + 5);
	}
	bool GetDriftUseDisplay() {
		return memory.read<bool>(m_addr + 6);
	}
	bool GetLandingPointDisplay() {
		return memory.read<bool>(m_addr + 7);
	}
	bool GetAutoDrive() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetAutoForward() {
		return memory.read<bool>(m_addr + 9);
	}
	bool GetItemAutoDriftBooster() {
		return memory.read<bool>(m_addr + 10);
	}
	bool GetSpeedAutoDriftBooster() {
		return memory.read<bool>(m_addr + 11);
	}
	bool GetFallBarrier() {
		return memory.read<bool>(m_addr + 12);
	}
	bool GetCornerIsolationBarrier() {
		return memory.read<bool>(m_addr + 13);
	}
	bool GetShowOtherRiderNames() {
		return memory.read<bool>(m_addr + 14);
	}
	uint32_t GetBMirror() {
		return memory.read<uint32_t>(m_addr + 16);
	}
	bool GetShowOtherRiderLivery() {
		return memory.read<bool>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FADTEventStep
{
public:
	FADTEventStep(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtADTEventType GetType() {
		return memory.read<enum class EKtADTEventType>(m_addr + 0);
	}
	int32_t Getdt() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct TArray<struct FString> GetrewardStockIds() {
		return memory.read<struct TArray<struct FString>>(m_addr + 8);
	}
	struct FString GetMessage() {
		return memory.read<struct FString>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FBackToShowAccountLinkSelectPopup
{
public:
	FBackToShowAccountLinkSelectPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtGrandPrixRewards
{
public:
	FKtGrandPrixRewards(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtGrandPrixTierReward> GettierRewards() {
		return memory.read<struct TArray<struct FKtGrandPrixTierReward>>(m_addr + 0);
	}
	struct TArray<struct FKtGrandPrixRankReward> GetrankRewards() {
		return memory.read<struct TArray<struct FKtGrandPrixRankReward>>(m_addr + 16);
	}
	struct TArray<struct FKtGrandPrixGppReward> GetgppRewards() {
		return memory.read<struct TArray<struct FKtGrandPrixGppReward>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FMaterialFxArray
{
public:
	FMaterialFxArray(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMaterialInterface> GetMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UMaterialInterface>(ptr_addr);
	}
	struct TArray<struct UMaterialInterface> GetFxMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct TArray<struct UMaterialInterface>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtGrandPrixGppReward
{
public:
	FKtGrandPrixGppReward(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> Getgpp() {
		return memory.read<struct TArray<int32_t>>(m_addr + 0);
	}
	int32_t GetminRaceCount() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct TArray<struct FString> GetrewardStockIds() {
		return memory.read<struct TArray<struct FString>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FItemGuidePopup_OnClickedCloseButton
{
public:
	FItemGuidePopup_OnClickedCloseButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumTriangles
{
public:
	FGetNumTriangles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLODIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FKartSteeringExperimental
{
public:
	FKartSteeringExperimental(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UKartMovementComponent GetMovement() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 520);
		return struct UKartMovementComponent(ptr_addr);
	}
	struct UCurveFloat GetDriftTorqueCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 528);
		return struct UCurveFloat(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtGrandPrixSeason
{
public:
	FKtGrandPrixSeason(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetseasonId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetrewardStartAfter() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetrewardDuration() {
		return memory.read<int32_t>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedRevertOptionConfirm
{
public:
	FOnClickedRevertOptionConfirm(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtGrandPrixSubTierDef
{
public:
	FKtGrandPrixSubTierDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtGrandPrixSubTier GetsubTier() {
		return memory.read<enum class EKtGrandPrixSubTier>(m_addr + 0);
	}
	struct TArray<int32_t> Getgpp() {
		return memory.read<struct TArray<int32_t>>(m_addr + 8);
	}
	int32_t Getranking() {
		return memory.read<int32_t>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientQuestEventDef
{
public:
	FKtClientQuestEventDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetquestPeriod() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FKtClientQuestDef GetquestDef() {
		return memory.read<struct FKtClientQuestDef>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtLicenseGroupDefMap
{
public:
	FKtLicenseGroupDefMap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FKtLicenseGroupDef> GetgroupDefMap() {
		return memory.read<struct TMap<struct FString, struct FKtLicenseGroupDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FPartyMenu_OnCloseButtonClicked
{
public:
	FPartyMenu_OnCloseButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtLicenseGroupDef
{
public:
	FKtLicenseGroupDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetGroupID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TArray<struct FString> GetrewardStockIdList() {
		return memory.read<struct TArray<struct FString>>(m_addr + 16);
	}
	struct TArray<struct FString> GetrewardMessageList() {
		return memory.read<struct TArray<struct FString>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FServer_SetValue
{
public:
	FServer_SetValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetValue() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPrevEmotionStorage
{
public:
	FOnClickedPrevEmotionStorage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtLicenseMissionDefMap
{
public:
	FKtLicenseMissionDefMap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FKtLicenseMissionDef> GetmissionDefMap() {
		return memory.read<struct TMap<struct FString, struct FKtLicenseMissionDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedApplyGearBtn
{
public:
	FOnClickedApplyGearBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEditableTextBoxChanged
{
public:
	FOnEditableTextBoxChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtLicenseMissionDef
{
public:
	FKtLicenseMissionDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetmissionId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetGroupID() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct TArray<struct FString> GetrewardStockIdList() {
		return memory.read<struct TArray<struct FString>>(m_addr + 32);
	}
	struct TArray<struct FString> GetrewardMessageList() {
		return memory.read<struct TArray<struct FString>>(m_addr + 48);
	}
	struct TArray<int32_t> GetstarScoreList() {
		return memory.read<struct TArray<int32_t>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCash
{
public:
	FSetCash(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	double GetCash() {
		return memory.read<double>(m_addr + 0);
	}
	struct FString Getcurrency() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtLicenseMissionDefSet
{
public:
	FKtLicenseMissionDefSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtLicenseMissionDef> GetmissionDefVector() {
		return memory.read<struct TArray<struct FKtLicenseMissionDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseDriftTutorialChapter
{
public:
	FLicenseDriftTutorialChapter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetChapterTitle() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct TArray<struct FLicenseDriftTutorialMission> GetMissionList() {
		return memory.read<struct TArray<struct FLicenseDriftTutorialMission>>(m_addr + 24);
	}
	int32_t GetCount() {
		return memory.read<int32_t>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtReserveIdDef
{
public:
	FKtReserveIdDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtReserveId> GetreserveIdVector() {
		return memory.read<struct TArray<struct FKtReserveId>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtTierSetDef
{
public:
	FKtTierSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtTierDef> GettierDefVector() {
		return memory.read<struct TArray<struct FKtTierDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_ChangeSkidMark
{
public:
	FDev_ChangeSkidMark(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetItemId() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPatrolLineData
{
public:
	FPatrolLineData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetScore() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetOffset_X() {
		return memory.read<int32_t>(m_addr + 4);
	}
	bool GetDirection() {
		return memory.read<bool>(m_addr + 8);
	}
	float GetSpeed() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtTierDef
{
public:
	FKtTierDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Gettier() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetaccumTrophy() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtLevelDef
{
public:
	FKtLevelDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLevel() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetaccumExp() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_ChangeID_List
{
public:
	FDev_ChangeID_List(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetID1() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetID2() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetID3() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FString GetID4() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetID5() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FString GetID6() {
		return memory.read<struct FString>(m_addr + 80);
	}
	struct FString GetID7() {
		return memory.read<struct FString>(m_addr + 96);
	}
	struct FString GetID8() {
		return memory.read<struct FString>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtPlayMissionEventDef
{
public:
	FKtPlayMissionEventDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetRate() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetMaxCount() {
		return memory.read<int32_t>(m_addr + 20);
	}
	struct FDateTime GetStartTime() {
		return memory.read<struct FDateTime>(m_addr + 24);
	}
	struct FDateTime GetEndTime() {
		return memory.read<struct FDateTime>(m_addr + 32);
	}
	struct FKtPlayMissionPoolDef GetmissionPool() {
		return memory.read<struct FKtPlayMissionPoolDef>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedTagButton
{
public:
	FOnClickedTagButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientLicenseMissionSetDef
{
public:
	FKtClientLicenseMissionSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtClientLicenseMissionDef> GetmissionDefVector() {
		return memory.read<struct TArray<struct FKtClientLicenseMissionDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtPlayMissionPoolDef
{
public:
	FKtPlayMissionPoolDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtPlayMissionPoolItem> GetspeedSolo() {
		return memory.read<struct TArray<struct FKtPlayMissionPoolItem>>(m_addr + 0);
	}
	struct TArray<struct FKtPlayMissionPoolItem> GetspeedTeam() {
		return memory.read<struct TArray<struct FKtPlayMissionPoolItem>>(m_addr + 16);
	}
	struct TArray<struct FKtPlayMissionPoolItem> GetitemSolo() {
		return memory.read<struct TArray<struct FKtPlayMissionPoolItem>>(m_addr + 32);
	}
	struct TArray<struct FKtPlayMissionPoolItem> GetitemTeam() {
		return memory.read<struct TArray<struct FKtPlayMissionPoolItem>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FLootBoxSequencePlayInfo
{
public:
	FLootBoxSequencePlayInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRegisterComponent
{
public:
	FRegisterComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbReplicated() {
		return memory.read<bool>(m_addr + 0);
	}
	struct TSoftClassPtr<UObject> GetComponentClass() {
		return memory.read<struct TSoftClassPtr<UObject>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtPlayMissionRewardPoolDef
{
public:
	FKtPlayMissionRewardPoolDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TArray<struct FKtPlayMissionRewardDef> Getrewards() {
		return memory.read<struct TArray<struct FKtPlayMissionRewardDef>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeLanguage_OnClickedConfirmBtn
{
public:
	FChangeLanguage_OnClickedConfirmBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtPlayMissionDef
{
public:
	FKtPlayMissionDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class EKtPlayMissionType GetmissionType() {
		return memory.read<enum class EKtPlayMissionType>(m_addr + 16);
	}
	struct FString GettargetItemId() {
		return memory.read<struct FString>(m_addr + 24);
	}
	int32_t GetmissionCount() {
		return memory.read<int32_t>(m_addr + 40);
	}
	bool Getcomplete() {
		return memory.read<bool>(m_addr + 44);
	}
	struct FString Getdesc() {
		return memory.read<struct FString>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryWrappingGroup
{
public:
	FLiveryWrappingGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetHeadOffset() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<struct FLiveryWrappingGroupHeadInfo> GetHeadInfo() {
		return memory.read<struct TArray<struct FLiveryWrappingGroupHeadInfo>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKartUpgradeFxGradeColorInfo
{
public:
	FKartUpgradeFxGradeColorInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetParamName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TMap<enum class EKtItemGrade, struct FLinearColor> GetColorList() {
		return memory.read<struct TMap<enum class EKtItemGrade, struct FLinearColor>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRaceRankRowEditorInitializer
{
public:
	FRaceRankRowEditorInitializer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbOwnPlayer() {
		return memory.read<bool>(m_addr + 0);
	}
	int32_t GetRankNo() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetTeamNo() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct FString GetPlayerName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct TArray<enum class EItemType> GetItemList() {
		return memory.read<struct TArray<enum class EItemType>>(m_addr + 32);
	}
	bool GetbMic() {
		return memory.read<bool>(m_addr + 48);
	}
	int32_t GetVoiceChatStatus() {
		return memory.read<int32_t>(m_addr + 52);
	}
	bool GetbPing() {
		return memory.read<bool>(m_addr + 56);
	}
	float GetLatencyMs() {
		return memory.read<float>(m_addr + 60);
	}
	float GetTimestampMs() {
		return memory.read<float>(m_addr + 64);
	}
	enum class EKtAccountPlatform Getplatform() {
		return memory.read<enum class EKtAccountPlatform>(m_addr + 68);
	}
	enum class ERankPlayerRaceState GetRaceState() {
		return memory.read<enum class ERankPlayerRaceState>(m_addr + 69);
	}
	bool GetbBeginnerCareIcon() {
		return memory.read<bool>(m_addr + 70);
	}
	enum class ERaceRankPawnType GetPawnType() {
		return memory.read<enum class ERaceRankPawnType>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtQuestEventSetDef
{
public:
	FKtQuestEventSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FKtQuestEventDef> GetquestEventDefMap() {
		return memory.read<struct TMap<struct FString, struct FKtQuestEventDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtQuestEventDef
{
public:
	FKtQuestEventDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetquestPeriod() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FKtQuestDef GetquestDef() {
		return memory.read<struct FKtQuestDef>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_LaunchURL
{
public:
	FDev_LaunchURL(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInURL() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtQuestDef
{
public:
	FKtQuestDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtMissionDef> GetmissionDefVector() {
		return memory.read<struct TArray<struct FKtMissionDef>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentDrawSize
{
public:
	FGetCurrentDrawSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtMissionCounterConditionDef
{
public:
	FKtMissionCounterConditionDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetTime() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetDistance() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetDrift() {
		return memory.read<bool>(m_addr + 2);
	}
	bool Getdraft() {
		return memory.read<bool>(m_addr + 3);
	}
	bool GetboostShort() {
		return memory.read<bool>(m_addr + 4);
	}
	bool Getovertake() {
		return memory.read<bool>(m_addr + 5);
	}
	bool GetReset() {
		return memory.read<bool>(m_addr + 6);
	}
	bool Getcrash() {
		return memory.read<bool>(m_addr + 7);
	}
	struct TArray<struct FString> GetgoItemUseVector() {
		return memory.read<struct TArray<struct FString>>(m_addr + 8);
	}
	struct TArray<struct FString> GetgoItemSuccessVector() {
		return memory.read<struct TArray<struct FString>>(m_addr + 24);
	}
	struct TArray<struct FString> GetgoItemDefenceVector() {
		return memory.read<struct TArray<struct FString>>(m_addr + 40);
	}
	struct TArray<struct FString> GetgoItemAttackedVector() {
		return memory.read<struct TArray<struct FString>>(m_addr + 56);
	}
	struct TArray<struct FString> GetgoItemAttackVector() {
		return memory.read<struct TArray<struct FString>>(m_addr + 72);
	}
	struct TArray<struct FString> GetgoItemGainVector() {
		return memory.read<struct TArray<struct FString>>(m_addr + 88);
	}
	struct TArray<struct FString> GetitemIdVector() {
		return memory.read<struct TArray<struct FString>>(m_addr + 104);
	}
	struct TArray<int32_t> GetitemCatVector() {
		return memory.read<struct TArray<int32_t>>(m_addr + 120);
	}
	enum class EKtItemGrade GetitemGrade() {
		return memory.read<enum class EKtItemGrade>(m_addr + 136);
	}
	bool GetcharacterBirthday() {
		return memory.read<bool>(m_addr + 137);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtMissionTriggerConditionOnceCheckDef
{
public:
	FKtMissionTriggerConditionOnceCheckDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtLicenseCondition GetlicenseCondition() {
		return memory.read<enum class EKtLicenseCondition>(m_addr + 0);
	}
	int32_t GetlicenseGroupType() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetlicenseGrade() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnShortcutButtonClicked
{
public:
	FOnShortcutButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInviteMenu_Find_CloseFindPopup
{
public:
	FInviteMenu_Find_CloseFindPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnShowReceiveFailPopup
{
public:
	FOnShowReceiveFailPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMailItemReceiveFailType GetReceiveFailType() {
		return memory.read<enum class EMailItemReceiveFailType>(m_addr + 0);
	}
	struct TArray<struct FString> GetInItemArray() {
		return memory.read<struct TArray<struct FString>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedRewardDetailDialogBackButton
{
public:
	FOnClickedRewardDetailDialogBackButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDoClose
{
public:
	FDoClose(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSoundRow
{
public:
	FSoundRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct TSoftObjectPtr<UFMODEvent> GetSound() {
		return memory.read<struct TSoftObjectPtr<UFMODEvent>>(m_addr + 24);
	}
	struct FString GetTheme() {
		return memory.read<struct FString>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtItemDef
{
public:
	FKtItemDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtInventoryType GetinventoryType() {
		return memory.read<enum class EKtInventoryType>(m_addr + 0);
	}
	struct FString GetItemId() {
		return memory.read<struct FString>(m_addr + 8);
	}
	enum class EKtItemGrade GetitemGrade() {
		return memory.read<enum class EKtItemGrade>(m_addr + 24);
	}
	int32_t GetitemLimit() {
		return memory.read<int32_t>(m_addr + 28);
	}
	struct FString GetparentId() {
		return memory.read<struct FString>(m_addr + 32);
	}
	enum class EKtAffiliateType GetaffiliateType() {
		return memory.read<enum class EKtAffiliateType>(m_addr + 48);
	}
	enum class EKtAffiliatePlatform GetspecificPlatform() {
		return memory.read<enum class EKtAffiliatePlatform>(m_addr + 49);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSpinBoxValueChanged_CameraAperture
{
public:
	FOnSpinBoxValueChanged_CameraAperture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedReceiveKeyIcon
{
public:
	FOnClickedReceiveKeyIcon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtMissionTriggerConditionRaceResultDef
{
public:
	FKtMissionTriggerConditionRaceResultDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<char> GetraceTypeVector() {
		return memory.read<struct TArray<char>>(m_addr + 0);
	}
	struct TArray<char> GetraceModeVector() {
		return memory.read<struct TArray<char>>(m_addr + 16);
	}
	struct TArray<struct FString> GettrackIdVector() {
		return memory.read<struct TArray<struct FString>>(m_addr + 32);
	}
	enum class EKtGameModeDetail GetgameModeDetail() {
		return memory.read<enum class EKtGameModeDetail>(m_addr + 48);
	}
	struct FString Getrank() {
		return memory.read<struct FString>(m_addr + 56);
	}
	struct FString GetrankTeam() {
		return memory.read<struct FString>(m_addr + 72);
	}
	bool Getcomplete() {
		return memory.read<bool>(m_addr + 88);
	}
	bool Getretire() {
		return memory.read<bool>(m_addr + 89);
	}
	bool Getdrive() {
		return memory.read<bool>(m_addr + 90);
	}
	bool Getstreak() {
		return memory.read<bool>(m_addr + 91);
	}
	bool GetallRetire() {
		return memory.read<bool>(m_addr + 92);
	}
	bool Getlose() {
		return memory.read<bool>(m_addr + 93);
	}
	bool GetDistance() {
		return memory.read<bool>(m_addr + 94);
	}
	bool GetBackward() {
		return memory.read<bool>(m_addr + 95);
	}
	bool Getparty() {
		return memory.read<bool>(m_addr + 96);
	}
	bool Getsingle() {
		return memory.read<bool>(m_addr + 97);
	}
	struct FString GetDrift() {
		return memory.read<struct FString>(m_addr + 104);
	}
	struct FString Getdraft() {
		return memory.read<struct FString>(m_addr + 120);
	}
	struct FString GetboostShort() {
		return memory.read<struct FString>(m_addr + 136);
	}
	struct FString Getovertake() {
		return memory.read<struct FString>(m_addr + 152);
	}
	struct FString GetReset() {
		return memory.read<struct FString>(m_addr + 168);
	}
	struct FString Getcrash() {
		return memory.read<struct FString>(m_addr + 184);
	}
	struct FString GetgpID() {
		return memory.read<struct FString>(m_addr + 200);
	}
	struct FString GetgpProgress() {
		return memory.read<struct FString>(m_addr + 216);
	}
	struct FString GetgpPoint() {
		return memory.read<struct FString>(m_addr + 232);
	}
	struct FString GetgpRanking() {
		return memory.read<struct FString>(m_addr + 248);
	}
	struct TArray<struct FString> GetgoItemUseVector() {
		return memory.read<struct TArray<struct FString>>(m_addr + 264);
	}
	struct TArray<struct FString> GetgoItemSuccessVector() {
		return memory.read<struct TArray<struct FString>>(m_addr + 280);
	}
	struct TArray<struct FString> GetgoItemDefenceVector() {
		return memory.read<struct TArray<struct FString>>(m_addr + 296);
	}
	struct TArray<struct FString> GetgoItemAttackVector() {
		return memory.read<struct TArray<struct FString>>(m_addr + 312);
	}
	struct TArray<struct FString> GetgoItemAttackedVector() {
		return memory.read<struct TArray<struct FString>>(m_addr + 328);
	}
	struct TArray<struct FString> GetgoItemGainVector() {
		return memory.read<struct TArray<struct FString>>(m_addr + 344);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtMissionTriggerConditionDef
{
public:
	FKtMissionTriggerConditionDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetitemOnVector() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}
	struct TArray<struct FString> GetitemHaveVector() {
		return memory.read<struct TArray<struct FString>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FCloseReplayController
{
public:
	FCloseReplayController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDummyIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedChangeToLeftTabButton
{
public:
	FOnClickedChangeToLeftTabButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtQuestPsnSetDef
{
public:
	FKtQuestPsnSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FKtQuestDef> GetquestDefMap() {
		return memory.read<struct TMap<struct FString, struct FKtQuestDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtQuestLiveSetDef
{
public:
	FKtQuestLiveSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FKtQuestDef> GetquestDefMap() {
		return memory.read<struct TMap<struct FString, struct FKtQuestDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtQuestEmblemSetDef
{
public:
	FKtQuestEmblemSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FKtQuestEmblemDef> GetquestEmblemDefMap() {
		return memory.read<struct TMap<struct FString, struct FKtQuestEmblemDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_OpenLicense
{
public:
	FDev_OpenLicense(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetID() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtQuestWeeklySetDef
{
public:
	FKtQuestWeeklySetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FKtQuestWeeklySeasonDef> GetquestWeeklySeasonDefMap() {
		return memory.read<struct TMap<struct FString, struct FKtQuestWeeklySeasonDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtQuestWeeklySeasonDef
{
public:
	FKtQuestWeeklySeasonDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FKtQuestWeeklyDef> GetquestWeeklyDefMap() {
		return memory.read<struct TMap<struct FString, struct FKtQuestWeeklyDef>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGuideDrift
{
public:
	FGuideDrift(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbLeft() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbActivate() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnComboBoxSelection_Level
{
public:
	FOnComboBoxSelection_Level(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class ESelectInfo GetSelectionType() {
		return memory.read<enum class ESelectInfo>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSpinBoxValueCommitted_SlowMotion
{
public:
	FOnSpinBoxValueCommitted_SlowMotion(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInValue() {
		return memory.read<float>(m_addr + 0);
	}
	enum class ETextCommit GetCommitMethod() {
		return memory.read<enum class ETextCommit>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtQuestWeeklyDef
{
public:
	FKtQuestWeeklyDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetseasonWeekIdx() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FKtQuestDef GetquestDef() {
		return memory.read<struct FKtQuestDef>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRankPlayerInfo
{
public:
	FRankPlayerInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AKdPawn GetPlayerPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AKdPawn(ptr_addr);
	}
	struct UPawnStateComponent GetPawnStateComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UPawnStateComponent(ptr_addr);
	}
	struct UItemSlotComponent GetItemSlotComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UItemSlotComponent(ptr_addr);
	}
	struct URaceProgressComponent GetRaceProgressComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct URaceProgressComponent(ptr_addr);
	}
	struct USimulationMovementComponent GetSimulationMovementComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct USimulationMovementComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedShowItemListOnConfirmListDialog
{
public:
	FOnClickedShowItemListOnConfirmListDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayCharacterAnimationByMontage
{
public:
	FPlayCharacterAnimationByMontage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetInActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct UAnimMontage GetMontageToPlay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UAnimMontage(ptr_addr);
	}
	float GetInPlayRate() {
		return memory.read<float>(m_addr + 16);
	}
	enum class EMontagePlayReturnType GetReturnValueType() {
		return memory.read<enum class EMontagePlayReturnType>(m_addr + 20);
	}
	float GetInTimeToStartMontageAt() {
		return memory.read<float>(m_addr + 24);
	}
	bool GetbStopAllMontages() {
		return memory.read<bool>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtQuestDailySetDef
{
public:
	FKtQuestDailySetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FKtQuestDailySeasonDef> GetquestDailySeasonDefMap() {
		return memory.read<struct TMap<struct FString, struct FKtQuestDailySeasonDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMajorPersonalResultPlayerInitializer
{
public:
	FMajorPersonalResultPlayerInitializer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbSelf() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FString GetriderName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	enum class EKtAccountPlatform Getplatform() {
		return memory.read<enum class EKtAccountPlatform>(m_addr + 24);
	}
	enum class ERaceTeamType GetTeam() {
		return memory.read<enum class ERaceTeamType>(m_addr + 25);
	}
	bool GetbInUseBeginnerCare() {
		return memory.read<bool>(m_addr + 26);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtQuestDailyDef
{
public:
	FKtQuestDailyDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetseasonWeekIdx() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TMap<struct FString, struct FKtQuestSetDef> GetquestDefSetMap() {
		return memory.read<struct TMap<struct FString, struct FKtQuestSetDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedShadowButtonOn
{
public:
	FOnClickedShadowButtonOn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMail_OnClickedBackButton
{
public:
	FMail_OnClickedBackButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInviteMenu_Find_AddFriend
{
public:
	FInviteMenu_Find_AddFriend(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedGiftButton
{
public:
	FOnClickedGiftButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtQuestSetDef
{
public:
	FKtQuestSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FKtQuestDef> GetquestDefMap() {
		return memory.read<struct TMap<struct FString, struct FKtQuestDef>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FECS_SplinePatrolComponent
{
public:
	FECS_SplinePatrolComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FKtStockShopDef
{
public:
	FKtStockShopDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtStockDef> GetstockDefVector() {
		return memory.read<struct TArray<struct FKtStockDef>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtRandomTrackListDef
{
public:
	FKtRandomTrackListDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtRandomTrackDef> GetRandomTrackDefVector() {
		return memory.read<struct TArray<struct FKtRandomTrackDef>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSlotFromRoot
{
public:
	FGetSlotFromRoot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSlotName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct UPanelWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UPanelWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtRandomTrackDef
{
public:
	FKtRandomTrackDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetAlias() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TArray<struct FString> GetTrackAlias() {
		return memory.read<struct TArray<struct FString>>(m_addr + 16);
	}
	struct TArray<enum class EKtLevelType> GetTrackLevelType() {
		return memory.read<struct TArray<enum class EKtLevelType>>(m_addr + 32);
	}
	struct TArray<int32_t> GettrackDifficulty() {
		return memory.read<struct TArray<int32_t>>(m_addr + 48);
	}
	struct TArray<struct FString> GetTrackThemeType() {
		return memory.read<struct TArray<struct FString>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FSessionDebugRequest
{
public:
	FSessionDebugRequest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetrequestUuid() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString Getip() {
		return memory.read<struct FString>(m_addr + 16);
	}
	int32_t GetPort() {
		return memory.read<int32_t>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnGoToMissionClicked
{
public:
	FOnGoToMissionClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndexInList() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedRepairDialogClose
{
public:
	FOnClickedRepairDialogClose(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtTrackListDef
{
public:
	FKtTrackListDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtTrackDef> GettrackDefVector() {
		return memory.read<struct TArray<struct FKtTrackDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedShowKcoinPriceDetail
{
public:
	FOnClickedShowKcoinPriceDetail(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_GfsMakeFriendRequest
{
public:
	FDev_GfsMakeFriendRequest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetaccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCustomHUDWidgetParameterLimitData
{
public:
	FCustomHUDWidgetParameterLimitData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMinScale() {
		return memory.read<float>(m_addr + 8);
	}
	float GetMaxScale() {
		return memory.read<float>(m_addr + 12);
	}
	float GetMinOpacity() {
		return memory.read<float>(m_addr + 16);
	}
	float GetMaxOpacity() {
		return memory.read<float>(m_addr + 20);
	}
	bool GetbAllowOpacityCustom() {
		return memory.read<bool>(m_addr + 24);
	}
	bool GetbDisableAllowed() {
		return memory.read<bool>(m_addr + 25);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPrevRankingBoardPageButton
{
public:
	FOnClickedPrevRankingBoardPageButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedUpgradeBtn
{
public:
	FOnClickedUpgradeBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHUDWidgetCustomData
{
public:
	FHUDWidgetCustomData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetOpacity() {
		return memory.read<float>(m_addr + 0);
	}
	struct FVector2D GetScale() {
		return memory.read<struct FVector2D>(m_addr + 4);
	}
	struct FVector2D Getposition() {
		return memory.read<struct FVector2D>(m_addr + 12);
	}
	struct FVector2D GetAlignment() {
		return memory.read<struct FVector2D>(m_addr + 20);
	}
	struct FAnchors GetAnchors() {
		return memory.read<struct FAnchors>(m_addr + 28);
	}
	bool GetbIsActivated() {
		return memory.read<bool>(m_addr + 44);
	}
	struct FString GetWidgetName() {
		return memory.read<struct FString>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCouponIdTextCommitted
{
public:
	FOnCouponIdTextCommitted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	enum class ETextCommit GetCommitMethod() {
		return memory.read<enum class ETextCommit>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FCsSessionPreparationInfo
{
public:
	FCsSessionPreparationInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetgameId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetTrack() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct TArray<struct FKtItemPreset> Getplayers() {
		return memory.read<struct TArray<struct FKtItemPreset>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlatfromPostFix
{
public:
	FPlatfromPostFix(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPlatformPostFix GetPlatformPostfix() {
		return memory.read<enum class EPlatformPostFix>(m_addr + 0);
	}
	struct FString GetPostFix() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FDataAssetTableRow
{
public:
	FDataAssetTableRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EDataAssetType GetDataAssetType() {
		return memory.read<enum class EDataAssetType>(m_addr + 8);
	}
	struct TSoftObjectPtr<UDataAsset> GetDataAssetObject() {
		return memory.read<struct TSoftObjectPtr<UDataAsset>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedbtnAchievement
{
public:
	FOnClickedbtnAchievement(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSmsTravelInfo
{
public:
	FSmsTravelInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetTrackAlias() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDriftAngleInfo
{
public:
	FDriftAngleInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<UMaterialInstance> GetMaterial45() {
		return memory.read<struct TSoftObjectPtr<UMaterialInstance>>(m_addr + 0);
	}
	struct TSoftObjectPtr<UMaterialInstance> GetMaterial90() {
		return memory.read<struct TSoftObjectPtr<UMaterialInstance>>(m_addr + 40);
	}
	struct TSoftObjectPtr<UMaterialInstance> GetMaterial180() {
		return memory.read<struct TSoftObjectPtr<UMaterialInstance>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FEventData
{
public:
	FEventData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAccountEvent GetAccountEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UAccountEvent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_PretendSTTReceived
{
public:
	FDev_PretendSTTReceived(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetMessage() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetaccountId() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioKartBodyPause
{
public:
	FScenarioKartBodyPause(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbRememberDriveInfo() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKartForceFeedbackTableRow
{
public:
	FKartForceFeedbackTableRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UForceFeedbackEffect GetForceFeedbackEffect() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UForceFeedbackEffect(ptr_addr);
	}
	bool GetbLoop() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveObstacle
{
public:
	FRemoveObstacle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickEditExit
{
public:
	FOnClickEditExit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetArrowTransform
{
public:
	FSetArrowTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetMyKartLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetMyKartBackward() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FVector GetAnotherKartLocation() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	float GetMinDiatance() {
		return memory.read<float>(m_addr + 36);
	}
	float GetMaxDistance() {
		return memory.read<float>(m_addr + 40);
	}
	float GetViewAngle() {
		return memory.read<float>(m_addr + 44);
	}
	float GetOutAngle() {
		return memory.read<float>(m_addr + 48);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FMaterialFxPlayingInfo
{
public:
	FMaterialFxPlayingInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCurveFloat GetWeightCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetCycleCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UCurveFloat(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedRegister
{
public:
	FOnClickedRegister(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticastNotifyGetTeamBoost
{
public:
	FMulticastNotifyGetTeamBoost(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTeam() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAccountReset_OnClickedAccountResetConfirmBtn
{
public:
	FAccountReset_OnClickedAccountResetConfirmBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtSessionRaceResultTeam
{
public:
	FKtSessionRaceResultTeam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTeam() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t Getrank() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtSessionPlayerAuxData
{
public:
	FKtSessionPlayerAuxData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetPartyId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetpartyMaster() {
		return memory.read<bool>(m_addr + 16);
	}
	struct FString GetredisChannelName() {
		return memory.read<struct FString>(m_addr + 24);
	}
	struct FString GetraceResultKey() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString Getlog_partyId() {
		return memory.read<struct FString>(m_addr + 56);
	}
	int32_t Getlog_userLevel() {
		return memory.read<int32_t>(m_addr + 72);
	}
	int32_t Getlog_userLevel2() {
		return memory.read<int32_t>(m_addr + 76);
	}
	bool Getlog_usePremiumPass() {
		return memory.read<bool>(m_addr + 80);
	}
	struct FString Getlog_userFromIp() {
		return memory.read<struct FString>(m_addr + 88);
	}
	struct FString Getnxlog_SID() {
		return memory.read<struct FString>(m_addr + 104);
	}
	struct FString Getlog_cc() {
		return memory.read<struct FString>(m_addr + 120);
	}
	int32_t Getgpp() {
		return memory.read<int32_t>(m_addr + 136);
	}
	int32_t Getlog_ispcroom() {
		return memory.read<int32_t>(m_addr + 140);
	}
	struct FString Getlog_grandPrixId() {
		return memory.read<struct FString>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCloseRewardDialog
{
public:
	FOnCloseRewardDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPrAttendanceEventInfo
{
public:
	FOnPrAttendanceEventInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPrResult GetResult() {
		return memory.read<struct FPrResult>(m_addr + 0);
	}
	struct UPrPacket GetReceivedPacket() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UPrPacket(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUnHover
{
public:
	FOnUnHover(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtRegularGrandPrixData
{
public:
	FKtRegularGrandPrixData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetgrandPrixId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetseasonId() {
		return memory.read<struct FString>(m_addr + 16);
	}
	int32_t Getgpp() {
		return memory.read<int32_t>(m_addr + 32);
	}
	enum class EKtGrandPrixSubTier Gettier() {
		return memory.read<enum class EKtGrandPrixSubTier>(m_addr + 36);
	}
	int32_t GetstatRank1() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetstatRank2() {
		return memory.read<int32_t>(m_addr + 44);
	}
	int32_t GetstatRank3() {
		return memory.read<int32_t>(m_addr + 48);
	}
	int32_t GetstatTeamWin() {
		return memory.read<int32_t>(m_addr + 52);
	}
	int32_t GetstatTeamLose() {
		return memory.read<int32_t>(m_addr + 56);
	}
	int32_t GetstatTeamDraw() {
		return memory.read<int32_t>(m_addr + 60);
	}
	int32_t GetstatRetire() {
		return memory.read<int32_t>(m_addr + 64);
	}
	int32_t GetstatRaceCount() {
		return memory.read<int32_t>(m_addr + 68);
	}
	int32_t Getrank() {
		return memory.read<int32_t>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtRankerInfo
{
public:
	FKtRankerInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getrank() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetriderName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FString GetemblemItemIdOn() {
		return memory.read<struct FString>(m_addr + 24);
	}
	enum class EKtAccountPlatform Getplatform() {
		return memory.read<enum class EKtAccountPlatform>(m_addr + 40);
	}
	int32_t Getgpp() {
		return memory.read<int32_t>(m_addr + 44);
	}
	enum class EKtGrandPrixSubTier Gettier() {
		return memory.read<enum class EKtGrandPrixSubTier>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FTagData
{
public:
	FTagData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FItemAffectParam
{
public:
	FItemAffectParam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AItem GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AItem(ptr_addr);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	bool GetbFilterNeeded() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedGrandPrixStartButton
{
public:
	FOnClickedGrandPrixStartButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLobbyUiDefDeviceInfo
{
public:
	FLobbyUiDefDeviceInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRemoveAxisMapping
{
public:
	FRemoveAxisMapping(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetAxisName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetbGamepadOnly() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetbSaveSetting() {
		return memory.read<bool>(m_addr + 9);
	}
	bool GetbSaveConfig() {
		return memory.read<bool>(m_addr + 10);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 11);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_Sort
{
public:
	FOnClicked_Sort(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FItemSlot
{
public:
	FItemSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AItem GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRankGradeSet
{
public:
	FRankGradeSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int8_t GetTopStart() {
		return memory.read<int8_t>(m_addr + 8);
	}
	int8_t GetTopEnd() {
		return memory.read<int8_t>(m_addr + 9);
	}
	int8_t GetHighStart() {
		return memory.read<int8_t>(m_addr + 10);
	}
	int8_t GetHighEnd() {
		return memory.read<int8_t>(m_addr + 11);
	}
	int8_t GetMidStart() {
		return memory.read<int8_t>(m_addr + 12);
	}
	int8_t GetMidEnd() {
		return memory.read<int8_t>(m_addr + 13);
	}
	int8_t GetLowStart() {
		return memory.read<int8_t>(m_addr + 14);
	}
	int8_t GetLowEnd() {
		return memory.read<int8_t>(m_addr + 15);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseCoinTypeInfo
{
public:
	FLicenseCoinTypeInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetScore() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 4);
	}
	float GetCollisionSphereRadius() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FItemProbSet
{
public:
	FItemProbSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EItemType GetEnumItemID() {
		return memory.read<enum class EItemType>(m_addr + 8);
	}
	char GetprobTopRank() {
		return memory.read<char>(m_addr + 9);
	}
	char GetprobHighRank() {
		return memory.read<char>(m_addr + 10);
	}
	char GetprobMidRank() {
		return memory.read<char>(m_addr + 11);
	}
	char GetprobLowRank() {
		return memory.read<char>(m_addr + 12);
	}
	char GetprobBottomRank() {
		return memory.read<char>(m_addr + 13);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedLogoutConfirm
{
public:
	FOnClickedLogoutConfirm(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_ChangeReplayFriendlyName
{
public:
	FDev_ChangeReplayFriendlyName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReplayName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetNewFriendlyName() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FHitWidgetRowInfo
{
public:
	FHitWidgetRowInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture2D GetIconTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetIconTextureSmall() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UTexture2D(ptr_addr);
	}
	struct FString GetPlayerName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	int32_t GetItemUniqueId() {
		return memory.read<int32_t>(m_addr + 32);
	}
	int32_t GetTargetNum() {
		return memory.read<int32_t>(m_addr + 36);
	}
	enum class EHitState GetHitState() {
		return memory.read<enum class EHitState>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FKeyPresetOverrides
{
public:
	FKeyPresetOverrides(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FInputAxisKeyMapping> GetAxisOverrides() {
		return memory.read<struct TArray<struct FInputAxisKeyMapping>>(m_addr + 0);
	}
	struct TArray<struct FInputActionKeyMapping> GetActionOverrides() {
		return memory.read<struct TArray<struct FInputActionKeyMapping>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_ChangeShadowPawnOpacity
{
public:
	FDev_ChangeShadowPawnOpacity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetOpacity() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKartMovementBuffArray
{
public:
	FKartMovementBuffArray(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UKartMovementBuff> GetBuffs() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UKartMovementBuff>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayMontageOnLoop
{
public:
	FPlayMontageOnLoop(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAnimMontage GetMontage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAnimMontage(ptr_addr);
	}
	bool GetbInterrupted() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnBeginRaceCountdown
{
public:
	FOnBeginRaceCountdown(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBeginTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTouchKeyGuideNameSlots
{
public:
	FTouchKeyGuideNameSlots(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UNamedSlot> GetItemGuideSlots() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UNamedSlot>(ptr_addr);
	}
	struct TArray<struct UNamedSlot> GetInstanceBoostSlots() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct TArray<struct UNamedSlot>(ptr_addr);
	}
	struct TArray<struct UNamedSlot> GetDriftSlots() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct TArray<struct UNamedSlot>(ptr_addr);
	}
	struct UNamedSlot GetLeftSteerSlot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetRightSteerSlot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetResetSlot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UNamedSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtDisabledChatDef
{
public:
	FKtDisabledChatDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetreserveIdType() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetreserveId() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FTextScrollInfo
{
public:
	FTextScrollInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetScrollFlags() {
		return memory.read<char>(m_addr + 0);
	}
	float GetScrollSpeed() {
		return memory.read<float>(m_addr + 4);
	}
	float GetRepeatDelay() {
		return memory.read<float>(m_addr + 8);
	}
	float GetScrollStartXOffset() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_Back
{
public:
	FOnClicked_Back(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtStaffCreditsDef
{
public:
	FKtStaffCreditsDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetTitle() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GettitleTextStyleName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	int32_t GetbetweenSpace() {
		return memory.read<int32_t>(m_addr + 32);
	}
	struct FString Getcontents() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetcontentsTextStyleName() {
		return memory.read<struct FString>(m_addr + 56);
	}
	int32_t GetbottomSpace() {
		return memory.read<int32_t>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocused_LicenseList
{
public:
	FOnFocused_LicenseList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPredict_wsyoon_ver1
{
public:
	FPredict_wsyoon_ver1(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<float> GetInputs() {
		return memory.read<struct TArray<float>>(m_addr + 0);
	}
	struct TArray<float> GetReturnValue() {
		return memory.read<struct TArray<float>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtAchievementTendencyDef
{
public:
	FKtAchievementTendencyDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetcompleteCount() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<enum class EKtEmblemQuestTendency> GettopTendencies() {
		return memory.read<struct TArray<enum class EKtEmblemQuestTendency>>(m_addr + 8);
	}
	struct FText GetTitle() {
		return memory.read<struct FText>(m_addr + 24);
	}
	struct FText GetDescription() {
		return memory.read<struct FText>(m_addr + 48);
	}
	struct TSoftObjectPtr<UTexture2D> GetImage() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_LootBox_SetTestLootItem
{
public:
	FDev_LootBox_SetTestLootItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetItemIdWithCount() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FWrappingCollectionRow
{
public:
	FWrappingCollectionRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FWrappingCollection> GetCollectionList() {
		return memory.read<struct TArray<struct FWrappingCollection>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMediaPlayListRow
{
public:
	FMediaPlayListRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<UMediaPlaylist> GetMediaPlaylist() {
		return memory.read<struct TSoftObjectPtr<UMediaPlaylist>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FClientTimeAttackTrackAliasDef
{
public:
	FClientTimeAttackTrackAliasDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetdefaultIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<struct FString> GettrackAliasVector() {
		return memory.read<struct TArray<struct FString>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_StickerDeleteAll
{
public:
	FOnClicked_StickerDeleteAll(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMajorPersonalResultPlayerEditorInitializer
{
public:
	FMajorPersonalResultPlayerEditorInitializer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMajorPersonalResultPlayerRaceState GetRaceState() {
		return memory.read<enum class EMajorPersonalResultPlayerRaceState>(m_addr + 0);
	}
	struct FMajorPersonalResultPlayerInitializer GetInitializer() {
		return memory.read<struct FMajorPersonalResultPlayerInitializer>(m_addr + 8);
	}
	int32_t Getrank() {
		return memory.read<int32_t>(m_addr + 40);
	}
	float GetFinishTime() {
		return memory.read<float>(m_addr + 44);
	}
	float GetRemainingDistance() {
		return memory.read<float>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnActivated
{
public:
	FOnActivated(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbActivate() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKdLootBoxConstValue
{
public:
	FKdLootBoxConstValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<enum class ELootBoxConstFloatType, float> GetConstFloatMap() {
		return memory.read<struct TMap<enum class ELootBoxConstFloatType, float>>(m_addr + 8);
	}
	enum class ELootAttachSocketName GetLootAttachSocketNameForLootBox() {
		return memory.read<enum class ELootAttachSocketName>(m_addr + 88);
	}
	enum class ELootAttachSocketName GetLootAttachSocketNameForLootPlate() {
		return memory.read<enum class ELootAttachSocketName>(m_addr + 89);
	}
	struct FKdLootSpawnFxParam GetSpawnFxParam() {
		return memory.read<struct FKdLootSpawnFxParam>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FServer_GainItem
{
public:
	FServer_GainItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}
	char GetType() {
		return memory.read<char>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKdOutGamePawnTransformData
{
public:
	FKdOutGamePawnTransformData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRelativeScale() {
		return memory.read<float>(m_addr + 0);
	}
	float GetLocalRotationYaw() {
		return memory.read<float>(m_addr + 4);
	}
	struct FVector GetLocalOffset() {
		return memory.read<struct FVector>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientGrandPrixMainTierDef
{
public:
	FKtClientGrandPrixMainTierDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtGrandPrixMainTier GetmainTier() {
		return memory.read<enum class EKtGrandPrixMainTier>(m_addr + 0);
	}
	struct TArray<struct FKtClientGrandPrixSubTierDef> GetsubTiers() {
		return memory.read<struct TArray<struct FKtClientGrandPrixSubTierDef>>(m_addr + 8);
	}
	struct FText GetName() {
		return memory.read<struct FText>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_BeginnerCare
{
public:
	FDev_BeginnerCare(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInEnable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientQuestEmblemSetDef
{
public:
	FKtClientQuestEmblemSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FKtClientQuestEmblemDef> GetquestEmblemDefMap() {
		return memory.read<struct TMap<struct FString, struct FKtClientQuestEmblemDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientQuestEmblemDef
{
public:
	FKtClientQuestEmblemDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDifficulty() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetseasonId() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FText GetemblemQuestTitle() {
		return memory.read<struct FText>(m_addr + 24);
	}
	struct FText GetemblemQuestDesc() {
		return memory.read<struct FText>(m_addr + 48);
	}
	struct FString GetquestPeriod() {
		return memory.read<struct FString>(m_addr + 72);
	}
	struct FKtClientQuestEmblemMissionSetDef GetquestDef() {
		return memory.read<struct FKtClientQuestEmblemMissionSetDef>(m_addr + 88);
	}
	enum class EKtEmblemQuestGrade GetemblemQuestGrade() {
		return memory.read<enum class EKtEmblemQuestGrade>(m_addr + 104);
	}
	enum class EKtEmblemQuestCategory GetemblemQuestCategory() {
		return memory.read<enum class EKtEmblemQuestCategory>(m_addr + 105);
	}
	enum class EKtEmblemQuestTendency GetemblemQuestTendency() {
		return memory.read<enum class EKtEmblemQuestTendency>(m_addr + 106);
	}
	bool GetfirstAchievementOption() {
		return memory.read<bool>(m_addr + 107);
	}
	bool GetglobalAnnouncementOption() {
		return memory.read<bool>(m_addr + 108);
	}
	struct FText GetemblemQuestDesc_Add() {
		return memory.read<struct FText>(m_addr + 112);
	}
	struct TSoftObjectPtr<UTexture2D> GeticonImage() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_ChangePlatform
{
public:
	FDev_ChangePlatform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetID1() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetID2() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetID3() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetID4() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetID5() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetID6() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetID7() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetID8() {
		return memory.read<int32_t>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnComboBoxSelection_Throw
{
public:
	FOnComboBoxSelection_Throw(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class ESelectInfo GetSelectionType() {
		return memory.read<enum class ESelectInfo>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_AddSticker
{
public:
	FOnClicked_AddSticker(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientQuestEventSetDef
{
public:
	FKtClientQuestEventSetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FKtClientQuestEventDef> GetquestEventDefMap() {
		return memory.read<struct TMap<struct FString, struct FKtClientQuestEventDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryPaintMaterial
{
public:
	FLiveryPaintMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetMaterialName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	enum class EKtItemGrade GetMaterialGrade() {
		return memory.read<enum class EKtItemGrade>(m_addr + 8);
	}
	enum class ELiveryMaterialType GetMaterialType() {
		return memory.read<enum class ELiveryMaterialType>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientQuestDailySetDef
{
public:
	FKtClientQuestDailySetDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FKtClientQuestDailySeasonDef> GetquestDailySeasonDefMap() {
		return memory.read<struct TMap<struct FString, struct FKtClientQuestDailySeasonDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_EditMenu
{
public:
	FOnClicked_EditMenu(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientQuestDailyDef
{
public:
	FKtClientQuestDailyDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetseasonWeekIdx() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TMap<struct FString, struct FKtClientQuestSetDef> GetquestDefSetMap() {
		return memory.read<struct TMap<struct FString, struct FKtClientQuestSetDef>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientTrackListDef
{
public:
	FKtClientTrackListDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetLastUpdateDate() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct TArray<struct FKtClientTrackDef> GettrackDefVector() {
		return memory.read<struct TArray<struct FKtClientTrackDef>>(m_addr + 24);
	}
	struct FString GetCustomGameDefaultTrackAlias() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetTimeAttackDefaultTrackAlias() {
		return memory.read<struct FString>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedAccountUnlinkBtn
{
public:
	FOnClickedAccountUnlinkBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKtClientTrackDef
{
public:
	FKtClientTrackDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetThemeName() {
		return memory.read<struct FText>(m_addr + 56);
	}
	struct FText GetTrackName() {
		return memory.read<struct FText>(m_addr + 80);
	}
	struct FText GetTrackDesc() {
		return memory.read<struct FText>(m_addr + 104);
	}
	struct TSoftObjectPtr<UWorld> GetTrackLevel() {
		return memory.read<struct TSoftObjectPtr<UWorld>>(m_addr + 128);
	}
	int32_t GetSortIndex() {
		return memory.read<int32_t>(m_addr + 168);
	}
	struct TArray<int32_t> GetDisplayDifficulty() {
		return memory.read<struct TArray<int32_t>>(m_addr + 176);
	}
	struct TSoftObjectPtr<UTexture2D> GetTrackImage() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 192);
	}
	struct TSoftObjectPtr<UTexture2D> GetThumbnail() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 232);
	}
	struct TSoftObjectPtr<UTexture2D> GetTrackLoadingImage() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 272);
	}
	struct TSoftObjectPtr<UMediaPlaylist> GetTrackMediaPlayList() {
		return memory.read<struct TSoftObjectPtr<UMediaPlaylist>>(m_addr + 312);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLatencyType
{
public:
	FGetLatencyType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKdImageRow
{
public:
	FKdImageRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<UTexture2D> GetInImage() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKdLevelExpProp
{
public:
	FKdLevelExpProp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLevel() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetExp() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdate_QuestUI
{
public:
	FOnUpdate_QuestUI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInit() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRacePlayerEquipDesc
{
public:
	FRacePlayerEquipDesc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtItemGrade GetKartGrade() {
		return memory.read<enum class EKtItemGrade>(m_addr + 0);
	}
	struct FKartDesc GetKartDesc() {
		return memory.read<struct FKartDesc>(m_addr + 8);
	}
	struct FCharacterDesc GetCharacterDesc() {
		return memory.read<struct FCharacterDesc>(m_addr + 192);
	}
	struct FString GetliverySignedUrl() {
		return memory.read<struct FString>(m_addr + 288);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentCameraComponent
{
public:
	FGetCurrentCameraComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCameraComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UCameraComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FKdTextStyleRow
{
public:
	FKdTextStyleRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTextBlockStyle GetTextStyle() {
		return memory.read<struct FTextBlockStyle>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FAutoFillInsideInfo
{
public:
	FAutoFillInsideInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetAutoFillInside() {
		return memory.read<bool>(m_addr + 0);
	}
	float GetAutoFillInsideMin() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FKeyTexture2
{
public:
	FKeyTexture2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture2D GetKeyTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetKeyPressTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickConfirmDialogPurchaseCheckBtn
{
public:
	FOnClickConfirmDialogPurchaseCheckBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBarricadeItemSpawnStruct
{
public:
	FBarricadeItemSpawnStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDistance() {
		return memory.read<float>(m_addr + 0);
	}
	float GetRightVectorOffset() {
		return memory.read<float>(m_addr + 4);
	}
	float GetYawOffset() {
		return memory.read<float>(m_addr + 8);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseBossBananaPatternSet
{
public:
	FLicenseBossBananaPatternSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetPatternDelay() {
		return memory.read<float>(m_addr + 0);
	}
	struct TArray<struct FLicenseBossBananaPattern> GetNormalPatternSet() {
		return memory.read<struct TArray<struct FLicenseBossBananaPattern>>(m_addr + 8);
	}
	struct TArray<struct FLicenseBossBananaPattern> GetRagePatternSet() {
		return memory.read<struct TArray<struct FLicenseBossBananaPattern>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseBossBananaPatternInst
{
public:
	FLicenseBossBananaPatternInst(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDistance() {
		return memory.read<float>(m_addr + 0);
	}
	struct TArray<float> GetRightOffset() {
		return memory.read<struct TArray<float>>(m_addr + 8);
	}
	float GetDelay() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnGfsFriendSearch
{
public:
	FOnGfsFriendSearch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAccountPlatformData> GetaccountData() {
		return memory.read<struct TArray<struct FAccountPlatformData>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioMessageData
{
public:
	FScenarioMessageData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetVisibleWidget() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FText GetPortraitMessage() {
		return memory.read<struct FText>(m_addr + 8);
	}
	float GetUpdatePortraitTime() {
		return memory.read<float>(m_addr + 32);
	}
	struct TSoftObjectPtr<UFMODEvent> GetPortraitTextSound() {
		return memory.read<struct TSoftObjectPtr<UFMODEvent>>(m_addr + 40);
	}
	struct FText GetDescriptMessage() {
		return memory.read<struct FText>(m_addr + 80);
	}
	float GetUpdateDescriptTime() {
		return memory.read<float>(m_addr + 104);
	}
	struct TSoftObjectPtr<UFMODEvent> GetDescriptTextSound() {
		return memory.read<struct TSoftObjectPtr<UFMODEvent>>(m_addr + 112);
	}
	struct FScenarioTitleWidgetData GetTitleData() {
		return memory.read<struct FScenarioTitleWidgetData>(m_addr + 152);
	}
	struct FScenarioKeyGuideData GetKeyGuideData() {
		return memory.read<struct FScenarioKeyGuideData>(m_addr + 200);
	}
	bool GetbEnableKeyTrigger() {
		return memory.read<bool>(m_addr + 248);
	}
	bool GetbKeyBlackList() {
		return memory.read<bool>(m_addr + 249);
	}
	struct TArray<struct FScenarioKeyData> GetKeyContainer() {
		return memory.read<struct TArray<struct FScenarioKeyData>>(m_addr + 256);
	}
	bool GetbKeyUpBlackList() {
		return memory.read<bool>(m_addr + 272);
	}
	struct TArray<struct FScenarioKeyData> GetKeyUpContainer() {
		return memory.read<struct TArray<struct FScenarioKeyData>>(m_addr + 280);
	}
	struct TArray<struct FScenarioKeyAccumData> GetKeyAccumDataContainer() {
		return memory.read<struct TArray<struct FScenarioKeyAccumData>>(m_addr + 296);
	}
	float GetDelayTime() {
		return memory.read<float>(m_addr + 312);
	}
	bool GetUseGameDeltaTime() {
		return memory.read<bool>(m_addr + 316);
	}
	float GetGameDeltaTime() {
		return memory.read<float>(m_addr + 320);
	}
	struct FScenarioTriggerTarget GetTriggerContainer() {
		return memory.read<struct FScenarioTriggerTarget>(m_addr + 328);
	}

private:
	std::uint64_t m_addr = 0;
};class FPatternTransition
{
public:
	FPatternTransition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRatio() {
		return memory.read<float>(m_addr + 0);
	}
	struct FString GetPattern1() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FString GetPattern2() {
		return memory.read<struct FString>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseItemCubeInfo
{
public:
	FLicenseItemCubeInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<enum class EItemType> GetItemTypeList() {
		return memory.read<struct TArray<enum class EItemType>>(m_addr + 0);
	}
	float GetDistance() {
		return memory.read<float>(m_addr + 16);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct FVector GetRightVector() {
		return memory.read<struct FVector>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedCancelOnPurchaseConfirmDialog
{
public:
	FOnClickedCancelOnPurchaseConfirmDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseBaseUI
{
public:
	FLicenseBaseUI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getrank() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetItemSlot() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetTachoMeter() {
		return memory.read<bool>(m_addr + 2);
	}
	bool GetlapTime() {
		return memory.read<bool>(m_addr + 3);
	}
	bool GetMinimap() {
		return memory.read<bool>(m_addr + 4);
	}
	bool GetFeedMirror() {
		return memory.read<bool>(m_addr + 5);
	}
	bool GetRiderNameTag() {
		return memory.read<bool>(m_addr + 6);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseDriftGaugeDef
{
public:
	FLicenseDriftGaugeDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELicenseGaugeChargingType GetGaugeChargingType() {
		return memory.read<enum class ELicenseGaugeChargingType>(m_addr + 0);
	}
	float GetDistance() {
		return memory.read<float>(m_addr + 4);
	}
	float GetRightVectorOffset() {
		return memory.read<float>(m_addr + 8);
	}
	float GetZOffset() {
		return memory.read<float>(m_addr + 12);
	}
	struct FRotator GetRotationOffset() {
		return memory.read<struct FRotator>(m_addr + 16);
	}
	struct FVector GetGateScale() {
		return memory.read<struct FVector>(m_addr + 28);
	}
	float GetGaugePercent1() {
		return memory.read<float>(m_addr + 40);
	}
	float GetGaugePercent2() {
		return memory.read<float>(m_addr + 44);
	}
	struct FTransform GetGateTransform() {
		return memory.read<struct FTransform>(m_addr + 48);
	}
	struct FVector GetLeftPosition() {
		return memory.read<struct FVector>(m_addr + 96);
	}
	struct FVector GetRightPosition() {
		return memory.read<struct FVector>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};class FDriftData
{
public:
	FDriftData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKey GetKey() {
		return memory.read<struct FKey>(m_addr + 0);
	}
	float GetKeyDownRaceTime() {
		return memory.read<float>(m_addr + 24);
	}
	float GetKeyUpRaceTime() {
		return memory.read<float>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseDriftTutorialMission
{
public:
	FLicenseDriftTutorialMission(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELicenseDriftTutorialMissionType GetmissionType() {
		return memory.read<enum class ELicenseDriftTutorialMissionType>(m_addr + 0);
	}
	float GetDistanceOrTime() {
		return memory.read<float>(m_addr + 4);
	}
	float GetTime() {
		return memory.read<float>(m_addr + 8);
	}
	bool GetbClear() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneFMODAudioSectionTemplate
{
public:
	FMovieSceneFMODAudioSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieSceneFMODAudioSection GetAudioSection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UMovieSceneFMODAudioSection(ptr_addr);
	}
	struct FMovieSceneByteChannel GetControlKeys() {
		return memory.read<struct FMovieSceneByteChannel>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseItemCubeDesc
{
public:
	FLicenseItemCubeDesc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLineIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct AGoItem_Cube GetItemCube() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AGoItem_Cube(ptr_addr);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	enum class EItemType GetItemType() {
		return memory.read<enum class EItemType>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseJumpPhysicsData
{
public:
	FLicenseJumpPhysicsData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 0);
	}
	float GetVelocityMultiplier() {
		return memory.read<float>(m_addr + 48);
	}
	float GetTimeDelation() {
		return memory.read<float>(m_addr + 52);
	}
	struct TSoftObjectPtr<ULevelSequence> GetEventSequence() {
		return memory.read<struct TSoftObjectPtr<ULevelSequence>>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPlayerVoiceChatStatus
{
public:
	FOnPlayerVoiceChatStatus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInPlayerIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetInVoiceStatus() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_GfsRemoveFriend
{
public:
	FDev_GfsRemoveFriend(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetaccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseRocketActorInfo
{
public:
	FLicenseRocketActorInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetSpawnColor() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}
	struct FText GetUniqueId() {
		return memory.read<struct FText>(m_addr + 16);
	}
	int32_t GetTeamIndex() {
		return memory.read<int32_t>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseObjectSpawnSplineData
{
public:
	FLicenseObjectSpawnSplineData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetActorTransform() {
		return memory.read<struct FTransform>(m_addr + 0);
	}
	struct FSplineCurves GetSplineCurves() {
		return memory.read<struct FSplineCurves>(m_addr + 48);
	}
	float GetInterval() {
		return memory.read<float>(m_addr + 160);
	}
	float GetObjectScale() {
		return memory.read<float>(m_addr + 164);
	}
	struct FVector GetObjectAddLocation() {
		return memory.read<struct FVector>(m_addr + 168);
	}
	struct FRotator GetObjectAddRotation() {
		return memory.read<struct FRotator>(m_addr + 180);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryWrappingDesc
{
public:
	FLiveryWrappingDesc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELiveryWrappingCategory GetCategory() {
		return memory.read<enum class ELiveryWrappingCategory>(m_addr + 0);
	}
	int32_t GetIndexInCategory() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FLiveryWrappingTransform GetTransform() {
		return memory.read<struct FLiveryWrappingTransform>(m_addr + 8);
	}
	struct TArray<struct FLiveryWrappingGroup> GetGroupInfos() {
		return memory.read<struct TArray<struct FLiveryWrappingGroup>>(m_addr + 48);
	}
	int32_t GetDescIndex() {
		return memory.read<int32_t>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseNoticeSaveGameData
{
public:
	FLicenseNoticeSaveGameData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetRaceCount() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetbShow() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FIndividualMyColor
{
public:
	FIndividualMyColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTeamColor GetReturnValue() {
		return memory.read<struct FTeamColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNextTipButtonClicked
{
public:
	FOnNextTipButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNotUsed() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMoveToLicenseFromTrackDialog
{
public:
	FMoveToLicenseFromTrackDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetRequiredLicenseTypeIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticastNoTarget
{
public:
	FMulticastNoTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UItemComponent GetUser() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UItemComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseResultData
{
public:
	FLicenseResultData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCount() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetIgnoreCount() {
		return memory.read<int32_t>(m_addr + 4);
	}
	float GetBaseScore() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetScore() {
		return memory.read<int32_t>(m_addr + 12);
	}
	float GetfloatData() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryPaintDesc
{
public:
	FLiveryPaintDesc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetGlobalColorOverride() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}
	int32_t GetIndexInCollection() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSequenceKartMovementKeys
{
public:
	FSequenceKartMovementKeys(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetFrame() {
		return memory.read<struct FFrameNumber>(m_addr + 0);
	}
	struct FKartRepMovement GetMovement() {
		return memory.read<struct FKartRepMovement>(m_addr + 16);
	}
	struct FReplicatedKartState GetState() {
		return memory.read<struct FReplicatedKartState>(m_addr + 80);
	}
	float GetSpeed() {
		return memory.read<float>(m_addr + 96);
	}
	float GetDriftGauge() {
		return memory.read<float>(m_addr + 100);
	}
	float GetDriftProgress() {
		return memory.read<float>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};class FReplicatedKartState
{
public:
	FReplicatedKartState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetAccel() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetBrake() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetSteerLeft() {
		return memory.read<bool>(m_addr + 2);
	}
	bool GetSteerRight() {
		return memory.read<bool>(m_addr + 3);
	}
	bool GetbDriftKeyPressing() {
		return memory.read<bool>(m_addr + 4);
	}
	enum class EBoostKind GetBoostKind() {
		return memory.read<enum class EBoostKind>(m_addr + 5);
	}
	float GetBoostLeft() {
		return memory.read<float>(m_addr + 8);
	}
	enum class EDriveState GetDriveState() {
		return memory.read<enum class EDriveState>(m_addr + 12);
	}
	bool GetSlipStream() {
		return memory.read<bool>(m_addr + 13);
	}
	bool Getdraft() {
		return memory.read<bool>(m_addr + 14);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseTargetRankPattern
{
public:
	FLicenseTargetRankPattern(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetStartPattern() {
		return memory.read<struct FString>(m_addr + 0);
	}
	float GetDuration() {
		return memory.read<float>(m_addr + 16);
	}
	struct TMap<struct FString, struct FPatternTransition> GetPatternMap() {
		return memory.read<struct TMap<struct FString, struct FPatternTransition>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetActivateApproach
{
public:
	FSetActivateApproach(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbActivate() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicenseTrackSpeedInfo
{
public:
	FLicenseTrackSpeedInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDistance() {
		return memory.read<float>(m_addr + 0);
	}
	float GetSpeed() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStartOffset
{
public:
	FSetStartOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetInStartOffset() {
		return memory.read<struct FFrameNumber>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryDesignDesc_Ver5
{
public:
	FLiveryDesignDesc_Ver5(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetKartID() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FText GetLabel() {
		return memory.read<struct FText>(m_addr + 8);
	}
	struct TArray<struct FLiveryPaintDesc_Ver2> GetPaintDesc() {
		return memory.read<struct TArray<struct FLiveryPaintDesc_Ver2>>(m_addr + 32);
	}
	struct TArray<struct FLiveryWrappingArray_Ver3> GetWrappingDescArray() {
		return memory.read<struct TArray<struct FLiveryWrappingArray_Ver3>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FPredict_wsyoon_ver0
{
public:
	FPredict_wsyoon_ver0(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<float> GetInputs() {
		return memory.read<struct TArray<float>>(m_addr + 0);
	}
	struct TArray<float> GetReturnValue() {
		return memory.read<struct TArray<float>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryWrappingGroupHeadInfo_Ver3
{
public:
	FLiveryWrappingGroupHeadInfo_Ver3(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTailOffset() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetbDisabledUnGroup() {
		return memory.read<bool>(m_addr + 4);
	}
	struct FLiveryWrappingTransform GetTransform() {
		return memory.read<struct FLiveryWrappingTransform>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEmoticonTouched
{
public:
	FOnEmoticonTouched(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryDesignDesc_Ver4
{
public:
	FLiveryDesignDesc_Ver4(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetLabel() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct TArray<struct FLiveryPaintDesc_Ver2> GetPaintDesc() {
		return memory.read<struct TArray<struct FLiveryPaintDesc_Ver2>>(m_addr + 24);
	}
	struct TArray<struct FLiveryWrappingArray_Ver3> GetWrappingDescArray() {
		return memory.read<struct TArray<struct FLiveryWrappingArray_Ver3>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryStickerDesc_Ver3
{
public:
	FLiveryStickerDesc_Ver3(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetLabel() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct TArray<struct FLiveryWrappingDesc_Ver3> GetWrappingDescArray() {
		return memory.read<struct TArray<struct FLiveryWrappingDesc_Ver3>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateTagFeed
{
public:
	FOnUpdateTagFeed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FTagData> GetTags() {
		return memory.read<struct TArray<struct FTagData>>(m_addr + 0);
	}
	struct TArray<struct FKtRecentActivity> GetFeeds() {
		return memory.read<struct TArray<struct FKtRecentActivity>>(m_addr + 16);
	}
	struct FKtRaceCount GetRaceCount() {
		return memory.read<struct FKtRaceCount>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryWrappingGroupHeadInfo
{
public:
	FLiveryWrappingGroupHeadInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTailOffset() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetbDisabledUnGroup() {
		return memory.read<bool>(m_addr + 4);
	}
	struct FVector2D GetBackupCenter() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}
	struct FLiveryWrappingTransform GetTransform() {
		return memory.read<struct FLiveryWrappingTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryDesignDesc_Ver3
{
public:
	FLiveryDesignDesc_Ver3(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetLabel() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct FLiveryPaintDesc_Ver2 GetPaintDesc() {
		return memory.read<struct FLiveryPaintDesc_Ver2>(m_addr + 24);
	}
	struct TArray<struct FLiveryWrappingArray_Ver3> GetWrappingDescArray() {
		return memory.read<struct TArray<struct FLiveryWrappingArray_Ver3>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FStockIdAndSlot
{
public:
	FStockIdAndSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int64_t GetstockId() {
		return memory.read<int64_t>(m_addr + 0);
	}
	char GetSlot() {
		return memory.read<char>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FBlockList_OnUnblockUser
{
public:
	FBlockList_OnUnblockUser(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNotUsed() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickUnGroupWrappingItem
{
public:
	FOnClickUnGroupWrappingItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnComboBoxSelectionChanged_CameraTrackTarget
{
public:
	FOnComboBoxSelectionChanged_CameraTrackTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class ESelectInfo GetSelectionType() {
		return memory.read<enum class ESelectInfo>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioKeyLayoutAnimData
{
public:
	FScenarioKeyLayoutAnimData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKey_EmphasizeLoop() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetKey_EmphasizeLoopRate() {
		return memory.read<float>(m_addr + 8);
	}
	struct FName GetKey_EmphasizeDelay() {
		return memory.read<struct FName>(m_addr + 12);
	}
	struct FName GetKey_Focus() {
		return memory.read<struct FName>(m_addr + 20);
	}
	struct FName GetKey_UnFocus() {
		return memory.read<struct FName>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryWrappingDesc_Ver2
{
public:
	FLiveryWrappingDesc_Ver2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELiveryPaintType GetKartBodySection() {
		return memory.read<enum class ELiveryPaintType>(m_addr + 0);
	}
	enum class ELiveryWrappingCategory GetCategory() {
		return memory.read<enum class ELiveryWrappingCategory>(m_addr + 1);
	}
	int32_t GetIndexInCategory() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FLiveryWrappingTransform GetTransform() {
		return memory.read<struct FLiveryWrappingTransform>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryDesignDesc_Ver0
{
public:
	FLiveryDesignDesc_Ver0(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetLabel() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct FLiveryPaintDesc_Ver0 GetPaintDesc() {
		return memory.read<struct FLiveryPaintDesc_Ver0>(m_addr + 24);
	}
	struct TArray<struct FLiveryWrappingDesc_Ver0> GetWrappingDescArray() {
		return memory.read<struct TArray<struct FLiveryWrappingDesc_Ver0>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedCancelBtn
{
public:
	FOnClickedCancelBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPurchaseLevelDialog_OnClickedShowReward
{
public:
	FPurchaseLevelDialog_OnClickedShowReward(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBlockList_OnClickedGamerCardButton
{
public:
	FBlockList_OnClickedGamerCardButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNotUsed() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryWrappingDesc_Ver0
{
public:
	FLiveryWrappingDesc_Ver0(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELiveryPaintType GetKartBodySection() {
		return memory.read<enum class ELiveryPaintType>(m_addr + 0);
	}
	enum class ELiveryWrappingCategory GetCategory() {
		return memory.read<enum class ELiveryWrappingCategory>(m_addr + 1);
	}
	int32_t GetIndexInCategory() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FLiveryWrappingTransform GetTransform() {
		return memory.read<struct FLiveryWrappingTransform>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryPaintDesc_Ver0
{
public:
	FLiveryPaintDesc_Ver0(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetGlobalColorOverride() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_AssistOptionsAll
{
public:
	FDev_AssistOptionsAll(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnRotateCommitted
{
public:
	FOnRotateCommitted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	enum class ETextCommit GetInCommitMethod() {
		return memory.read<enum class ETextCommit>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FMain_OnOptionsClicked
{
public:
	FMain_OnOptionsClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_DetailEdit
{
public:
	FOnClicked_DetailEdit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedShowMissionInfo
{
public:
	FOnClickedShowMissionInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnShowDriftMission
{
public:
	FOnShowDriftMission(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbShow() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FItemGuideInfoRow
{
public:
	FItemGuideInfoRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EItemType GetItemType() {
		return memory.read<enum class EItemType>(m_addr + 8);
	}
	struct FText GetItemName() {
		return memory.read<struct FText>(m_addr + 16);
	}
	struct FText GetItemDescription() {
		return memory.read<struct FText>(m_addr + 40);
	}
	struct TSoftObjectPtr<UMediaPlaylist> GetItemGuidePlaylist() {
		return memory.read<struct TSoftObjectPtr<UMediaPlaylist>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTotalRaceTimeString
{
public:
	FGetTotalRaceTimeString(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FWrappingCollectionItem
{
public:
	FWrappingCollectionItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetFileIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetFilePath() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FText GetStickerName() {
		return memory.read<struct FText>(m_addr + 24);
	}
	enum class EKtItemGrade GetStickerGrade() {
		return memory.read<enum class EKtItemGrade>(m_addr + 48);
	}
	bool GetbItemSticker() {
		return memory.read<bool>(m_addr + 49);
	}
	struct FString GetStickerID() {
		return memory.read<struct FString>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryMaterialGamut
{
public:
	FLiveryMaterialGamut(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELiveryPaintGamutTab GetGamutType() {
		return memory.read<enum class ELiveryPaintGamutTab>(m_addr + 0);
	}
	struct TArray<struct FLiveryMaterialParams> GetMaterialGamutParams() {
		return memory.read<struct TArray<struct FLiveryMaterialParams>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryMaterialParams
{
public:
	FLiveryMaterialParams(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELiveryMaterialType GetMaterialType() {
		return memory.read<enum class ELiveryMaterialType>(m_addr + 0);
	}
	struct TArray<struct FLiveryMaterialScalarParam> GetMaterialScalarParams() {
		return memory.read<struct TArray<struct FLiveryMaterialScalarParam>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FTickUpdateLiveryInfo
{
public:
	FTickUpdateLiveryInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUpdate() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbEquip() {
		return memory.read<bool>(m_addr + 1);
	}
	float GetRemainTime() {
		return memory.read<float>(m_addr + 4);
	}
	bool GetbRefresh() {
		return memory.read<bool>(m_addr + 8);
	}
	struct FLiveryDesignDesc GetLiveryDesignDesc() {
		return memory.read<struct FLiveryDesignDesc>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedItem
{
public:
	FOnClickedItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedInfoList
{
public:
	FOnClickedInfoList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLinkToNexonArena
{
public:
	FLinkToNexonArena(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetActionKeys
{
public:
	FGetActionKeys(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetActionName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct TArray<struct FKey> GetReturnValue() {
		return memory.read<struct TArray<struct FKey>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryDesignDesc
{
public:
	FLiveryDesignDesc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetKartID() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FText GetLabel() {
		return memory.read<struct FText>(m_addr + 8);
	}
	struct TArray<struct FLiveryPaintDesc> GetPaintDesc() {
		return memory.read<struct TArray<struct FLiveryPaintDesc>>(m_addr + 32);
	}
	struct TArray<struct FLiveryWrappingArray> GetWrappingDescArray() {
		return memory.read<struct TArray<struct FLiveryWrappingArray>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryTextureInfo
{
public:
	FLiveryTextureInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture2D GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_DropFromAir
{
public:
	FDev_DropFromAir(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetHeight() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveryCaptureInfo
{
public:
	FLiveryCaptureInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELiveryCaptureType GetCaptureType() {
		return memory.read<enum class ELiveryCaptureType>(m_addr + 0);
	}
	struct FLiveryDesignDesc GetLiveryDesign() {
		return memory.read<struct FLiveryDesignDesc>(m_addr + 16);
	}
	struct TArray<struct FString> GetSVGFileList() {
		return memory.read<struct TArray<struct FString>>(m_addr + 80);
	}
	struct TArray<struct FLiveryWrappingTransform> GetTransformList() {
		return memory.read<struct TArray<struct FLiveryWrappingTransform>>(m_addr + 96);
	}
	int32_t GetLayerIndex() {
		return memory.read<int32_t>(m_addr + 112);
	}
	enum class ELiveryPaintType GetLayerSection() {
		return memory.read<enum class ELiveryPaintType>(m_addr + 116);
	}
	bool GetbVisibleBoundary() {
		return memory.read<bool>(m_addr + 136);
	}
	bool GetbVisibleLayer() {
		return memory.read<bool>(m_addr + 137);
	}

private:
	std::uint64_t m_addr = 0;
};class FStickerStockCacheItem
{
public:
	FStickerStockCacheItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FStickerStock Getstock() {
		return memory.read<struct FStickerStock>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FStickerStock
{
public:
	FStickerStock(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int64_t GetstickerStockId() {
		return memory.read<int64_t>(m_addr + 0);
	}
	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FString GetaccountId() {
		return memory.read<struct FString>(m_addr + 24);
	}
	char GetSlot() {
		return memory.read<char>(m_addr + 40);
	}
	char Getgrade() {
		return memory.read<char>(m_addr + 41);
	}
	struct FDateTime GetTime() {
		return memory.read<struct FDateTime>(m_addr + 48);
	}
	int32_t Getdownloads() {
		return memory.read<int32_t>(m_addr + 56);
	}
	int32_t Getbookmarks() {
		return memory.read<int32_t>(m_addr + 60);
	}
	enum class EStickerRegisterState GetregState() {
		return memory.read<enum class EStickerRegisterState>(m_addr + 64);
	}
	enum class EStickerDropReason GetdropReason() {
		return memory.read<enum class EStickerDropReason>(m_addr + 65);
	}
	struct FNullableDateTime Getblock() {
		return memory.read<struct FNullableDateTime>(m_addr + 72);
	}
	struct FStickerStockTagData GetTag() {
		return memory.read<struct FStickerStockTagData>(m_addr + 88);
	}
	struct FString GetUniqueId() {
		return memory.read<struct FString>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};class FStickerStockTagData
{
public:
	FStickerStockTagData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> GetData() {
		return memory.read<struct TArray<int32_t>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLobbyUiDefSeasonInfo
{
public:
	FLobbyUiDefSeasonInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FLobbyUiDefModeInfo
{
public:
	FLobbyUiDefModeInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FOnNeedAccountLinkSelect
{
public:
	FOnNeedAccountLinkSelect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInAllowAccountLinkGuest() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbInMustAccountLink() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FLobbyUiDefPartyInfo
{
public:
	FLobbyUiDefPartyInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FLobbyUiDefMatchingInfo
{
public:
	FLobbyUiDefMatchingInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FLocalChannelParamRow
{
public:
	FLocalChannelParamRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGameSpeed GetSpeed() {
		return memory.read<enum class EGameSpeed>(m_addr + 8);
	}
	struct FKtKartChannelParam GetchannelParam() {
		return memory.read<struct FKtKartChannelParam>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FLocalKartBodyParamRow
{
public:
	FLocalKartBodyParamRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKtKartBodyParam GetbodyParam() {
		return memory.read<struct FKtKartBodyParam>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FLootBoxReservedEventInfo
{
public:
	FLootBoxReservedEventInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FTargetAnimInfo
{
public:
	FTargetAnimInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbReturnToOrigin() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbUsingCurrentValue() {
		return memory.read<bool>(m_addr + 1);
	}
	float GetDuration() {
		return memory.read<float>(m_addr + 4);
	}
	struct TSoftObjectPtr<UCurveFloat> GetCurve() {
		return memory.read<struct TSoftObjectPtr<UCurveFloat>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FTargetRotatorAnimInfo
{
public:
	FTargetRotatorAnimInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRotator GetStart() {
		return memory.read<struct FRotator>(m_addr + 48);
	}
	struct FRotator GetDest() {
		return memory.read<struct FRotator>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedBackOnConfirmListDialog
{
public:
	FOnClickedBackOnConfirmListDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTMIMajorDietModeData
{
public:
	FTMIMajorDietModeData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetItemType() {
		return memory.read<char>(m_addr + 0);
	}
	struct FTMIItemModeData GetModeData() {
		return memory.read<struct FTMIItemModeData>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSort_Show
{
public:
	FSort_Show(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSquenceInfo
{
public:
	FSquenceInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<enum class EPawnCameraType, struct TSoftObjectPtr<ULevelSequence>> GetSequenceForCameraChanging() {
		return memory.read<struct TMap<enum class EPawnCameraType, struct TSoftObjectPtr<ULevelSequence>>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnBoundaryAssetLoadComplete
{
public:
	FOnBoundaryAssetLoadComplete(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSet<struct FSoftObjectPath> GetInAssetPathContainer() {
		return memory.read<struct TSet<struct FSoftObjectPath>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMajorGameTeamData
{
public:
	FMajorGameTeamData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTeamNo() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetPoint() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t Getrank() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetPlayerCount() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetFastestPlayerRank() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_SaveRecord
{
public:
	FDev_SaveRecord(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMajorGamePlayerData
{
public:
	FMajorGamePlayerData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetUniqueIdentifier() {
		return memory.read<struct FString>(m_addr + 8);
	}
	int32_t GetSlotNo() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetTeamNo() {
		return memory.read<int32_t>(m_addr + 28);
	}
	int32_t Getrank() {
		return memory.read<int32_t>(m_addr + 32);
	}
	float GetTotalLapTime() {
		return memory.read<float>(m_addr + 36);
	}
	float GetBestTotalLapTime() {
		return memory.read<float>(m_addr + 40);
	}
	int32_t GetKartID() {
		return memory.read<int32_t>(m_addr + 44);
	}
	struct FString GetKartBodyDesc() {
		return memory.read<struct FString>(m_addr + 48);
	}
	float Getmileage() {
		return memory.read<float>(m_addr + 64);
	}
	float GetProgress() {
		return memory.read<float>(m_addr + 68);
	}
	float GetRemainDistance() {
		return memory.read<float>(m_addr + 72);
	}
	bool GetbPlayMissionCleared() {
		return memory.read<bool>(m_addr + 76);
	}
	enum class EKtPlatform Getplatform() {
		return memory.read<enum class EKtPlatform>(m_addr + 77);
	}
	struct FKtAccountProfile GetProfile() {
		return memory.read<struct FKtAccountProfile>(m_addr + 80);
	}
	struct FKdLevelExpProp GetPlayerExp() {
		return memory.read<struct FKdLevelExpProp>(m_addr + 176);
	}
	struct FKdLevelExpProp GetkartExp() {
		return memory.read<struct FKdLevelExpProp>(m_addr + 184);
	}
	enum class EKtItemGrade GetKartGrade() {
		return memory.read<enum class EKtItemGrade>(m_addr + 192);
	}
	float GetDisconnectedTime() {
		return memory.read<float>(m_addr + 196);
	}
	float GetAverageKph() {
		return memory.read<float>(m_addr + 200);
	}

private:
	std::uint64_t m_addr = 0;
};class FClientRelayOnRetire
{
public:
	FClientRelayOnRetire(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetRelayTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UObject GetKdPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCloseReceviedFailPopup
{
public:
	FOnCloseReceviedFailPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMajorPersonalResultInitializer
{
public:
	FMajorPersonalResultInitializer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ERaceMode GetraceMode() {
		return memory.read<enum class ERaceMode>(m_addr + 0);
	}
	struct FString GetTieResolverUniqueIdentifier() {
		return memory.read<struct FString>(m_addr + 8);
	}
	int32_t GetTieResolverTeamNo() {
		return memory.read<int32_t>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FMaterialFxSeqIndex
{
public:
	FMaterialFxSeqIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInstanceDynamic GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCardData
{
public:
	FCardData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<UTexture2D> GetCardTexture() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLucci
{
public:
	FSetLucci(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLucciCount() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTermsAndConditions_OnProtectButtonClicked
{
public:
	FTermsAndConditions_OnProtectButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTeamColor
{
public:
	FTeamColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetTextColor() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}
	struct FLinearColor GetGradation() {
		return memory.read<struct FLinearColor>(m_addr + 16);
	}
	struct FLinearColor GetTextOutline() {
		return memory.read<struct FLinearColor>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedStartRankerChallengeButton
{
public:
	FOnClickedStartRankerChallengeButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAutoPartyJoinReject
{
public:
	FGetAutoPartyJoinReject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCardInfo
{
public:
	FCardInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UButtonTemplate GetCardWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UButtonTemplate(ptr_addr);
	}
	int32_t GetCardGroup() {
		return memory.read<int32_t>(m_addr + 8);
	}
	enum class ECardState GetCardState() {
		return memory.read<enum class ECardState>(m_addr + 12);
	}
	enum class ECardPairCheck GetCardPairCheck() {
		return memory.read<enum class ECardPairCheck>(m_addr + 13);
	}

private:
	std::uint64_t m_addr = 0;
};class FPhysXDriftControl
{
public:
	FPhysXDriftControl(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FKeyInfo
{
public:
	FKeyInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetActionName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FName GetAxisName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	float GetAxisValue() {
		return memory.read<float>(m_addr + 16);
	}
	struct FKey GetKey_PC() {
		return memory.read<struct FKey>(m_addr + 24);
	}
	struct FKey GetKey_Gamepad() {
		return memory.read<struct FKey>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCultureIndex
{
public:
	FGetCultureIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnColorClickButton
{
public:
	FOnColorClickButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickDeleteMyStickerFromShape
{
public:
	FOnClickDeleteMyStickerFromShape(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayFX
{
public:
	FPlayFX(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFxTypeString() {
		return memory.read<struct FString>(m_addr + 0);
	}
	float GetPlayTime() {
		return memory.read<float>(m_addr + 16);
	}
	float GetStartFadeTime() {
		return memory.read<float>(m_addr + 20);
	}
	float GetEndFadeTime() {
		return memory.read<float>(m_addr + 24);
	}
	float GetCycleTime() {
		return memory.read<float>(m_addr + 28);
	}
	bool GetbLoop() {
		return memory.read<bool>(m_addr + 32);
	}
	bool GetbReverse() {
		return memory.read<bool>(m_addr + 33);
	}
	struct UCurveFloat GetWeightCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetCycleCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UCurveFloat(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOverlayMaterialCurveData
{
public:
	FOverlayMaterialCurveData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetCurveName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIPathDataList
{
public:
	FAIPathDataList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAIPathData> GetAIPathData() {
		return memory.read<struct TArray<struct FAIPathData>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerCallUpdateState
{
public:
	FServerCallUpdateState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FReplicatedKartState GetInState() {
		return memory.read<struct FReplicatedKartState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIPathData
{
public:
	FAIPathData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVector> GetLocation() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 0);
	}
	int32_t GetSplit_Start_Index() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetSplit_End_Index() {
		return memory.read<int32_t>(m_addr + 20);
	}
	struct TArray<int32_t> GetBoosterItemUseIndexList() {
		return memory.read<struct TArray<int32_t>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FPersonalResultPlayerDesc
{
public:
	FPersonalResultPlayerDesc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getrank() {
		return memory.read<int32_t>(m_addr + 8);
	}
	enum class ERaceTeamType GetTeam() {
		return memory.read<enum class ERaceTeamType>(m_addr + 12);
	}
	enum class EKtAccountPlatform Getplatform() {
		return memory.read<enum class EKtAccountPlatform>(m_addr + 13);
	}
	struct FString GetriderName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetUniqueIdentifier() {
		return memory.read<struct FString>(m_addr + 32);
	}
	float GetlapTime() {
		return memory.read<float>(m_addr + 48);
	}
	float GetRemainDistance() {
		return memory.read<float>(m_addr + 52);
	}
	float GetDisconnectedTime() {
		return memory.read<float>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FCloseAutoConfirmItemsPopup
{
public:
	FCloseAutoConfirmItemsPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayerGameSystemSettings
{
public:
	FPlayerGameSystemSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetFloorEffect() {
		return memory.read<uint32_t>(m_addr + 0);
	}
	uint32_t GetBoostEffect() {
		return memory.read<uint32_t>(m_addr + 4);
	}
	uint32_t GetFeedMirror() {
		return memory.read<uint32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_ToolTip
{
public:
	FOnClicked_ToolTip(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAsyncLoadCompleted
{
public:
	FOnAsyncLoadCompleted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSet<struct FSoftObjectPath> GetInAssetPathContainer() {
		return memory.read<struct TSet<struct FSoftObjectPath>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClientRelayRaceGameResult
{
public:
	FClientRelayRaceGameResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetRelayTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FRaceGameResult GetResult() {
		return memory.read<struct FRaceGameResult>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayerGraphicSettings
{
public:
	FPlayerGraphicSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetScreenPercentage() {
		return memory.read<float>(m_addr + 0);
	}
	uint32_t GetBoosterEffectQuality() {
		return memory.read<uint32_t>(m_addr + 4);
	}
	uint32_t GetTextureQuality() {
		return memory.read<uint32_t>(m_addr + 8);
	}
	uint32_t GetTextureFilteringQuality() {
		return memory.read<uint32_t>(m_addr + 12);
	}
	uint32_t GetShadowQuality() {
		return memory.read<uint32_t>(m_addr + 16);
	}
	uint32_t GetShadowDistance() {
		return memory.read<uint32_t>(m_addr + 20);
	}
	uint32_t GetEffectQuality() {
		return memory.read<uint32_t>(m_addr + 24);
	}
	uint32_t GetShaderQuality() {
		return memory.read<uint32_t>(m_addr + 28);
	}
	uint32_t GetAntiAliasingType() {
		return memory.read<uint32_t>(m_addr + 32);
	}
	uint32_t GetAntiAliasingQuality() {
		return memory.read<uint32_t>(m_addr + 36);
	}
	uint32_t GetMotionBlurQuality() {
		return memory.read<uint32_t>(m_addr + 40);
	}
	uint32_t GetSSRQuality() {
		return memory.read<uint32_t>(m_addr + 44);
	}
	uint32_t GetSSAOQuality() {
		return memory.read<uint32_t>(m_addr + 48);
	}
	uint32_t GetReflectionQuality() {
		return memory.read<uint32_t>(m_addr + 52);
	}
	uint32_t GetDetailMode() {
		return memory.read<uint32_t>(m_addr + 56);
	}
	uint32_t GetReflexMode() {
		return memory.read<uint32_t>(m_addr + 60);
	}
	float GetGamma() {
		return memory.read<float>(m_addr + 64);
	}
	float GetContrast() {
		return memory.read<float>(m_addr + 68);
	}
	float GetBrightness() {
		return memory.read<float>(m_addr + 72);
	}
	float GetSafeZone() {
		return memory.read<float>(m_addr + 76);
	}
	float GetOutGameFrameRateLimit() {
		return memory.read<float>(m_addr + 80);
	}
	float GetInGameFrameRateLimit() {
		return memory.read<float>(m_addr + 84);
	}
	uint32_t GetVolumetricFogQualitiy() {
		return memory.read<uint32_t>(m_addr + 88);
	}
	int32_t GetMobileMaterialQuality() {
		return memory.read<int32_t>(m_addr + 92);
	}
	int32_t GetMobileDetail() {
		return memory.read<int32_t>(m_addr + 96);
	}
	bool GetbUseMobileShadow() {
		return memory.read<bool>(m_addr + 100);
	}
	bool GetbUseMobileAA() {
		return memory.read<bool>(m_addr + 101);
	}
	bool GetbUseLowPawnLOD() {
		return memory.read<bool>(m_addr + 102);
	}
	uint32_t GetHBAO() {
		return memory.read<uint32_t>(m_addr + 104);
	}
	uint32_t GetVolumetricLight() {
		return memory.read<uint32_t>(m_addr + 108);
	}
	uint32_t GetAutoExposure() {
		return memory.read<uint32_t>(m_addr + 112);
	}
	uint32_t GetFog() {
		return memory.read<uint32_t>(m_addr + 116);
	}
	uint32_t GetLensFlare() {
		return memory.read<uint32_t>(m_addr + 120);
	}
	uint32_t GetBloom() {
		return memory.read<uint32_t>(m_addr + 124);
	}

private:
	std::uint64_t m_addr = 0;
};class FSequenceLevelDataTable
{
public:
	FSequenceLevelDataTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<UWorld> GetTrackLevel() {
		return memory.read<struct TSoftObjectPtr<UWorld>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnRotateTextChanged
{
public:
	FOnRotateTextChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnComboBoxSelection_MajorIntroSequence
{
public:
	FOnComboBoxSelection_MajorIntroSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class ESelectInfo GetSelectionType() {
		return memory.read<enum class ESelectInfo>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickFocusChangeReportPopup
{
public:
	FOnClickFocusChangeReportPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSkillScoreData
{
public:
	FSkillScoreData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FNullOptionUpdate
{
public:
	FNullOptionUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}
	int32_t GetInParam() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FReplayMetaData
{
public:
	FReplayMetaData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FUpdateRestTimeInItemList
{
public:
	FUpdateRestTimeInItemList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDateTime GetServerTime() {
		return memory.read<struct FDateTime>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRaceSaveGameLatestPtr
{
public:
	FRaceSaveGameLatestPtr(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct URaceSaveGameBase GetLatestSaveGame() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct URaceSaveGameBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_DetailView
{
public:
	FOnClicked_DetailView(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FResetCustomInviteButton
{
public:
	FResetCustomInviteButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInAccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioKey
{
public:
	FScenarioKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetAxisOrActionName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetAxisValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddScore
{
public:
	FAddScore(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetScore() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetbSuccess() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FMain_OnBlockListClicked
{
public:
	FMain_OnBlockListClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPawnRecordData
{
public:
	FPawnRecordData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMovementRecordData> GetMovementRecordDataArray() {
		return memory.read<struct TArray<struct FMovementRecordData>>(m_addr + 0);
	}
	struct FString GetStartSpotName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetriderName() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FRacePlayerEquipDesc GetEquipDesc() {
		return memory.read<struct FRacePlayerEquipDesc>(m_addr + 48);
	}
	float GetTotalLapTime() {
		return memory.read<float>(m_addr + 352);
	}
	int32_t Getrank() {
		return memory.read<int32_t>(m_addr + 356);
	}
	int32_t GetkartLevel() {
		return memory.read<int32_t>(m_addr + 360);
	}
	enum class EKtAccountPlatform GetAccountPlatform() {
		return memory.read<enum class EKtAccountPlatform>(m_addr + 364);
	}
	enum class EKtPlatform GetmachinePlatform() {
		return memory.read<enum class EKtPlatform>(m_addr + 365);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnComboBoxSelectionChanged
{
public:
	FOnComboBoxSelectionChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class ESelectInfo GetSelectionType() {
		return memory.read<enum class ESelectInfo>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovementRecordData
{
public:
	FMovementRecordData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKartRepMovement GetMovement() {
		return memory.read<struct FKartRepMovement>(m_addr + 0);
	}
	struct FReplicatedKartState GetState() {
		return memory.read<struct FReplicatedKartState>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FRacingPassRewardItemDef
{
public:
	FRacingPassRewardItemDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbPrimeReward() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FString GetItemId() {
		return memory.read<struct FString>(m_addr + 8);
	}
	int32_t GetitemCount() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetItemDuration() {
		return memory.read<int32_t>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FStopMontage
{
public:
	FStopMontage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKartPlayingMontageState GetInState() {
		return memory.read<enum class EKartPlayingMontageState>(m_addr + 0);
	}
	float GetBlendOutTime() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FRoatableCameraViewTransition
{
public:
	FRoatableCameraViewTransition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EViewTargetBlendFunction GetBlendFunction() {
		return memory.read<enum class EViewTargetBlendFunction>(m_addr + 0);
	}
	float GetBlendTime() {
		return memory.read<float>(m_addr + 4);
	}
	float GetBlendExp() {
		return memory.read<float>(m_addr + 8);
	}
	struct FVector GetTargetLocation() {
		return memory.read<struct FVector>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FRuleData
{
public:
	FRuleData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FScenarioCollectData
{
public:
	FScenarioCollectData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetClearTime() {
		return memory.read<float>(m_addr + 0);
	}
	int32_t GetBoosterCounterByDriftGauge() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetValidDriftCounter() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FActiveScenarioState
{
public:
	FActiveScenarioState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EScenarioStateType GetStateType() {
		return memory.read<enum class EScenarioStateType>(m_addr + 0);
	}
	struct FString GetscenarioID() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateProfile
{
public:
	FOnUpdateProfile(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FInfoPageData_Profile GetProfile() {
		return memory.read<struct FInfoPageData_Profile>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedManagingAddNew
{
public:
	FOnClickedManagingAddNew(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioActions
{
public:
	FScenarioActions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCategoryID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetGroupID() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetscenarioID() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct TArray<struct AActor> GetActionContainer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct TArray<struct AActor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_ScenarioGroupStart
{
public:
	FDev_ScenarioGroupStart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInGroupID() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_SteamPurchaseCancel
{
public:
	FDev_SteamPurchaseCancel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetorderId() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioRegistedConditionData
{
public:
	FScenarioRegistedConditionData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UScenarioConditionItemWidget> GetWidgetContainer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UScenarioConditionItemWidget>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioNotifyParameter
{
public:
	FScenarioNotifyParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EScenarioStateType GetNotifyType() {
		return memory.read<enum class EScenarioStateType>(m_addr + 0);
	}
	struct TArray<struct FString> GetClearConditionContainer() {
		return memory.read<struct TArray<struct FString>>(m_addr + 8);
	}
	struct TArray<struct FString> GetScenarioActivateContainer() {
		return memory.read<struct TArray<struct FString>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnQuestSuccess
{
public:
	FOnQuestSuccess(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbSuccess() {
		return memory.read<bool>(m_addr + 0);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveMenuPopup
{
public:
	FRemoveMenuPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioTriggerTarget
{
public:
	FScenarioTriggerTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct AActor> GetActivateContainer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct AActor>(ptr_addr);
	}
	struct TArray<struct AActor> GetDeactivateContainer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct TArray<struct AActor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSaveTextChanged
{
public:
	FOnSaveTextChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioMessageHUDWidgetDataGroup
{
public:
	FScenarioMessageHUDWidgetDataGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FScenarioMessageHUDWidgetData> GetDataContainer() {
		return memory.read<struct TArray<struct FScenarioMessageHUDWidgetData>>(m_addr + 0);
	}
	int32_t GetPriority() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioKeyAccumData
{
public:
	FScenarioKeyAccumData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FScenarioKeyData> GetKeyContainer() {
		return memory.read<struct TArray<struct FScenarioKeyData>>(m_addr + 0);
	}
	bool GetbUseRemoveCondition() {
		return memory.read<bool>(m_addr + 16);
	}
	struct FText GetKeyAccumDescript() {
		return memory.read<struct FText>(m_addr + 24);
	}
	bool GetbGamepadData() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnChangeFocusOptionButton
{
public:
	FOnChangeFocusOptionButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTTSTextChanged
{
public:
	FOnTTSTextChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioKeyGuideData
{
public:
	FScenarioKeyGuideData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FScenarioKeyData> GetKeyDataContainer() {
		return memory.read<struct TArray<struct FScenarioKeyData>>(m_addr + 0);
	}
	float GetEmphasizeDelayBegin() {
		return memory.read<float>(m_addr + 16);
	}
	float GetEmphasizeDelayEnd() {
		return memory.read<float>(m_addr + 20);
	}
	struct FText GetKeyLayoutDescript() {
		return memory.read<struct FText>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeLiveryLayerScale
{
public:
	FChangeLiveryLayerScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInDelta() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioTitleWidgetData
{
public:
	FScenarioTitleWidgetData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetTitle() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct FText GetTitleDescript() {
		return memory.read<struct FText>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTeam
{
public:
	FSetTeam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNewTeam() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnStartAutoDriveClicked
{
public:
	FOnStartAutoDriveClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNotUsed() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioDescriptMessageWidgetData
{
public:
	FScenarioDescriptMessageWidgetData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<UFMODEvent> GetTextSound() {
		return memory.read<struct TSoftObjectPtr<UFMODEvent>>(m_addr + 0);
	}
	struct FText GetSpeaker() {
		return memory.read<struct FText>(m_addr + 40);
	}
	struct FText GetDescript() {
		return memory.read<struct FText>(m_addr + 64);
	}
	float GetUpdateTickTime() {
		return memory.read<float>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnOpenSocialDialog
{
public:
	FOnOpenSocialDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioPortraitMessageWidgetData
{
public:
	FScenarioPortraitMessageWidgetData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct TSoftObjectPtr<UFMODEvent> GetTextSound() {
		return memory.read<struct TSoftObjectPtr<UFMODEvent>>(m_addr + 8);
	}
	struct FText GetDescript() {
		return memory.read<struct FText>(m_addr + 48);
	}
	float GetUpdateTickTime() {
		return memory.read<float>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FConfirmDialogInfo
{
public:
	FConfirmDialogInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FScenarioIdentifier
{
public:
	FScenarioIdentifier(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCategoryID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetGroupID() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetscenarioID() {
		return memory.read<struct FString>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSizeHeightCommitted
{
public:
	FOnSizeHeightCommitted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	enum class ETextCommit GetInCommitMethod() {
		return memory.read<enum class ETextCommit>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FResetAddFriendButton
{
public:
	FResetAddFriendButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInAccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioPawnEvent
{
public:
	FScenarioPawnEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FOnPressedRotatePawnButton
{
public:
	FOnPressedRotatePawnButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioPlayerCondition
{
public:
	FScenarioPlayerCondition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AScenarioTriggerByCondition GetConditionActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AScenarioTriggerByCondition(ptr_addr);
	}
	struct TArray<struct FScenarioCondition> GetConditionContainer() {
		return memory.read<struct TArray<struct FScenarioCondition>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLatencyType
{
public:
	FSetLatencyType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInLatencyType() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioTable
{
public:
	FScenarioTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCategoryID() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct TSoftObjectPtr<UDataTable> GetCategoryAsset() {
		return memory.read<struct TSoftObjectPtr<UDataTable>>(m_addr + 24);
	}
	struct UDataTable GetCategoryData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UDataTable(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FScenarioGroupTable
{
public:
	FScenarioGroupTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetPlayerStartName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FName GetResetPlayerStartName() {
		return memory.read<struct FName>(m_addr + 16);
	}
	struct FString GetNextGroupID() {
		return memory.read<struct FString>(m_addr + 24);
	}
	struct TArray<struct FString> GetScenarioContainer() {
		return memory.read<struct TArray<struct FString>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FOpenReplayController
{
public:
	FOpenReplayController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDummyIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCustomizableWidgetSelected
{
public:
	FOnCustomizableWidgetSelected(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMaterialInfoArray
{
public:
	FMaterialInfoArray(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMaterialInfo> GetMaterialInfoArray() {
		return memory.read<struct TArray<struct FMaterialInfo>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_SetRacerToAICheckTick
{
public:
	FDev_SetRacerToAICheckTick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int64_t GetInTick() {
		return memory.read<int64_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPosXCommitted
{
public:
	FOnPosXCommitted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	enum class ETextCommit GetInCommitMethod() {
		return memory.read<enum class ETextCommit>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUseItem
{
public:
	FOnUseItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetInPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}
	enum class EItemType GetInType() {
		return memory.read<enum class EItemType>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMaterialInfo
{
public:
	FMaterialInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TWeakObjectPtr<UTextureRenderTarget2D> GetTextureRenderTarget() {
		return memory.read<struct TWeakObjectPtr<UTextureRenderTarget2D>>(m_addr + 0);
	}
	struct UMaterialInstanceDynamic GetMaterialInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FKdServerListUrlConfig
{
public:
	FKdServerListUrlConfig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Getplatform() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetURL() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnComboBoxSelectionChanged_SkidMark
{
public:
	FOnComboBoxSelectionChanged_SkidMark(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetInSelectedItemKey() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnBackButtonClicked
{
public:
	FOnBackButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKdServerAddrConfig
{
public:
	FKdServerAddrConfig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetServerSet() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString Getdesc() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FString GetAddr() {
		return memory.read<struct FString>(m_addr + 48);
	}
	int32_t GetPort() {
		return memory.read<int32_t>(m_addr + 64);
	}
	struct FString GetKrpcAddr() {
		return memory.read<struct FString>(m_addr + 72);
	}
	int32_t GetKrpcPort() {
		return memory.read<int32_t>(m_addr + 88);
	}
	struct FString GetHttpUrl() {
		return memory.read<struct FString>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_GamerCard
{
public:
	FDev_GamerCard(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetuserID() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSessionApiPendingRequest
{
public:
	FSessionApiPendingRequest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPqPacket GetPacket() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPqPacket(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_PurchaseRacingPassComplete
{
public:
	FOnClicked_PurchaseRacingPassComplete(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetrewardIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FShadowQuestInfo
{
public:
	FShadowQuestInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRaceSaveGameLatestPtr GetReplayFile() {
		return memory.read<struct FRaceSaveGameLatestPtr>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSendKtCommand
{
public:
	FSendKtCommand(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCmd() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FShopStockItemInfo
{
public:
	FShopStockItemInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FPriceInfo
{
public:
	FPriceInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<UPaperSprite> GetImageObject() {
		return memory.read<struct TSoftObjectPtr<UPaperSprite>>(m_addr + 0);
	}
	struct FLinearColor GetTextColor() {
		return memory.read<struct FLinearColor>(m_addr + 40);
	}
	struct FLinearColor GetMinusTextColor() {
		return memory.read<struct FLinearColor>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedChangePresetButton
{
public:
	FOnClickedChangePresetButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FShopStockItemProducts
{
public:
	FShopStockItemProducts(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtShopStock> GetProducts() {
		return memory.read<struct TArray<struct FKtShopStock>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPaintColorRowItemSelect
{
public:
	FOnPaintColorRowItemSelect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetItemObj() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FNoticeURLRow
{
public:
	FNoticeURLRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetTermsOfService() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FString GetPrivacyPolicy() {
		return memory.read<struct FString>(m_addr + 24);
	}
	struct FString GetNotice() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetInspectionNotice() {
		return memory.read<struct FString>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPrGetADTEventReward
{
public:
	FOnPrGetADTEventReward(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPrResult GetResult() {
		return memory.read<struct FPrResult>(m_addr + 0);
	}
	struct UPrPacket GetReceivedPacket() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UPrPacket(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoadSoundInfo
{
public:
	FLoadSoundInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int8_t GetSoundType() {
		return memory.read<int8_t>(m_addr + 0);
	}
	int64_t GetID() {
		return memory.read<int64_t>(m_addr + 8);
	}
	int64_t GetSoundId() {
		return memory.read<int64_t>(m_addr + 16);
	}
	struct TSoftObjectPtr<UFMODEvent> GetSound() {
		return memory.read<struct TSoftObjectPtr<UFMODEvent>>(m_addr + 24);
	}
	struct FString GetSoundName() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 80);
	}
	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 92);
	}
	struct USceneComponent GetAttachToComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct USceneComponent(ptr_addr);
	}
	struct FName GetAttachPointName() {
		return memory.read<struct FName>(m_addr + 112);
	}
	enum class EAttachLocation GetAttachLocationType() {
		return memory.read<enum class EAttachLocation>(m_addr + 120);
	}
	uint32_t GetFlag() {
		return memory.read<uint32_t>(m_addr + 124);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocusOption
{
public:
	FOnFocusOption(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FStickerMarketHotItems
{
public:
	FStickerMarketHotItems(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULiveryMarketSearchStream GetSearch() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ULiveryMarketSearchStream(ptr_addr);
	}
	struct TArray<struct FStickerStock> GetStocks() {
		return memory.read<struct TArray<struct FStickerStock>>(m_addr + 8);
	}
	struct TArray<struct UStickerImageCache> GetCaches() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct TArray<struct UStickerImageCache>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FStickerReport
{
public:
	FStickerReport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int64_t GetreportId() {
		return memory.read<int64_t>(m_addr + 0);
	}
	int64_t GetstickerStockId() {
		return memory.read<int64_t>(m_addr + 8);
	}
	struct FDateTime GetreportDate() {
		return memory.read<struct FDateTime>(m_addr + 16);
	}
	struct FString GetaccountId() {
		return memory.read<struct FString>(m_addr + 24);
	}
	struct FString GetCategory() {
		return memory.read<struct FString>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FServer_ReduceTimer
{
public:
	FServer_ReduceTimer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UActorComponent GetComponentClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UActorComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSpinBoxValueChanged_LightRadius
{
public:
	FOnSpinBoxValueChanged_LightRadius(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateMainAccount
{
public:
	FCreateMainAccount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UKdAccount GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UKdAccount(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FInputLimitValue
{
public:
	FInputLimitValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetYawMin() {
		return memory.read<float>(m_addr + 0);
	}
	float GetYawMax() {
		return memory.read<float>(m_addr + 4);
	}
	float GetInputYawScale() {
		return memory.read<float>(m_addr + 8);
	}
	float GetBaseTurnRate() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnButtonReleased_DetailInfo
{
public:
	FOnButtonReleased_DetailInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FStudioSetting
{
public:
	FStudioSetting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FStudioDef
{
public:
	FStudioDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FTierResultGppCountingInfo
{
public:
	FTierResultGppCountingInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMinGpp() {
		return memory.read<float>(m_addr + 0);
	}
	float GetMaxGpp() {
		return memory.read<float>(m_addr + 4);
	}
	float GetBeginGpp() {
		return memory.read<float>(m_addr + 8);
	}
	float GetEndGpp() {
		return memory.read<float>(m_addr + 12);
	}
	float GetDuration() {
		return memory.read<float>(m_addr + 16);
	}
	float GetPostDelay() {
		return memory.read<float>(m_addr + 20);
	}
	float GetElapsedTime() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FKeyInputInfoArray
{
public:
	FKeyInputInfoArray(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKeyInputInfo> GetArray() {
		return memory.read<struct TArray<struct FKeyInputInfo>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBoostGuide
{
public:
	FBoostGuide(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbActivate() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKeyInputInfo
{
public:
	FKeyInputInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTick() {
		return memory.read<float>(m_addr + 0);
	}
	struct FString GetKey() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FPurchaseRacingPassDialog_OnClickedPremiumPass
{
public:
	FPurchaseRacingPassDialog_OnClickedPremiumPass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRecordUserCollisionInfo
{
public:
	FRecordUserCollisionInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetTargetNickName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetTargetNpsn() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetTargetEnemyFlag() {
		return memory.read<struct FString>(m_addr + 32);
	}
	int32_t GetRecordUserCollision() {
		return memory.read<int32_t>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdatedPartyInviteStatus
{
public:
	FOnUpdatedPartyInviteStatus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbRefused() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInviteMenu_Find_EditBoxTextChanged
{
public:
	FInviteMenu_Find_EditBoxTextChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTMIItemEventData
{
public:
	FTMIItemEventData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ETMIItemCase GetEventType() {
		return memory.read<enum class ETMIItemCase>(m_addr + 0);
	}
	float GetTick() {
		return memory.read<float>(m_addr + 4);
	}
	char GetItemId() {
		return memory.read<char>(m_addr + 8);
	}
	struct FString GetTargetNickName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetTargetNpsn() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FString GetTargetEnemyFlag() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString Getstatus() {
		return memory.read<struct FString>(m_addr + 64);
	}
	float GetLocX() {
		return memory.read<float>(m_addr + 80);
	}
	float GetLocY() {
		return memory.read<float>(m_addr + 84);
	}
	float GetLocZ() {
		return memory.read<float>(m_addr + 88);
	}
	char Getrank() {
		return memory.read<char>(m_addr + 92);
	}
	char GetLap() {
		return memory.read<char>(m_addr + 93);
	}

private:
	std::uint64_t m_addr = 0;
};class FTMIRaceData
{
public:
	FTMIRaceData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetLocX() {
		return memory.read<float>(m_addr + 0);
	}
	float GetLocY() {
		return memory.read<float>(m_addr + 4);
	}
	float GetLocZ() {
		return memory.read<float>(m_addr + 8);
	}
	float GetSpeed() {
		return memory.read<float>(m_addr + 12);
	}
	bool GetbDrift() {
		return memory.read<bool>(m_addr + 16);
	}
	char GetBoostKind() {
		return memory.read<char>(m_addr + 17);
	}
	char Getrank() {
		return memory.read<char>(m_addr + 18);
	}
	char GetLaps() {
		return memory.read<char>(m_addr + 19);
	}
	float GetTick() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetReflexAvailable
{
public:
	FGetReflexAvailable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FToastTypeIconRow
{
public:
	FToastTypeIconRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EToastType GetToastType() {
		return memory.read<enum class EToastType>(m_addr + 8);
	}
	struct TSoftObjectPtr<UPaperSprite> GeticonImage() {
		return memory.read<struct TSoftObjectPtr<UPaperSprite>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FTrackEnvironment
{
public:
	FTrackEnvironment(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ETrackEnvironmentType GetType() {
		return memory.read<enum class ETrackEnvironmentType>(m_addr + 8);
	}
	bool GetbUseSkydome() {
		return memory.read<bool>(m_addr + 9);
	}
	struct TSoftClassPtr<UObject> GetSpawnSkyDome() {
		return memory.read<struct TSoftClassPtr<UObject>>(m_addr + 16);
	}
	float GetMobileLightIntensity() {
		return memory.read<float>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FWidget_SearchPopup_OnTagSelectCheck
{
public:
	FWidget_SearchPopup_OnTagSelectCheck(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSpinBoxValueChanged_CameraMoveSpeed
{
public:
	FOnSpinBoxValueChanged_CameraMoveSpeed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGimmickDoorData
{
public:
	FGimmickDoorData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FOnCreateEmoticon
{
public:
	FOnCreateEmoticon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UServerPacket GetPacket() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UServerPacket(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUnFocusOption
{
public:
	FOnUnFocusOption(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_ListAllEvent
{
public:
	FDev_ListAllEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetseasonId() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPrGetADTEventAllReward
{
public:
	FOnPrGetADTEventAllReward(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPrResult GetResult() {
		return memory.read<struct FPrResult>(m_addr + 0);
	}
	struct UPrPacket GetReceivedPacket() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UPrPacket(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRegisterMatch
{
public:
	FRegisterMatch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<enum class ERaceMode> GetGameType() {
		return memory.read<struct TArray<enum class ERaceMode>>(m_addr + 0);
	}
	bool GetbInExclusive() {
		return memory.read<bool>(m_addr + 16);
	}
	int32_t GetInMatchTargetType() {
		return memory.read<int32_t>(m_addr + 20);
	}
	struct TArray<int32_t> GetInTrackGroups() {
		return memory.read<struct TArray<int32_t>>(m_addr + 24);
	}
	struct FString GetInGrandPrixId() {
		return memory.read<struct FString>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnterKeyDialog_OnTextChanged
{
public:
	FEnterKeyDialog_OnTextChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedLicenseMoveButton
{
public:
	FOnClickedLicenseMoveButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedAchievementCardDetailDialogBackButton
{
public:
	FOnClickedAchievementCardDetailDialogBackButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_Copy
{
public:
	FOnClicked_Copy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWindowVisibility
{
public:
	FSetWindowVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EWindowVisibility GetInVisibility() {
		return memory.read<enum class EWindowVisibility>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedSummaryTypeButton
{
public:
	FOnClickedSummaryTypeButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAffectedBy
{
public:
	FOnAffectedBy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct AItem GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticast_Logout
{
public:
	FMulticast_Logout(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetInPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPressedRotateR
{
public:
	FOnPressedRotateR(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocusedMission
{
public:
	FOnFocusedMission(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticast_NotifyServerTime
{
public:
	FMulticast_NotifyServerTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInServerTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPartyInvite_OnClickedInvitePartyButton
{
public:
	FPartyInvite_OnClickedInvitePartyButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticast_LogoutPawn
{
public:
	FMulticast_LogoutPawn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetInPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_PrevSlot
{
public:
	FOnClicked_PrevSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FToggleLoop
{
public:
	FToggleLoop(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNotUsed() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_UnGroup
{
public:
	FOnClicked_UnGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FToggleOneLap
{
public:
	FToggleOneLap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNotUsed() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSpinBoxValueChanged_LightRed
{
public:
	FOnSpinBoxValueChanged_LightRed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FFinish
{
public:
	FFinish(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLapCount() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedRewardDialogShowTierDetailButton
{
public:
	FOnClickedRewardDialogShowTierDetailButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocused_ChallengeList
{
public:
	FOnFocused_ChallengeList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAnimFinished
{
public:
	FOnAnimFinished(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetFinishedNum() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateDistanceAndThreshold
{
public:
	FUpdateDistanceAndThreshold(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInDistance() {
		return memory.read<float>(m_addr + 0);
	}
	float GetInThreshold() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddApproachKart
{
public:
	FAddApproachKart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetAdd() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedEmblemTab
{
public:
	FOnClickedEmblemTab(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMoveLiveryStickerLayerMouseX
{
public:
	FMoveLiveryStickerLayerMouseX(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInDelta() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnChangeCamera
{
public:
	FOnChangeCamera(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSpinBoxValueChanged_CameraFocalLength
{
public:
	FOnSpinBoxValueChanged_CameraFocalLength(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSpinBoxValueChanged_CameraFocusDistance
{
public:
	FOnSpinBoxValueChanged_CameraFocusDistance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPurchaseButton
{
public:
	FOnClickedPurchaseButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FEventChallenge_OnClickedBackButton
{
public:
	FEventChallenge_OnClickedBackButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FItemGuideDetailPopup_OnClickedCloseButton
{
public:
	FItemGuideDetailPopup_OnClickedCloseButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSpinBoxValueChanged_CameraMoveInterpSpeed
{
public:
	FOnSpinBoxValueChanged_CameraMoveInterpSpeed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSpinBoxValueChanged_DeadZone
{
public:
	FOnSpinBoxValueChanged_DeadZone(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_ScenarioPawnPhysic
{
public:
	FDev_ScenarioPawnPhysic(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInEnable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSpinBoxValueChanged_LightBlue
{
public:
	FOnSpinBoxValueChanged_LightBlue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSpinBoxValueChanged_LightGreen
{
public:
	FOnSpinBoxValueChanged_LightGreen(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSpinBoxValueChanged_LightIntensity
{
public:
	FOnSpinBoxValueChanged_LightIntensity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMoveToPrevWrappingLayer
{
public:
	FOnMoveToPrevWrappingLayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSpinBoxValueChanged_LightOuterConeAngle
{
public:
	FOnSpinBoxValueChanged_LightOuterConeAngle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSpinBoxValueChanged_SetCameraFocusDistanceSpeed
{
public:
	FOnSpinBoxValueChanged_SetCameraFocusDistanceSpeed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTextChanged_CameraTrackFilter
{
public:
	FOnTextChanged_CameraTrackFilter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCheck
{
public:
	FOnCheck(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickLiveryDelete
{
public:
	FOnClickLiveryDelete(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocus
{
public:
	FOnFocus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedUse
{
public:
	FOnClickedUse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnVoiceChatOnOffButtonClicked
{
public:
	FOnVoiceChatOnOffButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedNextTabButton
{
public:
	FOnClickedNextTabButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedBannedUserInviteButton
{
public:
	FOnClickedBannedUserInviteButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FStopFx
{
public:
	FStopFx(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetEndFadeTime() {
		return memory.read<float>(m_addr + 0);
	}
	struct UCurveFloat GetFadeWeightCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UCurveFloat(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPrevTabButton
{
public:
	FOnClickedPrevTabButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedSortButton
{
public:
	FOnClickedSortButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSubmitChat
{
public:
	FOnSubmitChat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnChangeInitalRewardStep
{
public:
	FOnChangeInitalRewardStep(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInviteMenu_Find_OnFindRiderComplete
{
public:
	FInviteMenu_Find_OnFindRiderComplete(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAccountPlatformData> GetaccountData() {
		return memory.read<struct TArray<struct FAccountPlatformData>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpgradeDialog_CloseDialog
{
public:
	FUpgradeDialog_CloseDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMainDialog_OnLinkAccountClicked
{
public:
	FMainDialog_OnLinkAccountClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnConfirmUserInfo
{
public:
	FOnConfirmUserInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDisablePartyInviteButton
{
public:
	FOnDisablePartyInviteButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInAccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnShowToastPopup
{
public:
	FOnShowToastPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetTitleText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct FText GetDescText() {
		return memory.read<struct FText>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FFriendMenu_CloseDialog
{
public:
	FFriendMenu_CloseDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedOpenContentItem
{
public:
	FOnClickedOpenContentItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInviteMenu_Find_OnFindFriend
{
public:
	FInviteMenu_Find_OnFindFriend(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInviteMenu_Find_ShowFindPopup
{
public:
	FInviteMenu_Find_ShowFindPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHandleUrlChanged
{
public:
	FHandleUrlChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetNewURL() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInviteMenu_OnCloseButtonClicked
{
public:
	FInviteMenu_OnCloseButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeLanguage_CloseDialog
{
public:
	FChangeLanguage_CloseDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAuthNewItem
{
public:
	FAuthNewItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AGoItem_Cube GetInCube() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AGoItem_Cube(ptr_addr);
	}
	enum class EItemType GetReturnValue() {
		return memory.read<enum class EItemType>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_RetirePersonalResultPlayer
{
public:
	FDev_RetirePersonalResultPlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPlayerNumber() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetRemainingDistance() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FInviteMenu_Recommend_OnClickedAddBtn
{
public:
	FInviteMenu_Recommend_OnClickedAddBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPurchaseConfirmDialog_OnClickedShowKcoinPriceDetail
{
public:
	FPurchaseConfirmDialog_OnClickedShowKcoinPriceDetail(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInviteUserMenu_OnCloseButtonClicked
{
public:
	FInviteUserMenu_OnCloseButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMainDialog_OnCloseButtonClicked
{
public:
	FMainDialog_OnCloseButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAutoFriendReject
{
public:
	FSetAutoFriendReject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedNextTab
{
public:
	FOnClickedNextTab(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPreTab
{
public:
	FOnClickedPreTab(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickPaintColorReset
{
public:
	FOnClickPaintColorReset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAsyncMontageLoadCompleted
{
public:
	FOnAsyncMontageLoadCompleted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSet<struct FSoftObjectPath> GetInAssetPathContainer() {
		return memory.read<struct TSet<struct FSoftObjectPath>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPartyInvite_ChangeTab
{
public:
	FPartyInvite_ChangeTab(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPartyInvite_OnFocusedInvitePartyButton
{
public:
	FPartyInvite_OnFocusedInvitePartyButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNextDriftMission
{
public:
	FOnNextDriftMission(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetKeepNSeconds() {
		return memory.read<float>(m_addr + 0);
	}
	float GetReuseInNSeconds() {
		return memory.read<float>(m_addr + 4);
	}
	float GetInNSeconds() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetUseNTimes() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateRiderInfo
{
public:
	FOnUpdateRiderInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EUserLevelUpdatedType GetInType() {
		return memory.read<enum class EUserLevelUpdatedType>(m_addr + 0);
	}
	int32_t GetInLevel() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnOpenCouponResultDialog
{
public:
	FOnOpenCouponResultDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPrCouponResult GetResult() {
		return memory.read<enum class EPrCouponResult>(m_addr + 0);
	}
	int32_t GetErrorCode() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct TArray<struct FKtItem> GetItems() {
		return memory.read<struct TArray<struct FKtItem>>(m_addr + 8);
	}
	struct TArray<struct FString> GetDuplicates() {
		return memory.read<struct TArray<struct FString>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedGearPlusBtn
{
public:
	FOnClickedGearPlusBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedBackButtonInModeChangeDialog
{
public:
	FOnClickedBackButtonInModeChangeDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUnFocusedTagButton
{
public:
	FOnUnFocusedTagButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedBackButtonInTrackChangeDialog
{
public:
	FOnClickedBackButtonInTrackChangeDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAttendanceEntryClicked
{
public:
	FOnAttendanceEntryClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetItemIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedChangeModeButton
{
public:
	FOnClickedChangeModeButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedChangeTrackButton
{
public:
	FOnClickedChangeTrackButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedUserInfo
{
public:
	FOnClickedUserInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetUserSlotIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocusedUserInfo
{
public:
	FOnFocusedUserInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetUserSlotIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPlayerVoiceChatState
{
public:
	FOnPlayerVoiceChatState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInCustomMemberIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetInVoiceChatStatus() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerEndCasting
{
public:
	FServerEndCasting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInItemSequence() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class EItemType GetItemType() {
		return memory.read<enum class EItemType>(m_addr + 4);
	}
	struct UItemComponent GetTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UItemComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedNextButton
{
public:
	FOnClickedNextButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnShowCustomGameToastPopup
{
public:
	FOnShowCustomGameToastPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInTitleText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct FText GetInContentText() {
		return memory.read<struct FText>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEmoticonClicked
{
public:
	FOnEmoticonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_CompleteEditToColor
{
public:
	FOnClicked_CompleteEditToColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMontageEnded
{
public:
	FOnMontageEnded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAnimMontage GetAnimMontage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAnimMontage(ptr_addr);
	}
	bool GetbInterrupted() {
		return memory.read<bool>(m_addr + 8);
	}
	enum class ECharacterMontage GetInState() {
		return memory.read<enum class ECharacterMontage>(m_addr + 9);
	}
	int32_t GetNumLoops() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEmoticonHovered
{
public:
	FOnEmoticonHovered(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedShortCut
{
public:
	FOnClickedShortCut(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateRestTimeInConfirmItemList
{
public:
	FUpdateRestTimeInConfirmItemList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDateTime GetServerTime() {
		return memory.read<struct FDateTime>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCustomGameInviteReceived
{
public:
	FOnCustomGameInviteReceived(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSessionId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FKtAccountProfile GetInviter() {
		return memory.read<struct FKtAccountProfile>(m_addr + 16);
	}
	struct FString GetInviterAccountId() {
		return memory.read<struct FString>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnRewardListButtonClicked
{
public:
	FOnRewardListButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeADTStep
{
public:
	FChangeADTStep(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPredict_jieunjung_ver44
{
public:
	FPredict_jieunjung_ver44(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDeltaTime() {
		return memory.read<float>(m_addr + 0);
	}
	struct TArray<float> GetInputs() {
		return memory.read<struct TArray<float>>(m_addr + 8);
	}
	struct TArray<float> GetReturnValue() {
		return memory.read<struct TArray<float>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedItemListButton
{
public:
	FOnClickedItemListButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnStaffButtonClicked
{
public:
	FOnStaffButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedRewardDetailButton
{
public:
	FOnClickedRewardDetailButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocusedVDTButton
{
public:
	FOnFocusedVDTButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveChildFromSlot
{
public:
	FRemoveChildFromSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSlotName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct UWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSendADTRewardPacket
{
public:
	FSendADTRewardPacket(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedChangeToRightTabButton
{
public:
	FOnClickedChangeToRightTabButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedEmotionStorageBackButton
{
public:
	FOnClickedEmotionStorageBackButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAllLevelStreamingComplete
{
public:
	FOnAllLevelStreamingComplete(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInLinkID() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPresetButton
{
public:
	FOnClickedPresetButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSettingsButtonClicked
{
public:
	FOnSettingsButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedStudioButton
{
public:
	FOnClickedStudioButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedNextEmotionStorage
{
public:
	FOnClickedNextEmotionStorage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedNextSubTab
{
public:
	FOnClickedNextSubTab(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPrevCharacterTab
{
public:
	FOnClickedPrevCharacterTab(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPrevMainTab
{
public:
	FOnClickedPrevMainTab(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FServer_EquipLiveryDesign
{
public:
	FServer_EquipLiveryDesign(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetLiveryUniqueId() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateCashItemList
{
public:
	FUpdateCashItemList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtShopStock> GetItems() {
		return memory.read<struct TArray<struct FKtShopStock>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_ScenarioResetScenario
{
public:
	FDev_ScenarioResetScenario(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInCategoryID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetInGroupID() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetInScenarioID() {
		return memory.read<struct FString>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnComboBoxSelectionChanged_Wheel
{
public:
	FOnComboBoxSelectionChanged_Wheel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetInSelectedItemKey() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPrevSubTab
{
public:
	FOnClickedPrevSubTab(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnReleasedRotatePawnButton
{
public:
	FOnReleasedRotatePawnButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_SimpleAODecalMaxDist
{
public:
	FDev_SimpleAODecalMaxDist(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedRewardDialogBackButton
{
public:
	FOnClickedRewardDialogBackButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBackgroundColor
{
public:
	FSetBackgroundColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetNewBackgroundColor() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedRewardDialogShowRankingDetailButton
{
public:
	FOnClickedRewardDialogShowRankingDetailButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedShowDetailRecordButton
{
public:
	FOnClickedShowDetailRecordButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedShowRewardButton
{
public:
	FOnClickedShowRewardButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedRewardDialogShowRewardButton
{
public:
	FOnClickedRewardDialogShowRewardButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedbtnGrandPrixRecord
{
public:
	FOnClickedbtnGrandPrixRecord(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSingleLevelStreamingComplete
{
public:
	FOnSingleLevelStreamingComplete(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInLinkID() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedProfileEdit
{
public:
	FOnClickedProfileEdit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedShowRewardListButton
{
public:
	FOnClickedShowRewardListButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetUserWidgetObject
{
public:
	FGetUserWidgetObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocused_ActivityList
{
public:
	FOnFocused_ActivityList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FApplyGearDialog_OnClickedApplyBtn
{
public:
	FApplyGearDialog_OnClickedApplyBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedRewardItem
{
public:
	FOnClickedRewardItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedResetGearBtn
{
public:
	FOnClickedResetGearBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FStartGame
{
public:
	FStartGame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedButton
{
public:
	FOnClickedButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPageIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedReturnGearBtn
{
public:
	FOnClickedReturnGearBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpgradeDialog_OnClickedUpgradBtn
{
public:
	FUpgradeDialog_OnClickedUpgradBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpgradeResult_CloseDialog
{
public:
	FUpgradeResult_CloseDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedFocusdGearMinusBtn
{
public:
	FOnClickedFocusdGearMinusBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocusedGearSlot
{
public:
	FOnFocusedGearSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnComboBoxSelection_Suffer
{
public:
	FOnComboBoxSelection_Suffer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class ESelectInfo GetSelectionType() {
		return memory.read<enum class ESelectInfo>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedLicenseClearConfirmButton
{
public:
	FOnClickedLicenseClearConfirmButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMoveLiveryLayerY
{
public:
	FMoveLiveryLayerY(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInDelta() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickCloseReportPopup
{
public:
	FOnClickCloseReportPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickDeleteAllWrappingItem
{
public:
	FOnClickDeleteAllWrappingItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedSaveTagButton
{
public:
	FOnClickedSaveTagButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCloseShopPurchaseConfirmDialog
{
public:
	FCloseShopPurchaseConfirmDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickDeleteWrappingItem
{
public:
	FOnClickDeleteWrappingItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_ColorEdit
{
public:
	FOnClicked_ColorEdit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickExitSave
{
public:
	FOnClickExitSave(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_CompleteEdit
{
public:
	FOnClicked_CompleteEdit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMediaOpened
{
public:
	FOnMediaOpened(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetOpenedUrl() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_Delete
{
public:
	FOnClicked_Delete(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPurchaseLevelDialog_OnClickedMaxLevel
{
public:
	FPurchaseLevelDialog_OnClickedMaxLevel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_Edit
{
public:
	FOnClicked_Edit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_Group
{
public:
	FOnClicked_Group(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_LiveryMode
{
public:
	FOnClicked_LiveryMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInfoModifyDialog_OnClickedConfirmButton
{
public:
	FInfoModifyDialog_OnClickedConfirmButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FServer_AddLog
{
public:
	FServer_AddLog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInLog() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_Mat
{
public:
	FOnClicked_Mat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_NextSlot
{
public:
	FOnClicked_NextSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_PaintColorSave
{
public:
	FOnClicked_PaintColorSave(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_PaintGamutNext
{
public:
	FOnClicked_PaintGamutNext(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedNoticeDialogClose
{
public:
	FOnClickedNoticeDialogClose(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_PaintToWrapping
{
public:
	FOnClicked_PaintToWrapping(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_ShapeDelete
{
public:
	FOnClicked_ShapeDelete(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_ShapeTabNext
{
public:
	FOnClicked_ShapeTabNext(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_ShowKartDialog
{
public:
	FOnClicked_ShowKartDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnKcoinButtonClicked
{
public:
	FOnKcoinButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_StickerSave
{
public:
	FOnClicked_StickerSave(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_WrappingToPaint
{
public:
	FOnClicked_WrappingToPaint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickSave
{
public:
	FOnClickSave(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEditValueTextMoveNext
{
public:
	FOnEditValueTextMoveNext(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEditValueTextMovePre
{
public:
	FOnEditValueTextMovePre(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnComboBoxSelection_MajorFinishSequence
{
public:
	FOnComboBoxSelection_MajorFinishSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class ESelectInfo GetSelectionType() {
		return memory.read<enum class ESelectInfo>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPaintColorRowItemClickedButton
{
public:
	FOnPaintColorRowItemClickedButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UObject GetItemObj() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_MySticker
{
public:
	FOnClicked_MySticker(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTickWhenOffscreen
{
public:
	FSetTickWhenOffscreen(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbWantTickWhenOffscreen() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPosXTextChanged
{
public:
	FOnPosXTextChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPosYTextChanged
{
public:
	FOnPosYTextChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnShowMaterialContextMenu
{
public:
	FOnShowMaterialContextMenu(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSizeHeightTextChanged
{
public:
	FOnSizeHeightTextChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSizeWidthTextChanged
{
public:
	FOnSizeWidthTextChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnWrappingItemClickButton
{
public:
	FOnWrappingItemClickButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRingParamName
{
public:
	FSetRingParamName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRingLightParamName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FName GetRingBaseParamName() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FReport_ClosePlayerSelectDialog
{
public:
	FReport_ClosePlayerSelectDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnComboBoxSelectionChanged_Balloon
{
public:
	FOnComboBoxSelectionChanged_Balloon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetInSelectedItemKey() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddCoin
{
public:
	FAddCoin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNum() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnWrappinMenu
{
public:
	FOnWrappinMenu(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveEditValuePopup
{
public:
	FRemoveEditValuePopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRotateLiveryLayer
{
public:
	FRotateLiveryLayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInDelta() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_StickerListNext
{
public:
	FOnClicked_StickerListNext(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_StickerListPrev
{
public:
	FOnClicked_StickerListPrev(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInitializeCharacterLookAt
{
public:
	FInitializeCharacterLookAt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRotator GetInRotator() {
		return memory.read<struct FRotator>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_UseFixedUnit
{
public:
	FOnClicked_UseFixedUnit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNavigationStickerItemList
{
public:
	FOnNavigationStickerItemList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EUINavigation GetUINavigation() {
		return memory.read<enum class EUINavigation>(m_addr + 0);
	}
	struct UWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnKartSkillFailed
{
public:
	FOnKartSkillFailed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPrKartSkillResult GetInResultCode() {
		return memory.read<enum class EPrKartSkillResult>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAccountReset_OnClickedAccountResetCancelBtn
{
public:
	FAccountReset_OnClickedAccountResetCancelBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_Confirm
{
public:
	FOnClicked_Confirm(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_ReportTab
{
public:
	FOnClicked_ReportTab(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_Restriction
{
public:
	FOnClicked_Restriction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedConfirm_StickerRestriction
{
public:
	FOnClickedConfirm_StickerRestriction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNavigationEditableText
{
public:
	FOnNavigationEditableText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EUINavigation GetUINavigation() {
		return memory.read<enum class EUINavigation>(m_addr + 0);
	}
	struct UWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNavigationListView
{
public:
	FOnNavigationListView(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EUINavigation GetUINavigation() {
		return memory.read<enum class EUINavigation>(m_addr + 0);
	}
	struct UWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMoveLiveryStickerLayerMouseY
{
public:
	FMoveLiveryStickerLayerMouseY(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInDelta() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_NxAPurchase
{
public:
	FDev_NxAPurchase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCategory() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetstockId() {
		return memory.read<struct FString>(m_addr + 16);
	}
	bool GetbDirect() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_Preview
{
public:
	FOnClicked_Preview(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCloseLobbyPopup
{
public:
	FCloseLobbyPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnChallengeListScrollableChanged
{
public:
	FOnChallengeListScrollableChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbScrollable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCharacterOnOffKart
{
public:
	FOnCharacterOnOffKart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbGetOnKart() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedLiveryReportVewerButton
{
public:
	FOnClickedLiveryReportVewerButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCustomDataUpdated
{
public:
	FOnCustomDataUpdated(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}
	int32_t GetInParam() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedBackButtonInAttendaceEventPopup
{
public:
	FOnClickedBackButtonInAttendaceEventPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedBackButtonInGrandPrixFinalResultPopup
{
public:
	FOnClickedBackButtonInGrandPrixFinalResultPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_SetRetireCount
{
public:
	FDev_SetRetireCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedBackgroundButtonInAchievementCompletedPopup
{
public:
	FOnClickedBackgroundButtonInAchievementCompletedPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedChallengeButton
{
public:
	FOnClickedChallengeButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedConfirmButtonInLoginEventPopup
{
public:
	FOnClickedConfirmButtonInLoginEventPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClientUpdateData
{
public:
	FClientUpdateData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInTotalLapTime() {
		return memory.read<float>(m_addr + 0);
	}
	float GetInBestLapTime() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedLicenseNoticePopupMoveLicense
{
public:
	FOnClickedLicenseNoticePopupMoveLicense(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnQuitButtonClicked
{
public:
	FOnQuitButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChargeGauge
{
public:
	FChargeGauge(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnRemoveEmoticonWidget
{
public:
	FOnRemoveEmoticonWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AOutGamePawn GetOutGamePawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AOutGamePawn(ptr_addr);
	}
	bool GetbVisible() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnShortcutMenuCloseButtonClicked
{
public:
	FOnShortcutMenuCloseButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnShowCommonMenuButtonClicked
{
public:
	FOnShowCommonMenuButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDisableKartSimulatePhysics
{
public:
	FDisableKartSimulatePhysics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetInActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSocialButtonClicked
{
public:
	FOnSocialButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateEmoticonWidget
{
public:
	FOnUpdateEmoticonWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetaccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class EOutGamePawnType GetLobbyPawnType() {
		return memory.read<enum class EOutGamePawnType>(m_addr + 16);
	}
	struct FString GetEmoticonItemId() {
		return memory.read<struct FString>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEnableReadyAndCancel
{
public:
	FSetEnableReadyAndCancel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPressedRotateCharacterButton
{
public:
	FOnPressedRotateCharacterButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMatchMode_OnClickedPresetButton
{
public:
	FMatchMode_OnClickedPresetButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerSetPlayMissionDefAndRewardForCheat
{
public:
	FServerSetPlayMissionDefAndRewardForCheat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKtPlayMissionDef GetInMissionDef() {
		return memory.read<struct FKtPlayMissionDef>(m_addr + 0);
	}
	struct FKtPlayMissionRewardDef GetInReward() {
		return memory.read<struct FKtPlayMissionRewardDef>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeSelectedServer
{
public:
	FChangeSelectedServer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Get_() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FConnectNexonArenaConfirm
{
public:
	FConnectNexonArenaConfirm(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FServer_RequestJourney
{
public:
	FServer_RequestJourney(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInTrackAlias() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class ERaceMode GetInRaceMode() {
		return memory.read<enum class ERaceMode>(m_addr + 16);
	}
	struct FString GetInGameMode() {
		return memory.read<struct FString>(m_addr + 24);
	}
	struct FString GetInTrackPackageName() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetInParams() {
		return memory.read<struct FString>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCinematicMainOpened
{
public:
	FOnCinematicMainOpened(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInPlaylistIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCinematicMainSkipButton
{
public:
	FOnCinematicMainSkipButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCloseDialog
{
public:
	FCloseDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInviteUserMenu_OnActionButtonClicked
{
public:
	FInviteUserMenu_OnActionButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonType() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateDebugAccount
{
public:
	FCreateDebugAccount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UKdAccount GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UKdAccount(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCinematicSeasonSkipButton
{
public:
	FOnCinematicSeasonSkipButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedControlKeyConfirm
{
public:
	FOnClickedControlKeyConfirm(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickLoginButton
{
public:
	FOnClickLoginButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCreateNicknameResult
{
public:
	FOnCreateNicknameResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPrSetRiderNameResult GetInCreateResult() {
		return memory.read<enum class EPrSetRiderNameResult>(m_addr + 0);
	}
	struct FString GetInNotSupportedLetter() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnIdBoxCommitted
{
public:
	FOnIdBoxCommitted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	enum class ETextCommit GetInCommitMethod() {
		return memory.read<enum class ETextCommit>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOpenTermsOfService
{
public:
	FOpenTermsOfService(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_SteamPurchase
{
public:
	FDev_SteamPurchase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCategory() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetstockId() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRequestRiderNameDuplicateCheck
{
public:
	FRequestRiderNameDuplicateCheck(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInRiderName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_AODecalMaxOpacity
{
public:
	FDev_AODecalMaxOpacity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FResolvePatchEvent
{
public:
	FResolvePatchEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FServer_OverlappedWith
{
public:
	FServer_OverlappedWith(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AGoItem_Cube GetTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AGoItem_Cube(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAutoFriendReject
{
public:
	FGetAutoFriendReject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FWaitForLinkToNexonArena
{
public:
	FWaitForLinkToNexonArena(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnWaitExpireAccount
{
public:
	FOnWaitExpireAccount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetExpireSec() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDetailButtonFocused
{
public:
	FOnDetailButtonFocused(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetBtn_Index() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnToyVerifyPayment
{
public:
	FOnToyVerifyPayment(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbSucceed() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDetailViewButtonClicked
{
public:
	FOnDetailViewButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedDeleteKeyIcon
{
public:
	FOnClickedDeleteKeyIcon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedInBoxTab
{
public:
	FOnClickedInBoxTab(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_RaceGame
{
public:
	FDev_RaceGame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetLevelName() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedReceiveButton
{
public:
	FOnClickedReceiveButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClientBeginOverlap
{
public:
	FClientBeginOverlap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetOverlappedComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct UPrimitiveComponent GetOtherComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UPrimitiveComponent(ptr_addr);
	}
	int32_t GetOtherBodyIndex() {
		return memory.read<int32_t>(m_addr + 24);
	}
	bool GetbFromSweep() {
		return memory.read<bool>(m_addr + 28);
	}
	struct FHitResult GetSweepResult() {
		return memory.read<struct FHitResult>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedSentMailBoxTab
{
public:
	FOnClickedSentMailBoxTab(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnShowMailRewardPopup
{
public:
	FOnShowMailRewardPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetInItemArray() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FShowRiderNameChangeDialog
{
public:
	FShowRiderNameChangeDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnShowMessageMailPopup
{
public:
	FOnShowMessageMailPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetMailDesc() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnShowWarningPopup
{
public:
	FOnShowWarningPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetTitle() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct FText GetDescText() {
		return memory.read<struct FText>(m_addr + 24);
	}
	struct FText GetDescText2() {
		return memory.read<struct FText>(m_addr + 48);
	}
	struct FText GetSubText() {
		return memory.read<struct FText>(m_addr + 72);
	}
	bool GetbIsCancelButton() {
		return memory.read<bool>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FPurchaseLevelDialog_OnClickedIncrease
{
public:
	FPurchaseLevelDialog_OnClickedIncrease(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnShowWarningPopupSimple
{
public:
	FOnShowWarningPopupSimple(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMailWarningPopupType GetType() {
		return memory.read<enum class EMailWarningPopupType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTryGetSelected_InboxMail
{
public:
	FOnTryGetSelected_InboxMail(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOutMailIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveAllMail
{
public:
	FReceiveAllMail(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNextSpeedLimit
{
public:
	FOnNextSpeedLimit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSuccessSpeed() {
		return memory.read<float>(m_addr + 0);
	}
	int32_t GetScore() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedNextPage
{
public:
	FOnClickedNextPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedNextPageList
{
public:
	FOnClickedNextPageList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPrevPage
{
public:
	FOnClickedPrevPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateGameStartAlertFromPartyPopup
{
public:
	FOnUpdateGameStartAlertFromPartyPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetWaitTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedGameStartAlertPopupReturnButton
{
public:
	FOnClickedGameStartAlertPopupReturnButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMainmenuActivateTab
{
public:
	FOnMainmenuActivateTab(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPageCase GetPageCase() {
		return memory.read<enum class EPageCase>(m_addr + 0);
	}
	bool GetbFocusToDefault() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetbAsyncLoad() {
		return memory.read<bool>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnShowGameStartAlertFromPartyPopup
{
public:
	FOnShowGameStartAlertFromPartyPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetWaitTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnterKeyDialog_OnClickedCancelKey
{
public:
	FEnterKeyDialog_OnClickedCancelKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnterKeyDialog_OnClickedEnterKey
{
public:
	FEnterKeyDialog_OnClickedEnterKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FItemGuidePopup_OnClickedShowDetailButton
{
public:
	FItemGuidePopup_OnClickedShowDetailButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLicense_OnClickedShowReward
{
public:
	FLicense_OnClickedShowReward(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMatchMode_OnClickedChatButton
{
public:
	FMatchMode_OnClickedChatButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMatchMode_OnClickedMatchStartButton
{
public:
	FMatchMode_OnClickedMatchStartButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMatchMode_OnClickedMoveToLicenseButton
{
public:
	FMatchMode_OnClickedMoveToLicenseButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMatchMode_OnClickedShowItemGuideButton
{
public:
	FMatchMode_OnClickedShowItemGuideButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTextChangedOnEnterDateOfBirthPopup
{
public:
	FOnTextChangedOnEnterDateOfBirthPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMatchMode_OnModeChecked
{
public:
	FMatchMode_OnModeChecked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMatchMode_OnModeUnchecked
{
public:
	FMatchMode_OnModeUnchecked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpeed_OnClickedShowSpeedGuide
{
public:
	FSpeed_OnClickedShowSpeedGuide(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FItemGuideDetailPopup_OnItemFocused
{
public:
	FItemGuideDetailPopup_OnItemFocused(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedNextModeButton
{
public:
	FOnClickedNextModeButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNormalChallenge_OnClickedBackButton
{
public:
	FNormalChallenge_OnClickedBackButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAccountReset_OnChangedAccountResetText
{
public:
	FAccountReset_OnChangedAccountResetText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_KrPcPurchase
{
public:
	FDev_KrPcPurchase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCategory() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetstockId() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAccountReset_OnCommittedAccountResetText
{
public:
	FAccountReset_OnCommittedAccountResetText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	enum class ETextCommit GetCommitMethod() {
		return memory.read<enum class ETextCommit>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedEquipItem
{
public:
	FOnClickedEquipItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnStudioSettingsBackButtonClicked
{
public:
	FOnStudioSettingsBackButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCultureOptionUpdate
{
public:
	FCultureOptionUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}
	int32_t GetInParam() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnableOptionUpdate
{
public:
	FEnableOptionUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}
	int32_t GetInParam() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnItemFeed
{
public:
	FOnItemFeed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EItemType GetUsedItemType() {
		return memory.read<enum class EItemType>(m_addr + 0);
	}
	int32_t GetUsedItemId() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct TSoftObjectPtr<ULevelSequence> GetFeedMirrorSequence() {
		return memory.read<struct TSoftObjectPtr<ULevelSequence>>(m_addr + 8);
	}
	float GetFeedMirrorTime() {
		return memory.read<float>(m_addr + 48);
	}
	struct FTransform GetSpawnTransform() {
		return memory.read<struct FTransform>(m_addr + 64);
	}
	struct AActor GetTargetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FNullGetter
{
public:
	FNullGetter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FNullSetter
{
public:
	FNullSetter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedRevertOptionCancel
{
public:
	FOnClickedRevertOptionCancel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddInfo
{
public:
	FAddInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FHitInfo GetHitInfo() {
		return memory.read<struct FHitInfo>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_SetHiddenContent
{
public:
	FDev_SetHiddenContent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EContentType GetContentType() {
		return memory.read<enum class EContentType>(m_addr + 0);
	}
	bool GetbIsHidden() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUnChecked_UseLayerScaleY
{
public:
	FOnUnChecked_UseLayerScaleY(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_GetValue
{
public:
	FDev_GetValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnExitAfterSaveClicked
{
public:
	FOnExitAfterSaveClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNotUsed() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnExitWithoutSaveClicked
{
public:
	FOnExitWithoutSaveClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNotUsed() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMuteButtonClicked
{
public:
	FOnMuteButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNoLongerEnglishPopupConfirmed
{
public:
	FOnNoLongerEnglishPopupConfirmed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNotUsed() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetManuallyRedraw
{
public:
	FGetManuallyRedraw(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPlayPreviewButtonClicked
{
public:
	FOnPlayPreviewButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnResetButtonClicked
{
public:
	FOnResetButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNotUsed() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnResetPopupConfirmed
{
public:
	FOnResetPopupConfirmed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNotUsed() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSaveButtonClicked
{
public:
	FOnSaveButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNotUsed() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSelectOptionComboButton
{
public:
	FOnSelectOptionComboButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticast_UseSlotChanger
{
public:
	FMulticast_UseSlotChanger(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInSlotChangerCount() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedShowPurchaseConfirmList
{
public:
	FOnClickedShowPurchaseConfirmList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_TMITickLogLatency
{
public:
	FDev_TMITickLogLatency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInLatency() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOtherRiderLiveryOptionUpdate
{
public:
	FOtherRiderLiveryOptionUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}
	int32_t GetInParam() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSyncOptionUpdate
{
public:
	FSyncOptionUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}
	int32_t GetInParam() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCustomerQR_CloseDialog
{
public:
	FCustomerQR_CloseDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCustomerQR_OpenDialog
{
public:
	FCustomerQR_OpenDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerListenInputLog
{
public:
	FServerListenInputLog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FInputLog> GetLogs() {
		return memory.read<struct TArray<struct FInputLog>>(m_addr + 0);
	}
	int32_t GetBeginIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedAccountResetBtn
{
public:
	FOnClickedAccountResetBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocusedCouponBtn
{
public:
	FOnFocusedCouponBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMainScrollBoxScrolled
{
public:
	FOnMainScrollBoxScrolled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCurrentOffset() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSelectOptionKeyButton
{
public:
	FOnSelectOptionKeyButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUnFocusKeyOption
{
public:
	FOnUnFocusKeyOption(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FServer_SetClientWinCount
{
public:
	FServer_SetClientWinCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWinCount() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentCamera
{
public:
	FGetCurrentCamera(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AMainMenuKartPawnCamera GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AMainMenuKartPawnCamera(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPremiumChallengeSlot
{
public:
	FOnClickedPremiumChallengeSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPremiumChallenge_OnClickedBackButton
{
public:
	FPremiumChallenge_OnClickedBackButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticast_AddLog
{
public:
	FMulticast_AddLog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInLog() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDevRiderName
{
public:
	FSetDevRiderName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetriderName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocusedPremiumChallengeSlot
{
public:
	FOnFocusedPremiumChallengeSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSlotIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClientEndOverlap
{
public:
	FClientEndOverlap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetOverlappedComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct UPrimitiveComponent GetOtherComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UPrimitiveComponent(ptr_addr);
	}
	int32_t GetOtherBodyIndex() {
		return memory.read<int32_t>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnLerpAnimScale
{
public:
	FOnLerpAnimScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPremiumChallenge_OnClickedPrevTab
{
public:
	FPremiumChallenge_OnClickedPrevTab(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFinishedExpressionWidgetAnimation
{
public:
	FOnFinishedExpressionWidgetAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UScenarioWidgetBase GetInWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UScenarioWidgetBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedConfirmRegister
{
public:
	FOnClickedConfirmRegister(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPresetSlot
{
public:
	FOnClickedPresetSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPresetSlotInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCloseButtonClicked
{
public:
	FOnCloseButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnOverwritePresetButtonClicked
{
public:
	FOnOverwritePresetButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUsePresetButtonClicked
{
public:
	FOnUsePresetButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_PurchaseLevel
{
public:
	FOnClicked_PurchaseLevel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetrewardIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCheckedStateAgree
{
public:
	FOnCheckedStateAgree(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedConfirmPurchase
{
public:
	FOnClickedConfirmPurchase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_GetItem
{
public:
	FDev_GetItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetType() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUncheckedStateAgree
{
public:
	FOnUncheckedStateAgree(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FShowMyKcoinPopup
{
public:
	FShowMyKcoinPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedRestartButton
{
public:
	FOnClickedRestartButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPurchaseConfirmDialog_OnClickedBack
{
public:
	FPurchaseConfirmDialog_OnClickedBack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPurchaseLevelDialog_OnClickedBack
{
public:
	FPurchaseLevelDialog_OnClickedBack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPurchaseLevelDialog_OnClickedDecrease
{
public:
	FPurchaseLevelDialog_OnClickedDecrease(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPurchaseRacingPassDialog_OnClickedBack
{
public:
	FPurchaseRacingPassDialog_OnClickedBack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPurchaseRacingPassDialog_OnClickedPremiumPassBundle
{
public:
	FPurchaseRacingPassDialog_OnClickedPremiumPassBundle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRacingPass_OnClickedBackButton
{
public:
	FRacingPass_OnClickedBackButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDeletedSticker
{
public:
	FOnDeletedSticker(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetID() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRacingPass_OnClickedKeyIconChallenge
{
public:
	FRacingPass_OnClickedKeyIconChallenge(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRacingPass_OnClickedKeyIconRacingPass
{
public:
	FRacingPass_OnClickedKeyIconRacingPass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRacingPass_OnClickedKeyIconShowItemList
{
public:
	FRacingPass_OnClickedKeyIconShowItemList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRacingPass_OnClickedKeyIconStudio
{
public:
	FRacingPass_OnClickedKeyIconStudio(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRacingPass_OnClickedPurchaseLevelButton
{
public:
	FRacingPass_OnClickedPurchaseLevelButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedRacingPassRewardItem
{
public:
	FOnClickedRacingPassRewardItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedConfirmOnKcoinList
{
public:
	FOnClickedConfirmOnKcoinList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FShowNotEnoughBalancePopup
{
public:
	FShowNotEnoughBalancePopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FFocusRacingPassRewardItem
{
public:
	FFocusRacingPassRewardItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetbForceLoadPawn() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocusedRacingPassRewardItem
{
public:
	FOnFocusedRacingPassRewardItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUnfocusedRacingPassRewardItem
{
public:
	FOnUnfocusedRacingPassRewardItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FWidget_StickerPopup_OnConfirmButtonClick
{
public:
	FWidget_StickerPopup_OnConfirmButtonClick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMessageNextButtonClicked
{
public:
	FOnMessageNextButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClosePurchaseRacingPassStockItemCompletePopup
{
public:
	FClosePurchaseRacingPassStockItemCompletePopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCloseShopPurchaseConfirmStockItemAllDialog
{
public:
	FCloseShopPurchaseConfirmStockItemAllDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickConfirmDialogConfirmBtn
{
public:
	FOnClickConfirmDialogConfirmBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedBackOnKcoinList
{
public:
	FOnClickedBackOnKcoinList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedBackOnMyKcoinPopup
{
public:
	FOnClickedBackOnMyKcoinPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedBackOnPurchaseWidget
{
public:
	FOnClickedBackOnPurchaseWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedCancelOnConfirmListDialog
{
public:
	FOnClickedCancelOnConfirmListDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnReportResultReadyInAccount
{
public:
	FOnReportResultReadyInAccount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPrSendReportResult GetResult() {
		return memory.read<enum class EPrSendReportResult>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedCancelOnEnterDateOfBirthPopup
{
public:
	FOnClickedCancelOnEnterDateOfBirthPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedCancelPurchaseResult
{
public:
	FOnClickedCancelPurchaseResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_OverlapItemCube
{
public:
	FDev_OverlapItemCube(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedCashKcoinLucci
{
public:
	FOnClickedCashKcoinLucci(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedCommercialLaw
{
public:
	FOnClickedCommercialLaw(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnStudioBackButtonClicked
{
public:
	FOnStudioBackButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedConfirmOnConfirmListDialog
{
public:
	FOnClickedConfirmOnConfirmListDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedConfirmPurchaseResult
{
public:
	FOnClickedConfirmPurchaseResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPressedAutoRightRotateMode
{
public:
	FOnPressedAutoRightRotateMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedFocusableButtonInMain
{
public:
	FOnClickedFocusableButtonInMain(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedFriendListEntry
{
public:
	FOnClickedFriendListEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedKcoinListButton
{
public:
	FOnClickedKcoinListButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedKcoinPackageEntryButton
{
public:
	FOnClickedKcoinPackageEntryButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedMainTabNext
{
public:
	FOnClickedMainTabNext(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSkipOrRemoved
{
public:
	FOnSkipOrRemoved(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	enum class EEndPlayReason GetEndPlayReason() {
		return memory.read<enum class EEndPlayReason>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedMainTabPrev
{
public:
	FOnClickedMainTabPrev(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedSelectButtonInModeChangeDialog
{
public:
	FOnClickedSelectButtonInModeChangeDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedMyKcoinInfo
{
public:
	FOnClickedMyKcoinInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPaymentLaw
{
public:
	FOnClickedPaymentLaw(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPricePreview
{
public:
	FOnClickedPricePreview(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticast_RaceDesc
{
public:
	FMulticast_RaceDesc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInTrackAlias() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class ERaceMode GetInRaceMode() {
		return memory.read<enum class ERaceMode>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateLobbyPawn
{
public:
	FOnUpdateLobbyPawn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEquipment() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPromotionItem
{
public:
	FOnClickedPromotionItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPromotionPrev
{
public:
	FOnClickedPromotionPrev(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPurchaseConfirmStockItem
{
public:
	FOnClickedPurchaseConfirmStockItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedShowAgreeTerms
{
public:
	FOnClickedShowAgreeTerms(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedToggleFriendList
{
public:
	FOnClickedToggleFriendList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedWithDrawSubscription
{
public:
	FOnClickedWithDrawSubscription(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTeamColorOf
{
public:
	FTeamColorOf(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ERaceTeamType GetTeamID() {
		return memory.read<enum class ERaceTeamType>(m_addr + 0);
	}
	struct FTeamColor GetReturnValue() {
		return memory.read<struct FTeamColor>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnConfirmPurchasingItem
{
public:
	FOnConfirmPurchasingItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetStockItemIDs() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_MessageDialog
{
public:
	FBP_MessageDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetMessage() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocusFocusableButtonInDetail
{
public:
	FOnFocusFocusableButtonInDetail(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocusFocusableButtonInKCoinList
{
public:
	FOnFocusFocusableButtonInKCoinList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocusFocusableButtonInKCoinPackageList
{
public:
	FOnFocusFocusableButtonInKCoinPackageList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPickupConfirmItem
{
public:
	FOnPickupConfirmItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetShopStockItemIDs() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnRefundConfirmItem
{
public:
	FOnRefundConfirmItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetShopStockItemIDs() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMain_OnAnnouncmentClicked
{
public:
	FMain_OnAnnouncmentClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnToyRequestToyBillingProduct
{
public:
	FOnToyRequestToyBillingProduct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetErrorCode() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOwnerPlayer
{
public:
	FGetOwnerPlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULocalPlayer GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ULocalPlayer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRequestRiderNameChangeReserve
{
public:
	FRequestRiderNameChangeReserve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInRiderName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FShowFailInventoryAddStockPopup
{
public:
	FShowFailInventoryAddStockPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FFriendMenu_OnActionButtonClicked
{
public:
	FFriendMenu_OnActionButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonType() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FShowNxACheckoutWidget
{
public:
	FShowNxACheckoutWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetLoadURL() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBlockList_CloseDialog
{
public:
	FBlockList_CloseDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNotUsed() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPivot
{
public:
	FSetPivot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetInPivot() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMain_OnCloseButtonClicked
{
public:
	FMain_OnCloseButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetKdInstance
{
public:
	FGetKdInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UKdGameInstance GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UKdGameInstance(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSeasonChanged
{
public:
	FOnSeasonChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UKtSeasonDataSet GetData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UKtSeasonDataSet(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMain_OnReportClicked
{
public:
	FMain_OnReportClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMain_OnTermsAndConditionsClicked
{
public:
	FMain_OnTermsAndConditionsClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnKeyGuideShowWASDButtonClicked
{
public:
	FOnKeyGuideShowWASDButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReport_OnSubcategoryCloseButtonClicked
{
public:
	FReport_OnSubcategoryCloseButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FApplyGamepadPreset
{
public:
	FApplyGamepadPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FInputActionKeyMapping> GetInputAction() {
		return memory.read<struct TArray<struct FInputActionKeyMapping>>(m_addr + 0);
	}
	struct TArray<struct FInputAxisKeyMapping> GetInputAxis() {
		return memory.read<struct TArray<struct FInputAxisKeyMapping>>(m_addr + 16);
	}
	bool GetbSaveSetting() {
		return memory.read<bool>(m_addr + 32);
	}
	bool GetbSaveConfig() {
		return memory.read<bool>(m_addr + 33);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 34);
	}

private:
	std::uint64_t m_addr = 0;
};class FReport_CloseMainCategorySelectDialog
{
public:
	FReport_CloseMainCategorySelectDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDriftMissionStartTimer
{
public:
	FOnDriftMissionStartTimer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbStartTimer() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReport_MainCategoryOnClickedPlayerReportButton
{
public:
	FReport_MainCategoryOnClickedPlayerReportButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReport_Send
{
public:
	FReport_Send(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTermsAndConditions_CloseDialog
{
public:
	FTermsAndConditions_CloseDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReport_OnClickedShowGamerCardButton
{
public:
	FReport_OnClickedShowGamerCardButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_SetSQTime
{
public:
	FDev_SetSQTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_MainTab_Left
{
public:
	FOnClicked_MainTab_Left(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_MainTab_Right
{
public:
	FOnClicked_MainTab_Right(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_Search
{
public:
	FOnClicked_Search(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetServerTickRate
{
public:
	FSetServerTickRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInTickRate() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_Upload
{
public:
	FOnClicked_Upload(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FWidget_ReportDialog_OnConfirmButtonClick
{
public:
	FWidget_ReportDialog_OnConfirmButtonClick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FServer_GimmickItemAffect
{
public:
	FServer_GimmickItemAffect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetGimmick() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	UObject GetReactionClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FWidget_ReportDialog_OnItemChecked
{
public:
	FWidget_ReportDialog_OnItemChecked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FWidget_SearchPopup_OnTagSelectUncheck
{
public:
	FWidget_SearchPopup_OnTagSelectUncheck(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FWidget_StockPopup_BookmarkButtonClick
{
public:
	FWidget_StockPopup_BookmarkButtonClick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_DisconnectPersonalResultPlayer
{
public:
	FDev_DisconnectPersonalResultPlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPlayerNumber() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FWidget_StockPopup_ConfirmButtonClick
{
public:
	FWidget_StockPopup_ConfirmButtonClick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FWidget_TagSelectPopup_OnTagSelectClick
{
public:
	FWidget_TagSelectPopup_OnTagSelectClick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FWidget_TextInput_ConfirmClick
{
public:
	FWidget_TextInput_ConfirmClick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerSetLoadingSecond
{
public:
	FServerSetLoadingSecond(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FWidget_TextInputPopup_OnTextChanged
{
public:
	FWidget_TextInputPopup_OnTextChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetChangedText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FWidget_UploadPopup_OnNewNameClick
{
public:
	FWidget_UploadPopup_OnNewNameClick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetBtnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUnloadLevelStreamingComplete
{
public:
	FOnUnloadLevelStreamingComplete(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInLinkID() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedNextRankingBoardTabButton
{
public:
	FOnClickedNextRankingBoardTabButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPrevRankingBoardTabButton
{
public:
	FOnClickedPrevRankingBoardTabButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnButtonReleased_MajorIntroSequence
{
public:
	FOnButtonReleased_MajorIntroSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetInSequenceType() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedSelectRankerButton
{
public:
	FOnClickedSelectRankerButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedStartTimeAttackButton
{
public:
	FOnClickedStartTimeAttackButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedWatchGameReplayButton
{
public:
	FOnClickedWatchGameReplayButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTrackChangeDialogOnTrackChanged
{
public:
	FTrackChangeDialogOnTrackChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInTrackAlias() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedNextRankingBoardPageButton
{
public:
	FOnClickedNextRankingBoardPageButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_OpenShadowQuest
{
public:
	FDev_OpenShadowQuest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReplayFileName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetSubGameMode() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetShadowStartTime() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetMaxDistance() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetTimeLimit() {
		return memory.read<int32_t>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedExitGame
{
public:
	FOnClickedExitGame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedRetryGame
{
public:
	FOnClickedRetryGame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedGamerCardButton
{
public:
	FOnClickedGamerCardButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FActivateWaterSplashEffect
{
public:
	FActivateWaterSplashEffect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetTargetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct UParticleSystem GetEffect() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UParticleSystem(ptr_addr);
	}
	float GetActiveTimeSeconds() {
		return memory.read<float>(m_addr + 16);
	}
	struct UParticleSystemComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UParticleSystemComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCharacterLookAt
{
public:
	FCharacterLookAt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRotator GetInRotator() {
		return memory.read<struct FRotator>(m_addr + 0);
	}
	float GetDeltaTime() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCrashKart
{
public:
	FOnCrashKart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECollisionChannel GetCollisionObjectType() {
		return memory.read<enum class ECollisionChannel>(m_addr + 0);
	}
	int32_t GetCrashLevel() {
		return memory.read<int32_t>(m_addr + 4);
	}
	float GetHitVelocity() {
		return memory.read<float>(m_addr + 8);
	}
	struct FVector GetCrashLocation() {
		return memory.read<struct FVector>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClientVerified
{
public:
	FOnClientVerified(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EClientVerifierOrder GetInOrder() {
		return memory.read<enum class EClientVerifierOrder>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FServer_OverrideTotalTime
{
public:
	FServer_OverrideTotalTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMinute() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetSecond() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetMillisecond() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FServer_TMITickLogLatency
{
public:
	FServer_TMITickLogLatency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInLatency() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnGenerateWidget
{
public:
	FOnGenerateWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct UWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnGfsAccountPlatformDataUpdated
{
public:
	FOnGfsAccountPlatformDataUpdated(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAccountPlatformData GetData() {
		return memory.read<struct FAccountPlatformData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_GoToReplayTimeSeconds
{
public:
	FDev_GoToReplayTimeSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTargetTimeSecond() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnGfsFriendRequestReceived
{
public:
	FOnGfsFriendRequestReceived(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAccountPlatformData GetData() {
		return memory.read<struct FAccountPlatformData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdatePartyInvitation
{
public:
	FOnUpdatePartyInvitation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbRefused() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOpenAccountLinkWeb
{
public:
	FOpenAccountLinkWeb(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedDeleteButton
{
public:
	FOnClickedDeleteButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnComboBoxSelection_MajorPodiumSequence
{
public:
	FOnComboBoxSelection_MajorPodiumSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class ESelectInfo GetSelectionType() {
		return memory.read<enum class ESelectInfo>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnComboBoxSelectionChanged_Character
{
public:
	FOnComboBoxSelectionChanged_Character(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class ESelectInfo GetSelectionType() {
		return memory.read<enum class ESelectInfo>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnComboBoxSelectionChanged_Costume
{
public:
	FOnComboBoxSelectionChanged_Costume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetInSelectedItemKey() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnComboBoxSelectionChanged_Kart
{
public:
	FOnComboBoxSelectionChanged_Kart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class ESelectInfo GetSelectionType() {
		return memory.read<enum class ESelectInfo>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnComboBoxSelectionChanged_Parts
{
public:
	FOnComboBoxSelectionChanged_Parts(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetInSelectedItemKey() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FClientRelaySetAuthBeginRaceTime
{
public:
	FClientRelaySetAuthBeginRaceTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetRelayTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	float GetTime() {
		return memory.read<float>(m_addr + 8);
	}
	float GetIntroTime() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnComboBoxSelection_Sit
{
public:
	FOnComboBoxSelection_Sit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class ESelectInfo GetSelectionType() {
		return memory.read<enum class ESelectInfo>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCylinderArcAngle
{
public:
	FGetCylinderArcAngle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGeometryMode
{
public:
	FGetGeometryMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EWidgetGeometryMode GetReturnValue() {
		return memory.read<enum class EWidgetGeometryMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMaterialInstance
{
public:
	FGetMaterialInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInstanceDynamic GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLaps
{
public:
	FSetLaps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInLapCount() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPivot
{
public:
	FGetPivot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMoveGridSlots
{
public:
	FMoveGridSlots(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGridPanel GetFromRow() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UGridPanel(ptr_addr);
	}
	struct UGridPanel GetToPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UGridPanel(ptr_addr);
	}
	int32_t GetToRow() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct FVector2D GetAddNudge() {
		return memory.read<struct FVector2D>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRedrawTime
{
public:
	FGetRedrawTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRenderTarget
{
public:
	FGetRenderTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextureRenderTarget2D GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTextureRenderTarget2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_NxAPickup
{
public:
	FDev_NxAPickup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GettransactionId() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTickWhenOffscreen
{
public:
	FGetTickWhenOffscreen(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWidget
{
public:
	FGetWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWidgetSpace
{
public:
	FGetWidgetSpace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EWidgetSpace GetReturnValue() {
		return memory.read<enum class EWidgetSpace>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWindowFocusable
{
public:
	FGetWindowFocusable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_DelLivery
{
public:
	FDev_DelLivery(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetID() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetItemID
{
public:
	FSetItemID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetinString() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWindowVisiblility
{
public:
	FGetWindowVisiblility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EWindowVisibility GetReturnValue() {
		return memory.read<enum class EWindowVisibility>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMessageHUDWidget
{
public:
	FSetMessageHUDWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetInActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct FScenarioMessageHUDWidgetDataGroup GetInDataGroup() {
		return memory.read<struct FScenarioMessageHUDWidgetDataGroup>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsWidgetVisible
{
public:
	FIsWidgetVisible(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFlashIndicatorEnabled
{
public:
	FSetFlashIndicatorEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCylinderArcAngle
{
public:
	FSetCylinderArcAngle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInCylinderArcAngle() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDrawAtDesiredSize
{
public:
	FSetDrawAtDesiredSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInDrawAtDesiredSize() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDrawSize
{
public:
	FSetDrawSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetSize() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGeometryMode
{
public:
	FSetGeometryMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EWidgetGeometryMode GetInGeometryMode() {
		return memory.read<enum class EWidgetGeometryMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeLanguage_ShowComboPanel
{
public:
	FChangeLanguage_ShowComboPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetManuallyRedraw
{
public:
	FSetManuallyRedraw(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUseManualRedraw() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOwnerPlayer
{
public:
	FSetOwnerPlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULocalPlayer GetLocalPlayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ULocalPlayer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRedrawTime
{
public:
	FSetRedrawTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInRedrawTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTickMode
{
public:
	FSetTickMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ETickMode GetInTickMode() {
		return memory.read<enum class ETickMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTintColorAndOpacity
{
public:
	FSetTintColorAndOpacity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetNewTintColorAndOpacity() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDediWidgetChatCommitted
{
public:
	FOnDediWidgetChatCommitted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	enum class ETextCommit GetInCommitMethod() {
		return memory.read<enum class ETextCommit>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTwoSided
{
public:
	FSetTwoSided(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbWantTwoSided() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWidget
{
public:
	FSetWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWindowFocusable
{
public:
	FSetWindowFocusable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInWindowFocusable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FServer_AddChat
{
public:
	FServer_AddChat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInChat() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSelectMode
{
public:
	FOnSelectMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FServer_SendClientDesc
{
public:
	FServer_SendClientDesc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDedicatedLobbyPlayerDesc GetInDesc() {
		return memory.read<struct FDedicatedLobbyPlayerDesc>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddLog
{
public:
	FAddLog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_LoadReplay
{
public:
	FDev_LoadReplay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveEditorTick
{
public:
	FReceiveEditorTick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDeltaTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnButtonReleased_ItemAffectBy
{
public:
	FOnButtonReleased_ItemAffectBy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetInItemType() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTriggerBeginOverlap
{
public:
	FTriggerBeginOverlap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetOverlappedComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct UPrimitiveComponent GetOtherComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UPrimitiveComponent(ptr_addr);
	}
	int32_t GetOtherBodyIndex() {
		return memory.read<int32_t>(m_addr + 24);
	}
	bool GetbFromSweep() {
		return memory.read<bool>(m_addr + 28);
	}
	struct FHitResult GetSweepResult() {
		return memory.read<struct FHitResult>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnButtonReleased_MajorFinishSequence
{
public:
	FOnButtonReleased_MajorFinishSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetInSequenceType() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnButtonReleased_MajorPodiumSequence
{
public:
	FOnButtonReleased_MajorPodiumSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetInSequenceType() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FResolutionSelected
{
public:
	FResolutionSelected(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class ESelectInfo GetSelectionType() {
		return memory.read<enum class ESelectInfo>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FServer_RequestOnAffectedBy
{
public:
	FServer_RequestOnAffectedBy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FItemAffectParam GetParam() {
		return memory.read<struct FItemAffectParam>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdatePartyState
{
public:
	FOnUpdatePartyState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPartyChageState GetChangeState() {
		return memory.read<enum class EPartyChageState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSubEntryClicked
{
public:
	FOnSubEntryClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetrewardIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FStopForceFeedback
{
public:
	FStopForceFeedback(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetInst
{
public:
	FGetInst(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UKdService GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UKdService(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIndividualOthersColor
{
public:
	FIndividualOthersColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTeamColor GetReturnValue() {
		return memory.read<struct FTeamColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMoveGridHeader
{
public:
	FMoveGridHeader(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGridPanel GetFromHeader() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UGridPanel(ptr_addr);
	}
	struct UGridPanel GetToPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UGridPanel(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticastRelaySendResultData
{
public:
	FMulticastRelaySendResultData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetRelayTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct TArray<struct FMajorGamePlayerData> GetInPlayerContainer() {
		return memory.read<struct TArray<struct FMajorGamePlayerData>>(m_addr + 8);
	}
	struct TArray<struct FMajorGameTeamData> GetInTeamContainer() {
		return memory.read<struct TArray<struct FMajorGameTeamData>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveRowsBelow
{
public:
	FRemoveRowsBelow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGridPanel GetGridPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UGridPanel(ptr_addr);
	}
	int32_t GetBeginRowInclusive() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FClientRelayOnFinish
{
public:
	FClientRelayOnFinish(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetRelayTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UObject GetKdPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}
	int32_t Getrank() {
		return memory.read<int32_t>(m_addr + 16);
	}
	float GetTotalTime() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FInfoModifyDialog_OnClickedBackButton
{
public:
	FInfoModifyDialog_OnClickedBackButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedGameplayControlTypeConfirm
{
public:
	FOnClickedGameplayControlTypeConfirm(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDriftGuide
{
public:
	FDriftGuide(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbLeft() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbActivate() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnWrongWay
{
public:
	FOnWrongWay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbWrongWay() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateItemSlot
{
public:
	FUpdateItemSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<enum class EItemType> GetItemTypes() {
		return memory.read<struct TArray<enum class EItemType>>(m_addr + 0);
	}
	bool GetbActivate() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnStartMatch
{
public:
	FOnStartMatch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<enum class ERaceMode> GetGameType() {
		return memory.read<struct TArray<enum class ERaceMode>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUserLevelUpdated
{
public:
	FOnUserLevelUpdated(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EUserLevelUpdatedType GetInType() {
		return memory.read<enum class EUserLevelUpdatedType>(m_addr + 0);
	}
	int32_t GetInLevel() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddChildToSlot
{
public:
	FAddChildToSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSlotName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct UWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UWidget(ptr_addr);
	}
	struct UPanelSlot GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UPanelSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnComponentBeginOverlap
{
public:
	FOnComponentBeginOverlap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetOverlappedComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct UPrimitiveComponent GetOtherComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UPrimitiveComponent(ptr_addr);
	}
	int32_t GetOtherBodyIndex() {
		return memory.read<int32_t>(m_addr + 24);
	}
	bool GetbFromSweep() {
		return memory.read<bool>(m_addr + 28);
	}
	struct FHitResult GetSweepResult() {
		return memory.read<struct FHitResult>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FStrokeByAxis
{
public:
	FStrokeByAxis(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAssistEnable
{
public:
	FOnAssistEnable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedBackButton_GrandPrix
{
public:
	FOnClickedBackButton_GrandPrix(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnGuideInstanceBoost
{
public:
	FOnGuideInstanceBoost(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbReadyInstanceBoost() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticastBeginCasting
{
public:
	FMulticastBeginCasting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UItemComponent GetAttacker() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UItemComponent(ptr_addr);
	}
	struct UItemComponent GetVictim() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UItemComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticastDefend
{
public:
	FMulticastDefend(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UItemComponent GetInVictim() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UItemComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FBeginOverlap
{
public:
	FBeginOverlap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetOverlappedComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct UPrimitiveComponent GetOtherComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UPrimitiveComponent(ptr_addr);
	}
	int32_t GetOtherBodyIndex() {
		return memory.read<int32_t>(m_addr + 24);
	}
	bool GetbFromSweep() {
		return memory.read<bool>(m_addr + 28);
	}
	struct FHitResult GetSweepResult() {
		return memory.read<struct FHitResult>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FClientBarricadeHit
{
public:
	FClientBarricadeHit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetHitComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct UPrimitiveComponent GetOtherComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct FVector GetNormalImpulse() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct FHitResult GetHit() {
		return memory.read<struct FHitResult>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticastSpawn
{
public:
	FMulticastSpawn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UItemComponent GetUser() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UItemComponent(ptr_addr);
	}
	struct TArray<struct FVector> GetMineLocations() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMultiCast_GimmickItemAffect
{
public:
	FMultiCast_GimmickItemAffect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetGimmick() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	UObject GetReactionClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticast_OnSlotLock
{
public:
	FMulticast_OnSlotLock(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCustomHUDButtonUnfocused
{
public:
	FOnCustomHUDButtonUnfocused(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticastAffectedBy
{
public:
	FMulticastAffectedBy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UItemComponent GetUser() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UItemComponent(ptr_addr);
	}
	enum class EItemType GetType() {
		return memory.read<enum class EItemType>(m_addr + 8);
	}
	int32_t GetItemId() {
		return memory.read<int32_t>(m_addr + 12);
	}
	enum class EItemFilterResult GetResult() {
		return memory.read<enum class EItemFilterResult>(m_addr + 16);
	}
	enum class EItemType GetBlockType() {
		return memory.read<enum class EItemType>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerBeginCasting
{
public:
	FServerBeginCasting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInItemSequence() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class EItemType GetItemType() {
		return memory.read<enum class EItemType>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnRecentGameDataReadyInAccount
{
public:
	FOnRecentGameDataReadyInAccount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKtRecentGame GetRecentGame() {
		return memory.read<struct FKtRecentGame>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerSpawnItem
{
public:
	FServerSpawnItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EItemType GetItemType() {
		return memory.read<enum class EItemType>(m_addr + 0);
	}
	enum class ESpawnItemReason GetReason() {
		return memory.read<enum class ESpawnItemReason>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerSetKartRepMovement
{
public:
	FServerSetKartRepMovement(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKartRepMovement GetInKartRepMovement() {
		return memory.read<struct FKartRepMovement>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticastRespawn
{
public:
	FMulticastRespawn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AGoItem_Cube GetCube() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AGoItem_Cube(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FDEV_PlayCharacterMontage
{
public:
	FDEV_PlayCharacterMontage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECharacterMontage GetInMontage() {
		return memory.read<enum class ECharacterMontage>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCutoff
{
public:
	FOnCutoff(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EItemType GetUsedItemType() {
		return memory.read<enum class EItemType>(m_addr + 0);
	}
	int32_t GetUsedItemId() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNewActorAdded
{
public:
	FOnNewActorAdded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EItemType GetUsedItemType() {
		return memory.read<enum class EItemType>(m_addr + 0);
	}
	int32_t GetUsedItemId() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct AActor GetTargetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCancleButton
{
public:
	FCancleButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticastReachedTarget
{
public:
	FMulticastReachedTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UItemComponent GetUser() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UItemComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FServer_PlaySeuqence
{
public:
	FServer_PlaySeuqence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsPlaying() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSirenOverlap
{
public:
	FOnSirenOverlap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetOverlappedComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct UPrimitiveComponent GetOtherComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UPrimitiveComponent(ptr_addr);
	}
	int32_t GetOtherBodyIndex() {
		return memory.read<int32_t>(m_addr + 24);
	}
	bool GetbFromSweep() {
		return memory.read<bool>(m_addr + 28);
	}
	struct FHitResult GetSweepResult() {
		return memory.read<struct FHitResult>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGuideBoostItem
{
public:
	FGuideBoostItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetActive() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticast_ChangeItemUsable
{
public:
	FMulticast_ChangeItemUsable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticast_SpawnItem
{
public:
	FMulticast_SpawnItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AItem GetNewItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AItem(ptr_addr);
	}
	enum class EItemType GetItemType() {
		return memory.read<enum class EItemType>(m_addr + 8);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetItemSequence() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FClear
{
public:
	FClear(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetID() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInviteMenu_OnSearchTextChanged
{
public:
	FInviteMenu_OnSearchTextChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetNewText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSucceeded
{
public:
	FSucceeded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EHitState GetHitState() {
		return memory.read<enum class EHitState>(m_addr + 0);
	}
	struct UTexture2D GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetTextureSmall() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UTexture2D(ptr_addr);
	}
	struct FText GetName() {
		return memory.read<struct FText>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticastAffecting
{
public:
	FMulticastAffecting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UItemComponent GetInVictim() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UItemComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDeletedLivery
{
public:
	FOnDeletedLivery(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInLiveryId() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAutoPartyInviteReject
{
public:
	FGetAutoPartyInviteReject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetForceFeedbackEffect
{
public:
	FGetForceFeedbackEffect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetReflexMode
{
public:
	FGetReflexMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKdReflexMode GetReturnValue() {
		return memory.read<enum class EKdReflexMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBeginGameTime
{
public:
	FGetBeginGameTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetShowOtherRiderLivery
{
public:
	FGetShowOtherRiderLivery(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetShowOtherRiderNames
{
public:
	FGetShowOtherRiderNames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAutoPartyInviteReject
{
public:
	FSetAutoPartyInviteReject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAutoPartyJoinReject
{
public:
	FSetAutoPartyJoinReject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCultureIndex
{
public:
	FSetCultureIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoadURL
{
public:
	FLoadURL(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetNewURL() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetReflexMode
{
public:
	FSetReflexMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKdReflexMode GetMode() {
		return memory.read<enum class EKdReflexMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetShowOtherRiderLivery
{
public:
	FSetShowOtherRiderLivery(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMakeImpulse
{
public:
	FMakeImpulse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMultiplier() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnComponentHitEvent
{
public:
	FOnComponentHitEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetHitComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct UPrimitiveComponent GetOtherComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct FVector GetNormalImpulse() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct FHitResult GetHit() {
		return memory.read<struct FHitResult>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedRiderNameChangeBtn
{
public:
	FOnClickedRiderNameChangeBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSendCreateSessionRequest
{
public:
	FSendCreateSessionRequest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetRegionId() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDriveMode
{
public:
	FSetDriveMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetDriveMode() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGravityFromGroundNormal
{
public:
	FSetGravityFromGroundNormal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetInActivate() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClient_Impulse
{
public:
	FClient_Impulse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetNormalImpulse() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct AActor(ptr_addr);
	}
	float GetOnHitTimeStamp() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnActivatePageWidget
{
public:
	FOnActivatePageWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbActivate() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FEndRaceCountdown
{
public:
	FEndRaceCountdown(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCountdownFinishTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_SetDisableContent
{
public:
	FDev_SetDisableContent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EContentType GetContentType() {
		return memory.read<enum class EContentType>(m_addr + 0);
	}
	bool GetbIsDisable() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClosedInsufficientKoinWarningDialog
{
public:
	FOnClosedInsufficientKoinWarningDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateKartExp
{
public:
	FOnUpdateKartExp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetKartID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetUpdatedExp() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateKartSkillNode
{
public:
	FOnUpdateKartSkillNode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetbSucceed() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FShowKartUpgradeResult
{
public:
	FShowKartUpgradeResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsSuccess() {
		return memory.read<bool>(m_addr + 0);
	}
	enum class EKtItemGrade GetKartGrade() {
		return memory.read<enum class EKtItemGrade>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_ADTEventReward
{
public:
	FDev_ADTEventReward(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getstep() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPawnInit
{
public:
	FSetPawnInit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}
	struct USequencerEquipData GetDataAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USequencerEquipData(ptr_addr);
	}
	struct FString GetPawnName() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_GetFromTitleStorage
{
public:
	FDev_GetFromTitleStorage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetTargetXuid() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_GfsGetUsersByPlatformNickname
{
public:
	FDev_GfsGetUsersByPlatformNickname(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetnickName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_GfsSetPresence
{
public:
	FDev_GfsSetPresence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetnewStatus() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_Gift
{
public:
	FDev_Gift(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReceiverNpsn() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetstockId() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString Getcurrency() {
		return memory.read<struct FString>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_Http
{
public:
	FDev_Http(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Getverb() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetURL() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetHeader() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FString GetBody() {
		return memory.read<struct FString>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTarget
{
public:
	FOnTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_InviteParty
{
public:
	FDev_InviteParty(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetaccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_Join
{
public:
	FDev_Join(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetGameName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_KrPcPickup
{
public:
	FDev_KrPcPickup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_LicenseClear
{
public:
	FDev_LicenseClear(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInLicenseGroupId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetInLicenseMissionId() {
		return memory.read<struct FString>(m_addr + 16);
	}
	int32_t GetInStarCount() {
		return memory.read<int32_t>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_LiveSendInviteFriend
{
public:
	FDev_LiveSendInviteFriend(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Getxuid() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_LootBox_SetContinualResultItem
{
public:
	FDev_LootBox_SetContinualResultItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetItemIdWithCount1st() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetItemIdWithCount2nd() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetItemIdWithCount3rd() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FString GetItemIdWithCount4th() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetItemIdWithCount5th() {
		return memory.read<struct FString>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_LootBox_SetContinualResultType
{
public:
	FDev_LootBox_SetContinualResultType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtItemType GetItemType1st() {
		return memory.read<enum class EKtItemType>(m_addr + 0);
	}
	enum class EKtItemType GetItemType2nd() {
		return memory.read<enum class EKtItemType>(m_addr + 1);
	}
	enum class EKtItemType GetItemType3rd() {
		return memory.read<enum class EKtItemType>(m_addr + 2);
	}
	enum class EKtItemType GetItemType4th() {
		return memory.read<enum class EKtItemType>(m_addr + 3);
	}
	enum class EKtItemType GetItemType5th() {
		return memory.read<enum class EKtItemType>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_Party
{
public:
	FDev_Party(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetTargetAccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_PrintInvenItem
{
public:
	FDev_PrintInvenItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetItemIdPattern() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_SetTestPlatformType
{
public:
	FDev_SetTestPlatformType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKtPlatform GetmachinePlatform() {
		return memory.read<enum class EKtPlatform>(m_addr + 0);
	}
	enum class EKtAccountPlatform GetAccountPlatform() {
		return memory.read<enum class EKtAccountPlatform>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_ShowConfirmDialog
{
public:
	FDev_ShowConfirmDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetMessage() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetTitle() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_TutorialComplete
{
public:
	FDev_TutorialComplete(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbCompleted() {
		return memory.read<bool>(m_addr + 0);
	}
	enum class EKtGameplayControlType GetGameplayControlType() {
		return memory.read<enum class EKtGameplayControlType>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_VDTEventReward
{
public:
	FDev_VDTEventReward(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPressedRotateL
{
public:
	FOnPressedRotateL(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_AddNoticeMessage
{
public:
	FDev_AddNoticeMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetNoticeMessage() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_AssistOptions
{
public:
	FDev_AssistOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOptions() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetbEnable() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_BroadcastVoiceStatusChange
{
public:
	FDev_BroadcastVoiceStatusChange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetaccountId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t Getstatus() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_ChangeCostume
{
public:
	FDev_ChangeCostume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetID() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_ChangePlatform_All
{
public:
	FDev_ChangePlatform_All(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getplatform() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_GenerateMajorDummyPodiumData
{
public:
	FDev_GenerateMajorDummyPodiumData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInDiet() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_HideCategory
{
public:
	FDev_HideCategory(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCategoryID() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetIsVisible() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedChangeInfoButton
{
public:
	FOnClickedChangeInfoButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_HideNameTag
{
public:
	FDev_HideNameTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbHide() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_HideUIType1
{
public:
	FDev_HideUIType1(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbHide() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_HideUIType2
{
public:
	FDev_HideUIType2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbHide() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FServer_RequestTMIPlayerData
{
public:
	FServer_RequestTMIPlayerData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInUniqueIdentifier() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_LoadTrackAsset
{
public:
	FDev_LoadTrackAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetTrackName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_LogoutReason
{
public:
	FDev_LogoutReason(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReason() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_ScenarioActivateGroup
{
public:
	FDev_ScenarioActivateGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInCategoryID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetInGroupID() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMoveLicenseButtonClicked
{
public:
	FOnMoveLicenseButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_ScenarioSetConditionCountToActivate
{
public:
	FDev_ScenarioSetConditionCountToActivate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_SetAITeleport
{
public:
	FDev_SetAITeleport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInputKey() {
		return memory.read<float>(m_addr + 0);
	}
	float GetSpeed() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_SetAIToRacerCheckTick
{
public:
	FDev_SetAIToRacerCheckTick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int64_t GetInTick() {
		return memory.read<int64_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_SetPersonalResultPlayerInfo
{
public:
	FDev_SetPersonalResultPlayerInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPlayerNumber() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t Getrank() {
		return memory.read<int32_t>(m_addr + 4);
	}
	float GetRemainingDistance() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_SetPlayMission
{
public:
	FDev_SetPlayMission(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetplayMissionId() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_SetSQDistance
{
public:
	FDev_SetSQDistance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDistance() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_SetValue
{
public:
	FDev_SetValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetVariableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetValue() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_SetWinningStreak
{
public:
	FDev_SetWinningStreak(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_ShowPersonalResultWidget
{
public:
	FDev_ShowPersonalResultWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPlayerCount() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_ShowSQDistanceWidget
{
public:
	FDev_ShowSQDistanceWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDistancePoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetDistanceRadius() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUnChecked_UseLayerScaleX
{
public:
	FOnUnChecked_UseLayerScaleX(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_ShowSQTimeWidget
{
public:
	FDev_ShowSQTimeWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRadius() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_ShowSQTimeWidgetWithDistance
{
public:
	FDev_ShowSQTimeWidgetWithDistance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTimeRadius() {
		return memory.read<float>(m_addr + 0);
	}
	int32_t GetDistancePoint() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetDistanceRadius() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_SimpleAODecalMaxOpacity
{
public:
	FDev_SimpleAODecalMaxOpacity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_SimpleAODecalVisibility
{
public:
	FDev_SimpleAODecalVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_StartRecord
{
public:
	FDev_StartRecord(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbStart() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_StartReplay
{
public:
	FDev_StartReplay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbStart() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_StartUnrealReplay
{
public:
	FDev_StartUnrealReplay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReplayName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDev_StraightWinCount
{
public:
	FDev_StraightWinCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInCount() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedGrandPrixSelectButton
{
public:
	FOnClickedGrandPrixSelectButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayLastBGM
{
public:
	FPlayLastBGM(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetActiveForceFeedback
{
public:
	FSetActiveForceFeedback(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbActive() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FServer_SetServerTickRate
{
public:
	FServer_SetServerTickRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInTickRate() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FServer_ForceReadiedClient
{
public:
	FServer_ForceReadiedClient(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInReady() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFPSChartDeltaTime
{
public:
	FGetFPSChartDeltaTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFrameRateLimit
{
public:
	FGetFrameRateLimit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsActiveStats
{
public:
	FIsActiveStats(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUseItemForceTransform
{
public:
	FUseItemForceTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}
	enum class EItemType GetItemType() {
		return memory.read<enum class EItemType>(m_addr + 8);
	}
	struct FTransform GetTargetTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDevRiderName
{
public:
	FGetDevRiderName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveActionMapping
{
public:
	FRemoveActionMapping(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetActionName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetbGamepadOnly() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetbSaveSetting() {
		return memory.read<bool>(m_addr + 9);
	}
	bool GetbSaveConfig() {
		return memory.read<bool>(m_addr + 10);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 11);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveAxisKeyMapping
{
public:
	FRemoveAxisKeyMapping(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FInputAxisKeyMapping GetRemoveKey() {
		return memory.read<struct FInputAxisKeyMapping>(m_addr + 0);
	}
	bool GetbSaveSetting() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 41);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCurrentLapCount
{
public:
	FSetCurrentLapCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLapCount() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMaxLapCount
{
public:
	FSetMaxLapCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInMaxLapCount() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangePitchMultiplier
{
public:
	FChangePitchMultiplier(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetPitchValue() {
		return memory.read<float>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayAnyOf
{
public:
	FPlayAnyOf(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbForce() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRandomBGMPlay
{
public:
	FRandomBGMPlay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDisableAIDistance
{
public:
	FOnDisableAIDistance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbDisable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNotifyActorBeginOverlap
{
public:
	FNotifyActorBeginOverlap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetMyActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateAIDistance
{
public:
	FOnUpdateAIDistance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetAIDistance() {
		return memory.read<float>(m_addr + 0);
	}
	bool GetbWarning() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAttackFailedItem
{
public:
	FOnAttackFailedItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetInPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}
	enum class EItemType GetInType() {
		return memory.read<enum class EItemType>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPlayButton
{
public:
	FOnClickedPlayButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAttackSucceedItem
{
public:
	FOnAttackSucceedItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetInPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}
	enum class EItemType GetInType() {
		return memory.read<enum class EItemType>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetProgress
{
public:
	FSetProgress(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDamage() {
		return memory.read<float>(m_addr + 0);
	}
	float GetInProgress() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FNice
{
public:
	FNice(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMentIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetScore() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnViewerItemClickButton
{
public:
	FOnViewerItemClickButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateGaugeChargeGoal
{
public:
	FOnUpdateGaugeChargeGoal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInPercentageMoreThan() {
		return memory.read<float>(m_addr + 0);
	}
	float GetInPercentageLessThan() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FReport_OnBlockOnSubmitChecked
{
public:
	FReport_OnBlockOnSubmitChecked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnButtonReleased_Exit_OneParam
{
public:
	FOnButtonReleased_Exit_OneParam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNotUsed() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMatchTheCards
{
public:
	FMatchTheCards(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDriftClear
{
public:
	FOnDriftClear(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUnChecked_UseFixedUnit
{
public:
	FOnUnChecked_UseFixedUnit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPauseButton
{
public:
	FOnClickedPauseButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnParseText
{
public:
	FOnParseText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInText() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetInIsStyleCode() {
		return memory.read<bool>(m_addr + 16);
	}
	bool GetInIsCarriageReturn() {
		return memory.read<bool>(m_addr + 17);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnLinkConfirm
{
public:
	FOnLinkConfirm(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbSuccess() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FText GetErrorMsg() {
		return memory.read<struct FText>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNewQuest
{
public:
	FOnNewQuest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> GetQuestList() {
		return memory.read<struct TArray<int32_t>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnRiderNameChangeConfirmError
{
public:
	FOnRiderNameChangeConfirmError(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPrSetRiderNameResult GetInRiderNameCheckResult() {
		return memory.read<enum class EPrSetRiderNameResult>(m_addr + 0);
	}
	struct FString GetInNotSupportedLetter() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedExitButton
{
public:
	FOnClickedExitButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSkipSequence
{
public:
	FSkipSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddScore_float
{
public:
	FAddScore_float(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetfloatData() {
		return memory.read<float>(m_addr + 0);
	}
	float GetBaseScore() {
		return memory.read<float>(m_addr + 4);
	}
	enum class ELicenseScoreReason GetReason() {
		return memory.read<enum class ELicenseScoreReason>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayLicenseCaption
{
public:
	FPlayLicenseCaption(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCaption() {
		return memory.read<struct FString>(m_addr + 0);
	}
	float GetCaptionTime() {
		return memory.read<float>(m_addr + 16);
	}
	float GetPauseTime() {
		return memory.read<float>(m_addr + 20);
	}
	bool GetbSeperateMobileCaption() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumVertices
{
public:
	FGetNumVertices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLODIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPawnInitWithMovement
{
public:
	FSetPawnInitWithMovement(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}
	struct USequencerEquipData GetDataAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USequencerEquipData(ptr_addr);
	}
	struct FString GetPawnName() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedSkipButton
{
public:
	FOnClickedSkipButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnInitializeSpeedLimit
{
public:
	FOnInitializeSpeedLimit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<float> GetMinSpeed() {
		return memory.read<struct TArray<float>>(m_addr + 0);
	}
	struct TArray<float> GetMaxSpeed() {
		return memory.read<struct TArray<float>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnRemovedLevel
{
public:
	FOnRemovedLevel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULevel GetLevel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ULevel(ptr_addr);
	}
	struct UWorld GetWorld() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UWorld(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLODSkeletalMesh
{
public:
	FSetLODSkeletalMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLODIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMainDialog_OnAcceptInvitationClicked
{
public:
	FMainDialog_OnAcceptInvitationClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnRiderNameDuplicateCheck
{
public:
	FOnRiderNameDuplicateCheck(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPrSetRiderNameResult GetInCreateResult() {
		return memory.read<enum class EPrSetRiderNameResult>(m_addr + 0);
	}
	struct FString GetInNotSupportedLetter() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCompletedLoadPawn
{
public:
	FOnCompletedLoadPawn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AOutGamePawn GetLoadedPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AOutGamePawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FInviteMenu_OnAcceptButtonClicked
{
public:
	FInviteMenu_OnAcceptButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInviteMenu_OnRejectButtonClicked
{
public:
	FInviteMenu_OnRejectButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInviteMenu_OnSearchButtonClicked
{
public:
	FInviteMenu_OnSearchButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedADTLastStepButton
{
public:
	FOnClickedADTLastStepButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedttendanceLastStepButton
{
public:
	FOnClickedttendanceLastStepButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnChecked_UseFixedUnit
{
public:
	FOnChecked_UseFixedUnit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnChecked_UseLayerScaleY
{
public:
	FOnChecked_UseLayerScaleY(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClicked_SubColorBack
{
public:
	FOnClicked_SubColorBack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMoveToNextWrappingLayer
{
public:
	FOnMoveToNextWrappingLayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnReleasedRotate
{
public:
	FOnReleasedRotate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnStickerListScrolled
{
public:
	FOnStickerListScrolled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInOffset() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCloseMyKcoinPopup
{
public:
	FOnCloseMyKcoinPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeLanguage_CloseComboPanel
{
public:
	FChangeLanguage_CloseComboPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClearCacheData
{
public:
	FOnClearCacheData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticastRelaySetAuthBeginRaceTime
{
public:
	FMulticastRelaySetAuthBeginRaceTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetRelayTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	float GetTime() {
		return memory.read<float>(m_addr + 8);
	}
	float GetIntroTime() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedLoginCommonDialogCloseButton
{
public:
	FOnClickedLoginCommonDialogCloseButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedLoginCommonDialogConfirmButton
{
public:
	FOnClickedLoginCommonDialogConfirmButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedLogoutBtn
{
public:
	FOnClickedLogoutBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedNickNameCreationDialogClose
{
public:
	FOnClickedNickNameCreationDialogClose(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedRepairButton
{
public:
	FOnClickedRepairButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCreateNoticeDialog
{
public:
	FOnCreateNoticeDialog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPerformAutoRepair
{
public:
	FOnPerformAutoRepair(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FShowExitGamePopup
{
public:
	FShowExitGamePopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMail_OnClickedShowCommunity
{
public:
	FMail_OnClickedShowCommunity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedCopyAccountNoBtn
{
public:
	FOnClickedCopyAccountNoBtn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCloseDropDownPopup
{
public:
	FCloseDropDownPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNotUsed() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedLogoutCancel
{
public:
	FOnClickedLogoutCancel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCusomizableWidgetScaleChanged
{
public:
	FOnCusomizableWidgetScaleChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerSendTMIRaceEventData
{
public:
	FServerSendTMIRaceEventData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTMIRaceEventData GetInTMIRaceEventData() {
		return memory.read<struct FTMIRaceEventData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCustomDialogCloseButtonPressed
{
public:
	FOnCustomDialogCloseButtonPressed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCustomDialogResetButtonPressed
{
public:
	FOnCustomDialogResetButtonPressed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClient_BroadcastPlayMissionProgressUpdate
{
public:
	FClient_BroadcastPlayMissionProgressUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInMissionProgress() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCustomizableWidgetDisableButtonUnchecked
{
public:
	FOnCustomizableWidgetDisableButtonUnchecked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCustomizeButtonClicked
{
public:
	FOnCustomizeButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCustomMenuHideButtonClicked
{
public:
	FOnCustomMenuHideButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCustomMenuOpenButtonClicked
{
public:
	FOnCustomMenuOpenButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReport_OnBlockOnSubmitUnchecked
{
public:
	FReport_OnBlockOnSubmitUnchecked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReport_OnSubmitDialogCloseButtonClicked
{
public:
	FReport_OnSubmitDialogCloseButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPressedAutoLeftRotateMode
{
public:
	FOnPressedAutoLeftRotateMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnReleasedRotateMode
{
public:
	FOnReleasedRotateMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateKcoin
{
public:
	FUpdateKcoin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetKcoinCount() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateLucci
{
public:
	FUpdateLucci(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLucciCount() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCamera
{
public:
	FGetCamera(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPawnCameraType GetCameraTye() {
		return memory.read<enum class EPawnCameraType>(m_addr + 0);
	}
	struct AMainMenuKartPawnCamera GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AMainMenuKartPawnCamera(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCameraComponent
{
public:
	FGetCameraComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPawnCameraType GetCameraTye() {
		return memory.read<enum class EPawnCameraType>(m_addr + 0);
	}
	struct UCameraComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UCameraComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCancelButtonFocused
{
public:
	FCancelButtonFocused(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClient_SendTMIPlayerData
{
public:
	FClient_SendTMIPlayerData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTMIMajorDietData GetInData() {
		return memory.read<struct FTMIMajorDietData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnButtonReleased_BaseInfo
{
public:
	FOnButtonReleased_BaseInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFirstAsyncLoadCompleted
{
public:
	FOnFirstAsyncLoadCompleted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSet<struct FSoftObjectPath> GetInAssetPathContainer() {
		return memory.read<struct TSet<struct FSoftObjectPath>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnButtonReleased_BaseInfo_OneParam
{
public:
	FOnButtonReleased_BaseInfo_OneParam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNotUsed() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInfoModifyDialog_OnDescriptionEditBoxTextChanged
{
public:
	FInfoModifyDialog_OnDescriptionEditBoxTextChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnButtonReleased_DetailInfo_OneParam
{
public:
	FOnButtonReleased_DetailInfo_OneParam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNotUsed() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnVerified
{
public:
	FOnVerified(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EClientVerifierOrder GetInOrder() {
		return memory.read<enum class EClientVerifierOrder>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticastAttachModel
{
public:
	FMulticastAttachModel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AKdPawn GetPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AKdPawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSound
{
public:
	FGetSound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFMODEvent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UFMODEvent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetStartOffset
{
public:
	FGetStartOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetReturnValue() {
		return memory.read<struct FFrameNumber>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSound
{
public:
	FSetSound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFMODEvent GetInSound() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UFMODEvent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnHover
{
public:
	FOnHover(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSliderValueChanged
{
public:
	FOnSliderValueChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnShowToyPlate
{
public:
	FOnShowToyPlate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbPause() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FJumpToCharacterMontageSection
{
public:
	FJumpToCharacterMontageSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetInActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct FName GetSectionName() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayBGM
{
public:
	FPlayBGM(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFMODEvent GetInEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UFMODEvent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLoopFrame
{
public:
	FSetLoopFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInDurationFrame() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRepeatSection
{
public:
	FSetRepeatSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInStartFrame() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetInDurationFrame() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetLoopingCount() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FShowBeginnerBalloonAppearAnimation
{
public:
	FShowBeginnerBalloonAppearAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetInActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct FString GetFxTypeString() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMakeSpline
{
public:
	FMakeSpline(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetRecordIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FStartRecord_AIPathIndex
{
public:
	FStartRecord_AIPathIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPathIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetDataIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	float GetSpeed() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPrevPageList
{
public:
	FOnClickedPrevPageList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocusedButton
{
public:
	FOnFocusedButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPageIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayAnimationKartOnOff
{
public:
	FPlayAnimationKartOnOff(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EOutGamePawnType GetPawnType() {
		return memory.read<enum class EOutGamePawnType>(m_addr + 0);
	}
	bool GetbOn() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FCheckLogout
{
public:
	FCheckLogout(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetInPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsPick
{
public:
	FIsPick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCheckMissionStateOnNotifyFinish
{
public:
	FCheckMissionStateOnNotifyFinish(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FClient_BroadcastPlayMissionStateUpdate
{
public:
	FClient_BroadcastPlayMissionStateUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPlayMissionState GetNextMissionState() {
		return memory.read<enum class EPlayMissionState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPartyMemberUpdated
{
public:
	FOnPartyMemberUpdated(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPartyChageState GetNewState() {
		return memory.read<enum class EPartyChageState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClearChildFromSlot
{
public:
	FClearChildFromSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSlotName() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FServer_CheckPoint
{
public:
	FServer_CheckPoint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ACheckPoint GetLastCP() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ACheckPoint(ptr_addr);
	}
	struct ACheckPoint GetCP() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct ACheckPoint(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticastRelayOnFinish
{
public:
	FMulticastRelayOnFinish(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetRelayTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UObject GetKdPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}
	int32_t Getrank() {
		return memory.read<int32_t>(m_addr + 16);
	}
	float GetTotalTime() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticastRelayOnRetire
{
public:
	FMulticastRelayOnRetire(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetRelayTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UObject GetKdPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsLocalPlayMode
{
public:
	FIsLocalPlayMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBeginRetireCountdown
{
public:
	FBeginRetireCountdown(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCountdownFinishTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBeginRaceTime
{
public:
	FGetBeginRaceTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClientRelaySetAuthEndRaceTime
{
public:
	FClientRelaySetAuthEndRaceTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetRelayTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	float GetTime() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticastRelaySetAuthEndRaceTime
{
public:
	FMulticastRelaySetAuthEndRaceTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetRelayTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	float GetTime() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FPinTargetButtonClicked
{
public:
	FPinTargetButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDummyIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCloseReplayMenu
{
public:
	FCloseReplayMenu(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDummyIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOpenReplayMenu
{
public:
	FOpenReplayMenu(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDummyIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSaveReplay
{
public:
	FOnSaveReplay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNextTabClicked
{
public:
	FOnNextTabClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPreviousTabClicked
{
public:
	FOnPreviousTabClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticast_Reset
{
public:
	FMulticast_Reset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetTargetPoint() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FRotator GetTargetRotator() {
		return memory.read<struct FRotator>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnRiderNameTextChanged
{
public:
	FOnRiderNameTextChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInRiderNameText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetActivation
{
public:
	FSetActivation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetInActivate() {
		return memory.read<bool>(m_addr + 0);
	}
	struct AActor GetInOverlap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFinished
{
public:
	FOnFinished(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UScenarioWidgetBase GetInWidgetBase() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UScenarioWidgetBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNoJumpCutInSameCamera
{
public:
	FSetNoJumpCutInSameCamera(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbNoJump() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOverrideCameraCutParams
{
public:
	FSetOverrideCameraCutParams(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInOverride() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFinishedDelegate
{
public:
	FOnFinishedDelegate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UScenarioWidgetBase GetInWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UScenarioWidgetBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCheatEditboxChanged
{
public:
	FOnCheatEditboxChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCheatEditboxSubmit
{
public:
	FOnCheatEditboxSubmit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	enum class ETextCommit GetCommitMethod() {
		return memory.read<enum class ETextCommit>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNoticeMessage
{
public:
	FOnNoticeMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetMessage() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPageActivated
{
public:
	FOnPageActivated(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbActivated() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnRiderNameChangeReserve
{
public:
	FOnRiderNameChangeReserve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPrSetRiderNameResult GetInRiderNameCheckResult() {
		return memory.read<enum class EPrSetRiderNameResult>(m_addr + 0);
	}
	struct FString GetInNotSupportedLetter() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateConfirmItemList
{
public:
	FUpdateConfirmItemList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtShopStock> GetItems() {
		return memory.read<struct TArray<struct FKtShopStock>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateKcoinItemList
{
public:
	FUpdateKcoinItemList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtShopStock> GetItems() {
		return memory.read<struct TArray<struct FKtShopStock>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateShopItemList
{
public:
	FUpdateShopItemList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKtShopStock> GetItems() {
		return memory.read<struct TArray<struct FKtShopStock>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsSideMenuDialogActive
{
public:
	FIsSideMenuDialogActive(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnd
{
public:
	FEnd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FStart
{
public:
	FStart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWorld GetNewWorld() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWorld(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedSpeedGuideConfirm
{
public:
	FOnClickedSpeedGuideConfirm(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMesh
{
public:
	FGetMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USVGToolsMesh GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USVGToolsMesh(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMesh
{
public:
	FSetMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USVGToolsMesh GetMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USVGToolsMesh(ptr_addr);
	}
	bool GetbCopyMaterial() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FMulticast_ChangeTargetTo
{
public:
	FMulticast_ChangeTargetTo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FServer_ChangeTargetTo
{
public:
	FServer_ChangeTargetTo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerAddTeamBooster
{
public:
	FServerAddTeamBooster(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetLastProgress() {
		return memory.read<float>(m_addr + 0);
	}
	float GetMaxDriftGauge() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FClientRelaySendResultData
{
public:
	FClientRelaySendResultData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetRelayTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct TArray<struct FMajorGamePlayerData> GetInPlayerContainer() {
		return memory.read<struct TArray<struct FMajorGamePlayerData>>(m_addr + 8);
	}
	struct TArray<struct FMajorGameTeamData> GetInTeamContainer() {
		return memory.read<struct TArray<struct FMajorGameTeamData>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnStartBoosterStateChanged
{
public:
	FOnStartBoosterStateChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInIsEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGuideBoost
{
public:
	FGuideBoost(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbActivate() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGuideInstanceBoost
{
public:
	FGuideInstanceBoost(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbActivate() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGuideReset
{
public:
	FGuideReset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbActivate() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnComponentHit_Left
{
public:
	FOnComponentHit_Left(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetHitComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct UPrimitiveComponent GetOtherComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct FVector GetNormalImpulse() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct FHitResult GetHit() {
		return memory.read<struct FHitResult>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnComponentHit_Right
{
public:
	FOnComponentHit_Right(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetHitComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct UPrimitiveComponent GetOtherComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct FVector GetNormalImpulse() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct FHitResult GetHit() {
		return memory.read<struct FHitResult>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnLerpAnimLoc
{
public:
	FOnLerpAnimLoc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnLerpAnimRot
{
public:
	FOnLerpAnimRot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FConfirmButtonClicked
{
public:
	FConfirmButtonClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FConfirmButtonFocused
{
public:
	FConfirmButtonFocused(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FWarp
{
public:
	FWarp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetInPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};