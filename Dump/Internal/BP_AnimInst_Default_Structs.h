#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function BP_AnimInst_Default.BP_AnimInst_Default_C.BoneBlendAnim Size 48
class FBoneBlendAnim
{

 public: 
	struct FPoseLink InPose;  // Offset: 0 Size: 16
	struct UAnimSequenceBase* Idle;  // Offset: 16 Size: 8
	float Speed;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4
	struct FPoseLink BoneBlendAnim;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function BP_AnimInst_Default.BP_AnimInst_Default_C.ExecuteUbergraph_BP_AnimInst_Default Size 4
class FExecuteUbergraph_BP_AnimInst_Default
{

 public: 
	int32_t EntryPoint;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function BP_AnimInst_Default.BP_AnimInst_Default_C.AnimGraph Size 16
class FAnimGraph
{

 public: 
	struct FPoseLink AnimGraph;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 