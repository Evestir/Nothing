#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FBP_OnItemExpansionChanged
{
public:
	FBP_OnItemExpansionChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsExpanded() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_OnItemSelectionChanged
{
public:
	FBP_OnItemSelectionChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsSelected() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnListItemObjectSet
{
public:
	FOnListItemObjectSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetListItemObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FExecuteUbergraph_BP_RacingPassItem
{
public:
	FExecuteUbergraph_BP_RacingPassItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetK2Node_Event_bIsExpanded() {
		return memory.read<bool>(m_addr + 4);
	}
	bool GetK2Node_Event_bIsSelected() {
		return memory.read<bool>(m_addr + 5);
	}
	struct UObject GetK2Node_Event_ListItemObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}
	struct UBP_KdSoundWidget_C GetK2Node_CustomEvent_BP_KdSoundWidget_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}
	struct UBP_KdSoundWidget_C GetK2Node_CustomEvent_BP_KdSoundWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}
	bool GetK2Node_Event_IsDesignTime() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FPreConstruct
{
public:
	FPreConstruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsDesignTime() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_KdSoundWidget_Event_2
{
public:
	FBP_KdSoundWidget_Event_2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_KdSoundWidget_C GetBP_KdSoundWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_KdSoundWidget_Event_1
{
public:
	FBP_KdSoundWidget_Event_1(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_KdSoundWidget_C GetBP_KdSoundWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSequenceEvent__ENTRYPOINTBP_RacingPassItem_1
{
public:
	FSequenceEvent__ENTRYPOINTBP_RacingPassItem_1(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_KdSoundWidget_C GetBP_KdSoundWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSequenceEvent__ENTRYPOINTBP_RacingPassItem_2
{
public:
	FSequenceEvent__ENTRYPOINTBP_RacingPassItem_2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_KdSoundWidget_C GetBP_KdSoundWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};