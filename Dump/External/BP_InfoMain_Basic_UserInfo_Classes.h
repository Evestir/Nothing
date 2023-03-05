#pragma once 
#include <BP_InfoMain_Basic_UserInfo_Structs.h>
 
 
 
class UBP_InfoMain_Basic_UserInfo_C
{
public:
	UBP_InfoMain_Basic_UserInfo_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage Getimg_Line() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UImage(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_21() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UImage GetUserLevelFull() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct UBP_PlatformIcon_C GetV_BP_PlatformIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UBP_PlatformIcon_C(ptr_addr);
	}
	struct UWidgetSwitcher GetV_LevelGaugeSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UWidgetSwitcher GetV_LicenseSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UBP_UserEmblem_C GetV_UserEmblem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UBP_UserEmblem_C(ptr_addr);
	}
	struct UProgressBar GetV_UserLevelProgressBar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UProgressBar(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


