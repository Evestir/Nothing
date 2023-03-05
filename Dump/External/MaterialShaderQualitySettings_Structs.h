#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FMaterialQualityOverrides
{
public:
	FMaterialQualityOverrides(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbDiscardQualityDuringCook() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbEnableOverride() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetbForceFullyRough() {
		return memory.read<bool>(m_addr + 2);
	}
	bool GetbForceNonMetal() {
		return memory.read<bool>(m_addr + 3);
	}
	bool GetbForceDisableLMDirectionality() {
		return memory.read<bool>(m_addr + 4);
	}
	bool GetbForceLQReflections() {
		return memory.read<bool>(m_addr + 5);
	}
	bool GetbForceDisablePreintegratedGF() {
		return memory.read<bool>(m_addr + 6);
	}
	bool GetbDisableMaterialNormalCalculation() {
		return memory.read<bool>(m_addr + 7);
	}
	enum class EMobileShadowQuality GetMobileShadowQuality() {
		return memory.read<enum class EMobileShadowQuality>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};