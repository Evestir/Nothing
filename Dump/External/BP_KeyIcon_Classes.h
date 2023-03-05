#pragma once 
#include <BP_KeyIcon_Structs.h>
 
 
 
class UBP_KeyIcon_C
{
public:
	UBP_KeyIcon_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1280);
	}
	struct UNamedSlot GetH_Slot_Left() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1288);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetH_Slot_Right() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1296);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetOverlay_Slot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1304);
		return struct UNamedSlot(ptr_addr);
	}
	struct UOverlay GetString_PC_KEY() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1312);
		return struct UOverlay(ptr_addr);
	}
	struct UKdButtonImage GetV_KeyDualShock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UKdButtonImage GetV_KeyPC() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UKdButtonImage GetV_KeyXBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UBP_ItemNewAlert_C GetV_Notification() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UBP_ItemNewAlert_C(ptr_addr);
	}
	struct UNamedSlot GetV_Slot_Bottom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetV_Slot_Top() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UNamedSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


