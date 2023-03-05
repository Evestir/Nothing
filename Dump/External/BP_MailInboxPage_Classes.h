#pragma once 
#include <BP_MailInboxPage_Structs.h>
 
 
 
class UBP_MailInboxPage_C
{
public:
	UBP_MailInboxPage_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UInvalidationBox GetInvalidationBox_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UInvalidationBox(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


