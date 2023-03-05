#pragma once 
#include <AnimBP_Brodi_Structs.h>
 
 
 
class UAnimBP_Brodi_C
{
public:
	UAnimBP_Brodi_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1040);
	}
	struct FAnimNode_Slot GetAnimGraphNode_Slot() {
		return memory.read<struct FAnimNode_Slot>(m_addr + 1048);
	}
	struct FAnimNode_Root GetAnimGraphNode_Root() {
		return memory.read<struct FAnimNode_Root>(m_addr + 1120);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 1168);
	}
	struct FAnimNode_ConvertLocalToComponentSpace GetAnimGraphNode_LocalToComponentSpace() {
		return memory.read<struct FAnimNode_ConvertLocalToComponentSpace>(m_addr + 1432);
	}
	struct FAnimNode_ConvertComponentToLocalSpace GetAnimGraphNode_ComponentToLocalSpace() {
		return memory.read<struct FAnimNode_ConvertComponentToLocalSpace>(m_addr + 1464);
	}
	struct FAnimNode_TransitionResult GetAnimGraphNode_TransitionResult_6() {
		return memory.read<struct FAnimNode_TransitionResult>(m_addr + 1496);
	}
	struct FAnimNode_TransitionPoseEvaluator GetAnimGraphNode_TransitionPoseEvaluator_4() {
		return memory.read<struct FAnimNode_TransitionPoseEvaluator>(m_addr + 1536);
	}
	struct FAnimNode_TransitionPoseEvaluator GetAnimGraphNode_TransitionPoseEvaluator_3() {
		return memory.read<struct FAnimNode_TransitionPoseEvaluator>(m_addr + 1784);
	}
	struct FAnimNode_StateResult GetAnimGraphNode_CustomTransitionResult_2() {
		return memory.read<struct FAnimNode_StateResult>(m_addr + 2032);
	}
	struct FAnimNode_TransitionResult GetAnimGraphNode_TransitionResult_5() {
		return memory.read<struct FAnimNode_TransitionResult>(m_addr + 2080);
	}
	struct FAnimNode_TransitionResult GetAnimGraphNode_TransitionResult_4() {
		return memory.read<struct FAnimNode_TransitionResult>(m_addr + 2120);
	}
	struct FAnimNode_TransitionResult GetAnimGraphNode_TransitionResult_3() {
		return memory.read<struct FAnimNode_TransitionResult>(m_addr + 2160);
	}
	struct FAnimNode_TransitionResult GetAnimGraphNode_TransitionResult_2() {
		return memory.read<struct FAnimNode_TransitionResult>(m_addr + 2200);
	}
	struct FAnimNode_TransitionPoseEvaluator GetAnimGraphNode_TransitionPoseEvaluator_2() {
		return memory.read<struct FAnimNode_TransitionPoseEvaluator>(m_addr + 2240);
	}
	struct FAnimNode_TransitionPoseEvaluator GetAnimGraphNode_TransitionPoseEvaluator() {
		return memory.read<struct FAnimNode_TransitionPoseEvaluator>(m_addr + 2488);
	}
	struct FAnimNode_StateResult GetAnimGraphNode_CustomTransitionResult() {
		return memory.read<struct FAnimNode_StateResult>(m_addr + 2736);
	}
	struct FAnimNode_TransitionResult GetAnimGraphNode_TransitionResult() {
		return memory.read<struct FAnimNode_TransitionResult>(m_addr + 2784);
	}
	struct FAnimNode_SequencePlayer GetAnimGraphNode_SequencePlayer_3() {
		return memory.read<struct FAnimNode_SequencePlayer>(m_addr + 2824);
	}
	struct FAnimNode_StateResult GetAnimGraphNode_StateResult_4() {
		return memory.read<struct FAnimNode_StateResult>(m_addr + 2952);
	}
	struct FAnimNode_SequencePlayer GetAnimGraphNode_SequencePlayer_2() {
		return memory.read<struct FAnimNode_SequencePlayer>(m_addr + 3000);
	}
	struct FAnimNode_StateResult GetAnimGraphNode_StateResult_3() {
		return memory.read<struct FAnimNode_StateResult>(m_addr + 3128);
	}
	struct FAnimNode_SequencePlayer GetAnimGraphNode_SequencePlayer() {
		return memory.read<struct FAnimNode_SequencePlayer>(m_addr + 3176);
	}
	struct FAnimNode_StateResult GetAnimGraphNode_StateResult_2() {
		return memory.read<struct FAnimNode_StateResult>(m_addr + 3304);
	}
	struct FAnimNode_BlendSpacePlayer GetAnimGraphNode_BlendSpacePlayer() {
		return memory.read<struct FAnimNode_BlendSpacePlayer>(m_addr + 3352);
	}
	struct FAnimNode_StateResult GetAnimGraphNode_StateResult() {
		return memory.read<struct FAnimNode_StateResult>(m_addr + 3584);
	}
	struct FAnimNode_StateMachine GetAnimGraphNode_StateMachine() {
		return memory.read<struct FAnimNode_StateMachine>(m_addr + 3632);
	}
	struct FAnimNode_RigidBody GetAnimGraphNode_RigidBody() {
		return memory.read<struct FAnimNode_RigidBody>(m_addr + 3808);
	}
	float GetHelmet_Alpha() {
		return memory.read<float>(m_addr + 5904);
	}

private:
	std::uint64_t m_addr = 0;
};


