#pragma once 
#include <NiagaraAnimNotifies_Structs.h>
 
 
 
//Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect Size 160
// Inherited 56 bytes 
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{

 public: 
	struct UNiagaraSystem* Template;  // Offset: 56 Size: 8
	int32_t MirrorDetailLevel;  // Offset: 64 Size: 4
	struct FVector LocationOffset;  // Offset: 68 Size: 12
	struct FRotator RotationOffset;  // Offset: 80 Size: 12
	struct FVector Scale;  // Offset: 92 Size: 12
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bAbsoluteScale : 1;  // Offset: 104 Size: 1
	char pad_105[39];  // Offset: 105 Size: 39
	char Attached : 1;  // Offset: 144 Size: 1
	char pad_144_1 : 7;  // Offset: 144 Size: 1
	char pad_145[4];  // Offset: 145 Size: 4
	struct FName SocketName;  // Offset: 148 Size: 8
	char pad_156[4];  // Offset: 156 Size: 4



 // Functions 
 public:
	struct UFXSystemComponent* GetSpawnedEffect(); // Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
}; 
 
 


//Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect Size 96
// Inherited 48 bytes 
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{

 public: 
	struct UNiagaraSystem* Template;  // Offset: 48 Size: 8
	int32_t MirrorDetailLevel;  // Offset: 56 Size: 4
	struct FName SocketName;  // Offset: 60 Size: 8
	struct FVector LocationOffset;  // Offset: 68 Size: 12
	struct FRotator RotationOffset;  // Offset: 80 Size: 12
	char pad_92_1 : 7;  // Offset: 92 Size: 1
	bool bDestroyAtEnd : 1;  // Offset: 92 Size: 1
	char pad_93[3];  // Offset: 93 Size: 3



 // Functions 
 public:
	struct UFXSystemComponent* GetSpawnedEffect(struct UMeshComponent* MeshComp); // Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect
}; 
 
 


//Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced Size 176
// Inherited 96 bytes 
class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect
{

 public: 
	char pad_96[80];  // Offset: 96 Size: 80



 // Functions 
 public:
	float GetNotifyProgress(struct UMeshComponent* MeshComp); // Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress
}; 
 
 


