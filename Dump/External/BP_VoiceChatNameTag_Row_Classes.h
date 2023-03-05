#pragma once 
#include <BP_VoiceChatNameTag_Row_Structs.h>
 
 
 
class UBP_VoiceChatNameTag_Row_C
{
public:
	UBP_VoiceChatNameTag_Row_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetAnim_Exit() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UImage GetImage_122() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


