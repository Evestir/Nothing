#pragma once 
#include <GameplayTasks_Structs.h>
 
 
 
//Class GameplayTasks.GameplayTaskResource Size 56
// Inherited 40 bytes 
class UGameplayTaskResource : public UObject
{

 public: 
	int32_t ManualResourceID;  // Offset: 40 Size: 4
	int8_t AutoResourceID;  // Offset: 44 Size: 1
	char pad_45[3];  // Offset: 45 Size: 3
	char bManuallySetID : 1;  // Offset: 48 Size: 1
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	char pad_49[8];  // Offset: 49 Size: 8



 // Functions 
 public:
}; 
 
 


//Class GameplayTasks.GameplayTaskOwnerInterface Size 40
// Inherited 40 bytes 
class UGameplayTaskOwnerInterface : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class GameplayTasks.GameplayTask_TimeLimitedExecution Size 152
// Inherited 104 bytes 
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{

 public: 
	struct FMulticastInlineDelegate OnFinished;  // Offset: 104 Size: 16
	struct FMulticastInlineDelegate OnTimeExpired;  // Offset: 120 Size: 16
	char pad_136[16];  // Offset: 136 Size: 16



 // Functions 
 public:
}; 
 
 


//Class GameplayTasks.GameplayTask Size 104
// Inherited 40 bytes 
class UGameplayTask : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct FName InstanceName;  // Offset: 48 Size: 8
	char pad_56[2];  // Offset: 56 Size: 2
	enum class ETaskResourceOverlapPolicy ResourceOverlapPolicy;  // Offset: 58 Size: 1
	char pad_59[37];  // Offset: 59 Size: 37
	struct UGameplayTask* ChildTask;  // Offset: 96 Size: 8



 // Functions 
 public:
	void ReadyForActivation(); // Function GameplayTasks.GameplayTask.ReadyForActivation
	void GenericGameplayTaskDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
	void EndTask(); // Function GameplayTasks.GameplayTask.EndTask
}; 
 
 


//Class GameplayTasks.GameplayTask_WaitDelay Size 128
// Inherited 104 bytes 
class UGameplayTask_WaitDelay : public UGameplayTask
{

 public: 
	struct FMulticastInlineDelegate OnFinish;  // Offset: 104 Size: 16
	char pad_120[8];  // Offset: 120 Size: 8



 // Functions 
 public:
	struct UGameplayTask_WaitDelay* TaskWaitDelay(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, float Time, char Priority); // Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
	void TaskDelayDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
}; 
 
 


//Class GameplayTasks.GameplayTask_SpawnActor Size 168
// Inherited 104 bytes 
class UGameplayTask_SpawnActor : public UGameplayTask
{

 public: 
	struct FMulticastInlineDelegate Success;  // Offset: 104 Size: 16
	struct FMulticastInlineDelegate DidNotSpawn;  // Offset: 120 Size: 16
	char pad_136[24];  // Offset: 136 Size: 24
	AActor* ClassToSpawn;  // Offset: 160 Size: 8



 // Functions 
 public:
	struct UGameplayTask_SpawnActor* SpawnActor(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct FVector SpawnLocation, struct FRotator SpawnRotation, AActor* Class, bool bSpawnOnlyOnAuthority); // Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
	void FinishSpawningActor(struct UObject* WorldContextObject, struct AActor* SpawnedActor); // Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
	bool BeginSpawningActor(struct UObject* WorldContextObject, struct AActor*& SpawnedActor); // Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
}; 
 
 


//Class GameplayTasks.GameplayTask_ClaimResource Size 104
// Inherited 104 bytes 
class UGameplayTask_ClaimResource : public UGameplayTask
{

 public: 



 // Functions 
 public:
	struct UGameplayTask_ClaimResource* ClaimResources(struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, struct TArray<UGameplayTaskResource*> ResourceClasses, char Priority, struct FName TaskInstanceName); // Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources
	struct UGameplayTask_ClaimResource* ClaimResource(struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, UGameplayTaskResource* ResourceClass, char Priority, struct FName TaskInstanceName); // Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource
}; 
 
 


//Class GameplayTasks.GameplayTasksComponent Size 288
// Inherited 176 bytes 
class UGameplayTasksComponent : public UActorComponent
{

 public: 
	char pad_176[12];  // Offset: 176 Size: 12
	char pad_188_1 : 1;  // Offset: 188 Size: 1
	char bIsNetDirty : 1;  // Offset: 188 Size: 1
	char pad_188_2 : 6;  // Offset: 188 Size: 1
	char pad_189[4];  // Offset: 189 Size: 4
	struct TArray<struct UGameplayTask*> SimulatedTasks;  // Offset: 192 Size: 16
	struct TArray<struct UGameplayTask*> TaskPriorityQueue;  // Offset: 208 Size: 16
	char pad_224[16];  // Offset: 224 Size: 16
	struct TArray<struct UGameplayTask*> TickingTasks;  // Offset: 240 Size: 16
	struct TArray<struct UGameplayTask*> KnownTasks;  // Offset: 256 Size: 16
	struct FMulticastInlineDelegate OnClaimedResourcesChange;  // Offset: 272 Size: 16



 // Functions 
 public:
	void OnRep_SimulatedTasks(); // Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
	enum class EGameplayTaskRunResult K2_RunGameplayTask(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct UGameplayTask* Task, char Priority, struct TArray<UGameplayTaskResource*> AdditionalRequiredResources, struct TArray<UGameplayTaskResource*> AdditionalClaimedResources); // Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
}; 
 
 


