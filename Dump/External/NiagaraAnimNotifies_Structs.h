#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FGetSpawnedEffect
{
public:
	FGetSpawnedEffect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMeshComponent GetMeshComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMeshComponent(ptr_addr);
	}
	struct UFXSystemComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UFXSystemComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNotifyProgress
{
public:
	FGetNotifyProgress(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMeshComponent GetMeshComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMeshComponent(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};