#pragma once 
#include <OnlineSubsystemUtils_Structs.h>
 
 
 
//Class OnlineSubsystemUtils.DestroySessionCallbackProxy Size 120
// Inherited 48 bytes 
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 48 Size: 16
	struct FMulticastInlineDelegate OnFailure;  // Offset: 64 Size: 16
	char pad_80[40];  // Offset: 80 Size: 40



 // Functions 
 public:
	struct UDestroySessionCallbackProxy* DestroySession(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
}; 
 
 


//Class OnlineSubsystemUtils.IpConnection Size 7240
// Inherited 7080 bytes 
class UIpConnection : public UNetConnection
{

 public: 
	char pad_7080[80];  // Offset: 7080 Size: 80
	float SocketErrorDisconnectDelay;  // Offset: 7160 Size: 4
	char pad_7164[76];  // Offset: 7164 Size: 76



 // Functions 
 public:
}; 
 
 


//Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2 Size 168
// Inherited 40 bytes 
class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 40 Size: 16
	struct FMulticastInlineDelegate OnFailure;  // Offset: 56 Size: 16
	char pad_72[96];  // Offset: 72 Size: 96



 // Functions 
 public:
	struct UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest2>& ConsumableProductFlags, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
}; 
 
 


//Class OnlineSubsystemUtils.IpNetDriver Size 2000
// Inherited 1888 bytes 
class UIpNetDriver : public UNetDriver
{

 public: 
	char LogPortUnreach : 1;  // Offset: 1888 Size: 1
	char AllowPlayerPortUnreach : 1;  // Offset: 1888 Size: 1
	char pad_1888_1 : 6;  // Offset: 1888 Size: 1
	char pad_1889[4];  // Offset: 1889 Size: 4
	uint32_t MaxPortCountToTry;  // Offset: 1892 Size: 4
	char pad_1896[12];  // Offset: 1896 Size: 12
	uint32_t ServerDesiredSocketReceiveBufferBytes;  // Offset: 1908 Size: 4
	uint32_t ServerDesiredSocketSendBufferBytes;  // Offset: 1912 Size: 4
	uint32_t ClientDesiredSocketReceiveBufferBytes;  // Offset: 1916 Size: 4
	uint32_t ClientDesiredSocketSendBufferBytes;  // Offset: 1920 Size: 4
	char pad_1924[4];  // Offset: 1924 Size: 4
	double MaxSecondsInReceive;  // Offset: 1928 Size: 8
	int32_t NbPacketsBetweenReceiveTimeTest;  // Offset: 1936 Size: 4
	float ResolutionConnectionTimeout;  // Offset: 1940 Size: 4
	char pad_1944[56];  // Offset: 1944 Size: 56



 // Functions 
 public:
}; 
 
 


//Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2 Size 104
// Inherited 40 bytes 
class UInAppPurchaseQueryCallbackProxy2 : public UObject
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 40 Size: 16
	struct FMulticastInlineDelegate OnFailure;  // Offset: 56 Size: 16
	char pad_72[32];  // Offset: 72 Size: 32



 // Functions 
 public:
	struct UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString>& ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
}; 
 
 


//Class OnlineSubsystemUtils.AchievementBlueprintLibrary Size 40
// Inherited 40 bytes 
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	void GetCachedAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName achievementId, bool& bFoundID, float& Progress); // Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
	void GetCachedAchievementDescription(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName achievementId, bool& bFoundID, struct FText& Title, struct FText& LockedDescription, struct FText& UnlockedDescription, bool& bHidden); // Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
}; 
 
 


//Class OnlineSubsystemUtils.AchievementQueryCallbackProxy Size 104
// Inherited 48 bytes 
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 48 Size: 16
	struct FMulticastInlineDelegate OnFailure;  // Offset: 64 Size: 16
	char pad_80[24];  // Offset: 80 Size: 24



 // Functions 
 public:
	struct UAchievementQueryCallbackProxy* CacheAchievements(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
	struct UAchievementQueryCallbackProxy* CacheAchievementDescriptions(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
}; 
 
 


//Class OnlineSubsystemUtils.AchievementWriteCallbackProxy Size 128
// Inherited 48 bytes 
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 48 Size: 16
	struct FMulticastInlineDelegate OnFailure;  // Offset: 64 Size: 16
	char pad_80[48];  // Offset: 80 Size: 48



 // Functions 
 public:
	struct UAchievementWriteCallbackProxy* WriteAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementName, float Progress, int32_t UserTag); // Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
}; 
 
 


