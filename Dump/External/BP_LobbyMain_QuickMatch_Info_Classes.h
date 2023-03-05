#pragma once 
#include <BP_LobbyMain_QuickMatch_Info_Structs.h>
 
 
 
class UBP_LobbyMain_QuickMatch_Info_C
{
public:
	UBP_LobbyMain_QuickMatch_Info_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_55() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_702() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_Mat() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_Mat_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_Mat_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_Mat_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UImage(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_7() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_8() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_9() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_10() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 752);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_11() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_12() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_13() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_14() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_161() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UKdTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


