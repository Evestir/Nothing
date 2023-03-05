#pragma once 
#include <BP_InfoMain_License_List_Structs.h>
 
 
 
class UBP_InfoMain_License_List_C
{
public:
	UBP_InfoMain_License_List_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_InfoMain_License_ListItem_C GetBP_InfoMain_License_ListItem_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1000);
		return struct UBP_InfoMain_License_ListItem_C(ptr_addr);
	}
	struct UBP_InfoMain_License_ListItem_C GetBP_InfoMain_License_ListItem_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UBP_InfoMain_License_ListItem_C(ptr_addr);
	}
	struct UBP_InfoMain_License_ListItem_C GetBP_InfoMain_License_ListItem_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct UBP_InfoMain_License_ListItem_C(ptr_addr);
	}
	struct UBP_InfoMain_License_ListItem_C GetBP_InfoMain_License_ListItem_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct UBP_InfoMain_License_ListItem_C(ptr_addr);
	}
	struct UBP_InfoMain_License_ListItem_C GetBP_InfoMain_License_ListItem_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UBP_InfoMain_License_ListItem_C(ptr_addr);
	}
	struct UBP_InfoMain_License_ListItem_C GetBP_InfoMain_License_ListItem_7() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UBP_InfoMain_License_ListItem_C(ptr_addr);
	}
	struct URetainerBox GetRetainerBox_322() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct URetainerBox(ptr_addr);
	}
	struct UFocusAnimSet_Stroke_C GetV_FocusAnimSet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1056);
		return struct UFocusAnimSet_Stroke_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


