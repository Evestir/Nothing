#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager Size 24
class FCreateAnimationSharingManager
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UAnimationSharingSetup* Setup;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimationSharing.TickAnimationSharingFunction Size 48
// Inherited 40 bytes 
class FTickAnimationSharingFunction : public FTickFunction
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimationSharing.AnimationSharingScalability Size 16
class FAnimationSharingScalability
{

 public: 
	struct FPerPlatformBool UseBlendTransitions;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FPerPlatformFloat BlendSignificanceValue;  // Offset: 4 Size: 4
	struct FPerPlatformInt MaximumNumberConcurrentBlends;  // Offset: 8 Size: 4
	struct FPerPlatformFloat TickSignificanceValue;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimationSharing.AnimationStateEntry Size 48
class FAnimationStateEntry
{

 public: 
	char State;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct TArray<struct FAnimationSetup> AnimationSetups;  // Offset: 8 Size: 16
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bOnDemand : 1;  // Offset: 24 Size: 1
	char pad_25_1 : 7;  // Offset: 25 Size: 1
	bool bAdditive : 1;  // Offset: 25 Size: 1
	char pad_26[2];  // Offset: 26 Size: 2
	float BlendTime;  // Offset: 28 Size: 4
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool bReturnToPreviousState : 1;  // Offset: 32 Size: 1
	char pad_33_1 : 7;  // Offset: 33 Size: 1
	bool bSetNextState : 1;  // Offset: 33 Size: 1
	char NextState;  // Offset: 34 Size: 1
	char pad_35[1];  // Offset: 35 Size: 1
	struct FPerPlatformInt MaximumNumberOfConcurrentInstances;  // Offset: 36 Size: 4
	float WiggleTimePercentage;  // Offset: 40 Size: 4
	char pad_44_1 : 7;  // Offset: 44 Size: 1
	bool bRequiresCurves : 1;  // Offset: 44 Size: 1
	char pad_45[3];  // Offset: 45 Size: 3



 // Functions 
 public:
}; 
 
 //Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors Size 16
class FGetInstancedActors
{

 public: 
	struct TArray<struct AActor*> Actors;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimationSharing.AnimationSetup Size 24
class FAnimationSetup
{

 public: 
	struct UAnimSequence* AnimSequence;  // Offset: 0 Size: 8
	UAnimSharingStateInstance* AnimBlueprint;  // Offset: 8 Size: 8
	struct FPerPlatformInt NumRandomizedInstances;  // Offset: 16 Size: 4
	struct FPerPlatformBool Enabled;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimationSharing.PerSkeletonAnimationSharingSetup Size 56
class FPerSkeletonAnimationSharingSetup
{

 public: 
	struct USkeleton* Skeleton;  // Offset: 0 Size: 8
	struct USkeletalMesh* SkeletalMesh;  // Offset: 8 Size: 8
	UAnimSharingTransitionInstance* BlendAnimBlueprint;  // Offset: 16 Size: 8
	UAnimSharingAdditiveInstance* AdditiveAnimBlueprint;  // Offset: 24 Size: 8
	UAnimationSharingStateProcessor* StateProcessorClass;  // Offset: 32 Size: 8
	struct TArray<struct FAnimationStateEntry> AnimationStates;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 //Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled Size 1
class FAnimationSharingEnabled
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager Size 16
class FGetAnimationSharingManager
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UAnimationSharingManager* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP Size 16
class FRegisterActorWithSkeletonBP
{

 public: 
	struct AActor* InActor;  // Offset: 0 Size: 8
	struct USkeleton* SharingSkeleton;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum Size 8
class FGetAnimationStateEnum
{

 public: 
	struct UEnum* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState Size 24
class FProcessActorState
{

 public: 
	int32_t OutState;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct AActor* InActor;  // Offset: 8 Size: 8
	char CurrentState;  // Offset: 16 Size: 1
	char OnDemandState;  // Offset: 17 Size: 1
	char pad_18_1 : 7;  // Offset: 18 Size: 1
	bool bShouldProcess : 1;  // Offset: 18 Size: 1
	char pad_19[5];  // Offset: 19 Size: 5



 // Functions 
 public:
}; 
 
 