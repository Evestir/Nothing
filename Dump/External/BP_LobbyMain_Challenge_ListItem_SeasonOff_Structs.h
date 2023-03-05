#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_BP_LobbyMain_Challenge_ListItem_SeasonOff
{
public:
	FExecuteUbergraph_BP_LobbyMain_Challenge_ListItem_SeasonOff(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FBP_OnItemExpansionChanged
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
};class FPlayCompleteCover
{
public:
	FPlayCompleteCover(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUMGSequencePlayer GetCallFunc_PlayAnimation_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUMGSequencePlayer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};