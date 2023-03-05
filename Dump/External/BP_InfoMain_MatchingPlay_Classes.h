#pragma once 
#include <BP_InfoMain_MatchingPlay_Structs.h>
 
 
 
class UBP_InfoMain_MatchingPlay_C
{
public:
	UBP_InfoMain_MatchingPlay_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_67() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UImage(ptr_addr);
	}
	struct UImage Getimg_Line() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_19() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_215() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_715() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_ItemPlayNum() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_SpeedPlayNum() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UKdTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


