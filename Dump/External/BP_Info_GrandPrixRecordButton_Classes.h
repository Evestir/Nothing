#pragma once 
#include <BP_Info_GrandPrixRecordButton_Structs.h>
 
 
 
class UBP_Info_GrandPrixRecordButton_C
{
public:
	UBP_Info_GrandPrixRecordButton_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1000);
	}
	struct UWidgetAnimation GetUnFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_15() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_12() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_209() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UOverlay GetOV_Stroke() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct UOverlay(ptr_addr);
	}
	struct UKdTextBlock GetV_Text_GameMode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1056);
		return struct UKdTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


