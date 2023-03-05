#pragma once 
#include <BP_MailboxTabButton_Structs.h>
 
 
 
class UBP_MailboxTabButton_C
{
public:
	UBP_MailboxTabButton_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetUnHover() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1000);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetHover() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UNamedSlot GetButtonNameSlot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct UNamedSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


