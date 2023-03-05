#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FClothConstraintSetupNv
{
public:
	FClothConstraintSetupNv(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStiffness() {
		return memory.read<float>(m_addr + 0);
	}
	float GetStiffnessMultiplier() {
		return memory.read<float>(m_addr + 4);
	}
	float GetStretchLimit() {
		return memory.read<float>(m_addr + 8);
	}
	float GetCompressionLimit() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAnimDriveDamperStiffness
{
public:
	FSetAnimDriveDamperStiffness(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInStiffness() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};