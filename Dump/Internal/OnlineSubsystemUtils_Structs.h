#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn Size 56
class FEndTurn
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct APlayerController* PlayerController;  // Offset: 8 Size: 8
	struct FString MatchID;  // Offset: 16 Size: 16
	struct TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface;  // Offset: 32 Size: 16
	struct UEndTurnCallbackProxy* ReturnValue;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction OnlineSubsystemUtils.OnlineTurnBasedMatchResult__DelegateSignature Size 16
class FOnlineTurnBasedMatchResult__DelegateSignature
{

 public: 
	struct FString MatchID;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements Size 24
class FCacheAchievements
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct APlayerController* PlayerController;  // Offset: 8 Size: 8
	struct UAchievementQueryCallbackProxy* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction OnlineSubsystemUtils.AchievementWriteDelegate__DelegateSignature Size 16
class FAchievementWriteDelegate__DelegateSignature
{

 public: 
	struct FName WrittenAchievementName;  // Offset: 0 Size: 8
	float WrittenProgress;  // Offset: 8 Size: 4
	int32_t WrittenUserTag;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo2 Size 48
class FInAppPurchaseReceiptInfo2
{

 public: 
	struct FString ItemName;  // Offset: 0 Size: 16
	struct FString ItemId;  // Offset: 16 Size: 16
	struct FString ValidationInfo;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction OnlineSubsystemUtils.OnlineConnectionResult__DelegateSignature Size 4
class FOnlineConnectionResult__DelegateSignature
{

 public: 
	int32_t ErrorCode;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse Size 1
class FClientCancelReservationResponse
{

 public: 
	enum class ESpectatorReservationResult ReservationResponse;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult Size 264
class FBlueprintSessionResult
{

 public: 
	char pad_0[264];  // Offset: 0 Size: 264



 // Functions 
 public:
}; 
 
 //DelegateFunction OnlineSubsystemUtils.BlueprintFindSessionsResultDelegate__DelegateSignature Size 16
class FBlueprintFindSessionsResultDelegate__DelegateSignature
{

 public: 
	struct TArray<struct FBlueprintSessionResult> Results;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct OnlineSubsystemUtils.SpectatorReservation Size 120
class FSpectatorReservation
{

 public: 
	struct FUniqueNetIdRepl SpectatorId;  // Offset: 0 Size: 40
	struct FPlayerReservation Spectator;  // Offset: 40 Size: 80



 // Functions 
 public:
}; 
 
 //DelegateFunction OnlineSubsystemUtils.InAppPurchaseResult2__DelegateSignature Size 24
class FInAppPurchaseResult2__DelegateSignature
{

 public: 
	enum class EInAppPurchaseStatus PurchaseStatus;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct TArray<struct FInAppPurchaseReceiptInfo2> InAppPurchaseReceipts;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs Size 272
class FGetPingInMs
{

 public: 
	struct FBlueprintSessionResult Result;  // Offset: 0 Size: 264
	int32_t ReturnValue;  // Offset: 264 Size: 4
	char pad_268[4];  // Offset: 268 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction OnlineSubsystemUtils.InAppPurchaseResult__DelegateSignature Size 176
class FInAppPurchaseResult__DelegateSignature
{

 public: 
	enum class EInAppPurchaseState PurchaseStatus;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FInAppPurchaseProductInfo InAppPurchaseReceipts;  // Offset: 8 Size: 168



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates Size 4
class FClientSendReservationUpdates
{

 public: 
	int32_t NumRemainingReservations;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction OnlineSubsystemUtils.InAppPurchaseQueryResult__DelegateSignature Size 16
class FInAppPurchaseQueryResult__DelegateSignature
{

 public: 
	struct TArray<struct FInAppPurchaseProductInfo> InAppPurchaseInformation;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction OnlineSubsystemUtils.InAppPurchaseQuery2Result__DelegateSignature Size 16
class FInAppPurchaseQuery2Result__DelegateSignature
{

