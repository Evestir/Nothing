#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FTakeGameplayAutomationScreenshot
{
public:
	FTakeGameplayAutomationScreenshot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetScreenshotName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	float GetMaxGlobalError() {
		return memory.read<float>(m_addr + 16);
	}
	float GetMaxLocalError() {
		return memory.read<float>(m_addr + 20);
	}
	struct FString GetMapNameOverride() {
		return memory.read<struct FString>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};