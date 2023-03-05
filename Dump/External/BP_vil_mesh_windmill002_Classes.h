#pragma once 
#include <BP_vil_mesh_windmill002_Structs.h>
 
 
 
class ABP_Vil_mesh_windmill002_C
{
public:
	ABP_Vil_mesh_windmill002_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 544);
	}
	struct URotatingMovementComponent GetRotatingMovement() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct URotatingMovementComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetStaticMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UStaticMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


