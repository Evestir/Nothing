#pragma once 
#include <ProceduralMeshComponent_Structs.h>
 
 
 
class UProceduralMeshComponent
{
public:
	UProceduralMeshComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUseComplexAsSimpleCollision() {
		return memory.read<bool>(m_addr + 1200);
	}
	bool GetbUseAsyncCooking() {
		return memory.read<bool>(m_addr + 1201);
	}
	struct UBodySetup GetProcMeshBodySetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1208);
		return struct UBodySetup(ptr_addr);
	}
	struct TArray<struct FProcMeshSection> GetProcMeshSections() {
		return memory.read<struct TArray<struct FProcMeshSection>>(m_addr + 1216);
	}
	struct TArray<struct FKConvexElem> GetCollisionConvexElems() {
		return memory.read<struct TArray<struct FKConvexElem>>(m_addr + 1232);
	}
	struct FBoxSphereBounds GetLocalBounds() {
		return memory.read<struct FBoxSphereBounds>(m_addr + 1248);
	}
	struct TArray<struct UBodySetup> GetAsyncBodySetupQueue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1280);
		return struct TArray<struct UBodySetup>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UKismetProceduralMeshLibrary
{
public:
	UKismetProceduralMeshLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