//Class OnlineSubsystemUtils.CreateSessionCallbackProxy Size 152
// Inherited 48 bytes 
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 48 Size: 16
	struct FMulticastInlineDelegate OnFailure;  // Offset: 64 Size: 16
	char pad_80[72];  // Offset: 80 Size: 72



 // Functions 
 public:
	struct UCreateSessionCallbackProxy* CreateSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN); // Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
}; 
 
 


//Class OnlineSubsystemUtils.ConnectionCallbackProxy Size 120
// Inherited 48 bytes 
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 48 Size: 16
	struct FMulticastInlineDelegate OnFailure;  // Offset: 64 Size: 16
	char pad_80[40];  // Offset: 80 Size: 40



 // Functions 
 public:
	struct UConnectionCallbackProxy* ConnectToService(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
}; 
 
 


//Class OnlineSubsystemUtils.OnlineBeacon Size 592
// Inherited 544 bytes 
class AOnlineBeacon : public AActor
{

 public: 
	char pad_544[8];  // Offset: 544 Size: 8
	float BeaconConnectionInitialTimeout;  // Offset: 552 Size: 4
	float BeaconConnectionTimeout;  // Offset: 556 Size: 4
	struct UNetDriver* NetDriver;  // Offset: 560 Size: 8
	char pad_568[24];  // Offset: 568 Size: 24



 // Functions 
 public:
}; 
 
 


//Class OnlineSubsystemUtils.EndMatchCallbackProxy Size 128
// Inherited 48 bytes 
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 48 Size: 16
	struct FMulticastInlineDelegate OnFailure;  // Offset: 64 Size: 16
	char pad_80[48];  // Offset: 80 Size: 48



 // Functions 
 public:
	struct UEndMatchCallbackProxy* EndMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, struct FString MatchID, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome); // Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
}; 
 
 


//Class OnlineSubsystemUtils.EndTurnCallbackProxy Size 120
// Inherited 48 bytes 
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 48 Size: 16
	struct FMulticastInlineDelegate OnFailure;  // Offset: 64 Size: 16
	char pad_80[40];  // Offset: 80 Size: 40



 // Functions 
 public:
	struct UEndTurnCallbackProxy* EndTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, struct TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface); // Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
}; 
 
 


//Class OnlineSubsystemUtils.FindSessionsCallbackProxy Size 144
// Inherited 48 bytes 
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 48 Size: 16
	struct FMulticastInlineDelegate OnFailure;  // Offset: 64 Size: 16
	char pad_80[64];  // Offset: 80 Size: 64



 // Functions 
 public:
	struct FString GetServerName(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
	int32_t GetPingInMs(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
	int32_t GetMaxPlayers(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
	int32_t GetCurrentPlayers(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
	struct UFindSessionsCallbackProxy* FindSessions(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
}; 
 
 


//Class OnlineSubsystemUtils.VoipListenerSynthComponent Size 1840
// Inherited 1744 bytes 
class UVoipListenerSynthComponent : public USynthComponent
{

 public: 
	char pad_1744[96];  // Offset: 1744 Size: 96



 // Functions 
 public:
	bool IsIdling(); // Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
}; 
 
 


//Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy Size 136
// Inherited 48 bytes 
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 48 Size: 16
	struct FMulticastInlineDelegate OnFailure;  // Offset: 64 Size: 16
	char pad_80[56];  // Offset: 80 Size: 56



 // Functions 
 public:
	struct UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches); // Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
}; 
 
 


//Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy Size 128
// Inherited 40 bytes 
class UInAppPurchaseCallbackProxy : public UObject
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 40 Size: 16
	struct FMulticastInlineDelegate OnFailure;  // Offset: 56 Size: 16
	char pad_72[56];  // Offset: 72 Size: 56



 // Functions 
 public:
	struct UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest& ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
}; 
 
 


//Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2 Size 168
// Inherited 40 bytes 
class UInAppPurchaseCallbackProxy2 : public UObject
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 40 Size: 16
	struct FMulticastInlineDelegate OnFailure;  // Offset: 56 Size: 16
	char pad_72[96];  // Offset: 72 Size: 96



 // Functions 
 public:
	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest2& ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
}; 
 
 


//Class OnlineSubsystemUtils.OnlineBeaconHostObject Size 584
// Inherited 544 bytes 
class AOnlineBeaconHostObject : public AActor
{

 public: 
	struct FString BeaconTypeName;  // Offset: 544 Size: 16
	AOnlineBeaconClient* ClientBeaconActorClass;  // Offset: 560 Size: 8
	struct TArray<struct AOnlineBeaconClient*> ClientActors;  // Offset: 568 Size: 16



