#pragma once 
#include <BP_PageKeySlotTemplate_new_Structs.h>
 
 
 
class UBP_PageKeySlotTemplate_new_C
{
public:
	UBP_PageKeySlotTemplate_new_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetAnim_Hide() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_Show() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UNamedSlot GetLeft_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetLeft_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetLeft_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetLeft_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetLeft_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetLeft_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetLeft_7() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetLeft_8() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetRight_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetRight_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetRight_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetRight_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetRight_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetRight_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UNamedSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


