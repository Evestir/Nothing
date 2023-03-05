#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FBoneBlendAnim
{
public:
	FBoneBlendAnim(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseLink GetInPose() {
		return memory.read<struct FPoseLink>(m_addr + 0);
	}
	struct UAnimSequenceBase GetIdle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UAnimSequenceBase(ptr_addr);
	}
	float GetSpeed() {
		return memory.read<float>(m_addr + 24);
	}
	struct FPoseLink GetBoneBlendAnim() {
		return memory.read<struct FPoseLink>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FExecuteUbergraph_BP_AnimInst_Default
{
public:
	FExecuteUbergraph_BP_AnimInst_Default(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimGraph
{
public:
	FAnimGraph(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseLink GetAnimGraph() {
		return memory.read<struct FPoseLink>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};