 // Functions 
 public:
}; 
 
 


//Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy Size 144
// Inherited 40 bytes 
class UInAppPurchaseQueryCallbackProxy : public UObject
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 40 Size: 16
	struct FMulticastInlineDelegate OnFailure;  // Offset: 56 Size: 16
	char pad_72[72];  // Offset: 72 Size: 72



 // Functions 
 public:
	struct UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString>& ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
}; 
 
 


//Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy Size 144
// Inherited 40 bytes 
class UInAppPurchaseRestoreCallbackProxy : public UObject
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 40 Size: 16
	struct FMulticastInlineDelegate OnFailure;  // Offset: 56 Size: 16
	char pad_72[72];  // Offset: 72 Size: 72



 // Functions 
 public:
	struct UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest>& ConsumableProductFlags, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
}; 
 
 


//Class OnlineSubsystemUtils.JoinSessionCallbackProxy Size 384
// Inherited 48 bytes 
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 48 Size: 16
	struct FMulticastInlineDelegate OnFailure;  // Offset: 64 Size: 16
	char pad_80[304];  // Offset: 80 Size: 304



 // Functions 
 public:
	struct UJoinSessionCallbackProxy* JoinSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBlueprintSessionResult& SearchResult); // Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
}; 
 
 


//Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary Size 40
// Inherited 40 bytes 
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	bool WriteLeaderboardInteger(struct APlayerController* PlayerController, struct FName StatName, int32_t StatValue); // Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
}; 
 
 


//Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy Size 104
// Inherited 40 bytes 
class ULeaderboardFlushCallbackProxy : public UObject
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 40 Size: 16
	struct FMulticastInlineDelegate OnFailure;  // Offset: 56 Size: 16
	char pad_72[32];  // Offset: 72 Size: 32



 // Functions 
 public:
	struct ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(struct APlayerController* PlayerController, struct FName SessionName); // Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
}; 
 
 


//Class OnlineSubsystemUtils.OnlinePIESettings Size 80
// Inherited 56 bytes 
class UOnlinePIESettings : public UDeveloperSettings
{

 public: 
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	bool bOnlinePIEEnabled : 1;  // Offset: 56 Size: 1
	char pad_57[7];  // Offset: 57 Size: 7
	struct TArray<struct FPIELoginSettingsInternal> Logins;  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 


//Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy Size 152
// Inherited 40 bytes 
class ULeaderboardQueryCallbackProxy : public UObject
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 40 Size: 16
	struct FMulticastInlineDelegate OnFailure;  // Offset: 56 Size: 16
	char pad_72[80];  // Offset: 72 Size: 80



 // Functions 
 public:
	struct ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(struct APlayerController* PlayerController, struct FName StatName); // Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
}; 
 
 


//Class OnlineSubsystemUtils.LogoutCallbackProxy Size 104
// Inherited 48 bytes 
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 48 Size: 16
	struct FMulticastInlineDelegate OnFailure;  // Offset: 64 Size: 16
	char pad_80[24];  // Offset: 80 Size: 24



 // Functions 
 public:
	struct ULogoutCallbackProxy* Logout(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
}; 
 
 


//Class OnlineSubsystemUtils.OnlineBeaconClient Size 688
// Inherited 592 bytes 
class AOnlineBeaconClient : public AOnlineBeacon
{

 public: 
	struct AOnlineBeaconHostObject* BeaconOwner;  // Offset: 592 Size: 8
	struct UNetConnection* BeaconConnection;  // Offset: 600 Size: 8
	enum class EBeaconConnectionState ConnectionState;  // Offset: 608 Size: 1
	char pad_609[79];  // Offset: 609 Size: 79



 // Functions 
 public:
	void ClientOnConnected(); // Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
}; 
 
 


//Class OnlineSubsystemUtils.TestBeaconHost Size 584
// Inherited 584 bytes 
class ATestBeaconHost : public AOnlineBeaconHostObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class OnlineSubsystemUtils.OnlineBeaconHost Size 776
// Inherited 592 bytes 
class AOnlineBeaconHost : public AOnlineBeacon
{

 public: 
	int32_t ListenPort;  // Offset: 592 Size: 4
	char pad_596[4];  // Offset: 596 Size: 4
	struct TArray<struct AOnlineBeaconClient*> ClientActors;  // Offset: 600 Size: 16
	char pad_616[160];  // Offset: 616 Size: 160



 // Functions 
 public:
}; 
 
 


//Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl Size 392
// Inherited 40 bytes 
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{

 public: 
	struct TMap<struct FName, struct FName> MappedUniqueNetIdTypes;  // Offset: 40 Size: 80
	struct TArray<struct FName> CompatibleUniqueNetIdTypes;  // Offset: 120 Size: 16
	struct FName VoiceSubsystemNameOverride;  // Offset: 136 Size: 8
	char pad_144[248];  // Offset: 144 Size: 248



 // Functions 
 public:
}; 
 
 


//Class OnlineSubsystemUtils.OnlineSessionClient Size 456
// Inherited 40 bytes 
class UOnlineSessionClient : public UOnlineSession
{

 public: 
	char pad_40[408];  // Offset: 40 Size: 408
	char pad_448_1 : 7;  // Offset: 448 Size: 1
	bool bIsFromInvite : 1;  // Offset: 448 Size: 1
	char pad_449_1 : 7;  // Offset: 449 Size: 1
	bool bHandlingDisconnect : 1;  // Offset: 449 Size: 1
	char pad_450[6];  // Offset: 450 Size: 6



 // Functions 
 public:
}; 
 
 


//Class OnlineSubsystemUtils.PartyBeaconClient Size 880
// Inherited 688 bytes 
class APartyBeaconClient : public AOnlineBeaconClient
{

 public: 
	char pad_688[48];  // Offset: 688 Size: 48
	struct FString DestSessionId;  // Offset: 736 Size: 16
	struct FPartyReservation PendingReservation;  // Offset: 752 Size: 80
	enum class EClientRequestType RequestType;  // Offset: 832 Size: 1
	char pad_833_1 : 7;  // Offset: 833 Size: 1
	bool bPendingReservationSent : 1;  // Offset: 833 Size: 1
	char pad_834_1 : 7;  // Offset: 834 Size: 1
	bool bCancelReservation : 1;  // Offset: 834 Size: 1
	char pad_835[45];  // Offset: 835 Size: 45



 // Functions 
 public:
	void ServerUpdateReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
	void ServerReservationRequest(struct FString SessionId, struct FPartyReservation Reservation); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
	void ServerRemoveMemberFromReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl PartyLeader); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
	void ServerAddOrUpdateReservationRequest(struct FString SessionId, struct FPartyReservation Reservation); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
	void ClientReservationResponse(enum class EPartyReservationResult ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
	void ClientCancelReservationResponse(enum class EPartyReservationResult ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
}; 
 
 


//Class OnlineSubsystemUtils.PartyBeaconHost Size 704
// Inherited 584 bytes 
class APartyBeaconHost : public AOnlineBeaconHostObject
{

 public: 
	struct UPartyBeaconState* State;  // Offset: 584 Size: 8
	char pad_592[96];  // Offset: 592 Size: 96
	char pad_688_1 : 7;  // Offset: 688 Size: 1
	bool bLogoutOnSessionTimeout : 1;  // Offset: 688 Size: 1
	char pad_689[3];  // Offset: 689 Size: 3
	float SessionTimeoutSecs;  // Offset: 692 Size: 4
	float TravelSessionTimeoutSecs;  // Offset: 696 Size: 4
	char pad_700[4];  // Offset: 700 Size: 4



 // Functions 
 public:
}; 
 
 


//Class OnlineSubsystemUtils.PartyBeaconState Size 160
// Inherited 40 bytes 
class UPartyBeaconState : public UObject
{

 public: 
	struct FName SessionName;  // Offset: 40 Size: 8
	int32_t NumConsumedReservations;  // Offset: 48 Size: 4
	int32_t MaxReservations;  // Offset: 52 Size: 4
	int32_t NumTeams;  // Offset: 56 Size: 4
	int32_t NumPlayersPerTeam;  // Offset: 60 Size: 4
	struct FName TeamAssignmentMethod;  // Offset: 64 Size: 8
	int32_t ReservedHostTeamNum;  // Offset: 72 Size: 4
	int32_t ForceTeamNum;  // Offset: 76 Size: 4
	char pad_80_1 : 7;  // Offset: 80 Size: 1
	bool bRestrictCrossConsole : 1;  // Offset: 80 Size: 1
	char pad_81[7];  // Offset: 81 Size: 7
	struct TArray<struct FString> PlatformCrossplayRestrictions;  // Offset: 88 Size: 16
	struct TArray<struct FPartyBeaconCrossplayPlatformMapping> PlatformTypeMapping;  // Offset: 104 Size: 16
	char pad_120_1 : 7;  // Offset: 120 Size: 1
	bool bEnableRemovalRequests : 1;  // Offset: 120 Size: 1
	char pad_121[7];  // Offset: 121 Size: 7
	struct TArray<struct FPartyReservation> Reservations;  // Offset: 128 Size: 16
	char pad_144[16];  // Offset: 144 Size: 16



 // Functions 
 public:
}; 
 
 


//Class OnlineSubsystemUtils.QuitMatchCallbackProxy Size 120
// Inherited 48 bytes 
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 48 Size: 16
	struct FMulticastInlineDelegate OnFailure;  // Offset: 64 Size: 16
	char pad_80[40];  // Offset: 80 Size: 40



 // Functions 
 public:
	struct UQuitMatchCallbackProxy* QuitMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, enum class EMPMatchOutcome Outcome, int32_t TurnTimeoutInSeconds); // Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
}; 
 
 


