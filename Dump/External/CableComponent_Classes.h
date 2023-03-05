#pragma once 
#include <CableComponent_Structs.h>
 
 
 
class ACableActor
{
public:
	ACableActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCableComponent GetCableComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UCableComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCableComponent
{
public:
	UCableComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbAttachStart() {
		return memory.read<bool>(m_addr + 1192);
	}
	bool GetbAttachEnd() {
		return memory.read<bool>(m_addr + 1193);
	}
	struct FComponentReference GetAttachEndTo() {
		return memory.read<struct FComponentReference>(m_addr + 1200);
	}
	struct FName GetAttachEndToSocketName() {
		return memory.read<struct FName>(m_addr + 1240);
	}
	struct FVector GetEndLocation() {
		return memory.read<struct FVector>(m_addr + 1248);
	}
	float GetCableLength() {
		return memory.read<float>(m_addr + 1260);
	}
	int32_t GetNumSegments() {
		return memory.read<int32_t>(m_addr + 1264);
	}
	float GetSubstepTime() {
		return memory.read<float>(m_addr + 1268);
	}
	int32_t GetSolverIterations() {
		return memory.read<int32_t>(m_addr + 1272);
	}
	bool GetbEnableStiffness() {
		return memory.read<bool>(m_addr + 1276);
	}
	bool GetbUseSubstepping() {
		return memory.read<bool>(m_addr + 1277);
	}
	bool GetbSkipCableUpdateWhenNotVisible() {
		return memory.read<bool>(m_addr + 1278);
	}
	bool GetbSkipCableUpdateWhenNotOwnerRecentlyRendered() {
		return memory.read<bool>(m_addr + 1279);
	}
	bool GetbEnableCollision() {
		return memory.read<bool>(m_addr + 1280);
	}
	float GetCollisionFriction() {
		return memory.read<float>(m_addr + 1284);
	}
	struct FVector GetCableForce() {
		return memory.read<struct FVector>(m_addr + 1288);
	}
	float GetCableGravityScale() {
		return memory.read<float>(m_addr + 1300);
	}
	float GetCableWidth() {
		return memory.read<float>(m_addr + 1304);
	}
	int32_t GetNumSides() {
		return memory.read<int32_t>(m_addr + 1308);
	}
	float GetTileMaterial() {
		return memory.read<float>(m_addr + 1312);
	}

private:
	std::uint64_t m_addr = 0;
};


