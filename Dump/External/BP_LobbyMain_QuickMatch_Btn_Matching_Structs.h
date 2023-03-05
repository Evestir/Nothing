#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_BP_LobbyMain_QuickMatch_Btn_Matching
{
public:
	FExecuteUbergraph_BP_LobbyMain_QuickMatch_Btn_Matching(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UBP_KdSoundWidget_C GetK2Node_CustomEvent_BP_KdSoundWidget_78() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}
	struct UBP_KdSoundWidget_C GetK2Node_CustomEvent_BP_KdSoundWidget_77_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_KdSoundWidget_77_Event_2
{
public:
	FBP_KdSoundWidget_77_Event_2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_KdSoundWidget_C GetBP_KdSoundWidget_78() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_KdSoundWidget_77_Event_1
{
public:
	FBP_KdSoundWidget_77_Event_1(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_KdSoundWidget_C GetBP_KdSoundWidget_78() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSequenceEvent__ENTRYPOINTBP_LobbyMain_QuickMatch_Btn_Matching_1
{
public:
	FSequenceEvent__ENTRYPOINTBP_LobbyMain_QuickMatch_Btn_Matching_1(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_KdSoundWidget_C GetBP_KdSoundWidget_78() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSequenceEvent__ENTRYPOINTBP_LobbyMain_QuickMatch_Btn_Matching_2
{
public:
	FSequenceEvent__ENTRYPOINTBP_LobbyMain_QuickMatch_Btn_Matching_2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_KdSoundWidget_C GetBP_KdSoundWidget_78() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};