 public: 
	struct TArray<struct FOnlineProxyStoreOffer> InAppOfferInformation;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn Size 40
class FGetIsMyTurn
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct APlayerController* PlayerController;  // Offset: 8 Size: 8
	struct FString MatchID;  // Offset: 16 Size: 16
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool bIsMyTurn : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct OnlineSubsystemUtils.PlayerReservation Size 80
class FPlayerReservation
{

 public: 
	struct FUniqueNetIdRepl UniqueId;  // Offset: 0 Size: 40
	struct FString ValidationStr;  // Offset: 40 Size: 16
	struct FString platform;  // Offset: 56 Size: 16
	char pad_72_1 : 7;  // Offset: 72 Size: 1
	bool bAllowCrossplay : 1;  // Offset: 72 Size: 1
	char pad_73[3];  // Offset: 73 Size: 3
	float ElapsedTime;  // Offset: 76 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct OnlineSubsystemUtils.OnlineProxyStoreOffer Size 272
class FOnlineProxyStoreOffer
{

 public: 
	struct FString OfferId;  // Offset: 0 Size: 16
	struct FText Title;  // Offset: 16 Size: 24
	struct FText Description;  // Offset: 40 Size: 24
	struct FText LongDescription;  // Offset: 64 Size: 24
	struct FText RegularPriceText;  // Offset: 88 Size: 24
	int32_t RegularPrice;  // Offset: 112 Size: 4
	char pad_116[4];  // Offset: 116 Size: 4
	struct FText PriceText;  // Offset: 120 Size: 24
	int32_t NumericPrice;  // Offset: 144 Size: 4
	char pad_148[4];  // Offset: 148 Size: 4
	struct FString CurrencyCode;  // Offset: 152 Size: 16
	struct FDateTime ReleaseDate;  // Offset: 168 Size: 8
	struct FDateTime ExpirationDate;  // Offset: 176 Size: 8
	enum class EOnlineProxyStoreOfferDiscountType DiscountType;  // Offset: 184 Size: 1
	char pad_185[7];  // Offset: 185 Size: 7
	struct TMap<struct FString, struct FString> DynamicFields;  // Offset: 192 Size: 80



 // Functions 
 public:
}; 
 
 //DelegateFunction OnlineSubsystemUtils.InAppPurchaseRestoreResult2__DelegateSignature Size 24
class FInAppPurchaseRestoreResult2__DelegateSignature
{

 public: 
	enum class EInAppPurchaseStatus PurchaseStatus;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct TArray<struct FInAppPurchaseRestoreInfo2> InAppPurchaseRestoreInfo;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction OnlineSubsystemUtils.InAppPurchaseRestoreResult__DelegateSignature Size 24
class FInAppPurchaseRestoreResult__DelegateSignature
{

 public: 
	enum class EInAppPurchaseState CompletionStatus;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct TArray<struct FInAppPurchaseRestoreInfo> InAppRestorePurchaseInformation;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction OnlineSubsystemUtils.LeaderboardQueryResult__DelegateSignature Size 4
class FLeaderboardQueryResult__DelegateSignature
{

 public: 
	int32_t LeaderboardValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct OnlineSubsystemUtils.InAppPurchaseRestoreInfo2 Size 48
class FInAppPurchaseRestoreInfo2
{

 public: 
	struct FString ItemName;  // Offset: 0 Size: 16
	struct FString ItemId;  // Offset: 16 Size: 16
	struct FString ValidationInfo;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush Size 24
class FCreateProxyObjectForFlush
{

 public: 
	struct APlayerController* PlayerController;  // Offset: 0 Size: 8
	struct FName SessionName;  // Offset: 8 Size: 8
	struct ULeaderboardFlushCallbackProxy* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction OnlineSubsystemUtils.OnLeaderboardFlushed__DelegateSignature Size 8
class FOnLeaderboardFlushed__DelegateSignature
{

 public: 
	struct FName SessionName;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction OnlineSubsystemUtils.OnlineLogoutResult__DelegateSignature Size 8
class FOnlineLogoutResult__DelegateSignature
{

