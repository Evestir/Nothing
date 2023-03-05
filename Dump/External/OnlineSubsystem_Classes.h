#pragma once 
#include <OnlineSubsystem_Structs.h>
 
 
 
class UNamedInterfaces
{
public:
	UNamedInterfaces(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FNamedInterface> GetNamedInterfaces() {
		return memory.read<struct TArray<struct FNamedInterface>>(m_addr + 40);
	}
	struct TArray<struct FNamedInterfaceDef> GetNamedInterfaceDefs() {
		return memory.read<struct TArray<struct FNamedInterfaceDef>>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTurnBasedMatchInterface
{
public:
	UTurnBasedMatchInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


