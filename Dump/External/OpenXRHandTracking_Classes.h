#pragma once 
#include <OpenXRHandTracking_Structs.h>
 
 
 
class ULiveLinkOpenXRHandTrackingSourceFactory
{
public:
	ULiveLinkOpenXRHandTrackingSourceFactory(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UOpenXRHandTrackingLiveLinkRemapAsset
{
public:
	UOpenXRHandTrackingLiveLinkRemapAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbHasMetacarpals() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetbRetargetRotationOnly() {
		return memory.read<bool>(m_addr + 41);
	}
	enum class EQuatSwizzleAxisB GetSwizzleX() {
		return memory.read<enum class EQuatSwizzleAxisB>(m_addr + 42);
	}
	enum class EQuatSwizzleAxisB GetSwizzleY() {
		return memory.read<enum class EQuatSwizzleAxisB>(m_addr + 43);
	}
	enum class EQuatSwizzleAxisB GetSwizzleZ() {
		return memory.read<enum class EQuatSwizzleAxisB>(m_addr + 44);
	}
	enum class EQuatSwizzleAxisB GetSwizzleW() {
		return memory.read<enum class EQuatSwizzleAxisB>(m_addr + 45);
	}
	struct TMap<struct FName, struct FName> GetHandTrackingBoneNameMap() {
		return memory.read<struct TMap<struct FName, struct FName>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