 public: 
	struct APlayerController* PlayerController;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction OnlineSubsystemUtils.OnlineShowLoginUIResult__DelegateSignature Size 8
class FOnlineShowLoginUIResult__DelegateSignature
{

 public: 
	struct APlayerController* PlayerController;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo Size 48
class FInAppPurchaseReceiptInfo
{

 public: 
	struct FString ItemName;  // Offset: 0 Size: 16
	struct FString ItemId;  // Offset: 16 Size: 16
	struct FString ValidationInfo;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription Size 112
class FGetCachedAchievementDescription
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct APlayerController* PlayerController;  // Offset: 8 Size: 8
	struct FName achievementId;  // Offset: 16 Size: 8
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bFoundID : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7
	struct FText Title;  // Offset: 32 Size: 24
	struct FText LockedDescription;  // Offset: 56 Size: 24
	struct FText UnlockedDescription;  // Offset: 80 Size: 24
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bHidden : 1;  // Offset: 104 Size: 1
	char pad_105[7];  // Offset: 105 Size: 7



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers Size 272
class FGetCurrentPlayers
{

 public: 
	struct FBlueprintSessionResult Result;  // Offset: 0 Size: 264
	int32_t ReturnValue;  // Offset: 264 Size: 4
	char pad_268[4];  // Offset: 268 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductInfo2 Size 248
class FInAppPurchaseProductInfo2
{

 public: 
	struct FString Identifier;  // Offset: 0 Size: 16
	struct FString TransactionIdentifier;  // Offset: 16 Size: 16
	struct FString DisplayName;  // Offset: 32 Size: 16
	struct FString DisplayDescription;  // Offset: 48 Size: 16
	struct FString DisplayPrice;  // Offset: 64 Size: 16
	float RawPrice;  // Offset: 80 Size: 4
	char pad_84[4];  // Offset: 84 Size: 4
	struct FString CurrencyCode;  // Offset: 88 Size: 16
	struct FString CurrencySymbol;  // Offset: 104 Size: 16
	struct FString DecimalSeparator;  // Offset: 120 Size: 16
	struct FString GroupingSeparator;  // Offset: 136 Size: 16
	struct FString ReceiptData;  // Offset: 152 Size: 16
	struct TMap<struct FString, struct FString> DynamicFields;  // Offset: 168 Size: 80



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery Size 24
class FCreateProxyObjectForIntQuery
{

 public: 
	struct APlayerController* PlayerController;  // Offset: 0 Size: 8
	struct FName StatName;  // Offset: 8 Size: 8
	struct ULeaderboardQueryCallbackProxy* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductRequest2 Size 24
class FInAppPurchaseProductRequest2
{

 public: 
	struct FString ProductIdentifier;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bIsConsumable : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal Size 64
class FPIELoginSettingsInternal
{

 public: 
	struct FString ID;  // Offset: 0 Size: 16
	struct FString Token;  // Offset: 16 Size: 16
	struct FString Type;  // Offset: 32 Size: 16
	struct TArray<char> TokenBytes;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct OnlineSubsystemUtils.PartyBeaconCrossplayPlatformMapping Size 32
class FPartyBeaconCrossplayPlatformMapping
{

 public: 
	struct FString PlatformName;  // Offset: 0 Size: 16
	struct FString PlatformType;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases Size 16
class FCreateProxyObjectForInAppPurchaseUnprocessedPurchases
{

 public: 
	struct APlayerController* PlayerController;  // Offset: 0 Size: 8
	struct UInAppPurchaseCallbackProxy2* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession Size 32
class FCreateSession
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct APlayerController* PlayerController;  // Offset: 8 Size: 8
	int32_t PublicConnections;  // Offset: 16 Size: 4
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool bUseLAN : 1;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3
	struct UCreateSessionCallbackProxy* ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct OnlineSubsystemUtils.PartyReservation Size 80
class FPartyReservation
{

