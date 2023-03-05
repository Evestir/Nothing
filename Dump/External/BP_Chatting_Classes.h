#pragma once 
#include <BP_Chatting_Structs.h>
 
 
 
class UBP_Chatting_C
{
public:
	UBP_Chatting_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetAnim_Close() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_Open() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UImage Getimg_bg() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct UWidgetSwitcher GetV_ChatSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UListView GetV_ListView_Party() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UListView(ptr_addr);
	}
	struct UListView GetV_ListView_Team() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UListView(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


