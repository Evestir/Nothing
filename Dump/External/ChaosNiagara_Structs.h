#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FChaosDestructionEvent
{
public:
	FChaosDestructionEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetNormal() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FVector GetVelocity() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct FVector GetAngularVelocity() {
		return memory.read<struct FVector>(m_addr + 36);
	}
	float GetExtentMin() {
		return memory.read<float>(m_addr + 48);
	}
	float GetExtentMax() {
		return memory.read<float>(m_addr + 52);
	}
	int32_t GetParticleID() {
		return memory.read<int32_t>(m_addr + 56);
	}
	float GetTime() {
		return memory.read<float>(m_addr + 60);
	}
	int32_t GetType() {
		return memory.read<int32_t>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};