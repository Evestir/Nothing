#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_BP_RacingPassMain_PremiumSymbolBGAnim
{
public:
	FExecuteUbergraph_BP_RacingPassMain_PremiumSymbolBGAnim(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UUMGSequencePlayer GetCallFunc_PlayAnimation_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UUMGSequencePlayer(ptr_addr);
	}
	bool GetK2Node_Event_IsDesignTime() {
		return memory.read<bool>(m_addr + 16);
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