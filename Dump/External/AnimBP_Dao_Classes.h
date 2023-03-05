#pragma once 
#include <AnimBP_Dao_Structs.h>
 
 
 
class UAnimBP_Dao_C
{
public:
	UAnimBP_Dao_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1040);
	}
	struct FAnimNode_Root GetAnimGraphNode_Root() {
		return memory.read<struct FAnimNode_Root>(m_addr + 1048);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 1096);
	}
	struct FAnimNode_Slot GetAnimGraphNode_Slot() {
		return memory.read<struct FAnimNode_Slot>(m_addr + 1136);
	}
	struct FAnimNode_SaveCachedPose GetAnimGraphNode_SaveCachedPose() {
		return memory.read<struct FAnimNode_SaveCachedPose>(m_addr + 1208);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_2() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 1552);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 1816);
	}
	struct FAnimNode_ConvertLocalToComponentSpace GetAnimGraphNode_LocalToComponentSpace_2() {
		return memory.read<struct FAnimNode_ConvertLocalToComponentSpace>(m_addr + 2080);
	}
	struct FAnimNode_ConvertComponentToLocalSpace GetAnimGraphNode_ComponentToLocalSpace_2() {
		return memory.read<struct FAnimNode_ConvertComponentToLocalSpace>(m_addr + 2112);
	}
	struct FAnimNode_ConvertLocalToComponentSpace GetAnimGraphNode_LocalToComponentSpace() {
		return memory.read<struct FAnimNode_ConvertLocalToComponentSpace>(m_addr + 2144);
	}
	struct FAnimNode_ConvertComponentToLocalSpace GetAnimGraphNode_ComponentToLocalSpace() {
		return memory.read<struct FAnimNode_ConvertComponentToLocalSpace>(m_addr + 2176);
	}
	struct FAnimNode_TransitionResult GetAnimGraphNode_TransitionResult_6() {
		return memory.read<struct FAnimNode_TransitionResult>(m_addr + 2208);
	}
	struct FAnimNode_TransitionPoseEvaluator GetAnimGraphNode_TransitionPoseEvaluator_4() {
		return memory.read<struct FAnimNode_TransitionPoseEvaluator>(m_addr + 2248);
	}
	struct FAnimNode_TransitionPoseEvaluator GetAnimGraphNode_TransitionPoseEvaluator_3() {
		return memory.read<struct FAnimNode_TransitionPoseEvaluator>(m_addr + 2496);
	}
	struct FAnimNode_StateResult GetAnimGraphNode_CustomTransitionResult_2() {
		return memory.read<struct FAnimNode_StateResult>(m_addr + 2744);
	}
	struct FAnimNode_TransitionResult GetAnimGraphNode_TransitionResult_5() {
		return memory.read<struct FAnimNode_TransitionResult>(m_addr + 2792);
	}
	struct FAnimNode_TransitionResult GetAnimGraphNode_TransitionResult_4() {
		return memory.read<struct FAnimNode_TransitionResult>(m_addr + 2832);
	}
	struct FAnimNode_TransitionResult GetAnimGraphNode_TransitionResult_3() {
		return memory.read<struct FAnimNode_TransitionResult>(m_addr + 2872);
	}
	struct FAnimNode_TransitionResult GetAnimGraphNode_TransitionResult_2() {
		return memory.read<struct FAnimNode_TransitionResult>(m_addr + 2912);
	}
	struct FAnimNode_TransitionPoseEvaluator GetAnimGraphNode_TransitionPoseEvaluator_2() {
		return memory.read<struct FAnimNode_TransitionPoseEvaluator>(m_addr + 2952);
	}
	struct FAnimNode_TransitionPoseEvaluator GetAnimGraphNode_TransitionPoseEvaluator() {
		return memory.read<struct FAnimNode_TransitionPoseEvaluator>(m_addr + 3200);
	}
	struct FAnimNode_StateResult GetAnimGraphNode_CustomTransitionResult() {
		return memory.read<struct FAnimNode_StateResult>(m_addr + 3448);
	}
	struct FAnimNode_TransitionResult GetAnimGraphNode_TransitionResult() {
		return memory.read<struct FAnimNode_TransitionResult>(m_addr + 3496);
	}
	struct FAnimNode_SequencePlayer GetAnimGraphNode_SequencePlayer_3() {
		return memory.read<struct FAnimNode_SequencePlayer>(m_addr + 3536);
	}
	struct FAnimNode_StateResult GetAnimGraphNode_StateResult_4() {
		return memory.read<struct FAnimNode_StateResult>(m_addr + 3664);
	}
	struct FAnimNode_SequencePlayer GetAnimGraphNode_SequencePlayer_2() {
		return memory.read<struct FAnimNode_SequencePlayer>(m_addr + 3712);
	}
	struct FAnimNode_StateResult GetAnimGraphNode_StateResult_3() {
		return memory.read<struct FAnimNode_StateResult>(m_addr + 3840);
	}
	struct FAnimNode_SequencePlayer GetAnimGraphNode_SequencePlayer() {
		return memory.read<struct FAnimNode_SequencePlayer>(m_addr + 3888);
	}
	struct FAnimNode_StateResult GetAnimGraphNode_StateResult_2() {
		return memory.read<struct FAnimNode_StateResult>(m_addr + 4016);
	}
	struct FAnimNode_BlendSpacePlayer GetAnimGraphNode_BlendSpacePlayer() {
		return memory.read<struct FAnimNode_BlendSpacePlayer>(m_addr + 4064);
	}
	struct FAnimNode_StateResult GetAnimGraphNode_StateResult() {
		return memory.read<struct FAnimNode_StateResult>(m_addr + 4296);
	}
	struct FAnimNode_StateMachine GetAnimGraphNode_StateMachine() {
		return memory.read<struct FAnimNode_StateMachine>(m_addr + 4344);
	}
	struct FAnimNode_RigidBody GetAnimGraphNode_RigidBody() {
		return memory.read<struct FAnimNode_RigidBody>(m_addr + 4528);
	}

private:
	std::uint64_t m_addr = 0;
};


