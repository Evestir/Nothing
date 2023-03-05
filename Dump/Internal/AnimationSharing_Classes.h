#pragma once 
#include <AnimationSharing_Structs.h>
 
 
 
//Class AnimationSharing.AnimSharingTransitionInstance Size 720
// Inherited 704 bytes 
class UAnimSharingTransitionInstance : public UAnimInstance
{

 public: 
	struct TWeakObjectPtr<USkeletalMeshComponent> FromComponent;  // Offset: 696 Size: 8
	struct TWeakObjectPtr<USkeletalMeshComponent> ToComponent;  // Offset: 704 Size: 8
	float BlendTime;  // Offset: 712 Size: 4
	char pad_724_1 : 7;  // Offset: 724 Size: 1
	bool bBlendBool : 1;  // Offset: 716 Size: 1



 // Functions 
 public:
}; 
 
 


//Class AnimationSharing.AnimSharingStateInstance Size 736
// Inherited 704 bytes 
class UAnimSharingStateInstance : public UAnimInstance
{

 public: 
	struct UAnimSequence* AnimationToPlay;  // Offset: 696 Size: 8
	float PermutationTimeOffset;  // Offset: 704 Size: 4
	float PlayRate;  // Offset: 708 Size: 4
	char pad_720_1 : 7;  // Offset: 720 Size: 1
	bool bStateBool : 1;  // Offset: 712 Size: 1
	struct UAnimSharingInstance* Instance;  // Offset: 720 Size: 8
	char pad_729[7];  // Offset: 729 Size: 7



 // Functions 
 public:
	void GetInstancedActors(struct TArray<struct AActor*>& Actors); // Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors
}; 
 
 


//Class AnimationSharing.AnimationSharingSetup Size 72
// Inherited 40 bytes 
class UAnimationSharingSetup : public UObject
{

 public: 
	struct TArray<struct FPerSkeletonAnimationSharingSetup> SkeletonSetups;  // Offset: 40 Size: 16
	struct FAnimationSharingScalability ScalabilitySettings;  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 


//Class AnimationSharing.AnimSharingAdditiveInstance Size 720
// Inherited 704 bytes 
class UAnimSharingAdditiveInstance : public UAnimInstance
{

 public: 
	struct TWeakObjectPtr<USkeletalMeshComponent> BaseComponent;  // Offset: 696 Size: 8
	struct TWeakObjectPtr<UAnimSequence> AdditiveAnimation;  // Offset: 704 Size: 8
	float Alpha;  // Offset: 712 Size: 4
	char pad_724_1 : 7;  // Offset: 724 Size: 1
	bool bStateBool : 1;  // Offset: 716 Size: 1



 // Functions 
 public:
}; 
 
 


//Class AnimationSharing.AnimSharingInstance Size 280
// Inherited 40 bytes 
class UAnimSharingInstance : public UObject
{

 public: 
	struct TArray<struct AActor*> RegisteredActors;  // Offset: 40 Size: 16
	char pad_56[80];  // Offset: 56 Size: 80
	struct UAnimationSharingStateProcessor* StateProcessor;  // Offset: 136 Size: 8
	char pad_144[56];  // Offset: 144 Size: 56
	struct TArray<struct UAnimSequence*> UsedAnimationSequences;  // Offset: 200 Size: 16
	char pad_216[16];  // Offset: 216 Size: 16
	struct UEnum* StateEnum;  // Offset: 232 Size: 8
	struct AActor* SharingActor;  // Offset: 240 Size: 8
	char pad_248[32];  // Offset: 248 Size: 32



 // Functions 
 public:
}; 
 
 


//Class AnimationSharing.AnimationSharingStateProcessor Size 80
// Inherited 40 bytes 
class UAnimationSharingStateProcessor : public UObject
{

 public: 
	struct TSoftObjectPtr<UEnum> AnimationStateEnum;  // Offset: 40 Size: 40



 // Functions 
 public:
	void ProcessActorState(int32_t& OutState, struct AActor* InActor, char CurrentState, char OnDemandState, bool& bShouldProcess); // Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
	struct UEnum* GetAnimationStateEnum(); // Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
}; 
 
 


//Class AnimationSharing.AnimationSharingManager Size 136
// Inherited 40 bytes 
class UAnimationSharingManager : public UObject
{

 public: 
	struct TArray<struct USkeleton*> Skeletons;  // Offset: 40 Size: 16
	struct TArray<struct UAnimSharingInstance*> PerSkeletonData;  // Offset: 56 Size: 16
	char pad_72[64];  // Offset: 72 Size: 64



 // Functions 
 public:
	void RegisterActorWithSkeletonBP(struct AActor* InActor, struct USkeleton* SharingSkeleton); // Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
	struct UAnimationSharingManager* GetAnimationSharingManager(struct UObject* WorldContextObject); // Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
	bool CreateAnimationSharingManager(struct UObject* WorldContextObject, struct UAnimationSharingSetup* Setup); // Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
	bool AnimationSharingEnabled(); // Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
}; 
 
 


