#pragma once 
#include <BP_InfoMainTab_Structs.h>
 
 
 
class UBP_InfoMainTab_C
{
public:
	UBP_InfoMainTab_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UInvalidationBox GetInvalidationBox_26() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UBP_UnderlineTabButton_new_Main_C GetV_Info_MainTab_Grandprix() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UBP_UnderlineTabButton_new_Main_C(ptr_addr);
	}
	struct UBP_UnderlineTabButton_new_Main_C GetV_Info_MainTab_main() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UBP_UnderlineTabButton_new_Main_C(ptr_addr);
	}
	struct UBP_UnderlineTabButton_new_Main_C GetV_Info_MainTab_record() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UBP_UnderlineTabButton_new_Main_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


