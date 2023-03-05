#pragma once 
#include <PacketHandler_Structs.h>
 
 
 
class UHandlerComponentFactory
{
public:
	UHandlerComponentFactory(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPacketHandlerProfileConfig
{
public:
	UPacketHandlerProfileConfig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetComponents() {
		return memory.read<struct TArray<struct FString>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


