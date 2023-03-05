#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FEndTurn
{
public:
	FEndTurn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APlayerController(ptr_addr);
	}
	struct FString GetMatchID() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct TScriptInterface<ITurnBasedMatchInterface> GetTurnBasedMatchInterface() {
		return memory.read<struct TScriptInterface<ITurnBasedMatchInterface>>(m_addr + 32);
	}
	struct UEndTurnCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UEndTurnCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineTurnBasedMatchResult__DelegateSignature
{
public:
	FOnlineTurnBasedMatchResult__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetMatchID() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCacheAchievements
{
public:
	FCacheAchievements(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APlayerController(ptr_addr);
	}
	struct UAchievementQueryCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UAchievementQueryCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAchievementWriteDelegate__DelegateSignature
{
public:
	FAchievementWriteDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetWrittenAchievementName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetWrittenProgress() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetWrittenUserTag() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FInAppPurchaseReceiptInfo2
{
public:
	FInAppPurchaseReceiptInfo2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetItemName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetItemId() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetValidationInfo() {
		return memory.read<struct FString>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineConnectionResult__DelegateSignature
{
public:
	FOnlineConnectionResult__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetErrorCode() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClientCancelReservationResponse
{
public:
	FClientCancelReservationResponse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESpectatorReservationResult GetReservationResponse() {
		return memory.read<enum class ESpectatorReservationResult>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBlueprintSessionResult
{
public:
	FBlueprintSessionResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FBlueprintFindSessionsResultDelegate__DelegateSignature
{
public:
	FBlueprintFindSessionsResultDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FBlueprintSessionResult> GetResults() {
		return memory.read<struct TArray<struct FBlueprintSessionResult>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpectatorReservation
{
public:
	FSpectatorReservation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FUniqueNetIdRepl GetSpectatorId() {
		return memory.read<struct FUniqueNetIdRepl>(m_addr + 0);
	}
	struct FPlayerReservation GetSpectator() {
		return memory.read<struct FPlayerReservation>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FInAppPurchaseResult2__DelegateSignature
{
public:
	FInAppPurchaseResult2__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EInAppPurchaseStatus GetPurchaseStatus() {
		return memory.read<enum class EInAppPurchaseStatus>(m_addr + 0);
	}
	struct TArray<struct FInAppPurchaseReceiptInfo2> GetInAppPurchaseReceipts() {
		return memory.read<struct TArray<struct FInAppPurchaseReceiptInfo2>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPingInMs
{
public:
	FGetPingInMs(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBlueprintSessionResult GetResult() {
		return memory.read<struct FBlueprintSessionResult>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 264);
	}

private:
	std::uint64_t m_addr = 0;
};class FInAppPurchaseResult__DelegateSignature
{
public:
	FInAppPurchaseResult__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EInAppPurchaseState GetPurchaseStatus() {
		return memory.read<enum class EInAppPurchaseState>(m_addr + 0);
	}
	struct FInAppPurchaseProductInfo GetInAppPurchaseReceipts() {
		return memory.read<struct FInAppPurchaseProductInfo>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FClientSendReservationUpdates
{
public:
	FClientSendReservationUpdates(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumRemainingReservations() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInAppPurchaseQueryResult__DelegateSignature
{
public:
	FInAppPurchaseQueryResult__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FInAppPurchaseProductInfo> GetInAppPurchaseInformation() {
		return memory.read<struct TArray<struct FInAppPurchaseProductInfo>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInAppPurchaseQuery2Result__DelegateSignature
{
public:
	FInAppPurchaseQuery2Result__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FOnlineProxyStoreOffer> GetInAppOfferInformation() {
		return memory.read<struct TArray<struct FOnlineProxyStoreOffer>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetIsMyTurn
{
public:
	FGetIsMyTurn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APlayerController(ptr_addr);
	}
	struct FString GetMatchID() {
		return memory.read<struct FString>(m_addr + 16);
	}
	bool GetbIsMyTurn() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayerReservation
{
public:
	FPlayerReservation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FUniqueNetIdRepl GetUniqueId() {
		return memory.read<struct FUniqueNetIdRepl>(m_addr + 0);
	}
	struct FString GetValidationStr() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString Getplatform() {
		return memory.read<struct FString>(m_addr + 56);
	}
	bool GetbAllowCrossplay() {
		return memory.read<bool>(m_addr + 72);
	}
	float GetElapsedTime() {
		return memory.read<float>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineProxyStoreOffer
{
public:
	FOnlineProxyStoreOffer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetOfferId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FText GetTitle() {
		return memory.read<struct FText>(m_addr + 16);
	}
	struct FText GetDescription() {
		return memory.read<struct FText>(m_addr + 40);
	}
	struct FText GetLongDescription() {
		return memory.read<struct FText>(m_addr + 64);
	}
	struct FText GetRegularPriceText() {
		return memory.read<struct FText>(m_addr + 88);
	}
	int32_t GetRegularPrice() {
		return memory.read<int32_t>(m_addr + 112);
	}
	struct FText GetPriceText() {
		return memory.read<struct FText>(m_addr + 120);
	}
	int32_t GetNumericPrice() {
		return memory.read<int32_t>(m_addr + 144);
	}
	struct FString GetCurrencyCode() {
		return memory.read<struct FString>(m_addr + 152);
	}
	struct FDateTime GetReleaseDate() {
		return memory.read<struct FDateTime>(m_addr + 168);
	}
	struct FDateTime GetExpirationDate() {
		return memory.read<struct FDateTime>(m_addr + 176);
	}
	enum class EOnlineProxyStoreOfferDiscountType GetDiscountType() {
		return memory.read<enum class EOnlineProxyStoreOfferDiscountType>(m_addr + 184);
	}
	struct TMap<struct FString, struct FString> GetDynamicFields() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};class FInAppPurchaseRestoreResult2__DelegateSignature
{
public:
	FInAppPurchaseRestoreResult2__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EInAppPurchaseStatus GetPurchaseStatus() {
		return memory.read<enum class EInAppPurchaseStatus>(m_addr + 0);
	}
	struct TArray<struct FInAppPurchaseRestoreInfo2> GetInAppPurchaseRestoreInfo() {
		return memory.read<struct TArray<struct FInAppPurchaseRestoreInfo2>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FInAppPurchaseRestoreResult__DelegateSignature
{
public:
	FInAppPurchaseRestoreResult__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EInAppPurchaseState GetCompletionStatus() {
		return memory.read<enum class EInAppPurchaseState>(m_addr + 0);
	}
	struct TArray<struct FInAppPurchaseRestoreInfo> GetInAppRestorePurchaseInformation() {
		return memory.read<struct TArray<struct FInAppPurchaseRestoreInfo>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FLeaderboardQueryResult__DelegateSignature
{
public:
	FLeaderboardQueryResult__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLeaderboardValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInAppPurchaseRestoreInfo2
{
public:
	FInAppPurchaseRestoreInfo2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetItemName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetItemId() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetValidationInfo() {
		return memory.read<struct FString>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateProxyObjectForFlush
{
public:
	FCreateProxyObjectForFlush(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}
	struct FName GetSessionName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct ULeaderboardFlushCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct ULeaderboardFlushCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnLeaderboardFlushed__DelegateSignature
{
public:
	FOnLeaderboardFlushed__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSessionName() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineLogoutResult__DelegateSignature
{
public:
	FOnlineLogoutResult__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineShowLoginUIResult__DelegateSignature
{
public:
	FOnlineShowLoginUIResult__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FInAppPurchaseReceiptInfo
{
public:
	FInAppPurchaseReceiptInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetItemName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetItemId() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetValidationInfo() {
		return memory.read<struct FString>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCachedAchievementDescription
{
public:
	FGetCachedAchievementDescription(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APlayerController(ptr_addr);
	}
	struct FName GetachievementId() {
		return memory.read<struct FName>(m_addr + 16);
	}
	bool GetbFoundID() {
		return memory.read<bool>(m_addr + 24);
	}
	struct FText GetTitle() {
		return memory.read<struct FText>(m_addr + 32);
	}
	struct FText GetLockedDescription() {
		return memory.read<struct FText>(m_addr + 56);
	}
	struct FText GetUnlockedDescription() {
		return memory.read<struct FText>(m_addr + 80);
	}
	bool GetbHidden() {
		return memory.read<bool>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentPlayers
{
public:
	FGetCurrentPlayers(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBlueprintSessionResult GetResult() {
		return memory.read<struct FBlueprintSessionResult>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 264);
	}

private:
	std::uint64_t m_addr = 0;
};class FInAppPurchaseProductInfo2
{
public:
	FInAppPurchaseProductInfo2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetIdentifier() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetTransactionIdentifier() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetDisplayName() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FString GetDisplayDescription() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetDisplayPrice() {
		return memory.read<struct FString>(m_addr + 64);
	}
	float GetRawPrice() {
		return memory.read<float>(m_addr + 80);
	}
	struct FString GetCurrencyCode() {
		return memory.read<struct FString>(m_addr + 88);
	}
	struct FString GetCurrencySymbol() {
		return memory.read<struct FString>(m_addr + 104);
	}
	struct FString GetDecimalSeparator() {
		return memory.read<struct FString>(m_addr + 120);
	}
	struct FString GetGroupingSeparator() {
		return memory.read<struct FString>(m_addr + 136);
	}
	struct FString GetReceiptData() {
		return memory.read<struct FString>(m_addr + 152);
	}
	struct TMap<struct FString, struct FString> GetDynamicFields() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateProxyObjectForIntQuery
{
public:
	FCreateProxyObjectForIntQuery(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}
	struct FName GetStatName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct ULeaderboardQueryCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct ULeaderboardQueryCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FInAppPurchaseProductRequest2
{
public:
	FInAppPurchaseProductRequest2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetProductIdentifier() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetbIsConsumable() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FPIELoginSettingsInternal
{
public:
	FPIELoginSettingsInternal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetID() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetToken() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetType() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct TArray<char> GetTokenBytes() {
		return memory.read<struct TArray<char>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FPartyBeaconCrossplayPlatformMapping
{
public:
	FPartyBeaconCrossplayPlatformMapping(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetPlatformName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetPlatformType() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateProxyObjectForInAppPurchaseUnprocessedPurchases
{
public:
	FCreateProxyObjectForInAppPurchaseUnprocessedPurchases(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}
	struct UInAppPurchaseCallbackProxy2 GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UInAppPurchaseCallbackProxy2(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateSession
{
public:
	FCreateSession(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APlayerController(ptr_addr);
	}
	int32_t GetPublicConnections() {
		return memory.read<int32_t>(m_addr + 16);
	}
	bool GetbUseLAN() {
		return memory.read<bool>(m_addr + 20);
	}
	struct UCreateSessionCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UCreateSessionCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FPartyReservation
{
public:
	FPartyReservation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTeamNum() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FUniqueNetIdRepl GetPartyLeader() {
		return memory.read<struct FUniqueNetIdRepl>(m_addr + 8);
	}
	struct TArray<struct FPlayerReservation> GetPartyMembers() {
		return memory.read<struct TArray<struct FPlayerReservation>>(m_addr + 48);
	}
	struct TArray<struct FPlayerReservation> GetRemovedPartyMembers() {
		return memory.read<struct TArray<struct FPlayerReservation>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCachedAchievementProgress
{
public:
	FGetCachedAchievementProgress(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APlayerController(ptr_addr);
	}
	struct FName GetachievementId() {
		return memory.read<struct FName>(m_addr + 16);
	}
	bool GetbFoundID() {
		return memory.read<bool>(m_addr + 24);
	}
	float GetProgress() {
		return memory.read<float>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FLogout
{
public:
	FLogout(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APlayerController(ptr_addr);
	}
	struct ULogoutCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct ULogoutCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCacheAchievementDescriptions
{
public:
	FCacheAchievementDescriptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APlayerController(ptr_addr);
	}
	struct UAchievementQueryCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UAchievementQueryCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FWriteAchievementProgress
{
public:
	FWriteAchievementProgress(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APlayerController(ptr_addr);
	}
	struct FName GetAchievementName() {
		return memory.read<struct FName>(m_addr + 16);
	}
	float GetProgress() {
		return memory.read<float>(m_addr + 24);
	}
	int32_t GetUserTag() {
		return memory.read<int32_t>(m_addr + 28);
	}
	struct UAchievementWriteCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UAchievementWriteCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FConnectToService
{
public:
	FConnectToService(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APlayerController(ptr_addr);
	}
	struct UConnectionCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UConnectionCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPlayerDisplayName
{
public:
	FGetPlayerDisplayName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APlayerController(ptr_addr);
	}
	struct FString GetMatchID() {
		return memory.read<struct FString>(m_addr + 16);
	}
	int32_t GetPlayerIndex() {
		return memory.read<int32_t>(m_addr + 32);
	}
	struct FString GetPlayerDisplayName() {
		return memory.read<struct FString>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FDestroySession
{
public:
	FDestroySession(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APlayerController(ptr_addr);
	}
	struct UDestroySessionCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UDestroySessionCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerRemoveMemberFromReservationRequest
{
public:
	FServerRemoveMemberFromReservationRequest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSessionId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FPartyReservation GetReservationUpdate() {
		return memory.read<struct FPartyReservation>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FEndMatch
{
public:
	FEndMatch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APlayerController(ptr_addr);
	}
	struct TScriptInterface<ITurnBasedMatchInterface> GetMatchActor() {
		return memory.read<struct TScriptInterface<ITurnBasedMatchInterface>>(m_addr + 16);
	}
	struct FString GetMatchID() {
		return memory.read<struct FString>(m_addr + 32);
	}
	enum class EMPMatchOutcome GetLocalPlayerOutcome() {
		return memory.read<enum class EMPMatchOutcome>(m_addr + 48);
	}
	enum class EMPMatchOutcome GetOtherPlayersOutcome() {
		return memory.read<enum class EMPMatchOutcome>(m_addr + 49);
	}
	struct UEndMatchCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UEndMatchCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindSessions
{
public:
	FFindSessions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APlayerController(ptr_addr);
	}
	int32_t GetMaxResults() {
		return memory.read<int32_t>(m_addr + 16);
	}
	bool GetbUseLAN() {
		return memory.read<bool>(m_addr + 20);
	}
	struct UFindSessionsCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UFindSessionsCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMaxPlayers
{
public:
	FGetMaxPlayers(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBlueprintSessionResult GetResult() {
		return memory.read<struct FBlueprintSessionResult>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 264);
	}

private:
	std::uint64_t m_addr = 0;
};class FClientReservationResponse
{
public:
	FClientReservationResponse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESpectatorReservationResult GetReservationResponse() {
		return memory.read<enum class ESpectatorReservationResult>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FQuitMatch
{
public:
	FQuitMatch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APlayerController(ptr_addr);
	}
	struct FString GetMatchID() {
		return memory.read<struct FString>(m_addr + 16);
	}
	enum class EMPMatchOutcome GetOutcome() {
		return memory.read<enum class EMPMatchOutcome>(m_addr + 32);
	}
	int32_t GetTurnTimeoutInSeconds() {
		return memory.read<int32_t>(m_addr + 36);
	}
	struct UQuitMatchCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UQuitMatchCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetServerName
{
public:
	FGetServerName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBlueprintSessionResult GetResult() {
		return memory.read<struct FBlueprintSessionResult>(m_addr + 0);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 264);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindTurnBasedMatch
{
public:
	FFindTurnBasedMatch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APlayerController(ptr_addr);
	}
	struct TScriptInterface<ITurnBasedMatchInterface> GetMatchActor() {
		return memory.read<struct TScriptInterface<ITurnBasedMatchInterface>>(m_addr + 16);
	}
	int32_t GetMinPlayers() {
		return memory.read<int32_t>(m_addr + 32);
	}
	int32_t GetMaxPlayers() {
		return memory.read<int32_t>(m_addr + 36);
	}
	int32_t GetPlayerGroup() {
		return memory.read<int32_t>(m_addr + 40);
	}
	bool GetShowExistingMatches() {
		return memory.read<bool>(m_addr + 44);
	}
	struct UFindTurnBasedMatchCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UFindTurnBasedMatchCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateProxyObjectForInAppPurchase
{
public:
	FCreateProxyObjectForInAppPurchase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}
	struct FInAppPurchaseProductRequest2 GetProductRequest() {
		return memory.read<struct FInAppPurchaseProductRequest2>(m_addr + 8);
	}
	struct UInAppPurchaseCallbackProxy2 GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UInAppPurchaseCallbackProxy2(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateProxyObjectForInAppPurchaseQueryOwned
{
public:
	FCreateProxyObjectForInAppPurchaseQueryOwned(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}
	struct UInAppPurchaseCallbackProxy2 GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UInAppPurchaseCallbackProxy2(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateProxyObjectForInAppPurchaseQuery
{
public:
	FCreateProxyObjectForInAppPurchaseQuery(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}
	struct TArray<struct FString> GetProductIdentifiers() {
		return memory.read<struct TArray<struct FString>>(m_addr + 8);
	}
	struct UInAppPurchaseQueryCallbackProxy2 GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UInAppPurchaseQueryCallbackProxy2(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMyPlayerIndex
{
public:
	FGetMyPlayerIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APlayerController(ptr_addr);
	}
	struct FString GetMatchID() {
		return memory.read<struct FString>(m_addr + 16);
	}
	int32_t GetPlayerIndex() {
		return memory.read<int32_t>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateProxyObjectForInAppPurchaseRestore
{
public:
	FCreateProxyObjectForInAppPurchaseRestore(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FInAppPurchaseProductRequest2> GetConsumableProductFlags() {
		return memory.read<struct TArray<struct FInAppPurchaseProductRequest2>>(m_addr + 0);
	}
	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct APlayerController(ptr_addr);
	}
	struct UInAppPurchaseRestoreCallbackProxy2 GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UInAppPurchaseRestoreCallbackProxy2(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerAddOrUpdateReservationRequest
{
public:
	FServerAddOrUpdateReservationRequest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSessionId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FPartyReservation GetReservation() {
		return memory.read<struct FPartyReservation>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FJoinSession
{
public:
	FJoinSession(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APlayerController(ptr_addr);
	}
	struct FBlueprintSessionResult GetSearchResult() {
		return memory.read<struct FBlueprintSessionResult>(m_addr + 16);
	}
	struct UJoinSessionCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 280);
		return struct UJoinSessionCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerCancelReservationRequest
{
public:
	FServerCancelReservationRequest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FUniqueNetIdRepl GetSpectator() {
		return memory.read<struct FUniqueNetIdRepl>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FWriteLeaderboardInteger
{
public:
	FWriteLeaderboardInteger(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}
	struct FName GetStatName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	int32_t GetStatValue() {
		return memory.read<int32_t>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerReservationRequest
{
public:
	FServerReservationRequest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSessionId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FSpectatorReservation GetReservation() {
		return memory.read<struct FSpectatorReservation>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerUpdateReservationRequest
{
public:
	FServerUpdateReservationRequest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSessionId() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FPartyReservation GetReservationUpdate() {
		return memory.read<struct FPartyReservation>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FShowExternalLoginUI
{
public:
	FShowExternalLoginUI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct APlayerController GetInPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APlayerController(ptr_addr);
	}
	struct UShowLoginUICallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UShowLoginUICallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRegisterTurnBasedMatchInterfaceObject
{
public:
	FRegisterTurnBasedMatchInterfaceObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APlayerController(ptr_addr);
	}
	struct UObject GetObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsIdling
{
public:
	FIsIdling(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};