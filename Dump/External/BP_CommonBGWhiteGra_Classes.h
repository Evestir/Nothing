#pragma once 
#include <BP_CommonBGWhiteGra_Structs.h>
 
 
 
class UBP_CommonBGWhiteGra_C
{
public:
	UBP_CommonBGWhiteGra_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UImage Getimg_bottom1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UImage(ptr_addr);
	}
	struct UImage Getimg_right1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	bool GetUseBottom1() {
		return memory.read<bool>(m_addr + 632);
	}
	bool GetUseRight1() {
		return memory.read<bool>(m_addr + 633);
	}

private:
	std::uint64_t m_addr = 0;
};


