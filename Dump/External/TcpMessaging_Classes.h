#pragma once 
#include <TcpMessaging_Structs.h>
 
 
 
class UTcpMessagingSettings
{
public:
	UTcpMessagingSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetEnableTransport() {
		return memory.read<bool>(m_addr + 40);
	}
	struct FString GetListenEndpoint() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct TArray<struct FString> GetConnectToEndpoints() {
		return memory.read<struct TArray<struct FString>>(m_addr + 64);
	}
	int32_t GetConnectionRetryDelay() {
		return memory.read<int32_t>(m_addr + 80);
	}
	bool GetbStopServiceWhenAppDeactivates() {
		return memory.read<bool>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


