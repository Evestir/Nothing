#pragma once 
#include <BP_AnimInst_Default_Structs.h>
 
 
 
//AnimBlueprintGeneratedClass BP_AnimInst_Default.BP_AnimInst_Default_C Size 5696
// Inherited 2976 bytes 
class UBP_AnimInst_Default_C : public UPhysXKartAnimInstance
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 2976 Size: 8
	struct FAnimNode_Root AnimGraphNode_Root_2;  // Offset: 2984 Size: 48
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;  // Offset: 3032 Size: 280
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // Offset: 3312 Size: 128
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // Offset: 3440 Size: 160
	struct FAnimNode_Root AnimGraphNode_Root;  // Offset: 3600 Size: 48
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // Offset: 3648 Size: 40
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // Offset: 3688 Size: 40
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // Offset: 3728 Size: 40
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // Offset: 3768 Size: 40
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // Offset: 3808 Size: 40
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // Offset: 3848 Size: 40
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose;  // Offset: 3888 Size: 24
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4;  // Offset: 3912 Size: 48
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // Offset: 3960 Size: 128
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // Offset: 4088 Size: 160
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // Offset: 4248 Size: 128
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // Offset: 4376 Size: 48
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // Offset: 4424 Size: 128
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // Offset: 4552 Size: 48
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // Offset: 4600 Size: 128
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // Offset: 4728 Size: 48
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // Offset: 4776 Size: 176
	struct FAnimNode_Slot AnimGraphNode_Slot;  // Offset: 4952 Size: 72
	struct FAnimNode_KartHandler AnimGraphNode_KartControl;  // Offset: 5024 Size: 224
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // Offset: 5248 Size: 32
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose;  // Offset: 5280 Size: 16
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // Offset: 5296 Size: 192
	struct FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer;  // Offset: 5488 Size: 176
	float Speed;  // Offset: 5664 Size: 4
	char pad_5668[4];  // Offset: 5668 Size: 4
	struct UAnimSequenceBase* Idle;  // Offset: 5672 Size: 8
	float __CustomProperty_speed_3433CEC5415C591D1EF6C79AE334A65A;  // Offset: 5680 Size: 4
	char pad_5684[4];  // Offset: 5684 Size: 4
	struct UAnimSequenceBase* __CustomProperty_Idle_3433CEC5415C591D1EF6C79AE334A65A;  // Offset: 5688 Size: 8



 // Functions 
 public:
	void BoneBlendAnim(struct FPoseLink InPose, struct UAnimSequenceBase* Idle, float Speed, struct FPoseLink& BoneBlendAnim); // Function BP_AnimInst_Default.BP_AnimInst_Default_C.BoneBlendAnim
	void AnimGraph(struct FPoseLink& AnimGraph); // Function BP_AnimInst_Default.BP_AnimInst_Default_C.AnimGraph
	void ExecuteUbergraph_BP_AnimInst_Default(int32_t EntryPoint); // Function BP_AnimInst_Default.BP_AnimInst_Default_C.ExecuteUbergraph_BP_AnimInst_Default
}; 
 
 


