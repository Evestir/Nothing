#pragma once 
#include <PawnDummyDirRoot_Structs.h>
 
 
 
class APawnDummyDirRoot_C
{
public:
	APawnDummyDirRoot_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UArrowComponent GetArrow() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UArrowComponent(ptr_addr);
	}
	struct USceneComponent GetDefaultSceneRoot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct USceneComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


