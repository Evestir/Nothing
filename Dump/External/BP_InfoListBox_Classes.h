#pragma once 
#include <BP_InfoListBox_Structs.h>
 
 
 
class UBP_InfoListBox_C
{
public:
	UBP_InfoListBox_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1000);
	}
	struct UWidgetAnimation GetUnFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UFocusAnimSet_Stroke_C GetFocusAnimSet_Stroke() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct UFocusAnimSet_Stroke_C(ptr_addr);
	}
	struct UImage GetImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_59() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_103() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_228() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1056);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_320() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1064);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_393() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1072);
		return struct UImage(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1080);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_107() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1088);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UOverlay GetOV_EventBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1096);
		return struct UOverlay(ptr_addr);
	}
	struct UBP_ItemCommonIcon_C GetV_BP_ItemCommonIcon_Two1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1104);
		return struct UBP_ItemCommonIcon_C(ptr_addr);
	}
	struct UBP_ItemCommonIcon_C GetV_BP_ItemCommonIcon_Two2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1112);
		return struct UBP_ItemCommonIcon_C(ptr_addr);
	}
	struct UVerticalBox GetV_Item2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1120);
		return struct UVerticalBox(ptr_addr);
	}
	struct UKdTextBlock GetV_ItemName_Two1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1128);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_ItemName_Two2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1136);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_ItemNewAlert_C GetV_Notification() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1144);
		return struct UBP_ItemNewAlert_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


