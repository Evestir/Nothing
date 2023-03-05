#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FOverlayItem
{
public:
	FOverlayItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTimespan GetStartTime() {
		return memory.read<struct FTimespan>(m_addr + 0);
	}
	struct FTimespan GetEndTime() {
		return memory.read<struct FTimespan>(m_addr + 8);
	}
	struct FString GetText() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FVector2D Getposition() {
		return memory.read<struct FVector2D>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};