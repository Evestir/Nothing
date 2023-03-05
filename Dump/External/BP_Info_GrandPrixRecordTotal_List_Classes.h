#pragma once 
#include <BP_Info_GrandPrixRecordTotal_List_Structs.h>
 
 
 
class UBP_Info_GrandPrixRecordTotal_List_C
{
public:
	UBP_Info_GrandPrixRecordTotal_List_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UKdTextBlock GetKdTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1000);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_96() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_Info_GrandPrixRecordTotal_ListItem_C GetV_BP_GrandPrixTotalInfo_Game() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct UBP_Info_GrandPrixRecordTotal_ListItem_C(ptr_addr);
	}
	struct UBP_Info_GrandPrixRecordTotal_ListItem_C GetV_BP_GrandPrixTotalInfo_MaxRank() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct UBP_Info_GrandPrixRecordTotal_ListItem_C(ptr_addr);
	}
	struct UBP_Info_GrandPrixRecordTotal_ListItem_C GetV_BP_GrandPrixTotalInfo_MaxTier() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UBP_Info_GrandPrixRecordTotal_ListItem_C(ptr_addr);
	}
	struct UBP_Info_GrandPrixRecordTotal_ListItem_C GetV_BP_GrandPrixTotalInfo_Season() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UBP_Info_GrandPrixRecordTotal_ListItem_C(ptr_addr);
	}
	struct UBP_Info_GrandPrixRecordTotal_ListItem_C GetV_BP_GrandPrixTotalInfo_Win() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct UBP_Info_GrandPrixRecordTotal_ListItem_C(ptr_addr);
	}
	struct UFocusAnimSet_Stroke_C GetV_FocusAnimSet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1056);
		return struct UFocusAnimSet_Stroke_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


