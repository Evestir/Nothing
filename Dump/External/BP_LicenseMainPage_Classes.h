#pragma once 
#include <BP_LicenseMainPage_Structs.h>
 
 
 
class UBP_LicenseMainPage_C
{
public:
	UBP_LicenseMainPage_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UWidgetAnimation GetOnEnter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UImage GetImage_81() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_715() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_8() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_220() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_PageKeySlotTemplate_new_C GetV_BP_PageKeySlotTemplate_new() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UBP_PageKeySlotTemplate_new_C(ptr_addr);
	}
	struct UKdTextBlock GetV_CurrentStarCount() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_Description() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_KeyIcon_EnterLicense() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_KeyIcon_ShowReward() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_LicenseMain_CardList_C GetV_LicenseCardList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UBP_LicenseMain_CardList_C(ptr_addr);
	}
	struct UKdTextBlock GetV_MaximumStarCount() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct UKdTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


