#pragma once 
#include <OnlineSubsystemUtils_Structs.h>
 
 
 
class UDestroySessionCallbackProxy
{
public:
	UDestroySessionCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UIpConnection
{
public:
	UIpConnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSocketErrorDisconnectDelay() {
		return memory.read<float>(m_addr + 7160);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInAppPurchaseRestoreCallbackProxy2
{
public:
	UInAppPurchaseRestoreCallbackProxy2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 40);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UIpNetDriver
{
public:
	UIpNetDriver(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetLogPortUnreach() {
		return memory.read<char>(m_addr + 1888);
	}
	char GetAllowPlayerPortUnreach() {
		return memory.read<char>(m_addr + 1888);
	}
	uint32_t GetMaxPortCountToTry() {
		return memory.read<uint32_t>(m_addr + 1892);
	}
	uint32_t GetServerDesiredSocketReceiveBufferBytes() {
		return memory.read<uint32_t>(m_addr + 1908);
	}
	uint32_t GetServerDesiredSocketSendBufferBytes() {
		return memory.read<uint32_t>(m_addr + 1912);
	}
	uint32_t GetClientDesiredSocketReceiveBufferBytes() {
		return memory.read<uint32_t>(m_addr + 1916);
	}
	uint32_t GetClientDesiredSocketSendBufferBytes() {
		return memory.read<uint32_t>(m_addr + 1920);
	}
	double GetMaxSecondsInReceive() {
		return memory.read<double>(m_addr + 1928);
	}
	int32_t GetNbPacketsBetweenReceiveTimeTest() {
		return memory.read<int32_t>(m_addr + 1936);
	}
	float GetResolutionConnectionTimeout() {
		return memory.read<float>(m_addr + 1940);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInAppPurchaseQueryCallbackProxy2
{
public:
	UInAppPurchaseQueryCallbackProxy2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 40);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAchievementBlueprintLibrary
{
public:
	UAchievementBlueprintLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAchievementQueryCallbackProxy
{
public:
	UAchievementQueryCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAchievementWriteCallbackProxy
{
public:
	UAchievementWriteCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCreateSessionCallbackProxy
{
public:
	UCreateSessionCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UConnectionCallbackProxy
{
public:
	UConnectionCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class AOnlineBeacon
{
public:
	AOnlineBeacon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBeaconConnectionInitialTimeout() {
		return memory.read<float>(m_addr + 552);
	}
	float GetBeaconConnectionTimeout() {
		return memory.read<float>(m_addr + 556);
	}
	struct UNetDriver GetNetDriver() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UNetDriver(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEndMatchCallbackProxy
{
public:
	UEndMatchCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEndTurnCallbackProxy
{
public:
	UEndTurnCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFindSessionsCallbackProxy
{
public:
	UFindSessionsCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVoipListenerSynthComponent
{
public:
	UVoipListenerSynthComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UFindTurnBasedMatchCallbackProxy
{
public:
	UFindTurnBasedMatchCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInAppPurchaseCallbackProxy
{
public:
	UInAppPurchaseCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 40);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInAppPurchaseCallbackProxy2
{
public:
	UInAppPurchaseCallbackProxy2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 40);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class AOnlineBeaconHostObject
{
public:
	AOnlineBeaconHostObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetBeaconTypeName() {
		return memory.read<struct FString>(m_addr + 544);
	}
	AOnlineBeaconClient GetClientBeaconActorClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return AOnlineBeaconClient(ptr_addr);
	}
	struct TArray<struct AOnlineBeaconClient> GetClientActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct TArray<struct AOnlineBeaconClient>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInAppPurchaseQueryCallbackProxy
{
public:
	UInAppPurchaseQueryCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 40);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInAppPurchaseRestoreCallbackProxy
{
public:
	UInAppPurchaseRestoreCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 40);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UJoinSessionCallbackProxy
{
public:
	UJoinSessionCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULeaderboardBlueprintLibrary
{
public:
	ULeaderboardBlueprintLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULeaderboardFlushCallbackProxy
{
public:
	ULeaderboardFlushCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 40);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UOnlinePIESettings
{
public:
	UOnlinePIESettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbOnlinePIEEnabled() {
		return memory.read<bool>(m_addr + 56);
	}
	struct TArray<struct FPIELoginSettingsInternal> GetLogins() {
		return memory.read<struct TArray<struct FPIELoginSettingsInternal>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULeaderboardQueryCallbackProxy
{
public:
	ULeaderboardQueryCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 40);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULogoutCallbackProxy
{
public:
	ULogoutCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class AOnlineBeaconClient
{
public:
	AOnlineBeaconClient(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AOnlineBeaconHostObject GetBeaconOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 592);
		return struct AOnlineBeaconHostObject(ptr_addr);
	}
	struct UNetConnection GetBeaconConnection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct UNetConnection(ptr_addr);
	}
	enum class EBeaconConnectionState GetConnectionState() {
		return memory.read<enum class EBeaconConnectionState>(m_addr + 608);
	}

private:
	std::uint64_t m_addr = 0;
};


class ATestBeaconHost
{
public:
	ATestBeaconHost(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AOnlineBeaconHost
{
public:
	AOnlineBeaconHost(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetListenPort() {
		return memory.read<int32_t>(m_addr + 592);
	}
	struct TArray<struct AOnlineBeaconClient> GetClientActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct TArray<struct AOnlineBeaconClient>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UOnlineEngineInterfaceImpl
{
public:
	UOnlineEngineInterfaceImpl(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FName, struct FName> GetMappedUniqueNetIdTypes() {
		return memory.read<struct TMap<struct FName, struct FName>>(m_addr + 40);
	}
	struct TArray<struct FName> GetCompatibleUniqueNetIdTypes() {
		return memory.read<struct TArray<struct FName>>(m_addr + 120);
	}
	struct FName GetVoiceSubsystemNameOverride() {
		return memory.read<struct FName>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};


class UOnlineSessionClient
{
public:
	UOnlineSessionClient(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsFromInvite() {
		return memory.read<bool>(m_addr + 448);
	}
	bool GetbHandlingDisconnect() {
		return memory.read<bool>(m_addr + 449);
	}

private:
	std::uint64_t m_addr = 0;
};


class APartyBeaconClient
{
public:
	APartyBeaconClient(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetDestSessionId() {
		return memory.read<struct FString>(m_addr + 736);
	}
	struct FPartyReservation GetPendingReservation() {
		return memory.read<struct FPartyReservation>(m_addr + 752);
	}
	enum class EClientRequestType GetRequestType() {
		return memory.read<enum class EClientRequestType>(m_addr + 832);
	}
	bool GetbPendingReservationSent() {
		return memory.read<bool>(m_addr + 833);
	}
	bool GetbCancelReservation() {
		return memory.read<bool>(m_addr + 834);
	}

private:
	std::uint64_t m_addr = 0;
};


class APartyBeaconHost
{
public:
	APartyBeaconHost(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPartyBeaconState GetState() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct UPartyBeaconState(ptr_addr);
	}
	bool GetbLogoutOnSessionTimeout() {
		return memory.read<bool>(m_addr + 688);
	}
	float GetSessionTimeoutSecs() {
		return memory.read<float>(m_addr + 692);
	}
	float GetTravelSessionTimeoutSecs() {
		return memory.read<float>(m_addr + 696);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPartyBeaconState
{
public:
	UPartyBeaconState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSessionName() {
		return memory.read<struct FName>(m_addr + 40);
	}
	int32_t GetNumConsumedReservations() {
		return memory.read<int32_t>(m_addr + 48);
	}
	int32_t GetMaxReservations() {
		return memory.read<int32_t>(m_addr + 52);
	}
	int32_t GetNumTeams() {
		return memory.read<int32_t>(m_addr + 56);
	}
	int32_t GetNumPlayersPerTeam() {
		return memory.read<int32_t>(m_addr + 60);
	}
	struct FName GetTeamAssignmentMethod() {
		return memory.read<struct FName>(m_addr + 64);
	}
	int32_t GetReservedHostTeamNum() {
		return memory.read<int32_t>(m_addr + 72);
	}
	int32_t GetForceTeamNum() {
		return memory.read<int32_t>(m_addr + 76);
	}
	bool GetbRestrictCrossConsole() {
		return memory.read<bool>(m_addr + 80);
	}
	struct TArray<struct FString> GetPlatformCrossplayRestrictions() {
		return memory.read<struct TArray<struct FString>>(m_addr + 88);
	}
	struct TArray<struct FPartyBeaconCrossplayPlatformMapping> GetPlatformTypeMapping() {
		return memory.read<struct TArray<struct FPartyBeaconCrossplayPlatformMapping>>(m_addr + 104);
	}
	bool GetbEnableRemovalRequests() {
		return memory.read<bool>(m_addr + 120);
	}
	struct TArray<struct FPartyReservation> GetReservations() {
		return memory.read<struct TArray<struct FPartyReservation>>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UQuitMatchCallbackProxy
{
public:
	UQuitMatchCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UShowLoginUICallbackProxy
{
public:
	UShowLoginUICallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class ASpectatorBeaconClient
{
public:
	ASpectatorBeaconClient(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetDestSessionId() {
		return memory.read<struct FString>(m_addr + 736);
	}
	struct FSpectatorReservation GetPendingReservation() {
		return memory.read<struct FSpectatorReservation>(m_addr + 752);
	}
	enum class ESpectatorClientRequestType GetRequestType() {
		return memory.read<enum class ESpectatorClientRequestType>(m_addr + 872);
	}
	bool GetbPendingReservationSent() {
		return memory.read<bool>(m_addr + 873);
	}
	bool GetbCancelReservation() {
		return memory.read<bool>(m_addr + 874);
	}

private:
	std::uint64_t m_addr = 0;
};


class ASpectatorBeaconHost
{
public:
	ASpectatorBeaconHost(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USpectatorBeaconState GetState() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct USpectatorBeaconState(ptr_addr);
	}
	bool GetbLogoutOnSessionTimeout() {
		return memory.read<bool>(m_addr + 688);
	}
	float GetSessionTimeoutSecs() {
		return memory.read<float>(m_addr + 692);
	}
	float GetTravelSessionTimeoutSecs() {
		return memory.read<float>(m_addr + 696);
	}

private:
	std::uint64_t m_addr = 0;
};


class USpectatorBeaconState
{
public:
	USpectatorBeaconState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSessionName() {
		return memory.read<struct FName>(m_addr + 40);
	}
	int32_t GetNumConsumedReservations() {
		return memory.read<int32_t>(m_addr + 48);
	}
	int32_t GetMaxReservations() {
		return memory.read<int32_t>(m_addr + 52);
	}
	bool GetbRestrictCrossConsole() {
		return memory.read<bool>(m_addr + 56);
	}
	struct TArray<struct FSpectatorReservation> GetReservations() {
		return memory.read<struct TArray<struct FSpectatorReservation>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class ATestBeaconClient
{
public:
	ATestBeaconClient(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UTurnBasedBlueprintLibrary
{
public:
	UTurnBasedBlueprintLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


