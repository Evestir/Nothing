#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_BP_CommonButtonKeyIcon_Cyan
{
public:
	FExecuteUbergraph_BP_CommonButtonKeyIcon_Cyan(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetCallFunc_BreakVector2D_X() {
		return memory.read<float>(m_addr + 4);
	}
	float GetCallFunc_BreakVector2D_Y() {
		return memory.read<float>(m_addr + 8);
	}
	bool GetK2Node_Event_IsDesignTime() {
		return memory.read<bool>(m_addr + 12);
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
};