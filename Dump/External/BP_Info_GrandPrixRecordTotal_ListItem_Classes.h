#pragma once 
#include <BP_Info_GrandPrixRecordTotal_ListItem_Structs.h>
 
 
 
class UBP_Info_GrandPrixRecordTotal_ListItem_C
{
public:
	UBP_Info_GrandPrixRecordTotal_ListItem_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1000);
	}
	struct UImage GetImage_256() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UImage(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_20() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UKdTextBlock GetV_ResultText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_TitleText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UKdTextBlock(ptr_addr);
	}
	struct FText GetTotal_Title_Inst() {
		return memory.read<struct FText>(m_addr + 1040);
	}
	struct FText GetTotal_Result_Inst() {
		return memory.read<struct FText>(m_addr + 1064);
	}

private:
	std::uint64_t m_addr = 0;
};


