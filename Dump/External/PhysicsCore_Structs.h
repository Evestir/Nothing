#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FBodyInstanceCore
{
public:
	FBodyInstanceCore(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbSimulatePhysics() {
		return memory.read<char>(m_addr + 16);
	}
	char GetbOverrideMass() {
		return memory.read<char>(m_addr + 16);
	}
	char GetbEnableGravity() {
		return memory.read<char>(m_addr + 16);
	}
	char GetbAutoWeld() {
		return memory.read<char>(m_addr + 16);
	}
	char GetbStartAwake() {
		return memory.read<char>(m_addr + 16);
	}
	char GetbGenerateWakeEvents() {
		return memory.read<char>(m_addr + 16);
	}
	char GetbUpdateMassWhenScaleChanges() {
		return memory.read<char>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};