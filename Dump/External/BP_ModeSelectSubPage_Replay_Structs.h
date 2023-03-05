#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_BP_ModeSelectSubPage_Replay
{
public:
	FExecuteUbergraph_BP_ModeSelectSubPage_Replay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};