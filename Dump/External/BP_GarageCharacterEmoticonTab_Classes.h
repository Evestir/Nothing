#pragma once 
#include <BP_GarageCharacterEmoticonTab_Structs.h>
 
 
 
class UBP_GarageCharacterEmoticonTab_C
{
public:
	UBP_GarageCharacterEmoticonTab_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_UnderlineTabBtn_Emoticon_Temp_C GetBP_UnderlineTabBtn_Emoticon_Temp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UBP_UnderlineTabBtn_Emoticon_Temp_C(ptr_addr);
	}
	struct UBP_UnderlineTabBtn_Emoticon_Temp_C GetBP_UnderlineTabBtn_Emoticon_Temp_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UBP_UnderlineTabBtn_Emoticon_Temp_C(ptr_addr);
	}
	struct UBP_UnderlineTabBtn_Emoticon_Temp_C GetBP_UnderlineTabBtn_Emoticon_Temp_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UBP_UnderlineTabBtn_Emoticon_Temp_C(ptr_addr);
	}
	struct UBP_UnderlineTabBtn_Emoticon_Temp_C GetBP_UnderlineTabBtn_Emoticon_Temp_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UBP_UnderlineTabBtn_Emoticon_Temp_C(ptr_addr);
	}
	struct UBP_UnderlineTabBtn_Emoticon_Temp_C GetBP_UnderlineTabBtn_Emoticon_Temp_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UBP_UnderlineTabBtn_Emoticon_Temp_C(ptr_addr);
	}
	struct UBP_UnderlineTabBtn_Emoticon_Temp_C GetBP_UnderlineTabBtn_Emoticon_Temp_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct UBP_UnderlineTabBtn_Emoticon_Temp_C(ptr_addr);
	}
	struct UBP_UnderlineTabBtn_Emoticon_Temp_C GetBP_UnderlineTabBtn_Emoticon_Temp_7() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UBP_UnderlineTabBtn_Emoticon_Temp_C(ptr_addr);
	}
	struct UBP_UnderlineTabBtn_Emoticon_Temp_C GetBP_UnderlineTabBtn_Emoticon_Temp_8() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UBP_UnderlineTabBtn_Emoticon_Temp_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


