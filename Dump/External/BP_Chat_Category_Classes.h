#pragma once 
#include <BP_Chat_Category_Structs.h>
 
 
 
class UBP_Chat_Category_C
{
public:
	UBP_Chat_Category_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UWidgetSwitcher GetV_CategorySwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UImage GetV_img_bg() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct UImage GetV_img_bg_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}
	struct UKdTextBlock GetV_txtCatogory() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_txtCatogory_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_userName_Party() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_userName_Team() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UKdTextBlock(ptr_addr);
	}
	struct FLinearColor GetInst_CategoryColor() {
		return memory.read<struct FLinearColor>(m_addr + 672);
	}
	struct FText GetInst_CategoryName() {
		return memory.read<struct FText>(m_addr + 688);
	}

private:
	std::uint64_t m_addr = 0;
};


