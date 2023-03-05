#pragma once 
#include <FocusAnimSet_Fill_Structs.h>
 
 
 
class UFocusAnimSet_Fill_C
{
public:
	UFocusAnimSet_Fill_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetOn_Uncheck() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetOn_Focus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UImage GetImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


