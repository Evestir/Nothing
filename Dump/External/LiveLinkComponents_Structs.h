#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FLiveLinkTickDelegate__DelegateSignature
{
public:
	FLiveLinkTickDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDeltaTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkTransformControllerData
{
public:
	FLiveLinkTransformControllerData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbWorldTransform() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbUseLocation() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetbUseRotation() {
		return memory.read<bool>(m_addr + 2);
	}
	bool GetbUseScale() {
		return memory.read<bool>(m_addr + 3);
	}
	bool GetbSweep() {
		return memory.read<bool>(m_addr + 4);
	}
	bool GetbTeleport() {
		return memory.read<bool>(m_addr + 5);
	}

private:
	std::uint64_t m_addr = 0;
};