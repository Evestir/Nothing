#pragma once 
#include <BP_AnimInst_Default_Structs.h>
 
 
 
class UBP_AnimInst_Default_C
{
public:
	UBP_AnimInst_Default_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 2976);
	}
	struct FAnimNode_Root GetAnimGraphNode_Root_2() {
		return memory.read<struct FAnimNode_Root>(m_addr + 2984);
	}
	struct FAnimNode_LinkedInputPose GetAnimGraphNode_LinkedInputPose() {
		return memory.read<struct FAnimNode_LinkedInputPose>(m_addr + 3032);
	}
	struct FAnimNode_SequencePlayer GetAnimGraphNode_SequencePlayer_5() {
		return memory.read<struct FAnimNode_SequencePlayer>(m_addr + 3312);
	}
	struct FAnimNode_BlendListByBool GetAnimGraphNode_BlendListByBool_2() {
		return memory.read<struct FAnimNode_BlendListByBool>(m_addr + 3440);
	}
	struct FAnimNode_Root GetAnimGraphNode_Root() {
		return memory.read<struct FAnimNode_Root>(m_addr + 3600);
	}
	struct FAnimNode_TransitionResult GetAnimGraphNode_TransitionResult_6() {
		return memory.read<struct FAnimNode_TransitionResult>(m_addr + 3648);
	}
	struct FAnimNode_TransitionResult GetAnimGraphNode_TransitionResult_5() {
		return memory.read<struct FAnimNode_TransitionResult>(m_addr + 3688);
	}
	struct FAnimNode_TransitionResult GetAnimGraphNode_TransitionResult_4() {
		return memory.read<struct FAnimNode_TransitionResult>(m_addr + 3728);
	}
	struct FAnimNode_TransitionResult GetAnimGraphNode_TransitionResult_3() {
		return memory.read<struct FAnimNode_TransitionResult>(m_addr + 3768);
	}
	struct FAnimNode_TransitionResult GetAnimGraphNode_TransitionResult_2() {
		return memory.read<struct FAnimNode_TransitionResult>(m_addr + 3808);
	}
	struct FAnimNode_TransitionResult GetAnimGraphNode_TransitionResult() {
		return memory.read<struct FAnimNode_TransitionResult>(m_addr + 3848);
	}
	struct FAnimNode_RefPose GetAnimGraphNode_LocalRefPose() {
		return memory.read<struct FAnimNode_RefPose>(m_addr + 3888);
	}
	struct FAnimNode_StateResult GetAnimGraphNode_StateResult_4() {
		return memory.read<struct FAnimNode_StateResult>(m_addr + 3912);
	}
	struct FAnimNode_SequencePlayer GetAnimGraphNode_SequencePlayer_4() {
		return memory.read<struct FAnimNode_SequencePlayer>(m_addr + 3960);
	}
	struct FAnimNode_BlendListByBool GetAnimGraphNode_BlendListByBool() {
		return memory.read<struct FAnimNode_BlendListByBool>(m_addr + 4088);
	}
	struct FAnimNode_SequencePlayer GetAnimGraphNode_SequencePlayer_3() {
		return memory.read<struct FAnimNode_SequencePlayer>(m_addr + 4248);
	}
	struct FAnimNode_StateResult GetAnimGraphNode_StateResult_3() {
		return memory.read<struct FAnimNode_StateResult>(m_addr + 4376);
	}
	struct FAnimNode_SequencePlayer GetAnimGraphNode_SequencePlayer_2() {
		return memory.read<struct FAnimNode_SequencePlayer>(m_addr + 4424);
	}
	struct FAnimNode_StateResult GetAnimGraphNode_StateResult_2() {
		return memory.read<struct FAnimNode_StateResult>(m_addr + 4552);
	}
	struct FAnimNode_SequencePlayer GetAnimGraphNode_SequencePlayer() {
		return memory.read<struct FAnimNode_SequencePlayer>(m_addr + 4600);
	}
	struct FAnimNode_StateResult GetAnimGraphNode_StateResult() {
		return memory.read<struct FAnimNode_StateResult>(m_addr + 4728);
	}
	struct FAnimNode_StateMachine GetAnimGraphNode_StateMachine() {
		return memory.read<struct FAnimNode_StateMachine>(m_addr + 4776);
	}
	struct FAnimNode_Slot GetAnimGraphNode_Slot() {
		return memory.read<struct FAnimNode_Slot>(m_addr + 4952);
	}
	struct FAnimNode_KartHandler GetAnimGraphNode_KartControl() {
		return memory.read<struct FAnimNode_KartHandler>(m_addr + 5024);
	}
	struct FAnimNode_ConvertComponentToLocalSpace GetAnimGraphNode_ComponentToLocalSpace() {
		return memory.read<struct FAnimNode_ConvertComponentToLocalSpace>(m_addr + 5248);
	}
	struct FAnimNode_MeshSpaceRefPose GetAnimGraphNode_MeshRefPose() {
		return memory.read<struct FAnimNode_MeshSpaceRefPose>(m_addr + 5280);
	}
	struct FAnimNode_LayeredBoneBlend GetAnimGraphNode_LayeredBoneBlend() {
		return memory.read<struct FAnimNode_LayeredBoneBlend>(m_addr + 5296);
	}
	struct FAnimNode_LinkedAnimLayer GetAnimGraphNode_LinkedAnimLayer() {
		return memory.read<struct FAnimNode_LinkedAnimLayer>(m_addr + 5488);
	}
	float GetSpeed() {
		return memory.read<float>(m_addr + 5664);
	}
	struct UAnimSequenceBase GetIdle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 5672);
		return struct UAnimSequenceBase(ptr_addr);
	}
	float Get__CustomProperty_speed_3433CEC5415C591D1EF6C79AE334A65A() {
		return memory.read<float>(m_addr + 5680);
	}
	struct UAnimSequenceBase Get__CustomProperty_Idle_3433CEC5415C591D1EF6C79AE334A65A() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 5688);
		return struct UAnimSequenceBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


