#pragma once 
#include <NiagaraCore_Structs.h>
 
 
 
class UNiagaraMergeable
{
public:
	UNiagaraMergeable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceBase
{
public:
	UNiagaraDataInterfaceBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


