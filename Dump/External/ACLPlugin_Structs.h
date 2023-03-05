#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FGetVisualFidelity
{
public:
	FGetVisualFidelity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAnimationCompressionLibraryDatabase GetDatabaseAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAnimationCompressionLibraryDatabase(ptr_addr);
	}
	enum class ACLVisualFidelity GetReturnValue() {
		return memory.read<enum class ACLVisualFidelity>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVisualFidelity
{
public:
	FSetVisualFidelity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FLatentActionInfo GetLatentInfo() {
		return memory.read<struct FLatentActionInfo>(m_addr + 8);
	}
	struct UAnimationCompressionLibraryDatabase GetDatabaseAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UAnimationCompressionLibraryDatabase(ptr_addr);
	}
	enum class ACLVisualFidelityChangeResult GetResult() {
		return memory.read<enum class ACLVisualFidelityChangeResult>(m_addr + 40);
	}
	enum class ACLVisualFidelity GetVisualFidelity() {
		return memory.read<enum class ACLVisualFidelity>(m_addr + 41);
	}

private:
	std::uint64_t m_addr = 0;
};