#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_BP_LobbyMain_Challenge_TrophyStart
{
public:
	FExecuteUbergraph_BP_LobbyMain_Challenge_TrophyStart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UBP_KdSoundWidget_C GetK2Node_CustomEvent_BP_KdSoundWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}
	struct UBP_KdSoundWidget_C GetK2Node_CustomEvent_BP_KdSoundWidget_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}
	struct UBP_KdSoundWidget_C GetK2Node_CustomEvent_BP_KdSoundWidget_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}
	struct UBP_KdSoundWidget_C GetK2Node_CustomEvent_BP_KdSoundWidget_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSequenceEvent__ENTRYPOINTBP_LobbyMain_Challenge_TrophyStart_2
{
public:
	FSequenceEvent__ENTRYPOINTBP_LobbyMain_Challenge_TrophyStart_2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_KdSoundWidget_C GetBP_KdSoundWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_KdSoundWidget_Event_4
{
public:
	FBP_KdSoundWidget_Event_4(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_KdSoundWidget_C GetBP_KdSoundWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_KdSoundWidget_Event_3
{
public:
	FBP_KdSoundWidget_Event_3(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_KdSoundWidget_C GetBP_KdSoundWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBP_KdSoundWidget_C(ptr_addr);
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
};class FSequenceEvent__ENTRYPOINTBP_LobbyMain_Challenge_TrophyStart_1
{
public:
	FSequenceEvent__ENTRYPOINTBP_LobbyMain_Challenge_TrophyStart_1(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_KdSoundWidget_C GetBP_KdSoundWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSequenceEvent__ENTRYPOINTBP_LobbyMain_Challenge_TrophyStart_3
{
public:
	FSequenceEvent__ENTRYPOINTBP_LobbyMain_Challenge_TrophyStart_3(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_KdSoundWidget_C GetBP_KdSoundWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSequenceEvent__ENTRYPOINTBP_LobbyMain_Challenge_TrophyStart_4
{
public:
	FSequenceEvent__ENTRYPOINTBP_LobbyMain_Challenge_TrophyStart_4(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_KdSoundWidget_C GetBP_KdSoundWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};