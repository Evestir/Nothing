#pragma once 
#include <LiveLinkComponents_Structs.h>
 
 
 
class ULiveLinkComponentController
{
public:
	ULiveLinkComponentController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkSubjectRepresentation GetSubjectRepresentation() {
		return memory.read<struct FLiveLinkSubjectRepresentation>(m_addr + 176);
	}
	struct TMap<ULiveLinkRole, struct ULiveLinkControllerBase*> GetControllerMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct TMap<ULiveLinkRole, struct ULiveLinkControllerBase*>(ptr_addr);
	}
	bool GetbUpdateInEditor() {
		return memory.read<bool>(m_addr + 272);
	}
	struct FMulticastInlineDelegate GetOnLiveLinkUpdated() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 280);
	}
	struct FComponentReference GetComponentToControl() {
		return memory.read<struct FComponentReference>(m_addr + 296);
	}
	bool GetbDisableEvaluateLiveLinkWhenSpawnable() {
		return memory.read<bool>(m_addr + 336);
	}
	bool GetbEvaluateLiveLink() {
		return memory.read<bool>(m_addr + 337);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkComponentSettings
{
public:
	ULiveLinkComponentSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<ULiveLinkRole, ULiveLinkControllerBase*> GetDefaultControllerForRole() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TMap<ULiveLinkRole, ULiveLinkControllerBase*>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkControllerBase
{
public:
	ULiveLinkControllerBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkLightController
{
public:
	ULiveLinkLightController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULiveLinkTransformController
{
public:
	ULiveLinkTransformController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkTransformControllerData GetTransformData() {
		return memory.read<struct FLiveLinkTransformControllerData>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


