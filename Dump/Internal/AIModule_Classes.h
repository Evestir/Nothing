#pragma once 
#include <AIModule_Structs.h>
 
 
 
//Class AIModule.AIAsyncTaskBlueprintProxy Size 104
// Inherited 40 bytes 
class UAIAsyncTaskBlueprintProxy : public UObject
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 40 Size: 16
	struct FMulticastInlineDelegate OnFail;  // Offset: 56 Size: 16
	char pad_72[32];  // Offset: 72 Size: 32



 // Functions 
 public:
	void OnMoveCompleted(struct FAIRequestID RequestID, enum class EPathFollowingResult MovementResult); // Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
}; 
 
 


//Class AIModule.AIBlueprintHelperLibrary Size 40
// Inherited 40 bytes 
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	void UnlockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic); // Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
	struct APawn* SpawnAIFromClass(struct UObject* WorldContextObject, APawn* PawnClass, struct UBehaviorTree* BehaviorTree, struct FVector Location, struct FRotator Rotation, bool bNoCollisionFail, struct AActor* Owner); // Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
	void SimpleMoveToLocation(struct AController* Controller, struct FVector& Goal); // Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
	void SimpleMoveToActor(struct AController* Controller, struct AActor* Goal); // Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
	void SendAIMessage(struct APawn* Target, struct FName Message, struct UObject* MessageSource, bool bSuccess); // Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
	void LockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic); // Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
	bool IsValidAIRotation(struct FRotator Rotation); // Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
	bool IsValidAILocation(struct FVector Location); // Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
	bool IsValidAIDirection(struct FVector DirectionVector); // Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
	int32_t GetNextNavLinkIndex(struct AController* Controller); // Function AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex
	struct TArray<struct FVector> GetCurrentPathPoints(struct AController* Controller); // Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints
	int32_t GetCurrentPathIndex(struct AController* Controller); // Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex
	struct UNavigationPath* GetCurrentPath(struct AController* Controller); // Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath
	struct UBlackboardComponent* GetBlackboard(struct AActor* Target); // Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
	struct AAIController* GetAIController(struct AActor* ControlledActor); // Function AIModule.AIBlueprintHelperLibrary.GetAIController
	struct UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(struct UObject* WorldContextObject, struct APawn* Pawn, struct FVector Destination, struct AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap); // Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
}; 
 
 


//Class AIModule.BlackboardKeyType_Rotator Size 48
// Inherited 48 bytes 
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.BehaviorTreeTypes Size 40
// Inherited 40 bytes 
class UBehaviorTreeTypes : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTDecorator_TagCooldown Size 120
// Inherited 104 bytes 
class UBTDecorator_TagCooldown : public UBTDecorator
{

 public: 
	struct FGameplayTag CooldownTag;  // Offset: 104 Size: 8
	float CooldownDuration;  // Offset: 112 Size: 4
	char pad_116_1 : 7;  // Offset: 116 Size: 1
	bool bAddToExistingDuration : 1;  // Offset: 116 Size: 1
	char pad_117_1 : 7;  // Offset: 117 Size: 1
	bool bActivatesCooldown : 1;  // Offset: 117 Size: 1
	char pad_118[2];  // Offset: 118 Size: 2



 // Functions 
 public:
}; 
 
 


//Class AIModule.AISenseConfig_Sight Size 112
// Inherited 72 bytes 
class UAISenseConfig_Sight : public UAISenseConfig
{

 public: 
	UAISense_Sight* Implementation;  // Offset: 72 Size: 8
	float SightRadius;  // Offset: 80 Size: 4
	float LoseSightRadius;  // Offset: 84 Size: 4
	float PeripheralVisionAngleDegrees;  // Offset: 88 Size: 4
	struct FAISenseAffiliationFilter DetectionByAffiliation;  // Offset: 92 Size: 4
	float AutoSuccessRangeFromLastSeenLocation;  // Offset: 96 Size: 4
	float PointOfViewBackwardOffset;  // Offset: 100 Size: 4
	float NearClippingRadius;  // Offset: 104 Size: 4
	char pad_108[4];  // Offset: 108 Size: 4



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTDecorator_CheckGameplayTagsOnActor Size 200
// Inherited 104 bytes 
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{

 public: 
	struct FBlackboardKeySelector ActorToCheck;  // Offset: 104 Size: 40
	enum class EGameplayContainerMatchType TagsToMatch;  // Offset: 144 Size: 1
	char pad_145[7];  // Offset: 145 Size: 7
	struct FGameplayTagContainer GameplayTags;  // Offset: 152 Size: 32
	struct FString CachedDescription;  // Offset: 184 Size: 16



 // Functions 
 public:
}; 
 
 


//Class AIModule.AIDataProvider Size 40
// Inherited 40 bytes 
class UAIDataProvider : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.BlackboardKeyType_Int Size 48
// Inherited 48 bytes 
class UBlackboardKeyType_Int : public UBlackboardKeyType
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.AIController Size 808
// Inherited 664 bytes 
class AAIController : public AController
{

 public: 
	char pad_664[56];  // Offset: 664 Size: 56
	char bStartAILogicOnPossess : 1;  // Offset: 720 Size: 1
	char bStopAILogicOnUnposses : 1;  // Offset: 720 Size: 1
	char bLOSflag : 1;  // Offset: 720 Size: 1
	char bSkipExtraLOSChecks : 1;  // Offset: 720 Size: 1
	char bAllowStrafe : 1;  // Offset: 720 Size: 1
	char bWantsPlayerState : 1;  // Offset: 720 Size: 1
	char bSetControlRotationFromPawnOrientation : 1;  // Offset: 720 Size: 1
	char pad_720_1 : 1;  // Offset: 720 Size: 1
	char pad_721[8];  // Offset: 721 Size: 8
	struct UPathFollowingComponent* PathFollowingComponent;  // Offset: 728 Size: 8
	struct UBrainComponent* BrainComponent;  // Offset: 736 Size: 8
	struct UAIPerceptionComponent* PerceptionComponent;  // Offset: 744 Size: 8
	struct UPawnActionsComponent* ActionsComp;  // Offset: 752 Size: 8
	struct UBlackboardComponent* Blackboard;  // Offset: 760 Size: 8
	struct UGameplayTasksComponent* CachedGameplayTasksComponent;  // Offset: 768 Size: 8
	UNavigationQueryFilter* DefaultNavigationFilterClass;  // Offset: 776 Size: 8
	struct FMulticastInlineDelegate ReceiveMoveCompleted;  // Offset: 784 Size: 16
	char pad_800[8];  // Offset: 800 Size: 8



 // Functions 
 public:
	bool UseBlackboard(struct UBlackboardData* BlackboardAsset, struct UBlackboardComponent*& BlackboardComponent); // Function AIModule.AIController.UseBlackboard
	void UnclaimTaskResource(UGameplayTaskResource* ResourceClass); // Function AIModule.AIController.UnclaimTaskResource
	void SetPathFollowingComponent(struct UPathFollowingComponent* NewPFComponent); // Function AIModule.AIController.SetPathFollowingComponent
	void SetMoveBlockDetection(bool bEnable); // Function AIModule.AIController.SetMoveBlockDetection
	bool RunBehaviorTree(struct UBehaviorTree* BTAsset); // Function AIModule.AIController.RunBehaviorTree
	void OnUsingBlackBoard(struct UBlackboardComponent* BlackboardComp, struct UBlackboardData* BlackboardAsset); // Function AIModule.AIController.OnUsingBlackBoard
	void OnGameplayTaskResourcesClaimed(struct FGameplayResourceSet NewlyClaimed, struct FGameplayResourceSet FreshlyReleased); // Function AIModule.AIController.OnGameplayTaskResourcesClaimed
	enum class EPathFollowingRequestResult MoveToLocation(struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, UNavigationQueryFilter* FilterClass, bool bAllowPartialPath); // Function AIModule.AIController.MoveToLocation
	enum class EPathFollowingRequestResult MoveToActor(struct AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, UNavigationQueryFilter* FilterClass, bool bAllowPartialPath); // Function AIModule.AIController.MoveToActor
	void K2_SetFocus(struct AActor* NewFocus); // Function AIModule.AIController.K2_SetFocus
	void K2_SetFocalPoint(struct FVector FP); // Function AIModule.AIController.K2_SetFocalPoint
	void K2_ClearFocus(); // Function AIModule.AIController.K2_ClearFocus
	bool HasPartialPath(); // Function AIModule.AIController.HasPartialPath
	struct UPathFollowingComponent* GetPathFollowingComponent(); // Function AIModule.AIController.GetPathFollowingComponent
	enum class EPathFollowingStatus GetMoveStatus(); // Function AIModule.AIController.GetMoveStatus
	struct FVector GetImmediateMoveDestination(); // Function AIModule.AIController.GetImmediateMoveDestination
	struct AActor* GetFocusActor(); // Function AIModule.AIController.GetFocusActor
	struct FVector GetFocalPointOnActor(struct AActor* Actor); // Function AIModule.AIController.GetFocalPointOnActor
	struct FVector GetFocalPoint(); // Function AIModule.AIController.GetFocalPoint
	struct UAIPerceptionComponent* GetAIPerceptionComponent(); // Function AIModule.AIController.GetAIPerceptionComponent
	void ClaimTaskResource(UGameplayTaskResource* ResourceClass); // Function AIModule.AIController.ClaimTaskResource
}; 
 
 


//Class AIModule.BTDecorator_BlueprintBase Size 160
// Inherited 104 bytes 
class UBTDecorator_BlueprintBase : public UBTDecorator
{

 public: 
	struct AAIController* AIOwner;  // Offset: 104 Size: 8
	struct AActor* ActorOwner;  // Offset: 112 Size: 8
	struct TArray<struct FName> ObservedKeyNames;  // Offset: 120 Size: 16
	char pad_136[16];  // Offset: 136 Size: 16
	char bShowPropertyDetails : 1;  // Offset: 152 Size: 1
	char bCheckConditionOnlyBlackBoardChanges : 1;  // Offset: 152 Size: 1
	char bIsObservingBB : 1;  // Offset: 152 Size: 1
	char pad_152_1 : 5;  // Offset: 152 Size: 1
	char pad_153[8];  // Offset: 153 Size: 8



