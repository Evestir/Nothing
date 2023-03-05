#pragma once 
#include <AnimBP_Brodi_Structs.h>
 
 
 
//AnimBlueprintGeneratedClass AnimBP_Brodi.AnimBP_Brodi_C Size 5908
// Inherited 1040 bytes 
class UAnimBP_Brodi_C : public UCharAnimInstance
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1040 Size: 8
	struct FAnimNode_Slot AnimGraphNode_Slot;  // Offset: 1048 Size: 72
	struct FAnimNode_Root AnimGraphNode_Root;  // Offset: 1120 Size: 48
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // Offset: 1168 Size: 264
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // Offset: 1432 Size: 32
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // Offset: 1464 Size: 32
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // Offset: 1496 Size: 40
	struct FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator_4;  // Offset: 1536 Size: 248
	struct FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator_3;  // Offset: 1784 Size: 248
	struct FAnimNode_StateResult AnimGraphNode_CustomTransitionResult_2;  // Offset: 2032 Size: 48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // Offset: 2080 Size: 40
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // Offset: 2120 Size: 40
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // Offset: 2160 Size: 40
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // Offset: 2200 Size: 40
	struct FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator_2;  // Offset: 2240 Size: 248
	struct FAnimNode_TransitionPoseEvaluator AnimGraphNode_TransitionPoseEvaluator;  // Offset: 2488 Size: 248
	struct FAnimNode_StateResult AnimGraphNode_CustomTransitionResult;  // Offset: 2736 Size: 48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // Offset: 2784 Size: 40
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // Offset: 2824 Size: 128
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4;  // Offset: 2952 Size: 48
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // Offset: 3000 Size: 128
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // Offset: 3128 Size: 48
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // Offset: 3176 Size: 128
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // Offset: 3304 Size: 48
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // Offset: 3352 Size: 232
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // Offset: 3584 Size: 48
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // Offset: 3632 Size: 176
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody;  // Offset: 3808 Size: 2096
	float Helmet_Alpha;  // Offset: 5904 Size: 4



 // Functions 
 public:
	void AnimGraph(struct FPoseLink& AnimGraph); // Function AnimBP_Brodi.AnimBP_Brodi_C.AnimGraph
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AnimBP_Brodi.AnimBP_Brodi_C.BlueprintUpdateAnimation
	void ExecuteUbergraph_AnimBP_Brodi(int32_t EntryPoint); // Function AnimBP_Brodi.AnimBP_Brodi_C.ExecuteUbergraph_AnimBP_Brodi
}; 
 
 


