#pragma once 
#include <BP_MailMain_Structs.h>
 
 
 
class UBP_MailMain_C
{
public:
	UBP_MailMain_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 800);
	}
	struct UWidgetAnimation GetGuideClose() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetGuideOpen() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetOnEnter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UBP_MailMainBtn_PartyFriends_Keyicon_C GetBP_MailMainBtn_PartyFriends_Keyicon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct UBP_MailMainBtn_PartyFriends_Keyicon_C(ptr_addr);
	}
	struct UBP_PageKeySlotTemplate_new_C GetBP_PageKeySlotTemplate_new() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 840);
		return struct UBP_PageKeySlotTemplate_new_C(ptr_addr);
	}
	struct UImage GetCircularThrobber_Loading() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 848);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_126() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 856);
		return struct UImage(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 864);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 872);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 880);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 888);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 896);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_10() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 904);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_Price_C GetV_BP_Cash() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 912);
		return struct UBP_Price_C(ptr_addr);
	}
	struct UBP_Price_C GetV_BP_KCOIN() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 920);
		return struct UBP_Price_C(ptr_addr);
	}
	struct UBP_Price_C GetV_BP_Lucci() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 928);
		return struct UBP_Price_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_ChattingButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 936);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_KeyIcon_DeleteMailButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 944);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_CommonButtonKeyIcon_Cyan_C GetV_KeyIcon_ReceiveAllMailButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 952);
		return struct UBP_CommonButtonKeyIcon_Cyan_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


