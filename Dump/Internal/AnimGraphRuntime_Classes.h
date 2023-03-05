#pragma once 
#include <AnimGraphRuntime_Structs.h>
 
 
 
//Class AnimGraphRuntime.SequencerAnimationSupport Size 40
// Inherited 40 bytes 
class USequencerAnimationSupport : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AnimGraphRuntime.AnimNotify_PlayMontageNotify Size 64
// Inherited 56 bytes 
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{

 public: 
	struct FName NotifyName;  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow Size 56
// Inherited 48 bytes 
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{

 public: 
	struct FName NotifyName;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AnimGraphRuntime.AnimSequencerInstance Size 704
// Inherited 704 bytes 
class UAnimSequencerInstance : public UAnimInstance
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AnimGraphRuntime.KismetAnimationLibrary Size 40
// Inherited 40 bytes 
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	void K2_TwoBoneIK(struct FVector& RootPos, struct FVector& JointPos, struct FVector& EndPos, struct FVector& JointTarget, struct FVector& Effector, struct FVector& OutJointPos, struct FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
	void K2_StartProfilingTimer(); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer
	struct FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
	float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
	struct FTransform K2_LookAt(struct FTransform& CurrentTransform, struct FVector& TargetPosition, struct FVector LookAtVector, bool bUseUpVector, struct FVector UpVector, float ClampConeInDegree); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
	float K2_EndProfilingTimer(bool bLog, struct FString LogPrefix); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
	float K2_DistanceBetweenTwoSocketsAndMapRange(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameA, enum class ERelativeTransformSpace SocketSpaceA, struct FName SocketOrBoneNameB, enum class ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
	struct FVector K2_DirectionBetweenSockets(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameFrom, struct FName SocketOrBoneNameTo); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
	float K2_CalculateVelocityFromSockets(float DeltaSeconds, struct USkeletalMeshComponent* Component, struct FName SocketOrBoneName, struct FName ReferenceSocketOrBone, enum class ERelativeTransformSpace SocketSpace, struct FVector OffsetInBoneSpace, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, enum class EEasingFuncType EasingType, struct FRuntimeFloatCurve& CustomCurve); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
	float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, struct FVector position, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
}; 
 
 


//Class AnimGraphRuntime.PlayMontageCallbackProxy Size 168
// Inherited 40 bytes 
class UPlayMontageCallbackProxy : public UObject
{

 public: 
	struct FMulticastInlineDelegate OnCompleted;  // Offset: 40 Size: 16
	struct FMulticastInlineDelegate OnBlendOut;  // Offset: 56 Size: 16
	struct FMulticastInlineDelegate OnInterrupted;  // Offset: 72 Size: 16
	struct FMulticastInlineDelegate OnNotifyBegin;  // Offset: 88 Size: 16
	struct FMulticastInlineDelegate OnNotifyEnd;  // Offset: 104 Size: 16
	char pad_120[48];  // Offset: 120 Size: 48



 // Functions 
 public:
	void OnNotifyEndReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
	void OnNotifyBeginReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
	struct UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(struct USkeletalMeshComponent* InSkeletalMeshComponent, struct UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection); // Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
}; 
 
 


