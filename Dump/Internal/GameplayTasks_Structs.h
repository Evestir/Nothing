#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//DelegateFunction GameplayTasks.OnClaimedResourcesChangeSignature__DelegateSignature Size 4
class FOnClaimedResourcesChangeSignature__DelegateSignature
{

 public: 
	struct FGameplayResourceSet NewlyClaimed;  // Offset: 0 Size: 2
	struct FGameplayResourceSet FreshlyReleased;  // Offset: 2 Size: 2



 // Functions 
 public:
}; 
 
 //Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource Size 48
class FClaimResource
{

 public: 
	struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner;  // Offset: 0 Size: 16
	UGameplayTaskResource* ResourceClass;  // Offset: 16 Size: 8
	char Priority;  // Offset: 24 Size: 1
	char pad_25[3];  // Offset: 25 Size: 3
	struct FName TaskInstanceName;  // Offset: 28 Size: 8
	char pad_36[4];  // Offset: 36 Size: 4
	struct UGameplayTask_ClaimResource* ReturnValue;  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct GameplayTasks.GameplayResourceSet Size 2
class FGameplayResourceSet
{

 public: 
	char pad_0[2];  // Offset: 0 Size: 2



 // Functions 
 public:
}; 
 
 //Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor Size 24
class FBeginSpawningActor
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct AActor* SpawnedActor;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources Size 56
class FClaimResources
{

 public: 
	struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner;  // Offset: 0 Size: 16
	struct TArray<UGameplayTaskResource*> ResourceClasses;  // Offset: 16 Size: 16
	char Priority;  // Offset: 32 Size: 1
	char pad_33[3];  // Offset: 33 Size: 3
	struct FName TaskInstanceName;  // Offset: 36 Size: 8
	char pad_44[4];  // Offset: 44 Size: 4
	struct UGameplayTask_ClaimResource* ReturnValue;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay Size 32
class FTaskWaitDelay
{

 public: 
	struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;  // Offset: 0 Size: 16
	float Time;  // Offset: 16 Size: 4
	char Priority;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3
	struct UGameplayTask_WaitDelay* ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction GameplayTasks.GameplayTaskSpawnActorDelegate__DelegateSignature Size 8
class FGameplayTaskSpawnActorDelegate__DelegateSignature
{

 public: 
	struct AActor* SpawnedActor;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor Size 16
class FFinishSpawningActor
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct AActor* SpawnedActor;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor Size 64
class FSpawnActor
{

 public: 
	struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;  // Offset: 0 Size: 16
	struct FVector SpawnLocation;  // Offset: 16 Size: 12
	struct FRotator SpawnRotation;  // Offset: 28 Size: 12
	AActor* Class;  // Offset: 40 Size: 8
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool bSpawnOnlyOnAuthority : 1;  // Offset: 48 Size: 1
	char pad_49[7];  // Offset: 49 Size: 7
	struct UGameplayTask_SpawnActor* ReturnValue;  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 //Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask Size 72
class FK2_RunGameplayTask
{

 public: 
	struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;  // Offset: 0 Size: 16
	struct UGameplayTask* Task;  // Offset: 16 Size: 8
	char Priority;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7
	struct TArray<UGameplayTaskResource*> AdditionalRequiredResources;  // Offset: 32 Size: 16
	struct TArray<UGameplayTaskResource*> AdditionalClaimedResources;  // Offset: 48 Size: 16
	enum class EGameplayTaskRunResult ReturnValue;  // Offset: 64 Size: 1
	char pad_65[7];  // Offset: 65 Size: 7



 // Functions 
 public:
}; 
 
 