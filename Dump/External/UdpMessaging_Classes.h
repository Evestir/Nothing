#pragma once 
#include <UdpMessaging_Structs.h>
 
 
 
class UUdpMessagingSettings
{
public:
	UUdpMessagingSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetEnabledByDefault() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetEnableTransport() {
		return memory.read<bool>(m_addr + 41);
	}
	bool GetbAutoRepair() {
		return memory.read<bool>(m_addr + 42);
	}
	float GetMaxSendRate() {
		return memory.read<float>(m_addr + 44);
	}
	uint32_t GetAutoRepairAttemptLimit() {
		return memory.read<uint32_t>(m_addr + 48);
	}
	bool GetbStopServiceWhenAppDeactivates() {
		return memory.read<bool>(m_addr + 52);
	}
	struct FString GetUnicastEndpoint() {
		return memory.read<struct FString>(m_addr + 56);
	}
	struct FString GetMulticastEndpoint() {
		return memory.read<struct FString>(m_addr + 72);
	}
	enum class EUdpMessageFormat GetMessageFormat() {
		return memory.read<enum class EUdpMessageFormat>(m_addr + 88);
	}
	char GetMulticastTimeToLive() {
		return memory.read<char>(m_addr + 89);
	}
	struct TArray<struct FString> GetStaticEndpoints() {
		return memory.read<struct TArray<struct FString>>(m_addr + 96);
	}
	bool GetEnableTunnel() {
		return memory.read<bool>(m_addr + 112);
	}
	struct FString GetTunnelUnicastEndpoint() {
		return memory.read<struct FString>(m_addr + 120);
	}
	struct FString GetTunnelMulticastEndpoint() {
		return memory.read<struct FString>(m_addr + 136);
	}
	struct TArray<struct FString> GetRemoteTunnelEndpoints() {
		return memory.read<struct TArray<struct FString>>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};


