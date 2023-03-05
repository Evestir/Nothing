#pragma once 
#include <BP_Vil_mesh_hotairballoon001_Structs.h>
 
 
 
class ABP_Vil_mesh_hotairballoon001_C
{
public:
	ABP_Vil_mesh_hotairballoon001_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 544);
	}
	struct UStaticMeshComponent GetVil_mesh_hotairballoon001() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct FVector Get_____1______0_89AB1B5C4BBDCA790AF285B60113F68C() {
		return memory.read<struct FVector>(m_addr + 560);
	}
	enum class ETimelineDirection Get_____1__Direction_89AB1B5C4BBDCA790AF285B60113F68C() {
		return memory.read<enum class ETimelineDirection>(m_addr + 572);
	}
	struct UTimelineComponent Get_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct UTimelineComponent(ptr_addr);
	}
	struct FVector GetInitla() {
		return memory.read<struct FVector>(m_addr + 584);
	}
	struct FRotator GetInitial() {
		return memory.read<struct FRotator>(m_addr + 596);
	}
	float GetRotateSpeed() {
		return memory.read<float>(m_addr + 608);
	}

private:
	std::uint64_t m_addr = 0;
};