 // Functions 
 public:
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
	void ReceiveObserverDeactivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
	void ReceiveObserverDeactivated(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
	void ReceiveObserverActivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
	void ReceiveObserverActivated(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
	void ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
	void ReceiveExecutionStart(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
	void ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, enum class EBTNodeResult NodeResult); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
	void ReceiveExecutionFinish(struct AActor* OwnerActor, enum class EBTNodeResult NodeResult); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
	bool PerformConditionCheck(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
	bool IsDecoratorObserverActive(); // Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
	bool IsDecoratorExecutionActive(); // Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
}; 
 
 


//Class AIModule.BlackboardKeyType_Float Size 48
// Inherited 48 bytes 
class UBlackboardKeyType_Float : public UBlackboardKeyType
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.AIDataProvider_QueryParams Size 64
// Inherited 40 bytes 
class UAIDataProvider_QueryParams : public UAIDataProvider
{

 public: 
	struct FName ParamName;  // Offset: 40 Size: 8
	float FloatValue;  // Offset: 48 Size: 4
	int32_t IntValue;  // Offset: 52 Size: 4
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	bool BoolValue : 1;  // Offset: 56 Size: 1
	char pad_57[7];  // Offset: 57 Size: 7



 // Functions 
 public:
}; 
 
 


//Class AIModule.AIDataProvider_Random Size 80
// Inherited 64 bytes 
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{

 public: 
	float Min;  // Offset: 64 Size: 4
	float Max;  // Offset: 68 Size: 4
	char bInteger : 1;  // Offset: 72 Size: 1
	char pad_72_1 : 7;  // Offset: 72 Size: 1
	char pad_73[8];  // Offset: 73 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.AITask_RunEQS Size 232
// Inherited 112 bytes 
class UAITask_RunEQS : public UAITask
{

 public: 
	char pad_112[120];  // Offset: 112 Size: 120



 // Functions 
 public:
	struct UAITask_RunEQS* RunEQS(struct AAIController* Controller, struct UEnvQuery* QueryTemplate); // Function AIModule.AITask_RunEQS.RunEQS
}; 
 
 


//Class AIModule.AIHotSpotManager Size 40
// Inherited 40 bytes 
class UAIHotSpotManager : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.AIPerceptionComponent Size 400
// Inherited 176 bytes 
class UAIPerceptionComponent : public UActorComponent
{

 public: 
	struct TArray<struct UAISenseConfig*> SensesConfig;  // Offset: 176 Size: 16
	UAISense* DominantSense;  // Offset: 192 Size: 8
	char pad_200[16];  // Offset: 200 Size: 16
	struct AAIController* AIOwner;  // Offset: 216 Size: 8
	char pad_224[128];  // Offset: 224 Size: 128
	struct FMulticastInlineDelegate OnPerceptionUpdated;  // Offset: 352 Size: 16
	struct FMulticastInlineDelegate OnTargetPerceptionUpdated;  // Offset: 368 Size: 16
	struct FMulticastInlineDelegate OnTargetPerceptionInfoUpdated;  // Offset: 384 Size: 16



 // Functions 
 public:
	void SetSenseEnabled(UAISense* SenseClass, bool bEnable); // Function AIModule.AIPerceptionComponent.SetSenseEnabled
	void RequestStimuliListenerUpdate(); // Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
	void OnOwnerEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
	void GetPerceivedHostileActorsBySense(UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense
	void GetPerceivedHostileActors(struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
	void GetPerceivedActors(UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedActors
	void GetKnownPerceivedActors(UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors
	void GetCurrentlyPerceivedActors(UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
	bool GetActorsPerception(struct AActor* Actor, struct FActorPerceptionBlueprintInfo& Info); // Function AIModule.AIPerceptionComponent.GetActorsPerception
	void ForgetAll(); // Function AIModule.AIPerceptionComponent.ForgetAll
}; 
 
 


//Class AIModule.AIPerceptionListenerInterface Size 40
// Inherited 40 bytes 
class UAIPerceptionListenerInterface : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.AISenseConfig_Team Size 72
// Inherited 72 bytes 
class UAISenseConfig_Team : public UAISenseConfig
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.AISenseConfig_Prediction Size 72
// Inherited 72 bytes 
class UAISenseConfig_Prediction : public UAISenseConfig
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryGenerator_ProjectedPoints Size 128
// Inherited 80 bytes 
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{

 public: 
	struct FEnvTraceData ProjectionData;  // Offset: 80 Size: 48



 // Functions 
 public:
}; 
 
 


//Class AIModule.AIPerceptionStimuliSourceComponent Size 200
// Inherited 176 bytes 
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{

 public: 
	char bAutoRegisterAsSource : 1;  // Offset: 176 Size: 1
	char pad_176_1 : 7;  // Offset: 176 Size: 1
	char pad_177[8];  // Offset: 177 Size: 8
	struct TArray<UAISense*> RegisterAsSourceForSenses;  // Offset: 184 Size: 16



 // Functions 
 public:
	void UnregisterFromSense(UAISense* SenseClass); // Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
	void UnregisterFromPerceptionSystem(); // Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
	void RegisterWithPerceptionSystem(); // Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
	void RegisterForSense(UAISense* SenseClass); // Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
}; 
 
 


//Class AIModule.PathFollowingManager Size 40
// Inherited 40 bytes 
class UPathFollowingManager : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.AISubsystem Size 56
// Inherited 40 bytes 
class UAISubsystem : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct UAISystem* AISystem;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.BlackboardComponent Size 440
// Inherited 176 bytes 
class UBlackboardComponent : public UActorComponent
{

 public: 
	struct UBrainComponent* BrainComp;  // Offset: 176 Size: 8
	struct UBlackboardData* DefaultBlackboardAsset;  // Offset: 184 Size: 8
	struct UBlackboardData* BlackboardAsset;  // Offset: 192 Size: 8
	char pad_200[32];  // Offset: 200 Size: 32
	struct TArray<struct UBlackboardKeyType*> KeyInstances;  // Offset: 232 Size: 16
	char pad_248[192];  // Offset: 248 Size: 192



 // Functions 
 public:
	void SetValueAsVector(struct FName& KeyName, struct FVector VectorValue); // Function AIModule.BlackboardComponent.SetValueAsVector
	void SetValueAsString(struct FName& KeyName, struct FString StringValue); // Function AIModule.BlackboardComponent.SetValueAsString
	void SetValueAsRotator(struct FName& KeyName, struct FRotator VectorValue); // Function AIModule.BlackboardComponent.SetValueAsRotator
	void SetValueAsObject(struct FName& KeyName, struct UObject* ObjectValue); // Function AIModule.BlackboardComponent.SetValueAsObject
	void SetValueAsName(struct FName& KeyName, struct FName NameValue); // Function AIModule.BlackboardComponent.SetValueAsName
	void SetValueAsInt(struct FName& KeyName, int32_t IntValue); // Function AIModule.BlackboardComponent.SetValueAsInt
	void SetValueAsFloat(struct FName& KeyName, float FloatValue); // Function AIModule.BlackboardComponent.SetValueAsFloat
	void SetValueAsEnum(struct FName& KeyName, char EnumValue); // Function AIModule.BlackboardComponent.SetValueAsEnum
	void SetValueAsClass(struct FName& KeyName, UObject* ClassValue); // Function AIModule.BlackboardComponent.SetValueAsClass
	void SetValueAsBool(struct FName& KeyName, bool BoolValue); // Function AIModule.BlackboardComponent.SetValueAsBool
	bool IsVectorValueSet(struct FName& KeyName); // Function AIModule.BlackboardComponent.IsVectorValueSet
	struct FVector GetValueAsVector(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsVector
	struct FString GetValueAsString(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsString
	struct FRotator GetValueAsRotator(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsRotator
	struct UObject* GetValueAsObject(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsObject
	struct FName GetValueAsName(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsName
	int32_t GetValueAsInt(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsInt
	float GetValueAsFloat(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsFloat
	char GetValueAsEnum(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsEnum
	UObject* GetValueAsClass(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsClass
	bool GetValueAsBool(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsBool
	bool GetRotationFromEntry(struct FName& KeyName, struct FRotator& ResultRotation); // Function AIModule.BlackboardComponent.GetRotationFromEntry
	bool GetLocationFromEntry(struct FName& KeyName, struct FVector& ResultLocation); // Function AIModule.BlackboardComponent.GetLocationFromEntry
	void ClearValue(struct FName& KeyName); // Function AIModule.BlackboardComponent.ClearValue
}; 
 
 


//Class AIModule.AISenseEvent_Damage Size 96
// Inherited 40 bytes 
class UAISenseEvent_Damage : public UAISenseEvent
{

 public: 
	struct FAIDamageEvent Event;  // Offset: 40 Size: 56



 // Functions 
 public:
}; 
 
 


//Class AIModule.PawnAction_Sequence Size 184
// Inherited 144 bytes 
class UPawnAction_Sequence : public UPawnAction
{

 public: 
	struct TArray<struct UPawnAction*> ActionSequence;  // Offset: 144 Size: 16
	enum class EPawnActionFailHandling ChildFailureHandlingMode;  // Offset: 160 Size: 1
	char pad_161[7];  // Offset: 161 Size: 7
	struct UPawnAction* RecentActionCopy;  // Offset: 168 Size: 8
	char pad_176[8];  // Offset: 176 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.AIResource_Logic Size 56
// Inherited 56 bytes 
class UAIResource_Logic : public UGameplayTaskResource
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.AIPerceptionSystem Size 304
// Inherited 56 bytes 
class UAIPerceptionSystem : public UAISubsystem
{

 public: 
	char pad_56[80];  // Offset: 56 Size: 80
	struct TArray<struct UAISense*> Senses;  // Offset: 136 Size: 16
	float PerceptionAgingRate;  // Offset: 152 Size: 4
	char pad_156[148];  // Offset: 156 Size: 148



 // Functions 
 public:
	void ReportPerceptionEvent(struct UObject* WorldContextObject, struct UAISenseEvent* PerceptionEvent); // Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
	void ReportEvent(struct UAISenseEvent* PerceptionEvent); // Function AIModule.AIPerceptionSystem.ReportEvent
	bool RegisterPerceptionStimuliSource(struct UObject* WorldContextObject, UAISense* Sense, struct AActor* Target); // Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
	void OnPerceptionStimuliSourceEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
	UAISense* GetSenseClassForStimulus(struct UObject* WorldContextObject, struct FAIStimulus& Stimulus); // Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
}; 
 
 


//Class AIModule.EnvQueryTest_Dot Size 576
// Inherited 504 bytes 
class UEnvQueryTest_Dot : public UEnvQueryTest
{

 public: 
	struct FEnvDirection LineA;  // Offset: 504 Size: 32
	struct FEnvDirection LineB;  // Offset: 536 Size: 32
	enum class EEnvTestDot TestMode;  // Offset: 568 Size: 1
	char pad_569_1 : 7;  // Offset: 569 Size: 1
	bool bAbsoluteValue : 1;  // Offset: 569 Size: 1
	char pad_570[6];  // Offset: 570 Size: 6



 // Functions 
 public:
}; 
 
 


//Class AIModule.AIResourceInterface Size 40
// Inherited 40 bytes 
class UAIResourceInterface : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.BlackboardKeyType_Object Size 56
// Inherited 48 bytes 
class UBlackboardKeyType_Object : public UBlackboardKeyType
{

 public: 
	UObject* BaseClass;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryContext Size 40
// Inherited 40 bytes 
class UEnvQueryContext : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.AIResource_Movement Size 56
// Inherited 56 bytes 
class UAIResource_Movement : public UGameplayTaskResource
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.AISenseConfig_Hearing Size 96
// Inherited 72 bytes 
class UAISenseConfig_Hearing : public UAISenseConfig
{

 public: 
	UAISense_Hearing* Implementation;  // Offset: 72 Size: 8
	float HearingRange;  // Offset: 80 Size: 4
	float LoSHearingRange;  // Offset: 84 Size: 4
	char bUseLoSHearing : 1;  // Offset: 88 Size: 1
	char pad_88_1 : 7;  // Offset: 88 Size: 1
	char pad_89[4];  // Offset: 89 Size: 4
	struct FAISenseAffiliationFilter DetectionByAffiliation;  // Offset: 92 Size: 4



 // Functions 
 public:
}; 
 
 


//Class AIModule.BlackboardKeyType_Class Size 56
// Inherited 48 bytes 
class UBlackboardKeyType_Class : public UBlackboardKeyType
{

 public: 
	UObject* BaseClass;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.AISense Size 128
// Inherited 40 bytes 
class UAISense : public UObject
{

 public: 
	float DefaultExpirationAge;  // Offset: 40 Size: 4
	enum class EAISenseNotifyType NotifyType;  // Offset: 44 Size: 1
	char pad_45[3];  // Offset: 45 Size: 3
	char bWantsNewPawnNotification : 1;  // Offset: 48 Size: 1
	char bAutoRegisterAllPawnsAsSources : 1;  // Offset: 48 Size: 1
	char pad_48_1 : 6;  // Offset: 48 Size: 1
	char pad_49[8];  // Offset: 49 Size: 8
	struct UAIPerceptionSystem* PerceptionSystemInstance;  // Offset: 56 Size: 8
	char pad_64[64];  // Offset: 64 Size: 64



 // Functions 
 public:
}; 
 
 


//Class AIModule.BehaviorTreeManager Size 80
// Inherited 40 bytes 
class UBehaviorTreeManager : public UObject
{

 public: 
	int32_t MaxDebuggerSteps;  // Offset: 40 Size: 4
	char pad_44[4];  // Offset: 44 Size: 4
	struct TArray<struct FBehaviorTreeTemplateInfo> LoadedTemplates;  // Offset: 48 Size: 16
	struct TArray<struct UBehaviorTreeComponent*> ActiveComponents;  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 


//Class AIModule.VisualLoggerExtension Size 40
// Inherited 40 bytes 
class UVisualLoggerExtension : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.AISense_Blueprint Size 168
// Inherited 128 bytes 
class UAISense_Blueprint : public UAISense
{

 public: 
	UUserDefinedStruct* ListenerDataType;  // Offset: 128 Size: 8
	struct TArray<struct UAIPerceptionComponent*> ListenerContainer;  // Offset: 136 Size: 16
	struct TArray<struct UAISenseEvent*> UnprocessedEvents;  // Offset: 152 Size: 16



 // Functions 
 public:
	float OnUpdate(struct TArray<struct UAISenseEvent*>& EventsToProcess); // Function AIModule.AISense_Blueprint.OnUpdate
	void OnListenerUpdated(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerUpdated
	void OnListenerUnregistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerUnregistered
	void OnListenerRegistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerRegistered
	void K2_OnNewPawn(struct APawn* NewPawn); // Function AIModule.AISense_Blueprint.K2_OnNewPawn
	void GetAllListenerComponents(struct TArray<struct UAIPerceptionComponent*>& ListenerComponents); // Function AIModule.AISense_Blueprint.GetAllListenerComponents
	void GetAllListenerActors(struct TArray<struct AActor*>& ListenerActors); // Function AIModule.AISense_Blueprint.GetAllListenerActors
}; 
 
 


//Class AIModule.AISense_Damage Size 144
// Inherited 128 bytes 
class UAISense_Damage : public UAISense
{

 public: 
	struct TArray<struct FAIDamageEvent> RegisteredEvents;  // Offset: 128 Size: 16



 // Functions 
 public:
	void ReportDamageEvent(struct UObject* WorldContextObject, struct AActor* DamagedActor, struct AActor* Instigator, float DamageAmount, struct FVector EventLocation, struct FVector HitLocation, struct FName Tag); // Function AIModule.AISense_Damage.ReportDamageEvent
}; 
 
 


//Class AIModule.AISense_Hearing Size 232
// Inherited 128 bytes 
class UAISense_Hearing : public UAISense
{

 public: 
	struct TArray<struct FAINoiseEvent> NoiseEvents;  // Offset: 128 Size: 16
	float SpeedOfSoundSq;  // Offset: 144 Size: 4
	char pad_148[84];  // Offset: 148 Size: 84



 // Functions 
 public:
	void ReportNoiseEvent(struct UObject* WorldContextObject, struct FVector NoiseLocation, float Loudness, struct AActor* Instigator, float MaxRange, struct FName Tag); // Function AIModule.AISense_Hearing.ReportNoiseEvent
}; 
 
 


//Class AIModule.AISense_Prediction Size 144
// Inherited 128 bytes 
class UAISense_Prediction : public UAISense
{

 public: 
	struct TArray<struct FAIPredictionEvent> RegisteredEvents;  // Offset: 128 Size: 16



 // Functions 
 public:
	void RequestPawnPredictionEvent(struct APawn* Requestor, struct AActor* PredictedActor, float PredictionTime); // Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
	void RequestControllerPredictionEvent(struct AAIController* Requestor, struct AActor* PredictedActor, float PredictionTime); // Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
}; 
 
 


//Class AIModule.BlackboardKeyType_Name Size 48
// Inherited 48 bytes 
class UBlackboardKeyType_Name : public UBlackboardKeyType
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.AISense_Sight Size 368
// Inherited 128 bytes 
class UAISense_Sight : public UAISense
{

 public: 
	char pad_128[200];  // Offset: 128 Size: 200
	int32_t MaxTracesPerTick;  // Offset: 328 Size: 4
	int32_t MinQueriesPerTimeSliceCheck;  // Offset: 332 Size: 4
	double MaxTimeSlicePerTick;  // Offset: 336 Size: 8
	float HighImportanceQueryDistanceThreshold;  // Offset: 344 Size: 4
	char pad_348[4];  // Offset: 348 Size: 4
	float MaxQueryImportance;  // Offset: 352 Size: 4
	float SightLimitQueryImportance;  // Offset: 356 Size: 4
	char pad_360[8];  // Offset: 360 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.AISense_Team Size 144
// Inherited 128 bytes 
class UAISense_Team : public UAISense
{

 public: 
	struct TArray<struct FAITeamStimulusEvent> RegisteredEvents;  // Offset: 128 Size: 16



 // Functions 
 public:
}; 
 
 


//Class AIModule.AISense_Touch Size 144
// Inherited 128 bytes 
class UAISense_Touch : public UAISense
{

 public: 
	struct TArray<struct FAITouchEvent> RegisteredEvents;  // Offset: 128 Size: 16



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTDecorator_CompareBBEntries Size 192
// Inherited 104 bytes 
class UBTDecorator_CompareBBEntries : public UBTDecorator
{

 public: 
	enum class EBlackBoardEntryComparison Operator;  // Offset: 104 Size: 1
	char pad_105[7];  // Offset: 105 Size: 7
	struct FBlackboardKeySelector BlackboardKeyA;  // Offset: 112 Size: 40
	struct FBlackboardKeySelector BlackboardKeyB;  // Offset: 152 Size: 40



 // Functions 
 public:
}; 
 
 


//Class AIModule.AISightTargetInterface Size 40
// Inherited 40 bytes 
class UAISightTargetInterface : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.AISenseBlueprintListener Size 264
// Inherited 264 bytes 
class UAISenseBlueprintListener : public UUserDefinedStruct
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryGenerator_PathingGrid Size 368
// Inherited 248 bytes 
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{

 public: 
	struct FAIDataProviderBoolValue PathToItem;  // Offset: 248 Size: 56
	UNavigationQueryFilter* NavigationFilter;  // Offset: 304 Size: 8
	struct FAIDataProviderFloatValue ScanRangeMultiplier;  // Offset: 312 Size: 56



 // Functions 
 public:
}; 
 
 


//Class AIModule.AISenseConfig Size 72
// Inherited 40 bytes 
class UAISenseConfig : public UObject
{

 public: 
	struct FColor DebugColor;  // Offset: 40 Size: 4
	float MaxAge;  // Offset: 44 Size: 4
	char bStartsEnabled : 1;  // Offset: 48 Size: 1
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	char pad_49[24];  // Offset: 49 Size: 24



 // Functions 
 public:
}; 
 
 


//Class AIModule.AISenseConfig_Blueprint Size 80
// Inherited 72 bytes 
class UAISenseConfig_Blueprint : public UAISenseConfig
{

 public: 
	UAISense_Blueprint* Implementation;  // Offset: 72 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.AISenseConfig_Damage Size 80
// Inherited 72 bytes 
class UAISenseConfig_Damage : public UAISenseConfig
{

 public: 
	UAISense_Damage* Implementation;  // Offset: 72 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTAuxiliaryNode Size 96
// Inherited 88 bytes 
class UBTAuxiliaryNode : public UBTNode
{

 public: 
	char pad_88[8];  // Offset: 88 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.AISenseConfig_Touch Size 72
// Inherited 72 bytes 
class UAISenseConfig_Touch : public UAISenseConfig
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.BehaviorTreeComponent Size 664
// Inherited 264 bytes 
class UBehaviorTreeComponent : public UBrainComponent
{

 public: 
	char pad_264[32];  // Offset: 264 Size: 32
	struct TArray<struct UBTNode*> NodeInstances;  // Offset: 296 Size: 16
	char pad_312[320];  // Offset: 312 Size: 320
	struct UBehaviorTree* DefaultBehaviorTreeAsset;  // Offset: 632 Size: 8
	char pad_640[24];  // Offset: 640 Size: 24



 // Functions 
 public:
	void SetDynamicSubtree(struct FGameplayTag InjectTag, struct UBehaviorTree* BehaviorAsset); // Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
	float GetTagCooldownEndTime(struct FGameplayTag CooldownTag); // Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
	void AddCooldownTagDuration(struct FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration); // Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
}; 
 
 


//Class AIModule.AITask_MoveTo Size 272
// Inherited 112 bytes 
class UAITask_MoveTo : public UAITask
{

 public: 
	struct FMulticastInlineDelegate OnRequestFailed;  // Offset: 112 Size: 16
	struct FMulticastInlineDelegate OnMoveFinished;  // Offset: 128 Size: 16
	struct FAIMoveRequest MoveRequest;  // Offset: 144 Size: 64
	char pad_208[64];  // Offset: 208 Size: 64



 // Functions 
 public:
	struct UAITask_MoveTo* AIMoveTo(struct AAIController* Controller, struct FVector GoalLocation, struct AActor* GoalActor, float AcceptanceRadius, enum class EAIOptionFlag StopOnOverlap, enum class EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, enum class EAIOptionFlag ProjectGoalOnNavigation); // Function AIModule.AITask_MoveTo.AIMoveTo
}; 
 
 


//Class AIModule.AISenseEvent Size 40
// Inherited 40 bytes 
class UAISenseEvent : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.AISenseEvent_Hearing Size 88
// Inherited 40 bytes 
class UAISenseEvent_Hearing : public UAISenseEvent
{

 public: 
	struct FAINoiseEvent Event;  // Offset: 40 Size: 48



 // Functions 
 public:
}; 
 
 


//Class AIModule.AISystem Size 304
// Inherited 88 bytes 
class UAISystem : public UAISystemBase
{

 public: 
	struct FSoftClassPath PerceptionSystemClassName;  // Offset: 88 Size: 24
	struct FSoftClassPath HotSpotManagerClassName;  // Offset: 112 Size: 24
	float AcceptanceRadius;  // Offset: 136 Size: 4
	float PathfollowingRegularPathPointAcceptanceRadius;  // Offset: 140 Size: 4
	float PathfollowingNavLinkAcceptanceRadius;  // Offset: 144 Size: 4
	char pad_148_1 : 7;  // Offset: 148 Size: 1
	bool bFinishMoveOnGoalOverlap : 1;  // Offset: 148 Size: 1
	char pad_149_1 : 7;  // Offset: 149 Size: 1
	bool bAcceptPartialPaths : 1;  // Offset: 149 Size: 1
	char pad_150_1 : 7;  // Offset: 150 Size: 1
	bool bAllowStrafing : 1;  // Offset: 150 Size: 1
	char pad_151_1 : 7;  // Offset: 151 Size: 1
	bool bEnableBTAITasks : 1;  // Offset: 151 Size: 1
	char pad_152_1 : 7;  // Offset: 152 Size: 1
	bool bAllowControllersAsEQSQuerier : 1;  // Offset: 152 Size: 1
	char pad_153_1 : 7;  // Offset: 153 Size: 1
	bool bEnableDebuggerPlugin : 1;  // Offset: 153 Size: 1
	char pad_154_1 : 7;  // Offset: 154 Size: 1
	bool bForgetStaleActors : 1;  // Offset: 154 Size: 1
	char pad_155_1 : 7;  // Offset: 155 Size: 1
	bool bAddBlackboardSelfKey : 1;  // Offset: 155 Size: 1
	enum class ECollisionChannel DefaultSightCollisionChannel;  // Offset: 156 Size: 1
	char pad_157[3];  // Offset: 157 Size: 3
	struct UBehaviorTreeManager* BehaviorTreeManager;  // Offset: 160 Size: 8
	struct UEnvQueryManager* EnvironmentQueryManager;  // Offset: 168 Size: 8
	struct UAIPerceptionSystem* PerceptionSystem;  // Offset: 176 Size: 8
	struct TArray<struct UAIAsyncTaskBlueprintProxy*> AllProxyObjects;  // Offset: 184 Size: 16
	struct UAIHotSpotManager* HotSpotManager;  // Offset: 200 Size: 8
	struct UNavLocalGridManager* NavLocalGrids;  // Offset: 208 Size: 8
	char pad_216[88];  // Offset: 216 Size: 88



 // Functions 
 public:
	void AILoggingVerbose(); // Function AIModule.AISystem.AILoggingVerbose
	void AIIgnorePlayers(); // Function AIModule.AISystem.AIIgnorePlayers
}; 
 
 


//Class AIModule.BlackboardKeyType_String Size 64
// Inherited 48 bytes 
class UBlackboardKeyType_String : public UBlackboardKeyType
{

 public: 
	struct FString StringValue;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 


//Class AIModule.AITask Size 112
// Inherited 104 bytes 
class UAITask : public UGameplayTask
{

 public: 
	struct AAIController* OwnerController;  // Offset: 104 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.AITask_LockLogic Size 112
// Inherited 112 bytes 
class UAITask_LockLogic : public UAITask
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.BehaviorTree Size 104
// Inherited 40 bytes 
class UBehaviorTree : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct UBTCompositeNode* RootNode;  // Offset: 48 Size: 8
	struct UBlackboardData* BlackboardAsset;  // Offset: 56 Size: 8
	struct TArray<struct UBTDecorator*> RootDecorators;  // Offset: 64 Size: 16
	struct TArray<struct FBTDecoratorLogic> RootDecoratorOps;  // Offset: 80 Size: 16
	char pad_96[8];  // Offset: 96 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.BrainComponent Size 264
// Inherited 176 bytes 
class UBrainComponent : public UActorComponent
{

 public: 
	char pad_176[8];  // Offset: 176 Size: 8
	struct UBlackboardComponent* BlackboardComp;  // Offset: 184 Size: 8
	struct AAIController* AIOwner;  // Offset: 192 Size: 8
	char pad_200[64];  // Offset: 200 Size: 64



 // Functions 
 public:
	void StopLogic(struct FString Reason); // Function AIModule.BrainComponent.StopLogic
	void StartLogic(); // Function AIModule.BrainComponent.StartLogic
	void RestartLogic(); // Function AIModule.BrainComponent.RestartLogic
	bool IsRunning(); // Function AIModule.BrainComponent.IsRunning
	bool IsPaused(); // Function AIModule.BrainComponent.IsPaused
}; 
 
 


//Class AIModule.BlackboardAssetProvider Size 40
// Inherited 40 bytes 
class UBlackboardAssetProvider : public UInterface
{

 public: 



 // Functions 
 public:
	struct UBlackboardData* GetBlackboardAsset(); // Function AIModule.BlackboardAssetProvider.GetBlackboardAsset
}; 
 
 


//Class AIModule.BlackboardData Size 80
// Inherited 48 bytes 
class UBlackboardData : public UDataAsset
{

 public: 
	struct UBlackboardData* Parent;  // Offset: 48 Size: 8
	struct TArray<struct FBlackboardEntry> Keys;  // Offset: 56 Size: 16
	char bHasSynchronizedKeys : 1;  // Offset: 72 Size: 1
	char pad_72_1 : 7;  // Offset: 72 Size: 1
	char pad_73[8];  // Offset: 73 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTDecorator_ReachedMoveGoal Size 104
// Inherited 104 bytes 
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.BlackboardKeyType Size 48
// Inherited 40 bytes 
class UBlackboardKeyType : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.BlackboardKeyType_Bool Size 48
// Inherited 48 bytes 
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.BlackboardKeyType_Enum Size 80
// Inherited 48 bytes 
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{

 public: 
	struct UEnum* EnumType;  // Offset: 48 Size: 8
	struct FString EnumName;  // Offset: 56 Size: 16
	char bIsEnumNameValid : 1;  // Offset: 72 Size: 1
	char pad_72_1 : 7;  // Offset: 72 Size: 1
	char pad_73[8];  // Offset: 73 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.BlackboardKeyType_NativeEnum Size 72
// Inherited 48 bytes 
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{

 public: 
	struct FString EnumName;  // Offset: 48 Size: 16
	struct UEnum* EnumType;  // Offset: 64 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.BlackboardKeyType_Vector Size 48
// Inherited 48 bytes 
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTNode Size 88
// Inherited 40 bytes 
class UBTNode : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct FString NodeName;  // Offset: 48 Size: 16
	struct UBehaviorTree* TreeAsset;  // Offset: 64 Size: 8
	struct UBTCompositeNode* ParentNode;  // Offset: 72 Size: 8
	char pad_80[8];  // Offset: 80 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryTest_Volume Size 528
// Inherited 504 bytes 
class UEnvQueryTest_Volume : public UEnvQueryTest
{

 public: 
	UEnvQueryContext* VolumeContext;  // Offset: 504 Size: 8
	AVolume* VolumeClass;  // Offset: 512 Size: 8
	char bDoComplexVolumeTest : 1;  // Offset: 520 Size: 1
	char pad_520_1 : 7;  // Offset: 520 Size: 1
	char pad_521[8];  // Offset: 521 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTCompositeNode Size 144
// Inherited 88 bytes 
class UBTCompositeNode : public UBTNode
{

 public: 
	struct TArray<struct FBTCompositeChild> Children;  // Offset: 88 Size: 16
	struct TArray<struct UBTService*> Services;  // Offset: 104 Size: 16
	char pad_120[16];  // Offset: 120 Size: 16
	char bApplyDecoratorScope : 1;  // Offset: 136 Size: 1
	char pad_136_1 : 7;  // Offset: 136 Size: 1
	char pad_137[8];  // Offset: 137 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTComposite_Selector Size 144
// Inherited 144 bytes 
class UBTComposite_Selector : public UBTCompositeNode
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTComposite_Sequence Size 144
// Inherited 144 bytes 
class UBTComposite_Sequence : public UBTCompositeNode
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTComposite_SimpleParallel Size 152
// Inherited 144 bytes 
class UBTComposite_SimpleParallel : public UBTCompositeNode
{

 public: 
	enum class EBTParallelMode FinishMode;  // Offset: 144 Size: 1
	char pad_145[7];  // Offset: 145 Size: 7



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTDecorator Size 104
// Inherited 96 bytes 
class UBTDecorator : public UBTAuxiliaryNode
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	char bInverseCondition : 1;  // Offset: 96 Size: 1
	char pad_97[3];  // Offset: 97 Size: 3
	enum class EBTFlowAbortMode FlowAbortMode;  // Offset: 100 Size: 1
	char pad_101[3];  // Offset: 101 Size: 3



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTDecorator_BlackboardBase Size 144
// Inherited 104 bytes 
class UBTDecorator_BlackboardBase : public UBTDecorator
{

 public: 
	struct FBlackboardKeySelector BlackboardKey;  // Offset: 104 Size: 40



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTDecorator_Blackboard Size 192
// Inherited 144 bytes 
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{

 public: 
	int32_t IntValue;  // Offset: 144 Size: 4
	float FloatValue;  // Offset: 148 Size: 4
	struct FString StringValue;  // Offset: 152 Size: 16
	struct FString CachedDescription;  // Offset: 168 Size: 16
	char OperationType;  // Offset: 184 Size: 1
	enum class EBTBlackboardRestart NotifyObserver;  // Offset: 185 Size: 1
	char pad_186[6];  // Offset: 186 Size: 6



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryGenerator Size 80
// Inherited 48 bytes 
class UEnvQueryGenerator : public UEnvQueryNode
{

 public: 
	struct FString optionName;  // Offset: 48 Size: 16
	UEnvQueryItemType* ItemType;  // Offset: 64 Size: 8
	char bAutoSortTests : 1;  // Offset: 72 Size: 1
	char pad_72_1 : 7;  // Offset: 72 Size: 1
	char pad_73[8];  // Offset: 73 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTDecorator_ConditionalLoop Size 192
// Inherited 192 bytes 
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTDecorator_ConeCheck Size 240
// Inherited 104 bytes 
class UBTDecorator_ConeCheck : public UBTDecorator
{

 public: 
	float ConeHalfAngle;  // Offset: 104 Size: 4
	char pad_108[4];  // Offset: 108 Size: 4
	struct FBlackboardKeySelector ConeOrigin;  // Offset: 112 Size: 40
	struct FBlackboardKeySelector ConeDirection;  // Offset: 152 Size: 40
	struct FBlackboardKeySelector Observed;  // Offset: 192 Size: 40
	char pad_232[8];  // Offset: 232 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryItemType_Point Size 48
// Inherited 48 bytes 
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTDecorator_Cooldown Size 112
// Inherited 104 bytes 
class UBTDecorator_Cooldown : public UBTDecorator
{

 public: 
	float CoolDownTime;  // Offset: 104 Size: 4
	char pad_108[4];  // Offset: 108 Size: 4



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTDecorator_DoesPathExist Size 200
// Inherited 104 bytes 
class UBTDecorator_DoesPathExist : public UBTDecorator
{

 public: 
	struct FBlackboardKeySelector BlackboardKeyA;  // Offset: 104 Size: 40
	struct FBlackboardKeySelector BlackboardKeyB;  // Offset: 144 Size: 40
	char bUseSelf : 1;  // Offset: 184 Size: 1
	char pad_184_1 : 7;  // Offset: 184 Size: 1
	char pad_185[4];  // Offset: 185 Size: 4
	enum class EPathExistanceQueryType PathQueryType;  // Offset: 188 Size: 1
	char pad_189[3];  // Offset: 189 Size: 3
	UNavigationQueryFilter* FilterClass;  // Offset: 192 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTDecorator_ForceSuccess Size 104
// Inherited 104 bytes 
class UBTDecorator_ForceSuccess : public UBTDecorator
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTDecorator_IsAtLocation Size 216
// Inherited 144 bytes 
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{

 public: 
	float AcceptableRadius;  // Offset: 144 Size: 4
	char pad_148[4];  // Offset: 148 Size: 4
	struct FAIDataProviderFloatValue ParametrizedAcceptableRadius;  // Offset: 152 Size: 56
	enum class FAIDistanceType GeometricDistanceType;  // Offset: 208 Size: 1
	char pad_209[3];  // Offset: 209 Size: 3
	char bUseParametrizedRadius : 1;  // Offset: 212 Size: 1
	char bUseNavAgentGoalLocation : 1;  // Offset: 212 Size: 1
	char bPathFindingBasedTest : 1;  // Offset: 212 Size: 1
	char pad_212_1 : 5;  // Offset: 212 Size: 1
	char pad_213[4];  // Offset: 213 Size: 4



 // Functions 
 public:
}; 
 
 


//Class AIModule.CrowdManager Size 240
// Inherited 40 bytes 
class UCrowdManager : public UCrowdManagerBase
{

 public: 
	struct ANavigationData* MyNavData;  // Offset: 40 Size: 8
	struct TArray<struct FCrowdAvoidanceConfig> AvoidanceConfig;  // Offset: 48 Size: 16
	struct TArray<struct FCrowdAvoidanceSamplingPattern> SamplingPatterns;  // Offset: 64 Size: 16
	int32_t MaxAgents;  // Offset: 80 Size: 4
	float MaxAgentRadius;  // Offset: 84 Size: 4
	int32_t MaxAvoidedAgents;  // Offset: 88 Size: 4
	int32_t MaxAvoidedWalls;  // Offset: 92 Size: 4
	float NavmeshCheckInterval;  // Offset: 96 Size: 4
	float PathOptimizationInterval;  // Offset: 100 Size: 4
	float SeparationDirClamp;  // Offset: 104 Size: 4
	float PathOffsetRadiusMultiplier;  // Offset: 108 Size: 4
	char pad_112_1 : 4;  // Offset: 112 Size: 1
	char bResolveCollisions : 1;  // Offset: 112 Size: 1
	char pad_112_2 : 3;  // Offset: 112 Size: 1
	char pad_113[128];  // Offset: 113 Size: 128



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTDecorator_IsBBEntryOfClass Size 152
// Inherited 144 bytes 
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{

 public: 
	UObject* TestClass;  // Offset: 144 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTDecorator_KeepInCone Size 200
// Inherited 104 bytes 
class UBTDecorator_KeepInCone : public UBTDecorator
{

 public: 
	float ConeHalfAngle;  // Offset: 104 Size: 4
	char pad_108[4];  // Offset: 108 Size: 4
	struct FBlackboardKeySelector ConeOrigin;  // Offset: 112 Size: 40
	struct FBlackboardKeySelector Observed;  // Offset: 152 Size: 40
	char bUseSelfAsOrigin : 1;  // Offset: 192 Size: 1
	char bUseSelfAsObserved : 1;  // Offset: 192 Size: 1
	char pad_192_1 : 6;  // Offset: 192 Size: 1
	char pad_193[8];  // Offset: 193 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTDecorator_Loop Size 120
// Inherited 104 bytes 
class UBTDecorator_Loop : public UBTDecorator
{

 public: 
	int32_t NumLoops;  // Offset: 104 Size: 4
	char pad_108_1 : 7;  // Offset: 108 Size: 1
	bool bInfiniteLoop : 1;  // Offset: 108 Size: 1
	char pad_109[3];  // Offset: 109 Size: 3
	float InfiniteLoopTimeoutTime;  // Offset: 112 Size: 4
	char pad_116[4];  // Offset: 116 Size: 4



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTDecorator_SetTagCooldown Size 120
// Inherited 104 bytes 
class UBTDecorator_SetTagCooldown : public UBTDecorator
{

 public: 
	struct FGameplayTag CooldownTag;  // Offset: 104 Size: 8
	float CooldownDuration;  // Offset: 112 Size: 4
	char pad_116_1 : 7;  // Offset: 116 Size: 1
	bool bAddToExistingDuration : 1;  // Offset: 116 Size: 1
	char pad_117[3];  // Offset: 117 Size: 3



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTDecorator_TimeLimit Size 112
// Inherited 104 bytes 
class UBTDecorator_TimeLimit : public UBTDecorator
{

 public: 
	float TimeLimit;  // Offset: 104 Size: 4
	char pad_108[4];  // Offset: 108 Size: 4



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTFunctionLibrary Size 40
// Inherited 40 bytes 
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	void StopUsingExternalEvent(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
	void StartUsingExternalEvent(struct UBTNode* NodeOwner, struct AActor* OwningActor); // Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
	void SetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FVector Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
	void SetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FString Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
	void SetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FRotator Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
	void SetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct UObject* Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
	void SetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FName Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
	void SetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, int32_t Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
	void SetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, float Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
	void SetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, char Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
	void SetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, UObject* Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
	void SetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, bool Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
	struct UBlackboardComponent* GetOwnersBlackboard(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
	struct UBehaviorTreeComponent* GetOwnerComponent(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.GetOwnerComponent
	struct FVector GetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
	struct FString GetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
	struct FRotator GetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
	struct UObject* GetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
	struct FName GetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
	int32_t GetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
	float GetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
	char GetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
	UObject* GetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
	bool GetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
	struct AActor* GetBlackboardValueAsActor(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
	void ClearBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
	void ClearBlackboardValue(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.ClearBlackboardValue
}; 
 
 


//Class AIModule.BTService Size 112
// Inherited 96 bytes 
class UBTService : public UBTAuxiliaryNode
{

 public: 
	float Interval;  // Offset: 96 Size: 4
	float RandomDeviation;  // Offset: 100 Size: 4
	char bCallTickOnSearchStart : 1;  // Offset: 104 Size: 1
	char bRestartTimerOnEachActivation : 1;  // Offset: 104 Size: 1
	char pad_104_1 : 6;  // Offset: 104 Size: 1
	char pad_105[8];  // Offset: 105 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTService_BlackboardBase Size 152
// Inherited 112 bytes 
class UBTService_BlackboardBase : public UBTService
{

 public: 
	struct FBlackboardKeySelector BlackboardKey;  // Offset: 112 Size: 40



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTService_BlueprintBase Size 152
// Inherited 112 bytes 
class UBTService_BlueprintBase : public UBTService
{

 public: 
	struct AAIController* AIOwner;  // Offset: 112 Size: 8
	struct AActor* ActorOwner;  // Offset: 120 Size: 8
	char pad_128[16];  // Offset: 128 Size: 16
	char bShowPropertyDetails : 1;  // Offset: 144 Size: 1
	char bShowEventDetails : 1;  // Offset: 144 Size: 1
	char pad_144_1 : 6;  // Offset: 144 Size: 1
	char pad_145[8];  // Offset: 145 Size: 8



 // Functions 
 public:
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTService_BlueprintBase.ReceiveTickAI
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTService_BlueprintBase.ReceiveTick
	void ReceiveSearchStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
	void ReceiveSearchStart(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
	void ReceiveDeactivation(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
	void ReceiveActivation(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveActivation
	bool IsServiceActive(); // Function AIModule.BTService_BlueprintBase.IsServiceActive
}; 
 
 


//Class AIModule.BTService_DefaultFocus Size 160
// Inherited 152 bytes 
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{

 public: 
	char FocusPriority;  // Offset: 152 Size: 1
	char pad_153[7];  // Offset: 153 Size: 7



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTService_RunEQS Size 240
// Inherited 152 bytes 
class UBTService_RunEQS : public UBTService_BlackboardBase
{

 public: 
	struct FEQSParametrizedQueryExecutionRequest EQSRequest;  // Offset: 152 Size: 72
	char pad_224[16];  // Offset: 224 Size: 16



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTTaskNode Size 112
// Inherited 88 bytes 
class UBTTaskNode : public UBTNode
{

 public: 
	struct TArray<struct UBTService*> Services;  // Offset: 88 Size: 16
	char bIgnoreRestartSelf : 1;  // Offset: 104 Size: 1
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	char pad_105[8];  // Offset: 105 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTTask_BlackboardBase Size 152
// Inherited 112 bytes 
class UBTTask_BlackboardBase : public UBTTaskNode
{

 public: 
	struct FBlackboardKeySelector BlackboardKey;  // Offset: 112 Size: 40



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTTask_BlueprintBase Size 168
// Inherited 112 bytes 
class UBTTask_BlueprintBase : public UBTTaskNode
{

 public: 
	struct AAIController* AIOwner;  // Offset: 112 Size: 8
	struct AActor* ActorOwner;  // Offset: 120 Size: 8
	struct FIntervalCountdown TickInterval;  // Offset: 128 Size: 8
	char pad_136[24];  // Offset: 136 Size: 24
	char bShowPropertyDetails : 1;  // Offset: 160 Size: 1
	char pad_160_1 : 7;  // Offset: 160 Size: 1
	char pad_161[8];  // Offset: 161 Size: 8



 // Functions 
 public:
	void SetFinishOnMessageWithId(struct FName MessageName, int32_t RequestID); // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
	void SetFinishOnMessage(struct FName MessageName); // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTTask_BlueprintBase.ReceiveTick
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
	void ReceiveExecute(struct AActor* OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveExecute
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
	void ReceiveAbort(struct AActor* OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveAbort
	bool IsTaskExecuting(); // Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
	bool IsTaskAborting(); // Function AIModule.BTTask_BlueprintBase.IsTaskAborting
	void FinishExecute(bool bSuccess); // Function AIModule.BTTask_BlueprintBase.FinishExecute
	void FinishAbort(); // Function AIModule.BTTask_BlueprintBase.FinishAbort
}; 
 
 


//Class AIModule.BTTask_FinishWithResult Size 120
// Inherited 112 bytes 
class UBTTask_FinishWithResult : public UBTTaskNode
{

 public: 
	enum class EBTNodeResult Result;  // Offset: 112 Size: 1
	char pad_113[7];  // Offset: 113 Size: 7



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTTask_GameplayTaskBase Size 120
// Inherited 112 bytes 
class UBTTask_GameplayTaskBase : public UBTTaskNode
{

 public: 
	char bWaitForGameplayTask : 1;  // Offset: 112 Size: 1
	char pad_112_1 : 7;  // Offset: 112 Size: 1
	char pad_113[8];  // Offset: 113 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryInstanceBlueprintWrapper Size 120
// Inherited 40 bytes 
class UEnvQueryInstanceBlueprintWrapper : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	int32_t QueryID;  // Offset: 48 Size: 4
	char pad_52[36];  // Offset: 52 Size: 36
	UEnvQueryItemType* ItemType;  // Offset: 88 Size: 8
	int32_t OptionIndex;  // Offset: 96 Size: 4
	char pad_100[4];  // Offset: 100 Size: 4
	struct FMulticastInlineDelegate OnQueryFinishedEvent;  // Offset: 104 Size: 16



 // Functions 
 public:
	void SetNamedParam(struct FName ParamName, float Value); // Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
	struct TArray<struct FVector> GetResultsAsLocations(); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
	struct TArray<struct AActor*> GetResultsAsActors(); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
	bool GetQueryResultsAsLocations(struct TArray<struct FVector>& ResultLocations); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
	bool GetQueryResultsAsActors(struct TArray<struct AActor*>& ResultActors); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
	float GetItemScore(int32_t ItemIndex); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
	void EQSQueryDoneSignature__DelegateSignature(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
}; 
 
 


//Class AIModule.BTTask_MakeNoise Size 120
// Inherited 112 bytes 
class UBTTask_MakeNoise : public UBTTaskNode
{

 public: 
	float Loudnes;  // Offset: 112 Size: 4
	char pad_116[4];  // Offset: 116 Size: 4



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTTask_MoveTo Size 176
// Inherited 152 bytes 
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{

 public: 
	float AcceptableRadius;  // Offset: 152 Size: 4
	char pad_156[4];  // Offset: 156 Size: 4
	UNavigationQueryFilter* FilterClass;  // Offset: 160 Size: 8
	float ObservedBlackboardValueTolerance;  // Offset: 168 Size: 4
	char bObserveBlackboardValue : 1;  // Offset: 172 Size: 1
	char bAllowStrafe : 1;  // Offset: 172 Size: 1
	char bAllowPartialPath : 1;  // Offset: 172 Size: 1
	char bTrackMovingGoal : 1;  // Offset: 172 Size: 1
	char bProjectGoalLocation : 1;  // Offset: 172 Size: 1
	char bReachTestIncludesAgentRadius : 1;  // Offset: 172 Size: 1
	char bReachTestIncludesGoalRadius : 1;  // Offset: 172 Size: 1
	char bStopOnOverlap : 1;  // Offset: 172 Size: 1
	char bStopOnOverlapNeedsUpdate : 1;  // Offset: 173 Size: 1
	char pad_173_1 : 7;  // Offset: 173 Size: 1
	char pad_174[3];  // Offset: 174 Size: 3



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTTask_MoveDirectlyToward Size 184
// Inherited 176 bytes 
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{

 public: 
	char bDisablePathUpdateOnGoalLocationChange : 1;  // Offset: 176 Size: 1
	char bProjectVectorGoalToNavigation : 1;  // Offset: 176 Size: 1
	char bUpdatedDeprecatedProperties : 1;  // Offset: 176 Size: 1
	char pad_176_1 : 5;  // Offset: 176 Size: 1
	char pad_177[8];  // Offset: 177 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTTask_PlaySound Size 120
// Inherited 112 bytes 
class UBTTask_PlaySound : public UBTTaskNode
{

 public: 
	struct USoundCue* SoundToPlay;  // Offset: 112 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTTask_PawnActionBase Size 112
// Inherited 112 bytes 
class UBTTask_PawnActionBase : public UBTTaskNode
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTTask_PlayAnimation Size 176
// Inherited 112 bytes 
class UBTTask_PlayAnimation : public UBTTaskNode
{

 public: 
	struct UAnimationAsset* AnimationToPlay;  // Offset: 112 Size: 8
	char bLooping : 1;  // Offset: 120 Size: 1
	char bNonBlocking : 1;  // Offset: 120 Size: 1
	char pad_120_1 : 6;  // Offset: 120 Size: 1
	char pad_121[8];  // Offset: 121 Size: 8
	struct UBehaviorTreeComponent* MyOwnerComp;  // Offset: 128 Size: 8
	struct USkeletalMeshComponent* CachedSkelMesh;  // Offset: 136 Size: 8
	char pad_144[32];  // Offset: 144 Size: 32



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTTask_PushPawnAction Size 120
// Inherited 112 bytes 
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{

 public: 
	struct UPawnAction* Action;  // Offset: 112 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTTask_RotateToFaceBBEntry Size 160
// Inherited 152 bytes 
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{

 public: 
	float Precision;  // Offset: 152 Size: 4
	char pad_156[4];  // Offset: 156 Size: 4



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTTask_RunBehavior Size 120
// Inherited 112 bytes 
class UBTTask_RunBehavior : public UBTTaskNode
{

 public: 
	struct UBehaviorTree* BehaviorAsset;  // Offset: 112 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTTask_RunBehaviorDynamic Size 136
// Inherited 112 bytes 
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{

 public: 
	struct FGameplayTag InjectionTag;  // Offset: 112 Size: 8
	struct UBehaviorTree* DefaultBehaviorAsset;  // Offset: 120 Size: 8
	struct UBehaviorTree* BehaviorAsset;  // Offset: 128 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTTask_RunEQSQuery Size 336
// Inherited 152 bytes 
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{

 public: 
	struct UEnvQuery* QueryTemplate;  // Offset: 152 Size: 8
	struct TArray<struct FEnvNamedValue> QueryParams;  // Offset: 160 Size: 16
	struct TArray<struct FAIDynamicParam> QueryConfig;  // Offset: 176 Size: 16
	enum class EEnvQueryRunMode RunMode;  // Offset: 192 Size: 1
	char pad_193[7];  // Offset: 193 Size: 7
	struct FBlackboardKeySelector EQSQueryBlackboardKey;  // Offset: 200 Size: 40
	char pad_240_1 : 7;  // Offset: 240 Size: 1
	bool bUseBBKey : 1;  // Offset: 240 Size: 1
	char pad_241[7];  // Offset: 241 Size: 7
	struct FEQSParametrizedQueryExecutionRequest EQSRequest;  // Offset: 248 Size: 72
	char pad_320[16];  // Offset: 320 Size: 16



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTTask_SetTagCooldown Size 128
// Inherited 112 bytes 
class UBTTask_SetTagCooldown : public UBTTaskNode
{

 public: 
	struct FGameplayTag CooldownTag;  // Offset: 112 Size: 8
	char pad_120_1 : 7;  // Offset: 120 Size: 1
	bool bAddToExistingDuration : 1;  // Offset: 120 Size: 1
	char pad_121[3];  // Offset: 121 Size: 3
	float CooldownDuration;  // Offset: 124 Size: 4



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTTask_Wait Size 120
// Inherited 112 bytes 
class UBTTask_Wait : public UBTTaskNode
{

 public: 
	float WaitTime;  // Offset: 112 Size: 4
	float RandomDeviation;  // Offset: 116 Size: 4



 // Functions 
 public:
}; 
 
 


//Class AIModule.BTTask_WaitBlackboardTime Size 160
// Inherited 120 bytes 
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{

 public: 
	struct FBlackboardKeySelector BlackboardKey;  // Offset: 120 Size: 40



 // Functions 
 public:
}; 
 
 


//Class AIModule.CrowdAgentInterface Size 40
// Inherited 40 bytes 
class UCrowdAgentInterface : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.PathFollowingComponent Size 592
// Inherited 176 bytes 
class UPathFollowingComponent : public UActorComponent
{

 public: 
	char pad_176[56];  // Offset: 176 Size: 56
	struct UNavMovementComponent* MovementComp;  // Offset: 232 Size: 8
	char pad_240[8];  // Offset: 240 Size: 8
	struct ANavigationData* MyNavData;  // Offset: 248 Size: 8
	char pad_256[336];  // Offset: 256 Size: 336



 // Functions 
 public:
	void OnNavDataRegistered(struct ANavigationData* NavData); // Function AIModule.PathFollowingComponent.OnNavDataRegistered
	void OnActorBump(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function AIModule.PathFollowingComponent.OnActorBump
	struct FVector GetPathDestination(); // Function AIModule.PathFollowingComponent.GetPathDestination
	enum class EPathFollowingAction GetPathActionType(); // Function AIModule.PathFollowingComponent.GetPathActionType
}; 
 
 


//Class AIModule.CrowdFollowingComponent Size 664
// Inherited 592 bytes 
class UCrowdFollowingComponent : public UPathFollowingComponent
{

 public: 
	char pad_592[24];  // Offset: 592 Size: 24
	struct FVector CrowdAgentMoveDirection;  // Offset: 616 Size: 12
	char pad_628[36];  // Offset: 628 Size: 36



 // Functions 
 public:
	void SuspendCrowdSteering(bool bSuspend); // Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
}; 
 
 


//Class AIModule.DetourCrowdAIController Size 808
// Inherited 808 bytes 
class ADetourCrowdAIController : public AAIController
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQuery Size 72
// Inherited 48 bytes 
class UEnvQuery : public UDataAsset
{

 public: 
	struct FName QueryName;  // Offset: 48 Size: 8
	struct TArray<struct UEnvQueryOption*> Options;  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryContext_BlueprintBase Size 48
// Inherited 40 bytes 
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
	void ProvideSingleLocation(struct UObject* QuerierObject, struct AActor* QuerierActor, struct FVector& ResultingLocation); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
	void ProvideSingleActor(struct UObject* QuerierObject, struct AActor* QuerierActor, struct AActor*& ResultingActor); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
	void ProvideLocationsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct FVector>& ResultingLocationSet); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
	void ProvideActorsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct AActor*>& ResultingActorsSet); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
}; 
 
 


//Class AIModule.EnvQueryContext_Item Size 40
// Inherited 40 bytes 
class UEnvQueryContext_Item : public UEnvQueryContext
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryContext_Querier Size 40
// Inherited 40 bytes 
class UEnvQueryContext_Querier : public UEnvQueryContext
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryDebugHelpers Size 40
// Inherited 40 bytes 
class UEnvQueryDebugHelpers : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryNode Size 48
// Inherited 40 bytes 
class UEnvQueryNode : public UObject
{

 public: 
	int32_t VerNum;  // Offset: 40 Size: 4
	char pad_44[4];  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryGenerator_ActorsOfClass Size 208
// Inherited 80 bytes 
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{

 public: 
	AActor* SearchedActorClass;  // Offset: 80 Size: 8
	struct FAIDataProviderBoolValue GenerateOnlyActorsInRadius;  // Offset: 88 Size: 56
	struct FAIDataProviderFloatValue SearchRadius;  // Offset: 144 Size: 56
	UEnvQueryContext* SearchCenter;  // Offset: 200 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryGenerator_BlueprintBase Size 128
// Inherited 80 bytes 
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{

 public: 
	struct FText GeneratorsActionDescription;  // Offset: 80 Size: 24
	UEnvQueryContext* Context;  // Offset: 104 Size: 8
	UEnvQueryItemType* GeneratedItemType;  // Offset: 112 Size: 8
	char pad_120[8];  // Offset: 120 Size: 8



 // Functions 
 public:
	struct UObject* GetQuerier(); // Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
	void DoItemGeneration(struct TArray<struct FVector>& ContextLocations); // Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
	void AddGeneratedVector(struct FVector GeneratedVector); // Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
	void AddGeneratedActor(struct AActor* GeneratedActor); // Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
}; 
 
 


//Class AIModule.EnvQueryGenerator_Composite Size 112
// Inherited 80 bytes 
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{

 public: 
	struct TArray<struct UEnvQueryGenerator*> Generators;  // Offset: 80 Size: 16
	char bAllowDifferentItemTypes : 1;  // Offset: 96 Size: 1
	char bHasMatchingItemType : 1;  // Offset: 96 Size: 1
	char pad_96_1 : 6;  // Offset: 96 Size: 1
	char pad_97[8];  // Offset: 97 Size: 8
	UEnvQueryItemType* ForcedItemType;  // Offset: 104 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryGenerator_Cone Size 368
// Inherited 128 bytes 
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{

 public: 
	struct FAIDataProviderFloatValue AlignedPointsDistance;  // Offset: 128 Size: 56
	struct FAIDataProviderFloatValue ConeDegrees;  // Offset: 184 Size: 56
	struct FAIDataProviderFloatValue AngleStep;  // Offset: 240 Size: 56
	struct FAIDataProviderFloatValue Range;  // Offset: 296 Size: 56
	UEnvQueryContext* CenterActor;  // Offset: 352 Size: 8
	char bIncludeContextLocation : 1;  // Offset: 360 Size: 1
	char pad_360_1 : 7;  // Offset: 360 Size: 1
	char pad_361[8];  // Offset: 361 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryGenerator_CurrentLocation Size 88
// Inherited 80 bytes 
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{

 public: 
	UEnvQueryContext* QueryContext;  // Offset: 80 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryGenerator_Donut Size 464
// Inherited 128 bytes 
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{

 public: 
	struct FAIDataProviderFloatValue InnerRadius;  // Offset: 128 Size: 56
	struct FAIDataProviderFloatValue OuterRadius;  // Offset: 184 Size: 56
	struct FAIDataProviderIntValue NumberOfRings;  // Offset: 240 Size: 56
	struct FAIDataProviderIntValue PointsPerRing;  // Offset: 296 Size: 56
	struct FEnvDirection ArcDirection;  // Offset: 352 Size: 32
	struct FAIDataProviderFloatValue ArcAngle;  // Offset: 384 Size: 56
	char pad_440_1 : 7;  // Offset: 440 Size: 1
	bool bUseSpiralPattern : 1;  // Offset: 440 Size: 1
	char pad_441[7];  // Offset: 441 Size: 7
	UEnvQueryContext* Center;  // Offset: 448 Size: 8
	char bDefineArc : 1;  // Offset: 456 Size: 1
	char pad_456_1 : 7;  // Offset: 456 Size: 1
	char pad_457[8];  // Offset: 457 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryGenerator_OnCircle Size 528
// Inherited 128 bytes 
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{

 public: 
	struct FAIDataProviderFloatValue CircleRadius;  // Offset: 128 Size: 56
	struct FAIDataProviderFloatValue SpaceBetween;  // Offset: 184 Size: 56
	struct FAIDataProviderIntValue NumberOfPoints;  // Offset: 240 Size: 56
	enum class EPointOnCircleSpacingMethod PointOnCircleSpacingMethod;  // Offset: 296 Size: 1
	char pad_297[7];  // Offset: 297 Size: 7
	struct FEnvDirection ArcDirection;  // Offset: 304 Size: 32
	struct FAIDataProviderFloatValue ArcAngle;  // Offset: 336 Size: 56
	float AngleRadians;  // Offset: 392 Size: 4
	char pad_396[4];  // Offset: 396 Size: 4
	UEnvQueryContext* CircleCenter;  // Offset: 400 Size: 8
	char pad_408_1 : 7;  // Offset: 408 Size: 1
	bool bIgnoreAnyContextActorsWhenGeneratingCircle : 1;  // Offset: 408 Size: 1
	char pad_409[7];  // Offset: 409 Size: 7
	struct FAIDataProviderFloatValue CircleCenterZOffset;  // Offset: 416 Size: 56
	struct FEnvTraceData TraceData;  // Offset: 472 Size: 48
	char bDefineArc : 1;  // Offset: 520 Size: 1
	char pad_520_1 : 7;  // Offset: 520 Size: 1
	char pad_521[8];  // Offset: 521 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryGenerator_SimpleGrid Size 248
// Inherited 128 bytes 
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{

 public: 
	struct FAIDataProviderFloatValue GridSize;  // Offset: 128 Size: 56
	struct FAIDataProviderFloatValue SpaceBetween;  // Offset: 184 Size: 56
	UEnvQueryContext* GenerateAround;  // Offset: 240 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryItemType Size 48
// Inherited 40 bytes 
class UEnvQueryItemType : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryItemType_VectorBase Size 48
// Inherited 48 bytes 
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryItemType_ActorBase Size 48
// Inherited 48 bytes 
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryItemType_Actor Size 48
// Inherited 48 bytes 
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryItemType_Direction Size 48
// Inherited 48 bytes 
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryManager Size 320
// Inherited 56 bytes 
class UEnvQueryManager : public UAISubsystem
{

 public: 
	char pad_56[112];  // Offset: 56 Size: 112
	struct TArray<struct FEnvQueryInstanceCache> InstanceCache;  // Offset: 168 Size: 16
	struct TArray<struct UEnvQueryContext*> LocalContexts;  // Offset: 184 Size: 16
	struct TArray<struct UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers;  // Offset: 200 Size: 16
	char pad_216[84];  // Offset: 216 Size: 84
	float MaxAllowedTestingTime;  // Offset: 300 Size: 4
	char pad_304_1 : 7;  // Offset: 304 Size: 1
	bool bTestQueriesUsingBreadth : 1;  // Offset: 304 Size: 1
	char pad_305[3];  // Offset: 305 Size: 3
	int32_t QueryCountWarningThreshold;  // Offset: 308 Size: 4
	double QueryCountWarningInterval;  // Offset: 312 Size: 8



 // Functions 
 public:
	struct UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(struct UObject* WorldContextObject, struct UEnvQuery* QueryTemplate, struct UObject* Querier, enum class EEnvQueryRunMode RunMode, UEnvQueryInstanceBlueprintWrapper* WrapperClass); // Function AIModule.EnvQueryManager.RunEQSQuery
}; 
 
 


//Class AIModule.EnvQueryOption Size 64
// Inherited 40 bytes 
class UEnvQueryOption : public UObject
{

 public: 
	struct UEnvQueryGenerator* Generator;  // Offset: 40 Size: 8
	struct TArray<struct UEnvQueryTest*> Tests;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryTest Size 504
// Inherited 48 bytes 
class UEnvQueryTest : public UEnvQueryNode
{

 public: 
	int32_t TestOrder;  // Offset: 48 Size: 4
	enum class EEnvTestPurpose TestPurpose;  // Offset: 52 Size: 1
	char pad_53[3];  // Offset: 53 Size: 3
	struct FString TestComment;  // Offset: 56 Size: 16
	enum class EEnvTestFilterOperator MultipleContextFilterOp;  // Offset: 72 Size: 1
	enum class EEnvTestScoreOperator MultipleContextScoreOp;  // Offset: 73 Size: 1
	enum class EEnvTestFilterType FilterType;  // Offset: 74 Size: 1
	char pad_75[5];  // Offset: 75 Size: 5
	struct FAIDataProviderBoolValue BoolValue;  // Offset: 80 Size: 56
	struct FAIDataProviderFloatValue FloatValueMin;  // Offset: 136 Size: 56
	struct FAIDataProviderFloatValue FloatValueMax;  // Offset: 192 Size: 56
	char pad_248[1];  // Offset: 248 Size: 1
	enum class EEnvTestScoreEquation ScoringEquation;  // Offset: 249 Size: 1
	enum class EEnvQueryTestClamping ClampMinType;  // Offset: 250 Size: 1
	enum class EEnvQueryTestClamping ClampMaxType;  // Offset: 251 Size: 1
	enum class EEQSNormalizationType NormalizationType;  // Offset: 252 Size: 1
	char pad_253[3];  // Offset: 253 Size: 3
	struct FAIDataProviderFloatValue ScoreClampMin;  // Offset: 256 Size: 56
	struct FAIDataProviderFloatValue ScoreClampMax;  // Offset: 312 Size: 56
	struct FAIDataProviderFloatValue ScoringFactor;  // Offset: 368 Size: 56
	struct FAIDataProviderFloatValue ReferenceValue;  // Offset: 424 Size: 56
	char pad_480_1 : 7;  // Offset: 480 Size: 1
	bool bDefineReferenceValue : 1;  // Offset: 480 Size: 1
	char pad_481[15];  // Offset: 481 Size: 15
	char bWorkOnFloatValues : 1;  // Offset: 496 Size: 1
	char pad_496_1 : 7;  // Offset: 496 Size: 1
	char pad_497[8];  // Offset: 497 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryTest_Distance Size 520
// Inherited 504 bytes 
class UEnvQueryTest_Distance : public UEnvQueryTest
{

 public: 
	enum class EEnvTestDistance TestMode;  // Offset: 504 Size: 1
	char pad_505[7];  // Offset: 505 Size: 7
	UEnvQueryContext* DistanceTo;  // Offset: 512 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryTest_GameplayTags Size 616
// Inherited 504 bytes 
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{

 public: 
	struct FGameplayTagQuery TagQueryToMatch;  // Offset: 504 Size: 72
	char pad_576_1 : 7;  // Offset: 576 Size: 1
	bool bUpdatedToUseQuery : 1;  // Offset: 576 Size: 1
	enum class EGameplayContainerMatchType TagsToMatch;  // Offset: 577 Size: 1
	char pad_578[6];  // Offset: 578 Size: 6
	struct FGameplayTagContainer GameplayTags;  // Offset: 584 Size: 32



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryTest_Overlap Size 536
// Inherited 504 bytes 
class UEnvQueryTest_Overlap : public UEnvQueryTest
{

 public: 
	struct FEnvOverlapData OverlapData;  // Offset: 504 Size: 32



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryTest_Pathfinding Size 640
// Inherited 504 bytes 
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{

 public: 
	enum class EEnvTestPathfinding TestMode;  // Offset: 504 Size: 1
	char pad_505[7];  // Offset: 505 Size: 7
	UEnvQueryContext* Context;  // Offset: 512 Size: 8
	struct FAIDataProviderBoolValue PathFromContext;  // Offset: 520 Size: 56
	struct FAIDataProviderBoolValue SkipUnreachable;  // Offset: 576 Size: 56
	UNavigationQueryFilter* FilterClass;  // Offset: 632 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryTest_PathfindingBatch Size 696
// Inherited 640 bytes 
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{

 public: 
	struct FAIDataProviderFloatValue ScanRangeMultiplier;  // Offset: 640 Size: 56



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryTest_Project Size 552
// Inherited 504 bytes 
class UEnvQueryTest_Project : public UEnvQueryTest
{

 public: 
	struct FEnvTraceData ProjectionData;  // Offset: 504 Size: 48



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryTest_Random Size 504
// Inherited 504 bytes 
class UEnvQueryTest_Random : public UEnvQueryTest
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryTest_Trace Size 728
// Inherited 504 bytes 
class UEnvQueryTest_Trace : public UEnvQueryTest
{

 public: 
	struct FEnvTraceData TraceData;  // Offset: 504 Size: 48
	struct FAIDataProviderBoolValue TraceFromContext;  // Offset: 552 Size: 56
	struct FAIDataProviderFloatValue ItemHeightOffset;  // Offset: 608 Size: 56
	struct FAIDataProviderFloatValue ContextHeightOffset;  // Offset: 664 Size: 56
	UEnvQueryContext* Context;  // Offset: 720 Size: 8



 // Functions 
 public:
}; 
 
 


//Class AIModule.EnvQueryTypes Size 40
// Inherited 40 bytes 
class UEnvQueryTypes : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.EQSQueryResultSourceInterface Size 40
// Inherited 40 bytes 
class UEQSQueryResultSourceInterface : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.EQSRenderingComponent Size 1200
// Inherited 1136 bytes 
class UEQSRenderingComponent : public UPrimitiveComponent
{

 public: 
	char pad_1136[64];  // Offset: 1136 Size: 64



 // Functions 
 public:
}; 
 
 


//Class AIModule.EQSTestingPawn Size 1360
// Inherited 1216 bytes 
class AEQSTestingPawn : public ACharacter
{

 public: 
	struct UEnvQuery* QueryTemplate;  // Offset: 1216 Size: 8
	struct TArray<struct FEnvNamedValue> QueryParams;  // Offset: 1224 Size: 16
	struct TArray<struct FAIDynamicParam> QueryConfig;  // Offset: 1240 Size: 16
	float TimeLimitPerStep;  // Offset: 1256 Size: 4
	int32_t StepToDebugDraw;  // Offset: 1260 Size: 4
	enum class EEnvQueryHightlightMode HighlightMode;  // Offset: 1264 Size: 1
	char pad_1265[3];  // Offset: 1265 Size: 3
	char bDrawLabels : 1;  // Offset: 1268 Size: 1
	char bDrawFailedItems : 1;  // Offset: 1268 Size: 1
	char bReRunQueryOnlyOnFinishedMove : 1;  // Offset: 1268 Size: 1
	char bShouldBeVisibleInGame : 1;  // Offset: 1268 Size: 1
	char bTickDuringGame : 1;  // Offset: 1268 Size: 1
	char pad_1268_1 : 3;  // Offset: 1268 Size: 1
	char pad_1269[4];  // Offset: 1269 Size: 4
	enum class EEnvQueryRunMode QueryingMode;  // Offset: 1272 Size: 1
	char pad_1273[7];  // Offset: 1273 Size: 7
	struct FNavAgentProperties NavAgentProperties;  // Offset: 1280 Size: 48
	char pad_1328[32];  // Offset: 1328 Size: 32



 // Functions 
 public:
}; 
 
 


//Class AIModule.GenericTeamAgentInterface Size 40
// Inherited 40 bytes 
class UGenericTeamAgentInterface : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.GridPathAIController Size 808
// Inherited 808 bytes 
class AGridPathAIController : public AAIController
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.GridPathFollowingComponent Size 640
// Inherited 592 bytes 
class UGridPathFollowingComponent : public UPathFollowingComponent
{

 public: 
	struct UNavLocalGridManager* GridManager;  // Offset: 592 Size: 8
	char pad_600[40];  // Offset: 600 Size: 40



 // Functions 
 public:
}; 
 
 


//Class AIModule.NavFilter_AIControllerDefault Size 72
// Inherited 72 bytes 
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AIModule.NavLinkProxy Size 624
// Inherited 544 bytes 
class ANavLinkProxy : public AActor
{

 public: 
	char pad_544[16];  // Offset: 544 Size: 16
	struct TArray<struct FNavigationLink> PointLinks;  // Offset: 560 Size: 16
	struct TArray<struct FNavigationSegmentLink> SegmentLinks;  // Offset: 576 Size: 16
	struct UNavLinkCustomComponent* SmartLinkComp;  // Offset: 592 Size: 8
	char pad_600_1 : 7;  // Offset: 600 Size: 1
	bool bSmartLinkIsRelevant : 1;  // Offset: 600 Size: 1
	char pad_601[7];  // Offset: 601 Size: 7
	struct FMulticastInlineDelegate OnSmartLinkReached;  // Offset: 608 Size: 16



 // Functions 
 public:
	void SetSmartLinkEnabled(bool bEnabled); // Function AIModule.NavLinkProxy.SetSmartLinkEnabled
	void ResumePathFollowing(struct AActor* Agent); // Function AIModule.NavLinkProxy.ResumePathFollowing
	void ReceiveSmartLinkReached(struct AActor* Agent, struct FVector& Destination); // Function AIModule.NavLinkProxy.ReceiveSmartLinkReached
	bool IsSmartLinkEnabled(); // Function AIModule.NavLinkProxy.IsSmartLinkEnabled
	bool HasMovingAgents(); // Function AIModule.NavLinkProxy.HasMovingAgents
}; 
 
 


//Class AIModule.NavLocalGridManager Size 88
// Inherited 40 bytes 
class UNavLocalGridManager : public UObject
{

 public: 
	char pad_40[48];  // Offset: 40 Size: 48



 // Functions 
 public:
	bool SetLocalNavigationGridDensity(struct UObject* WorldContextObject, float CellSize); // Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
	void RemoveLocalNavigationGrid(struct UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
	bool FindLocalNavigationGridPath(struct UObject* WorldContextObject, struct FVector& Start, struct FVector& End, struct TArray<struct FVector>& PathPoints); // Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath
	int32_t AddLocalNavigationGridForPoints(struct UObject* WorldContextObject, struct TArray<struct FVector>& Locations, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
	int32_t AddLocalNavigationGridForPoint(struct UObject* WorldContextObject, struct FVector& Location, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
	int32_t AddLocalNavigationGridForCapsule(struct UObject* WorldContextObject, struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
	int32_t AddLocalNavigationGridForBox(struct UObject* WorldContextObject, struct FVector& Location, struct FVector Extent, struct FRotator Rotation, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
}; 
 
 


//Class AIModule.PawnAction Size 144
// Inherited 40 bytes 
class UPawnAction : public UObject
{

 public: 
	struct UPawnAction* ChildAction;  // Offset: 40 Size: 8
	struct UPawnAction* ParentAction;  // Offset: 48 Size: 8
	struct UPawnActionsComponent* OwnerComponent;  // Offset: 56 Size: 8
	struct UObject* Instigator;  // Offset: 64 Size: 8
	struct UBrainComponent* BrainComp;  // Offset: 72 Size: 8
	char pad_80[48];  // Offset: 80 Size: 48
	char bAllowNewSameClassInstance : 1;  // Offset: 128 Size: 1
	char bReplaceActiveSameClassInstance : 1;  // Offset: 128 Size: 1
	char bShouldPauseMovement : 1;  // Offset: 128 Size: 1
	char bAlwaysNotifyOnFinished : 1;  // Offset: 128 Size: 1
	char pad_128_1 : 4;  // Offset: 128 Size: 1
	char pad_129[16];  // Offset: 129 Size: 16



 // Functions 
 public:
	enum class EAIRequestPriority GetActionPriority(); // Function AIModule.PawnAction.GetActionPriority
	void Finish(enum class EPawnActionResult WithResult); // Function AIModule.PawnAction.Finish
	struct UPawnAction* CreateActionInstance(struct UObject* WorldContextObject, UPawnAction* ActionClass); // Function AIModule.PawnAction.CreateActionInstance
}; 
 
 


//Class AIModule.PawnAction_BlueprintBase Size 144
// Inherited 144 bytes 
class UPawnAction_BlueprintBase : public UPawnAction
{

 public: 



 // Functions 
 public:
	void ActionTick(struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.PawnAction_BlueprintBase.ActionTick
	void ActionStart(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionStart
	void ActionResume(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionResume
	void ActionPause(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionPause
	void ActionFinished(struct APawn* ControlledPawn, enum class EPawnActionResult WithResult); // Function AIModule.PawnAction_BlueprintBase.ActionFinished
}; 
 
 


//Class AIModule.PawnAction_Move Size 224
// Inherited 144 bytes 
class UPawnAction_Move : public UPawnAction
{

 public: 
	struct AActor* GoalActor;  // Offset: 144 Size: 8
	struct FVector GoalLocation;  // Offset: 152 Size: 12
	float AcceptableRadius;  // Offset: 164 Size: 4
	UNavigationQueryFilter* FilterClass;  // Offset: 168 Size: 8
	char bAllowStrafe : 1;  // Offset: 176 Size: 1
	char bFinishOnOverlap : 1;  // Offset: 176 Size: 1
	char bUsePathfinding : 1;  // Offset: 176 Size: 1
	char bAllowPartialPath : 1;  // Offset: 176 Size: 1
	char bProjectGoalToNavigation : 1;  // Offset: 176 Size: 1
	char bUpdatePathToGoal : 1;  // Offset: 176 Size: 1
	char bAbortChildActionOnPathChange : 1;  // Offset: 176 Size: 1
	char pad_176_1 : 1;  // Offset: 176 Size: 1
	char pad_177[48];  // Offset: 177 Size: 48



 // Functions 
 public:
}; 
 
 


//Class AIModule.PawnAction_Repeat Size 176
// Inherited 144 bytes 
class UPawnAction_Repeat : public UPawnAction
{

 public: 
	struct UPawnAction* ActionToRepeat;  // Offset: 144 Size: 8
	struct UPawnAction* RecentActionCopy;  // Offset: 152 Size: 8
	enum class EPawnActionFailHandling ChildFailureHandlingMode;  // Offset: 160 Size: 1
	char pad_161[15];  // Offset: 161 Size: 15



 // Functions 
 public:
}; 
 
 


//Class AIModule.PawnAction_Wait Size 160
// Inherited 144 bytes 
class UPawnAction_Wait : public UPawnAction
{

 public: 
	float TimeToWait;  // Offset: 144 Size: 4
	char pad_148[12];  // Offset: 148 Size: 12



 // Functions 
 public:
}; 
 
 


//Class AIModule.PawnActionsComponent Size 232
// Inherited 176 bytes 
class UPawnActionsComponent : public UActorComponent
{

 public: 
	struct APawn* ControlledPawn;  // Offset: 176 Size: 8
	struct TArray<struct FPawnActionStack> ActionStacks;  // Offset: 184 Size: 16
	struct TArray<struct FPawnActionEvent> ActionEvents;  // Offset: 200 Size: 16
	struct UPawnAction* CurrentAction;  // Offset: 216 Size: 8
	char pad_224[8];  // Offset: 224 Size: 8



 // Functions 
 public:
	bool K2_PushAction(struct UPawnAction* NewAction, enum class EAIRequestPriority Priority, struct UObject* Instigator); // Function AIModule.PawnActionsComponent.K2_PushAction
	bool K2_PerformAction(struct APawn* Pawn, struct UPawnAction* Action, enum class EAIRequestPriority Priority); // Function AIModule.PawnActionsComponent.K2_PerformAction
	enum class EPawnActionAbortState K2_ForceAbortAction(struct UPawnAction* ActionToAbort); // Function AIModule.PawnActionsComponent.K2_ForceAbortAction
	enum class EPawnActionAbortState K2_AbortAction(struct UPawnAction* ActionToAbort); // Function AIModule.PawnActionsComponent.K2_AbortAction
}; 
 
 


//Class AIModule.PawnSensingComponent Size 248
// Inherited 176 bytes 
class UPawnSensingComponent : public UActorComponent
{

 public: 
	float HearingThreshold;  // Offset: 176 Size: 4
	float LOSHearingThreshold;  // Offset: 180 Size: 4
	float SightRadius;  // Offset: 184 Size: 4
	float SensingInterval;  // Offset: 188 Size: 4
	float HearingMaxSoundAge;  // Offset: 192 Size: 4
	char bEnableSensingUpdates : 1;  // Offset: 196 Size: 1
	char bOnlySensePlayers : 1;  // Offset: 196 Size: 1
	char bSeePawns : 1;  // Offset: 196 Size: 1
	char bHearNoises : 1;  // Offset: 196 Size: 1
	char pad_196_1 : 4;  // Offset: 196 Size: 1
	char pad_197[12];  // Offset: 197 Size: 12
	struct FMulticastInlineDelegate OnSeePawn;  // Offset: 208 Size: 16
	struct FMulticastInlineDelegate OnHearNoise;  // Offset: 224 Size: 16
	float PeripheralVisionAngle;  // Offset: 240 Size: 4
	float PeripheralVisionCosine;  // Offset: 244 Size: 4



 // Functions 
 public:
	void SetSensingUpdatesEnabled(bool bEnabled); // Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
	void SetSensingInterval(float NewSensingInterval); // Function AIModule.PawnSensingComponent.SetSensingInterval
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle); // Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
	void SeePawnDelegate__DelegateSignature(struct APawn* Pawn); // DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
	void HearNoiseDelegate__DelegateSignature(struct APawn* Instigator, struct FVector& Location, float Volume); // DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
	float GetPeripheralVisionCosine(); // Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
	float GetPeripheralVisionAngle(); // Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
}; 
 
 