 public: 
	int32_t TeamNum;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FUniqueNetIdRepl PartyLeader;  // Offset: 8 Size: 40
	struct TArray<struct FPlayerReservation> PartyMembers;  // Offset: 48 Size: 16
	struct TArray<struct FPlayerReservation> RemovedPartyMembers;  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress Size 32
class FGetCachedAchievementProgress
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct APlayerController* PlayerController;  // Offset: 8 Size: 8
	struct FName achievementId;  // Offset: 16 Size: 8
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bFoundID : 1;  // Offset: 24 Size: 1
	char pad_25[3];  // Offset: 25 Size: 3
	float Progress;  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout Size 24
class FLogout
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct APlayerController* PlayerController;  // Offset: 8 Size: 8
	struct ULogoutCallbackProxy* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions Size 24
class FCacheAchievementDescriptions
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct APlayerController* PlayerController;  // Offset: 8 Size: 8
	struct UAchievementQueryCallbackProxy* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress Size 40
class FWriteAchievementProgress
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct APlayerController* PlayerController;  // Offset: 8 Size: 8
	struct FName AchievementName;  // Offset: 16 Size: 8
	float Progress;  // Offset: 24 Size: 4
	int32_t UserTag;  // Offset: 28 Size: 4
	struct UAchievementWriteCallbackProxy* ReturnValue;  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService Size 24
class FConnectToService
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct APlayerController* PlayerController;  // Offset: 8 Size: 8
	struct UConnectionCallbackProxy* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName Size 56
class FGetPlayerDisplayName
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct APlayerController* PlayerController;  // Offset: 8 Size: 8
	struct FString MatchID;  // Offset: 16 Size: 16
	int32_t PlayerIndex;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4
	struct FString PlayerDisplayName;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession Size 24
class FDestroySession
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct APlayerController* PlayerController;  // Offset: 8 Size: 8
	struct UDestroySessionCallbackProxy* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest Size 96
class FServerRemoveMemberFromReservationRequest
{

 public: 
	struct FString SessionId;  // Offset: 0 Size: 16
	struct FPartyReservation ReservationUpdate;  // Offset: 16 Size: 80



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch Size 64
class FEndMatch
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct APlayerController* PlayerController;  // Offset: 8 Size: 8
	struct TScriptInterface<ITurnBasedMatchInterface> MatchActor;  // Offset: 16 Size: 16
	struct FString MatchID;  // Offset: 32 Size: 16
	enum class EMPMatchOutcome LocalPlayerOutcome;  // Offset: 48 Size: 1
	enum class EMPMatchOutcome OtherPlayersOutcome;  // Offset: 49 Size: 1
	char pad_50[6];  // Offset: 50 Size: 6
	struct UEndMatchCallbackProxy* ReturnValue;  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions Size 32
class FFindSessions
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct APlayerController* PlayerController;  // Offset: 8 Size: 8
	int32_t MaxResults;  // Offset: 16 Size: 4
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool bUseLAN : 1;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3
	struct UFindSessionsCallbackProxy* ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers Size 272
class FGetMaxPlayers
{

 public: 
	struct FBlueprintSessionResult Result;  // Offset: 0 Size: 264
	int32_t ReturnValue;  // Offset: 264 Size: 4
	char pad_268[4];  // Offset: 268 Size: 4



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse Size 1
class FClientReservationResponse
{

 public: 
	enum class ESpectatorReservationResult ReservationResponse;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch Size 48
class FQuitMatch
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct APlayerController* PlayerController;  // Offset: 8 Size: 8
	struct FString MatchID;  // Offset: 16 Size: 16
	enum class EMPMatchOutcome Outcome;  // Offset: 32 Size: 1
	char pad_33[3];  // Offset: 33 Size: 3
	int32_t TurnTimeoutInSeconds;  // Offset: 36 Size: 4
	struct UQuitMatchCallbackProxy* ReturnValue;  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName Size 280
class FGetServerName
{

