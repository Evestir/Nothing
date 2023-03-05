#pragma once 
#include <BP_MailInboxRow_Structs.h>
 
 
 
class UBP_MailInboxRow_C
{
public:
	UBP_MailInboxRow_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1000);
	}
	struct UImage GetImage_728() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UImage(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UBP_ItemCommonIcon_C GetV_BP_ItemCommonIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct UBP_ItemCommonIcon_C(ptr_addr);
	}
	struct UBP_ItemNewAlert_C GetV_Notification() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UBP_ItemNewAlert_C(ptr_addr);
	}
	struct UWidgetSwitcher GetV_SystemSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UWidgetSwitcher GetV_WidgetSwitcher_RemainTime() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct UWidgetSwitcher(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