//Class OnlineSubsystemUtils.ShowLoginUICallbackProxy Size 96
// Inherited 48 bytes 
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 48 Size: 16
	struct FMulticastInlineDelegate OnFailure;  // Offset: 64 Size: 16
	char pad_80[16];  // Offset: 80 Size: 16



 // Functions 
 public:
	struct UShowLoginUICallbackProxy* ShowExternalLoginUI(struct UObject* WorldContextObject, struct APlayerController* InPlayerController); // Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
}; 
 
 


//Class OnlineSubsystemUtils.SpectatorBeaconClient Size 920
// Inherited 688 bytes 
class ASpectatorBeaconClient : public AOnlineBeaconClient
{

 public: 
	char pad_688[48];  // Offset: 688 Size: 48
	struct FString DestSessionId;  // Offset: 736 Size: 16
	struct FSpectatorReservation PendingReservation;  // Offset: 752 Size: 120
	enum class ESpectatorClientRequestType RequestType;  // Offset: 872 Size: 1
	char pad_873_1 : 7;  // Offset: 873 Size: 1
	bool bPendingReservationSent : 1;  // Offset: 873 Size: 1
	char pad_874_1 : 7;  // Offset: 874 Size: 1
	bool bCancelReservation : 1;  // Offset: 874 Size: 1
	char pad_875[45];  // Offset: 875 Size: 45



 // Functions 
 public:
	void ServerReservationRequest(struct FString SessionId, struct FSpectatorReservation Reservation); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl Spectator); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
	void ClientReservationResponse(enum class ESpectatorReservationResult ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
	void ClientCancelReservationResponse(enum class ESpectatorReservationResult ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
}; 
 
 


//Class OnlineSubsystemUtils.SpectatorBeaconHost Size 704
// Inherited 584 bytes 
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{

 public: 
	struct USpectatorBeaconState* State;  // Offset: 584 Size: 8
	char pad_592[96];  // Offset: 592 Size: 96
	char pad_688_1 : 7;  // Offset: 688 Size: 1
	bool bLogoutOnSessionTimeout : 1;  // Offset: 688 Size: 1
	char pad_689[3];  // Offset: 689 Size: 3
	float SessionTimeoutSecs;  // Offset: 692 Size: 4
	float TravelSessionTimeoutSecs;  // Offset: 696 Size: 4
	char pad_700[4];  // Offset: 700 Size: 4



 // Functions 
 public:
}; 
 
 


//Class OnlineSubsystemUtils.SpectatorBeaconState Size 96
// Inherited 40 bytes 
class USpectatorBeaconState : public UObject
{

 public: 
	struct FName SessionName;  // Offset: 40 Size: 8
	int32_t NumConsumedReservations;  // Offset: 48 Size: 4
	int32_t MaxReservations;  // Offset: 52 Size: 4
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	bool bRestrictCrossConsole : 1;  // Offset: 56 Size: 1
	char pad_57[7];  // Offset: 57 Size: 7
	struct TArray<struct FSpectatorReservation> Reservations;  // Offset: 64 Size: 16
	char pad_80[16];  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 


//Class OnlineSubsystemUtils.TestBeaconClient Size 688
// Inherited 688 bytes 
class ATestBeaconClient : public AOnlineBeaconClient
{

 public: 



 // Functions 
 public:
	void ServerPong(); // Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
	void ClientPing(); // Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
}; 
 
 


//Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary Size 40
// Inherited 40 bytes 
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	void RegisterTurnBasedMatchInterfaceObject(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct UObject* Object); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
	void GetPlayerDisplayName(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t PlayerIndex, struct FString& PlayerDisplayName); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
	void GetMyPlayerIndex(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t& PlayerIndex); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
	void GetIsMyTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, bool& bIsMyTurn); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
}; 
 
 