 public: 
	struct FBlueprintSessionResult Result;  // Offset: 0 Size: 264
	struct FString ReturnValue;  // Offset: 264 Size: 16



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch Size 56
class FFindTurnBasedMatch
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct APlayerController* PlayerController;  // Offset: 8 Size: 8
	struct TScriptInterface<ITurnBasedMatchInterface> MatchActor;  // Offset: 16 Size: 16
	int32_t MinPlayers;  // Offset: 32 Size: 4
	int32_t MaxPlayers;  // Offset: 36 Size: 4
	int32_t PlayerGroup;  // Offset: 40 Size: 4
	char pad_44_1 : 7;  // Offset: 44 Size: 1
	bool ShowExistingMatches : 1;  // Offset: 44 Size: 1
	char pad_45[3];  // Offset: 45 Size: 3
	struct UFindTurnBasedMatchCallbackProxy* ReturnValue;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase Size 40
class FCreateProxyObjectForInAppPurchase
{

 public: 
	struct APlayerController* PlayerController;  // Offset: 0 Size: 8
	struct FInAppPurchaseProductRequest2 ProductRequest;  // Offset: 8 Size: 24
	struct UInAppPurchaseCallbackProxy2* ReturnValue;  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned Size 16
class FCreateProxyObjectForInAppPurchaseQueryOwned
{

 public: 
	struct APlayerController* PlayerController;  // Offset: 0 Size: 8
	struct UInAppPurchaseCallbackProxy2* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery Size 32
class FCreateProxyObjectForInAppPurchaseQuery
{

 public: 
	struct APlayerController* PlayerController;  // Offset: 0 Size: 8
	struct TArray<struct FString> ProductIdentifiers;  // Offset: 8 Size: 16
	struct UInAppPurchaseQueryCallbackProxy2* ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex Size 40
class FGetMyPlayerIndex
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct APlayerController* PlayerController;  // Offset: 8 Size: 8
	struct FString MatchID;  // Offset: 16 Size: 16
	int32_t PlayerIndex;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore Size 32
class FCreateProxyObjectForInAppPurchaseRestore
{

 public: 
	struct TArray<struct FInAppPurchaseProductRequest2> ConsumableProductFlags;  // Offset: 0 Size: 16
	struct APlayerController* PlayerController;  // Offset: 16 Size: 8
	struct UInAppPurchaseRestoreCallbackProxy2* ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest Size 96
class FServerAddOrUpdateReservationRequest
{

 public: 
	struct FString SessionId;  // Offset: 0 Size: 16
	struct FPartyReservation Reservation;  // Offset: 16 Size: 80



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession Size 288
class FJoinSession
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct APlayerController* PlayerController;  // Offset: 8 Size: 8
	struct FBlueprintSessionResult SearchResult;  // Offset: 16 Size: 264
	struct UJoinSessionCallbackProxy* ReturnValue;  // Offset: 280 Size: 8



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest Size 40
class FServerCancelReservationRequest
{

 public: 
	struct FUniqueNetIdRepl Spectator;  // Offset: 0 Size: 40



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger Size 24
class FWriteLeaderboardInteger
{

 public: 
	struct APlayerController* PlayerController;  // Offset: 0 Size: 8
	struct FName StatName;  // Offset: 8 Size: 8
	int32_t StatValue;  // Offset: 16 Size: 4
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool ReturnValue : 1;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest Size 136
class FServerReservationRequest
{

 public: 
	struct FString SessionId;  // Offset: 0 Size: 16
	struct FSpectatorReservation Reservation;  // Offset: 16 Size: 120



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest Size 96
class FServerUpdateReservationRequest
{

 public: 
	struct FString SessionId;  // Offset: 0 Size: 16
	struct FPartyReservation ReservationUpdate;  // Offset: 16 Size: 80



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI Size 24
class FShowExternalLoginUI
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct APlayerController* InPlayerController;  // Offset: 8 Size: 8
	struct UShowLoginUICallbackProxy* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject Size 24
class FRegisterTurnBasedMatchInterfaceObject
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct APlayerController* PlayerController;  // Offset: 8 Size: 8
	struct UObject* Object;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling Size 1
class FIsIdling
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 