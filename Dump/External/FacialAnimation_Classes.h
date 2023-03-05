#pragma once 
#include <FacialAnimation_Structs.h>
 
 
 
class UAudioCurveSourceComponent
{
public:
	UAudioCurveSourceComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetCurveSourceBindingName() {
		return memory.read<struct FName>(m_addr + 2168);
	}
	float GetCurveSyncOffset() {
		return memory.read<float>(m_addr + 2176);
	}

private:
	std::uint64_t m_addr = 0;
};


