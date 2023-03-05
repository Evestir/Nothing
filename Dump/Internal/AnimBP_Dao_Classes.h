#pragma once 
#include <AnimBP_Dao_Structs.h>
 
 
 
//AnimBlueprintGeneratedClass AnimBP_Dao.AnimBP_Dao_C Size 6624
// Inherited 1040 bytes 
class UAnimBP_Dao_C : public UCharAnimInstance
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1040 Size: 8
	struct FAnimNode_Root AnimGraphNode_Root;  // Offset: 1048 Size: 48
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // Offset: 1096 Size: 40
	struct FAnimNode_Slot AnimGraphNode_Slot;  // Offset: 1136 Size: 72
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // Offset: 1208 Size: 344
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;  // Offset: 1552 Size: 264
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // Offset: 1816 Size: 264
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;  // Offset: 2080 Size: 32
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;  // Offset: 2112 Size: 32
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // Offset: 2144 Size: 32
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // Offset: 2176 Size: 32
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // Offset: 2208 Size: 40
	struct FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator_4;  // Offset: 2248 Size: 248
	struct FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator_3;  // Offset: 2496 Size: 248
	struct FAnimNode_StateResult AnimGraphNode_CustomTransitionResult_2;  // Offset: 2744 Size: 48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // Offset: 2792 Size: 40
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // Offset: 2832 Size: 40
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // Offset: 2872 Size: 40
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // Offset: 2912 Size: 40
	struct FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator_2;  // Offset: 2952 Size: 248
	struct FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator;  // Offset: 3200 Size: 248
	struct FAnimNode_StateResult AnimGraphNode_CustomTransitionResult;  // Offset: 3448 Size: 48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // Offset: 3496 Size: 40
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // Offset: 3536 Size: 128
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4;  // Offset: 3664 Size: 48
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // Offset: 3712 Size: 128
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // Offset: 3840 Size: 48
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // Offset: 3888 Size: 128
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // Offset: 4016 Size: 48
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // Offset: 4064 Size: 232
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // Offset: 4296 Size: 48
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // Offset: 4344 Size: 176
	char pad_4520[8];  // Offset: 4520 Size: 8
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody;  // Offset: 4528 Size: 2096



 // Functions 
 public:
	void AnimGraph(struct FPoseLink& AnimGraph); // Function AnimBP_Dao.AnimBP_Dao_C.AnimGraph
	void ExecuteUbergraph_AnimBP_Dao(int32_t EntryPoint); // Function AnimBP_Dao.AnimBP_Dao_C.ExecuteUbergraph_AnimBP_Dao
}; 
 
 


