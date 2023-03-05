#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_BP_CommonBGWhiteGra
{
public:
	FExecuteUbergraph_BP_CommonBGWhiteGra(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool Get___bool_Variable() {
		return memory.read<bool>(m_addr + 4);
	}
	enum class ESlateVisibility Get___byte_Variable() {
		return memory.read<enum class ESlateVisibility>(m_addr + 5);
	}
	enum class ESlateVisibility Get___byte_Variable_2() {
		return memory.read<enum class ESlateVisibility>(m_addr + 6);
	}
	bool Get___bool_Variable_2() {
		return memory.read<bool>(m_addr + 7);
	}
	enum class ESlateVisibility Get___byte_Variable_3() {
		return memory.read<enum class ESlateVisibility>(m_addr + 8);
	}
	enum class ESlateVisibility Get___byte_Variable_4() {
		return memory.read<enum class ESlateVisibility>(m_addr + 9);
	}
	bool GetK2Node_Event_IsDesignTime() {
		return memory.read<bool>(m_addr + 10);
	}
	enum class ESlateVisibility GetK2Node_Select_Default() {
		return memory.read<enum class ESlateVisibility>(m_addr + 11);
	}
	enum class ESlateVisibility GetK2Node_Select_Default_2() {
		return memory.read<enum class ESlateVisibility>(m_addr + 12);
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