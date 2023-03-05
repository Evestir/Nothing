#pragma once 
#include <BP_MailSentmailboxRow_Structs.h>
 
 
 
class UBP_MailSentmailboxRow_C
{
public:
	UBP_MailSentmailboxRow_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1000);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_728() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


