#pragma once 
#include <OnlineSubsystemSteam_Structs.h>
 
 
 
class USteamAuthComponentModuleInterface
{
public:
	USteamAuthComponentModuleInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USteamNetConnection
{
public:
	USteamNetConnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsPassthrough() {
		return memory.read<bool>(m_addr + 7240);
	}

private:
	std::uint64_t m_addr = 0;
};


class USteamNetDriver
{
public:
	USteamNetDriver(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


