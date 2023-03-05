#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus Size 80
class FGetSenseClassForStimulus
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FAIStimulus Stimulus;  // Offset: 8 Size: 60
	char pad_68[4];  // Offset: 68 Size: 4
	UAISense* ReturnValue;  // Offset: 72 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject Size 56
class FCreateMoveToProxyObject
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct APawn* Pawn;  // Offset: 8 Size: 8
	struct FVector Destination;  // Offset: 16 Size: 12
	char pad_28[4];  // Offset: 28 Size: 4
	struct AActor* TargetActor;  // Offset: 32 Size: 8
	float AcceptanceRadius;  // Offset: 40 Size: 4
	char pad_44_1 : 7;  // Offset: 44 Size: 1
	bool bStopOnOverlap : 1;  // Offset: 44 Size: 1
	char pad_45[3];  // Offset: 45 Size: 3
	struct UAIAsyncTaskBlueprintProxy* ReturnValue;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction AIModule.AIMoveCompletedSignature__DelegateSignature Size 8
class FAIMoveCompletedSignature__DelegateSignature
{

 public: 
	struct FAIRequestID RequestID;  // Offset: 0 Size: 4
	enum class EPathFollowingResult Result;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.AIRequestID Size 4
class FAIRequestID
{

 public: 
	uint32_t RequestID;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle Size 4
class FSetPeripheralVisionAngle
{

 public: 
	float NewPeripheralVisionAngle;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore Size 8
class FGetItemScore
{

 public: 
	int32_t ItemIndex;  // Offset: 0 Size: 4
	float ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.BTDecoratorLogic Size 4
class FBTDecoratorLogic
{

 public: 
	enum class EBTDecoratorLogic Operation;  // Offset: 0 Size: 1
	char pad_1[1];  // Offset: 1 Size: 1
	uint16_t Number;  // Offset: 2 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.AIPredictionEvent Size 24
class FAIPredictionEvent
{

 public: 
	struct AActor* Requestor;  // Offset: 0 Size: 8
	struct AActor* PredictedActor;  // Offset: 8 Size: 8
	char pad_16[8];  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.AITouchEvent Size 32
class FAITouchEvent
{

 public: 
	char pad_0[16];  // Offset: 0 Size: 16
	struct AActor* TouchReceiver;  // Offset: 16 Size: 8
	struct AActor* OtherActor;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction AIModule.OAISimpleDelegate__DelegateSignature Size 1
class FOAISimpleDelegate__DelegateSignature
{

 public: 
	enum class EPathFollowingResult MovementResult;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardComponent.SetValueAsObject Size 16
class FSetValueAsObject
{

 public: 
	struct FName KeyName;  // Offset: 0 Size: 8
	struct UObject* ObjectValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature Size 24
class FHearNoiseDelegate__DelegateSignature
{

 public: 
	struct APawn* Instigator;  // Offset: 0 Size: 8
	struct FVector Location;  // Offset: 8 Size: 12
	float Volume;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations Size 24
class FGetQueryResultsAsLocations
{

 public: 
	struct TArray<struct FVector> ResultLocations;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.EnvQueryInstanceCache Size 376
class FEnvQueryInstanceCache
{

 public: 
	struct UEnvQuery* Template;  // Offset: 0 Size: 8
	char pad_8[368];  // Offset: 8 Size: 368



 // Functions 
 public:
}; 
 
 //DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature Size 16
class FEQSQueryDoneSignature__DelegateSignature
{

 public: 
	struct UEnvQueryInstanceBlueprintWrapper* QueryInstance;  // Offset: 0 Size: 8
	enum class EEnvQueryStatus QueryStatus;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors Size 24
class FGetQueryResultsAsActors
{

 public: 
	struct TArray<struct AActor*> ResultActors;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest Size 72
class FEQSParametrizedQueryExecutionRequest
{

 public: 
	struct UEnvQuery* QueryTemplate;  // Offset: 0 Size: 8
	struct TArray<struct FAIDynamicParam> QueryConfig;  // Offset: 8 Size: 16
	struct FBlackboardKeySelector EQSQueryBlackboardKey;  // Offset: 24 Size: 40
	enum class EEnvQueryRunMode RunMode;  // Offset: 64 Size: 1
	char pad_65[3];  // Offset: 65 Size: 3
	char bUseBBKeyForQueryTemplate : 1;  // Offset: 68 Size: 1
	char pad_68_1 : 7;  // Offset: 68 Size: 1
	char pad_69[4];  // Offset: 69 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.AINoiseEvent Size 48
class FAINoiseEvent
{

 public: 
	char pad_0[4];  // Offset: 0 Size: 4
	struct FVector NoiseLocation;  // Offset: 4 Size: 12
	float Loudness;  // Offset: 16 Size: 4
	float MaxRange;  // Offset: 20 Size: 4
	struct AActor* Instigator;  // Offset: 24 Size: 8
	struct FName Tag;  // Offset: 32 Size: 8
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors Size 16
class FGetResultsAsActors
{

 public: 
	struct TArray<struct AActor*> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations Size 16
class FGetResultsAsLocations
{

 public: 
	struct TArray<struct FVector> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.AISenseAffiliationFilter Size 4
class FAISenseAffiliationFilter
{

 public: 
	char bDetectEnemies : 1;  // Offset: 0 Size: 1
	char bDetectNeutrals : 1;  // Offset: 0 Size: 1
	char bDetectFriendlies : 1;  // Offset: 0 Size: 1
	char pad_0_1 : 5;  // Offset: 0 Size: 1
	char pad_1[4];  // Offset: 1 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction AIModule.MoveTaskCompletedSignature__DelegateSignature Size 16
class FMoveTaskCompletedSignature__DelegateSignature
{

 public: 
	enum class EPathFollowingResult Result;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct AAIController* AIController;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam Size 12
class FSetNamedParam
{

 public: 
	struct FName ParamName;  // Offset: 0 Size: 8
	float Value;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.BrainComponent.IsPaused Size 1
class FIsPaused
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.IntervalCountdown Size 8
class FIntervalCountdown
{

 public: 
	float Interval;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction AIModule.SmartLinkReachedSignature__DelegateSignature Size 24
class FSmartLinkReachedSignature__DelegateSignature
{

 public: 
	struct AActor* MovingActor;  // Offset: 0 Size: 8
	struct FVector DestinationPoint;  // Offset: 8 Size: 12
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction AIModule.PerceptionUpdatedDelegate__DelegateSignature Size 16
class FPerceptionUpdatedDelegate__DelegateSignature
{

 public: 
	struct TArray<struct AActor*> UpdatedActors;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.ActorPerceptionUpdateInfo Size 72
class FActorPerceptionUpdateInfo
{

 public: 
	int32_t TargetId;  // Offset: 0 Size: 4
	struct TWeakObjectPtr<AActor> Target;  // Offset: 4 Size: 8
	struct FAIStimulus Stimulus;  // Offset: 12 Size: 60



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardComponent.SetValueAsBool Size 12
class FSetValueAsBool
{

 public: 
	struct FName KeyName;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool BoolValue : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //DelegateFunction AIModule.ActorPerceptionUpdatedDelegate__DelegateSignature Size 72
class FActorPerceptionUpdatedDelegate__DelegateSignature
{

 public: 
	struct AActor* Actor;  // Offset: 0 Size: 8
	struct FAIStimulus Stimulus;  // Offset: 8 Size: 60
	char pad_68[4];  // Offset: 68 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI Size 16
class FReceiveExecuteAI
{

 public: 
	struct AAIController* OwnerController;  // Offset: 0 Size: 8
	struct APawn* ControlledPawn;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.AIStimulus Size 60
class FAIStimulus
{

 public: 
	float Age;  // Offset: 0 Size: 4
	float ExpirationAge;  // Offset: 4 Size: 4
	float Strength;  // Offset: 8 Size: 4
	struct FVector StimulusLocation;  // Offset: 12 Size: 12
	struct FVector ReceiverLocation;  // Offset: 24 Size: 12
	struct FName Tag;  // Offset: 36 Size: 8
	char pad_44[12];  // Offset: 44 Size: 12
	char pad_56_1 : 1;  // Offset: 56 Size: 1
	char bSuccessfullySensed : 1;  // Offset: 56 Size: 1
	char pad_56_2 : 6;  // Offset: 56 Size: 1
	char pad_57[4];  // Offset: 57 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.PawnActionsComponent.K2_PerformAction Size 24
class FK2_PerformAction
{

 public: 
	struct APawn* Pawn;  // Offset: 0 Size: 8
	struct UPawnAction* Action;  // Offset: 8 Size: 8
	enum class EAIRequestPriority Priority;  // Offset: 16 Size: 1
	char pad_17_1 : 7;  // Offset: 17 Size: 1
	bool ReturnValue : 1;  // Offset: 17 Size: 1
	char pad_18[6];  // Offset: 18 Size: 6



 // Functions 
 public:
}; 
 
 //Function AIModule.BTService_BlueprintBase.ReceiveActivationAI Size 16
class FReceiveActivationAI
{

 public: 
	struct AAIController* OwnerController;  // Offset: 0 Size: 8
	struct APawn* ControlledPawn;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction AIModule.ActorPerceptionInfoUpdatedDelegate__DelegateSignature Size 72
class FActorPerceptionInfoUpdatedDelegate__DelegateSignature
{

 public: 
	struct FActorPerceptionUpdateInfo UpdateInfo;  // Offset: 0 Size: 72



 // Functions 
 public:
}; 
 
 //Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle Size 4
class FGetPeripheralVisionAngle
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.BTCompositeChild Size 48
class FBTCompositeChild
{

 public: 
	struct UBTCompositeNode* ChildComposite;  // Offset: 0 Size: 8
	struct UBTTaskNode* ChildTask;  // Offset: 8 Size: 8
	struct TArray<struct UBTDecorator*> Decorators;  // Offset: 16 Size: 16
	struct TArray<struct FBTDecoratorLogic> DecoratorOps;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function AIModule.AIController.GetFocalPointOnActor Size 24
class FGetFocalPointOnActor
{

 public: 
	struct AActor* Actor;  // Offset: 0 Size: 8
	struct FVector ReturnValue;  // Offset: 8 Size: 12
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine Size 4
class FGetPeripheralVisionCosine
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature Size 8
class FSeePawnDelegate__DelegateSignature
{

 public: 
	struct APawn* Pawn;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardComponent.IsVectorValueSet Size 12
class FIsVectorValueSet
{

 public: 
	struct FName KeyName;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function AIModule.PawnSensingComponent.SetSensingInterval Size 4
class FSetSensingInterval
{

 public: 
	float NewSensingInterval;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.AIMoveRequest Size 64
class FAIMoveRequest
{

 public: 
	struct AActor* GoalActor;  // Offset: 0 Size: 8
	char pad_8[56];  // Offset: 8 Size: 56



 // Functions 
 public:
}; 
 
 //Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled Size 1
class FSetSensingUpdatesEnabled
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnabled : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardComponent.GetRotationFromEntry Size 24
class FGetRotationFromEntry
{

 public: 
	struct FName KeyName;  // Offset: 0 Size: 8
	struct FRotator ResultRotation;  // Offset: 8 Size: 12
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool ReturnValue : 1;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3



 // Functions 
 public:
}; 
 
 //Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource Size 32
class FRegisterPerceptionStimuliSource
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	UAISense* Sense;  // Offset: 8 Size: 8
	struct AActor* Target;  // Offset: 16 Size: 8
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool ReturnValue : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.AIDataProviderValue Size 32
class FAIDataProviderValue
{

 public: 
	char pad_0[16];  // Offset: 0 Size: 16
	struct UAIDataProvider* DataBinding;  // Offset: 16 Size: 8
	struct FName DataField;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator Size 64
class FSetBlackboardValueAsRotator
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct FBlackboardKeySelector Key;  // Offset: 8 Size: 40
	struct FRotator Value;  // Offset: 48 Size: 12
	char pad_60[4];  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.AIDataProviderFloatValue Size 56
// Inherited 48 bytes 
class FAIDataProviderFloatValue : public FAIDataProviderTypedValue
{

 public: 
	float DefaultValue;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.AIDataProviderTypedValue Size 48
// Inherited 32 bytes 
class FAIDataProviderTypedValue : public FAIDataProviderValue
{

 public: 
	UObject* PropertyType;  // Offset: 32 Size: 8
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.AIDataProviderBoolValue Size 56
// Inherited 48 bytes 
class FAIDataProviderBoolValue : public FAIDataProviderTypedValue
{

 public: 
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool DefaultValue : 1;  // Offset: 48 Size: 1
	char pad_49[7];  // Offset: 49 Size: 7



 // Functions 
 public:
}; 
 
 //Function AIModule.AIController.OnGameplayTaskResourcesClaimed Size 4
class FOnGameplayTaskResourcesClaimed
{

 public: 
	struct FGameplayResourceSet NewlyClaimed;  // Offset: 0 Size: 2
	struct FGameplayResourceSet FreshlyReleased;  // Offset: 2 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.AIDataProviderIntValue Size 56
// Inherited 48 bytes 
class FAIDataProviderIntValue : public FAIDataProviderTypedValue
{

 public: 
	int32_t DefaultValue;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule Size 48
class FAddLocalNavigationGridForCapsule
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FVector Location;  // Offset: 8 Size: 12
	float CapsuleRadius;  // Offset: 20 Size: 4
	float CapsuleHalfHeight;  // Offset: 24 Size: 4
	int32_t Radius2D;  // Offset: 28 Size: 4
	float Height;  // Offset: 32 Size: 4
	char pad_36_1 : 7;  // Offset: 36 Size: 1
	bool bRebuildGrids : 1;  // Offset: 36 Size: 1
	char pad_37[3];  // Offset: 37 Size: 3
	int32_t ReturnValue;  // Offset: 40 Size: 4
	char pad_44[4];  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.AIDataProviderStructValue Size 48
// Inherited 32 bytes 
class FAIDataProviderStructValue : public FAIDataProviderValue
{

 public: 
	char pad_32[16];  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.ActorPerceptionBlueprintInfo Size 32
class FActorPerceptionBlueprintInfo
{

 public: 
	struct AActor* Target;  // Offset: 0 Size: 8
	struct TArray<struct FAIStimulus> LastSensedStimuli;  // Offset: 8 Size: 16
	char bIsHostile : 1;  // Offset: 24 Size: 1
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	char pad_25[8];  // Offset: 25 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted Size 8
class FOnMoveCompleted
{

 public: 
	struct FAIRequestID RequestID;  // Offset: 0 Size: 4
	enum class EPathFollowingResult MovementResult;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.AIDamageEvent Size 56
class FAIDamageEvent
{

 public: 
	float Amount;  // Offset: 0 Size: 4
	struct FVector Location;  // Offset: 4 Size: 12
	struct FVector HitLocation;  // Offset: 16 Size: 12
	char pad_28[4];  // Offset: 28 Size: 4
	struct AActor* DamagedActor;  // Offset: 32 Size: 8
	struct AActor* Instigator;  // Offset: 40 Size: 8
	struct FName Tag;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath Size 56
class FFindLocalNavigationGridPath
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FVector Start;  // Offset: 8 Size: 12
	struct FVector End;  // Offset: 20 Size: 12
	struct TArray<struct FVector> PathPoints;  // Offset: 32 Size: 16
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool ReturnValue : 1;  // Offset: 48 Size: 1
	char pad_49[7];  // Offset: 49 Size: 7



 // Functions 
 public:
}; 
 
 //Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints Size 24
class FGetCurrentPathPoints
{

 public: 
	struct AController* Controller;  // Offset: 0 Size: 8
	struct TArray<struct FVector> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.AISightEvent Size 24
class FAISightEvent
{

 public: 
	char pad_0[8];  // Offset: 0 Size: 8
	struct AActor* SeenActor;  // Offset: 8 Size: 8
	struct AActor* Observer;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.PawnAction.Finish Size 1
class FFinish
{

 public: 
	enum class EPawnActionResult WithResult;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.AITeamStimulusEvent Size 56
class FAITeamStimulusEvent
{

 public: 
	char pad_0[40];  // Offset: 0 Size: 40
	struct AActor* Broadcaster;  // Offset: 40 Size: 8
	struct AActor* Enemy;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId Size 12
class FSetFinishOnMessageWithId
{

 public: 
	struct FName MessageName;  // Offset: 0 Size: 8
	int32_t RequestID;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.BehaviorTreeTemplateInfo Size 24
class FBehaviorTreeTemplateInfo
{

 public: 
	struct UBehaviorTree* Asset;  // Offset: 0 Size: 8
	struct UBTCompositeNode* Template;  // Offset: 8 Size: 8
	char pad_16[8];  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.BlackboardKeySelector Size 40
class FBlackboardKeySelector
{

 public: 
	struct TArray<struct UBlackboardKeyType*> AllowedTypes;  // Offset: 0 Size: 16
	struct FName SelectedKeyName;  // Offset: 16 Size: 8
	UBlackboardKeyType* SelectedKeyType;  // Offset: 24 Size: 8
	char SelectedKeyID;  // Offset: 32 Size: 1
	char pad_33[3];  // Offset: 33 Size: 3
	char bNoneIsAllowedValue : 1;  // Offset: 36 Size: 1
	char pad_36_1 : 7;  // Offset: 36 Size: 1
	char pad_37[4];  // Offset: 37 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI Size 16
class FReceiveSearchStartAI
{

 public: 
	struct AAIController* OwnerController;  // Offset: 0 Size: 8
	struct APawn* ControlledPawn;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.BlackboardEntry Size 24
class FBlackboardEntry
{

 public: 
	struct FName EntryName;  // Offset: 0 Size: 8
	struct UBlackboardKeyType* KeyType;  // Offset: 8 Size: 8
	char bInstanceSynced : 1;  // Offset: 16 Size: 1
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	char pad_17[8];  // Offset: 17 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.EnvQueryRequest Size 104
class FEnvQueryRequest
{

 public: 
	struct UEnvQuery* QueryTemplate;  // Offset: 0 Size: 8
	struct UObject* Owner;  // Offset: 8 Size: 8
	struct UWorld* World;  // Offset: 16 Size: 8
	char pad_24[80];  // Offset: 24 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.CrowdAvoidanceSamplingPattern Size 32
class FCrowdAvoidanceSamplingPattern
{

 public: 
	struct TArray<float> Angles;  // Offset: 0 Size: 16
	struct TArray<float> Radii;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.CrowdAvoidanceConfig Size 28
class FCrowdAvoidanceConfig
{

 public: 
	float VelocityBias;  // Offset: 0 Size: 4
	float DesiredVelocityWeight;  // Offset: 4 Size: 4
	float CurrentVelocityWeight;  // Offset: 8 Size: 4
	float SideBiasWeight;  // Offset: 12 Size: 4
	float ImpactTimeWeight;  // Offset: 16 Size: 4
	float ImpactTimeRange;  // Offset: 20 Size: 4
	char CustomPatternIdx;  // Offset: 24 Size: 1
	char AdaptiveDivisions;  // Offset: 25 Size: 1
	char AdaptiveRings;  // Offset: 26 Size: 1
	char AdaptiveDepth;  // Offset: 27 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.AIDynamicParam Size 56
class FAIDynamicParam
{

 public: 
	struct FName ParamName;  // Offset: 0 Size: 8
	enum class EAIParamType ParamType;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3
	float Value;  // Offset: 12 Size: 4
	struct FBlackboardKeySelector BBKey;  // Offset: 16 Size: 40



 // Functions 
 public:
}; 
 
 //Function AIModule.BrainComponent.StopLogic Size 16
class FStopLogic
{

 public: 
	struct FString Reason;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.EnvQueryResult Size 64
class FEnvQueryResult
{

 public: 
	char pad_0[16];  // Offset: 0 Size: 16
	UEnvQueryItemType* ItemType;  // Offset: 16 Size: 8
	char pad_24[20];  // Offset: 24 Size: 20
	int32_t OptionIndex;  // Offset: 44 Size: 4
	int32_t QueryID;  // Offset: 48 Size: 4
	char pad_52[12];  // Offset: 52 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.EnvOverlapData Size 32
class FEnvOverlapData
{

 public: 
	float ExtentX;  // Offset: 0 Size: 4
	float ExtentY;  // Offset: 4 Size: 4
	float ExtentZ;  // Offset: 8 Size: 4
	struct FVector ShapeOffset;  // Offset: 12 Size: 12
	enum class ECollisionChannel OverlapChannel;  // Offset: 24 Size: 1
	enum class EEnvOverlapShape OverlapShape;  // Offset: 25 Size: 1
	char pad_26[2];  // Offset: 26 Size: 2
	char bOnlyBlockingHits : 1;  // Offset: 28 Size: 1
	char bOverlapComplex : 1;  // Offset: 28 Size: 1
	char bSkipOverlapQuerier : 1;  // Offset: 28 Size: 1
	char pad_28_1 : 5;  // Offset: 28 Size: 1
	char pad_29[4];  // Offset: 29 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.AIController.OnUsingBlackBoard Size 16
class FOnUsingBlackBoard
{

 public: 
	struct UBlackboardComponent* BlackboardComp;  // Offset: 0 Size: 8
	struct UBlackboardData* BlackboardAsset;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.EnvTraceData Size 48
class FEnvTraceData
{

 public: 
	int32_t VersionNum;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	UNavigationQueryFilter* NavigationFilter;  // Offset: 8 Size: 8
	float ProjectDown;  // Offset: 16 Size: 4
	float ProjectUp;  // Offset: 20 Size: 4
	float ExtentX;  // Offset: 24 Size: 4
	float ExtentY;  // Offset: 28 Size: 4
	float ExtentZ;  // Offset: 32 Size: 4
	float PostProjectionVerticalOffset;  // Offset: 36 Size: 4
	enum class ETraceTypeQuery TraceChannel;  // Offset: 40 Size: 1
	enum class ECollisionChannel SerializedChannel;  // Offset: 41 Size: 1
	enum class EEnvTraceShape TraceShape;  // Offset: 42 Size: 1
	enum class EEnvQueryTrace TraceMode;  // Offset: 43 Size: 1
	char bTraceComplex : 1;  // Offset: 44 Size: 1
	char bOnlyBlockingHits : 1;  // Offset: 44 Size: 1
	char bCanTraceOnNavMesh : 1;  // Offset: 44 Size: 1
	char bCanTraceOnGeometry : 1;  // Offset: 44 Size: 1
	char bCanDisableTrace : 1;  // Offset: 44 Size: 1
	char bCanProjectDown : 1;  // Offset: 44 Size: 1
	char pad_44_1 : 2;  // Offset: 44 Size: 1
	char pad_45[4];  // Offset: 45 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.EnvDirection Size 32
class FEnvDirection
{

 public: 
	UEnvQueryContext* LineFrom;  // Offset: 0 Size: 8
	UEnvQueryContext* LineTo;  // Offset: 8 Size: 8
	UEnvQueryContext* Rotation;  // Offset: 16 Size: 8
	enum class EEnvDirection DirMode;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.EnvNamedValue Size 16
class FEnvNamedValue
{

 public: 
	struct FName ParamName;  // Offset: 0 Size: 8
	enum class EAIParamType ParamType;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3
	float Value;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.GenericTeamId Size 1
class FGenericTeamId
{

 public: 
	char TeamID;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool Size 56
class FSetBlackboardValueAsBool
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct FBlackboardKeySelector Key;  // Offset: 8 Size: 40
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool Value : 1;  // Offset: 48 Size: 1
	char pad_49[7];  // Offset: 49 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.PawnActionEvent Size 24
class FPawnActionEvent
{

 public: 
	struct UPawnAction* Action;  // Offset: 0 Size: 8
	char pad_8[16];  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.PawnActionStack Size 8
class FPawnActionStack
{

 public: 
	struct UPawnAction* TopAction;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct AIModule.RecastGraphWrapper Size 152
class FRecastGraphWrapper
{

 public: 
	struct ARecastNavMesh* RecastNavMeshActor;  // Offset: 0 Size: 8
	char pad_8[144];  // Offset: 8 Size: 144



 // Functions 
 public:
}; 
 
 //Function AIModule.AIBlueprintHelperLibrary.GetAIController Size 16
class FGetAIController
{

 public: 
	struct AActor* ControlledActor;  // Offset: 0 Size: 8
	struct AAIController* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString Size 64
class FGetBlackboardValueAsString
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct FBlackboardKeySelector Key;  // Offset: 8 Size: 40
	struct FString ReturnValue;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //Function AIModule.AIBlueprintHelperLibrary.GetBlackboard Size 16
class FGetBlackboard
{

 public: 
	struct AActor* Target;  // Offset: 0 Size: 8
	struct UBlackboardComponent* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath Size 16
class FGetCurrentPath
{

 public: 
	struct AController* Controller;  // Offset: 0 Size: 8
	struct UNavigationPath* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex Size 16
class FGetCurrentPathIndex
{

 public: 
	struct AController* Controller;  // Offset: 0 Size: 8
	int32_t ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex Size 16
class FGetNextNavLinkIndex
{

 public: 
	struct AController* Controller;  // Offset: 0 Size: 8
	int32_t ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.NavLinkProxy.ResumePathFollowing Size 8
class FResumePathFollowing
{

 public: 
	struct AActor* Agent;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.AISense_Blueprint.K2_OnNewPawn Size 8
class FK2_OnNewPawn
{

 public: 
	struct APawn* NewPawn;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection Size 16
class FIsValidAIDirection
{

 public: 
	struct FVector DirectionVector;  // Offset: 0 Size: 12
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool ReturnValue : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation Size 16
class FIsValidAILocation
{

 public: 
	struct FVector Location;  // Offset: 0 Size: 12
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool ReturnValue : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation Size 16
class FIsValidAIRotation
{

 public: 
	struct FRotator Rotation;  // Offset: 0 Size: 12
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool ReturnValue : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation Size 16
class FLockAIResourcesWithAnimation
{

 public: 
	struct UAnimInstance* AnimInstance;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bLockMovement : 1;  // Offset: 8 Size: 1
	char pad_9_1 : 7;  // Offset: 9 Size: 1
	bool LockAILogic : 1;  // Offset: 9 Size: 1
	char pad_10[6];  // Offset: 10 Size: 6



 // Functions 
 public:
}; 
 
 //Function AIModule.AIBlueprintHelperLibrary.SendAIMessage Size 32
class FSendAIMessage
{

 public: 
	struct APawn* Target;  // Offset: 0 Size: 8
	struct FName Message;  // Offset: 8 Size: 8
	struct UObject* MessageSource;  // Offset: 16 Size: 8
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bSuccess : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector Size 64
class FGetBlackboardValueAsVector
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct FBlackboardKeySelector Key;  // Offset: 8 Size: 40
	struct FVector ReturnValue;  // Offset: 48 Size: 12
	char pad_60[4];  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor Size 16
class FSimpleMoveToActor
{

 public: 
	struct AController* Controller;  // Offset: 0 Size: 8
	struct AActor* Goal;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation Size 24
class FSimpleMoveToLocation
{

 public: 
	struct AController* Controller;  // Offset: 0 Size: 8
	struct FVector Goal;  // Offset: 8 Size: 12
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass Size 72
class FSpawnAIFromClass
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	APawn* PawnClass;  // Offset: 8 Size: 8
	struct UBehaviorTree* BehaviorTree;  // Offset: 16 Size: 8
	struct FVector Location;  // Offset: 24 Size: 12
	struct FRotator Rotation;  // Offset: 36 Size: 12
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool bNoCollisionFail : 1;  // Offset: 48 Size: 1
	char pad_49[7];  // Offset: 49 Size: 7
	struct AActor* Owner;  // Offset: 56 Size: 8
	struct APawn* ReturnValue;  // Offset: 64 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation Size 16
class FUnlockAIResourcesWithAnimation
{

 public: 
	struct UAnimInstance* AnimInstance;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bUnlockMovement : 1;  // Offset: 8 Size: 1
	char pad_9_1 : 7;  // Offset: 9 Size: 1
	bool UnlockAILogic : 1;  // Offset: 9 Size: 1
	char pad_10[6];  // Offset: 10 Size: 6



 // Functions 
 public:
}; 
 
 //Function AIModule.AIController.ClaimTaskResource Size 8
class FClaimTaskResource
{

 public: 
	UGameplayTaskResource* ResourceClass;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation Size 32
class FProvideSingleLocation
{

 public: 
	struct UObject* QuerierObject;  // Offset: 0 Size: 8
	struct AActor* QuerierActor;  // Offset: 8 Size: 8
	struct FVector ResultingLocation;  // Offset: 16 Size: 12
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.AIController.UseBlackboard Size 24
class FUseBlackboard
{

 public: 
	struct UBlackboardData* BlackboardAsset;  // Offset: 0 Size: 8
	struct UBlackboardComponent* BlackboardComponent;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function AIModule.AIController.GetAIPerceptionComponent Size 8
class FGetAIPerceptionComponent
{

 public: 
	struct UAIPerceptionComponent* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.AIController.GetFocalPoint Size 12
class FGetFocalPoint
{

 public: 
	struct FVector ReturnValue;  // Offset: 0 Size: 12



 // Functions 
 public:
}; 
 
 //Function AIModule.AIController.GetFocusActor Size 8
class FGetFocusActor
{

 public: 
	struct AActor* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.AIController.GetImmediateMoveDestination Size 12
class FGetImmediateMoveDestination
{

 public: 
	struct FVector ReturnValue;  // Offset: 0 Size: 12



 // Functions 
 public:
}; 
 
 //Function AIModule.AIController.GetMoveStatus Size 1
class FGetMoveStatus
{

 public: 
	enum class EPathFollowingStatus ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AIModule.AIController.GetPathFollowingComponent Size 8
class FGetPathFollowingComponent
{

 public: 
	struct UPathFollowingComponent* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.AIController.HasPartialPath Size 1
class FHasPartialPath
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AIModule.AIController.K2_SetFocalPoint Size 12
class FK2_SetFocalPoint
{

 public: 
	struct FVector FP;  // Offset: 0 Size: 12



 // Functions 
 public:
}; 
 
 //Function AIModule.AIController.K2_SetFocus Size 8
class FK2_SetFocus
{

 public: 
	struct AActor* NewFocus;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.PathFollowingComponent.GetPathActionType Size 1
class FGetPathActionType
{

 public: 
	enum class EPathFollowingAction ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AIModule.AIController.MoveToActor Size 32
class FMoveToActor
{

 public: 
	struct AActor* Goal;  // Offset: 0 Size: 8
	float AcceptanceRadius;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool bStopOnOverlap : 1;  // Offset: 12 Size: 1
	char pad_13_1 : 7;  // Offset: 13 Size: 1
	bool bUsePathfinding : 1;  // Offset: 13 Size: 1
	char pad_14_1 : 7;  // Offset: 14 Size: 1
	bool bCanStrafe : 1;  // Offset: 14 Size: 1
	char pad_15[1];  // Offset: 15 Size: 1
	UNavigationQueryFilter* FilterClass;  // Offset: 16 Size: 8
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bAllowPartialPath : 1;  // Offset: 24 Size: 1
	enum class EPathFollowingRequestResult ReturnValue;  // Offset: 25 Size: 1
	char pad_26[6];  // Offset: 26 Size: 6



 // Functions 
 public:
}; 
 
 //Function AIModule.AIController.MoveToLocation Size 40
class FMoveToLocation
{

 public: 
	struct FVector Dest;  // Offset: 0 Size: 12
	float AcceptanceRadius;  // Offset: 12 Size: 4
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bStopOnOverlap : 1;  // Offset: 16 Size: 1
	char pad_17_1 : 7;  // Offset: 17 Size: 1
	bool bUsePathfinding : 1;  // Offset: 17 Size: 1
	char pad_18_1 : 7;  // Offset: 18 Size: 1
	bool bProjectDestinationToNavigation : 1;  // Offset: 18 Size: 1
	char pad_19_1 : 7;  // Offset: 19 Size: 1
	bool bCanStrafe : 1;  // Offset: 19 Size: 1
	char pad_20[4];  // Offset: 20 Size: 4
	UNavigationQueryFilter* FilterClass;  // Offset: 24 Size: 8
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool bAllowPartialPath : 1;  // Offset: 32 Size: 1
	enum class EPathFollowingRequestResult ReturnValue;  // Offset: 33 Size: 1
	char pad_34[6];  // Offset: 34 Size: 6



 // Functions 
 public:
}; 
 
 //Function AIModule.AIController.RunBehaviorTree Size 16
class FRunBehaviorTree
{

 public: 
	struct UBehaviorTree* BTAsset;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function AIModule.AIController.SetMoveBlockDetection Size 1
class FSetMoveBlockDetection
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnable : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AIModule.AIController.SetPathFollowingComponent Size 8
class FSetPathFollowingComponent
{

 public: 
	struct UPathFollowingComponent* NewPFComponent;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.AISense_Prediction.RequestPawnPredictionEvent Size 24
class FRequestPawnPredictionEvent
{

 public: 
	struct APawn* Requestor;  // Offset: 0 Size: 8
	struct AActor* PredictedActor;  // Offset: 8 Size: 8
	float PredictionTime;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.AIController.UnclaimTaskResource Size 8
class FUnclaimTaskResource
{

 public: 
	UGameplayTaskResource* ResourceClass;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.AIPerceptionComponent.GetActorsPerception Size 48
class FGetActorsPerception
{

 public: 
	struct AActor* Actor;  // Offset: 0 Size: 8
	struct FActorPerceptionBlueprintInfo Info;  // Offset: 8 Size: 32
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool ReturnValue : 1;  // Offset: 40 Size: 1
	char pad_41[7];  // Offset: 41 Size: 7



 // Functions 
 public:
}; 
 
 //Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors Size 24
class FGetCurrentlyPerceivedActors
{

 public: 
	UAISense* SenseToUse;  // Offset: 0 Size: 8
	struct TArray<struct AActor*> OutActors;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function AIModule.AISense_Prediction.RequestControllerPredictionEvent Size 24
class FRequestControllerPredictionEvent
{

 public: 
	struct AAIController* Requestor;  // Offset: 0 Size: 8
	struct AActor* PredictedActor;  // Offset: 8 Size: 8
	float PredictionTime;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors Size 24
class FGetKnownPerceivedActors
{

 public: 
	UAISense* SenseToUse;  // Offset: 0 Size: 8
	struct TArray<struct AActor*> OutActors;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function AIModule.AIPerceptionComponent.GetPerceivedActors Size 24
class FGetPerceivedActors
{

 public: 
	UAISense* SenseToUse;  // Offset: 0 Size: 8
	struct TArray<struct AActor*> OutActors;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function AIModule.PawnAction_BlueprintBase.ActionResume Size 8
class FActionResume
{

 public: 
	struct APawn* ControlledPawn;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName Size 56
class FSetBlackboardValueAsName
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct FBlackboardKeySelector Key;  // Offset: 8 Size: 40
	struct FName Value;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors Size 16
class FGetPerceivedHostileActors
{

 public: 
	struct TArray<struct AActor*> OutActors;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardComponent.SetValueAsEnum Size 12
class FSetValueAsEnum
{

 public: 
	struct FName KeyName;  // Offset: 0 Size: 8
	char EnumValue;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense Size 24
class FGetPerceivedHostileActorsBySense
{

 public: 
	UAISense* SenseToUse;  // Offset: 0 Size: 8
	struct TArray<struct AActor*> OutActors;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier Size 8
class FGetQuerier
{

 public: 
	struct UObject* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.AIPerceptionComponent.OnOwnerEndPlay Size 16
class FOnOwnerEndPlay
{

 public: 
	struct AActor* Actor;  // Offset: 0 Size: 8
	enum class EEndPlayReason EndPlayReason;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function AIModule.BTTask_BlueprintBase.IsTaskExecuting Size 1
class FIsTaskExecuting
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AIModule.AIPerceptionComponent.SetSenseEnabled Size 16
class FSetSenseEnabled
{

 public: 
	UAISense* SenseClass;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bEnable : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense Size 8
class FRegisterForSense
{

 public: 
	UAISense* SenseClass;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense Size 8
class FUnregisterFromSense
{

 public: 
	UAISense* SenseClass;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum Size 56
class FSetBlackboardValueAsEnum
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct FBlackboardKeySelector Key;  // Offset: 8 Size: 40
	char Value;  // Offset: 48 Size: 1
	char pad_49[7];  // Offset: 49 Size: 7



 // Functions 
 public:
}; 
 
 //Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay Size 16
class FOnPerceptionStimuliSourceEndPlay
{

 public: 
	struct AActor* Actor;  // Offset: 0 Size: 8
	enum class EEndPlayReason EndPlayReason;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function AIModule.AIPerceptionSystem.ReportEvent Size 8
class FReportEvent
{

 public: 
	struct UAISenseEvent* PerceptionEvent;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.AIPerceptionSystem.ReportPerceptionEvent Size 16
class FReportPerceptionEvent
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UAISenseEvent* PerceptionEvent;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.AISense_Blueprint.GetAllListenerActors Size 16
class FGetAllListenerActors
{

 public: 
	struct TArray<struct AActor*> ListenerActors;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AIModule.AISense_Blueprint.GetAllListenerComponents Size 16
class FGetAllListenerComponents
{

 public: 
	struct TArray<struct UAIPerceptionComponent*> ListenerComponents;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName Size 56
class FGetBlackboardValueAsName
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct FBlackboardKeySelector Key;  // Offset: 8 Size: 40
	struct FName ReturnValue;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.AISense_Blueprint.OnListenerRegistered Size 16
class FOnListenerRegistered
{

 public: 
	struct AActor* ActorListener;  // Offset: 0 Size: 8
	struct UAIPerceptionComponent* PerceptionComponent;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.AISense_Blueprint.OnListenerUnregistered Size 16
class FOnListenerUnregistered
{

 public: 
	struct AActor* ActorListener;  // Offset: 0 Size: 8
	struct UAIPerceptionComponent* PerceptionComponent;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.AISense_Blueprint.OnListenerUpdated Size 16
class FOnListenerUpdated
{

 public: 
	struct AActor* ActorListener;  // Offset: 0 Size: 8
	struct UAIPerceptionComponent* PerceptionComponent;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.AISense_Blueprint.OnUpdate Size 24
class FOnUpdate
{

 public: 
	struct TArray<struct UAISenseEvent*> EventsToProcess;  // Offset: 0 Size: 16
	float ReturnValue;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.AISense_Damage.ReportDamageEvent Size 64
class FReportDamageEvent
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct AActor* DamagedActor;  // Offset: 8 Size: 8
	struct AActor* Instigator;  // Offset: 16 Size: 8
	float DamageAmount;  // Offset: 24 Size: 4
	struct FVector EventLocation;  // Offset: 28 Size: 12
	struct FVector HitLocation;  // Offset: 40 Size: 12
	struct FName Tag;  // Offset: 52 Size: 8
	char pad_60[4];  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.AISense_Hearing.ReportNoiseEvent Size 48
class FReportNoiseEvent
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FVector NoiseLocation;  // Offset: 8 Size: 12
	float Loudness;  // Offset: 20 Size: 4
	struct AActor* Instigator;  // Offset: 24 Size: 8
	float MaxRange;  // Offset: 32 Size: 4
	struct FName Tag;  // Offset: 36 Size: 8
	char pad_44[4];  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.AITask_MoveTo.AIMoveTo Size 56
class FAIMoveTo
{

 public: 
	struct AAIController* Controller;  // Offset: 0 Size: 8
	struct FVector GoalLocation;  // Offset: 8 Size: 12
	char pad_20[4];  // Offset: 20 Size: 4
	struct AActor* GoalActor;  // Offset: 24 Size: 8
	float AcceptanceRadius;  // Offset: 32 Size: 4
	enum class EAIOptionFlag StopOnOverlap;  // Offset: 36 Size: 1
	enum class EAIOptionFlag AcceptPartialPath;  // Offset: 37 Size: 1
	char pad_38_1 : 7;  // Offset: 38 Size: 1
	bool bUsePathfinding : 1;  // Offset: 38 Size: 1
	char pad_39_1 : 7;  // Offset: 39 Size: 1
	bool bLockAILogic : 1;  // Offset: 39 Size: 1
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bUseContinuosGoalTracking : 1;  // Offset: 40 Size: 1
	enum class EAIOptionFlag ProjectGoalOnNavigation;  // Offset: 41 Size: 1
	char pad_42[6];  // Offset: 42 Size: 6
	struct UAITask_MoveTo* ReturnValue;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.AITask_RunEQS.RunEQS Size 24
class FRunEQS
{

 public: 
	struct AAIController* Controller;  // Offset: 0 Size: 8
	struct UEnvQuery* QueryTemplate;  // Offset: 8 Size: 8
	struct UAITask_RunEQS* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BrainComponent.IsRunning Size 1
class FIsRunning
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration Size 16
class FAddCooldownTagDuration
{

 public: 
	struct FGameplayTag CooldownTag;  // Offset: 0 Size: 8
	float CooldownDuration;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool bAddToExistingDuration : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime Size 12
class FGetTagCooldownEndTime
{

 public: 
	struct FGameplayTag CooldownTag;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.BehaviorTreeComponent.SetDynamicSubtree Size 16
class FSetDynamicSubtree
{

 public: 
	struct FGameplayTag InjectTag;  // Offset: 0 Size: 8
	struct UBehaviorTree* BehaviorAsset;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI Size 16
class FReceiveExecutionStartAI
{

 public: 
	struct AAIController* OwnerController;  // Offset: 0 Size: 8
	struct APawn* ControlledPawn;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardAssetProvider.GetBlackboardAsset Size 8
class FGetBlackboardAsset
{

 public: 
	struct UBlackboardData* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardComponent.ClearValue Size 8
class FClearValue
{

 public: 
	struct FName KeyName;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.PawnActionsComponent.K2_ForceAbortAction Size 16
class FK2_ForceAbortAction
{

 public: 
	struct UPawnAction* ActionToAbort;  // Offset: 0 Size: 8
	enum class EPawnActionAbortState ReturnValue;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardComponent.GetLocationFromEntry Size 24
class FGetLocationFromEntry
{

 public: 
	struct FName KeyName;  // Offset: 0 Size: 8
	struct FVector ResultLocation;  // Offset: 8 Size: 12
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool ReturnValue : 1;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector Size 64
class FSetBlackboardValueAsVector
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct FBlackboardKeySelector Key;  // Offset: 8 Size: 40
	struct FVector Value;  // Offset: 48 Size: 12
	char pad_60[4];  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardComponent.GetValueAsBool Size 12
class FGetValueAsBool
{

 public: 
	struct FName KeyName;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardComponent.GetValueAsClass Size 16
class FGetValueAsClass
{

 public: 
	struct FName KeyName;  // Offset: 0 Size: 8
	UObject* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardComponent.GetValueAsEnum Size 12
class FGetValueAsEnum
{

 public: 
	struct FName KeyName;  // Offset: 0 Size: 8
	char ReturnValue;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardComponent.GetValueAsFloat Size 12
class FGetValueAsFloat
{

 public: 
	struct FName KeyName;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardComponent.GetValueAsInt Size 12
class FGetValueAsInt
{

 public: 
	struct FName KeyName;  // Offset: 0 Size: 8
	int32_t ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardComponent.GetValueAsName Size 16
class FGetValueAsName
{

 public: 
	struct FName KeyName;  // Offset: 0 Size: 8
	struct FName ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardComponent.GetValueAsObject Size 16
class FGetValueAsObject
{

 public: 
	struct FName KeyName;  // Offset: 0 Size: 8
	struct UObject* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardComponent.SetValueAsString Size 24
class FSetValueAsString
{

 public: 
	struct FName KeyName;  // Offset: 0 Size: 8
	struct FString StringValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardComponent.GetValueAsRotator Size 20
class FGetValueAsRotator
{

 public: 
	struct FName KeyName;  // Offset: 0 Size: 8
	struct FRotator ReturnValue;  // Offset: 8 Size: 12



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardComponent.GetValueAsString Size 24
class FGetValueAsString
{

 public: 
	struct FName KeyName;  // Offset: 0 Size: 8
	struct FString ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardComponent.GetValueAsVector Size 20
class FGetValueAsVector
{

 public: 
	struct FName KeyName;  // Offset: 0 Size: 8
	struct FVector ReturnValue;  // Offset: 8 Size: 12



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardComponent.SetValueAsClass Size 16
class FSetValueAsClass
{

 public: 
	struct FName KeyName;  // Offset: 0 Size: 8
	UObject* ClassValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardComponent.SetValueAsFloat Size 12
class FSetValueAsFloat
{

 public: 
	struct FName KeyName;  // Offset: 0 Size: 8
	float FloatValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI Size 24
class FReceiveExecutionFinishAI
{

 public: 
	struct AAIController* OwnerController;  // Offset: 0 Size: 8
	struct APawn* ControlledPawn;  // Offset: 8 Size: 8
	enum class EBTNodeResult NodeResult;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardComponent.SetValueAsInt Size 12
class FSetValueAsInt
{

 public: 
	struct FName KeyName;  // Offset: 0 Size: 8
	int32_t IntValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardComponent.SetValueAsName Size 16
class FSetValueAsName
{

 public: 
	struct FName KeyName;  // Offset: 0 Size: 8
	struct FName NameValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardComponent.SetValueAsRotator Size 20
class FSetValueAsRotator
{

 public: 
	struct FName KeyName;  // Offset: 0 Size: 8
	struct FRotator VectorValue;  // Offset: 8 Size: 12



 // Functions 
 public:
}; 
 
 //Function AIModule.BlackboardComponent.SetValueAsVector Size 20
class FSetValueAsVector
{

 public: 
	struct FName KeyName;  // Offset: 0 Size: 8
	struct FVector VectorValue;  // Offset: 8 Size: 12



 // Functions 
 public:
}; 
 
 //Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive Size 1
class FIsDecoratorExecutionActive
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive Size 1
class FIsDecoratorObserverActive
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck Size 16
class FPerformConditionCheck
{

 public: 
	struct AActor* OwnerActor;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI Size 24
class FPerformConditionCheckAI
{

 public: 
	struct AAIController* OwnerController;  // Offset: 0 Size: 8
	struct APawn* ControlledPawn;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish Size 16
class FReceiveExecutionFinish
{

 public: 
	struct AActor* OwnerActor;  // Offset: 0 Size: 8
	enum class EBTNodeResult NodeResult;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart Size 8
class FReceiveExecutionStart
{

 public: 
	struct AActor* OwnerActor;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated Size 8
class FReceiveObserverActivated
{

 public: 
	struct AActor* OwnerActor;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI Size 16
class FReceiveObserverActivatedAI
{

 public: 
	struct AAIController* OwnerController;  // Offset: 0 Size: 8
	struct APawn* ControlledPawn;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated Size 8
class FReceiveObserverDeactivated
{

 public: 
	struct AActor* OwnerActor;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI Size 16
class FReceiveObserverDeactivatedAI
{

 public: 
	struct AAIController* OwnerController;  // Offset: 0 Size: 8
	struct APawn* ControlledPawn;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTTask_BlueprintBase.ReceiveTick Size 16
class FReceiveTick
{

 public: 
	struct AActor* OwnerActor;  // Offset: 0 Size: 8
	float DeltaSeconds;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.BTTask_BlueprintBase.FinishExecute Size 1
class FFinishExecute
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bSuccess : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AIModule.BTTask_BlueprintBase.ReceiveTickAI Size 24
class FReceiveTickAI
{

 public: 
	struct AAIController* OwnerController;  // Offset: 0 Size: 8
	struct APawn* ControlledPawn;  // Offset: 8 Size: 8
	float DeltaSeconds;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.ClearBlackboardValue Size 48
class FClearBlackboardValue
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct FBlackboardKeySelector Key;  // Offset: 8 Size: 40



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector Size 48
class FClearBlackboardValueAsVector
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct FBlackboardKeySelector Key;  // Offset: 8 Size: 40



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor Size 56
class FGetBlackboardValueAsActor
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct FBlackboardKeySelector Key;  // Offset: 8 Size: 40
	struct AActor* ReturnValue;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering Size 1
class FSuspendCrowdSteering
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bSuspend : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool Size 56
class FGetBlackboardValueAsBool
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct FBlackboardKeySelector Key;  // Offset: 8 Size: 40
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool ReturnValue : 1;  // Offset: 48 Size: 1
	char pad_49[7];  // Offset: 49 Size: 7



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass Size 56
class FGetBlackboardValueAsClass
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct FBlackboardKeySelector Key;  // Offset: 8 Size: 40
	UObject* ReturnValue;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum Size 56
class FGetBlackboardValueAsEnum
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct FBlackboardKeySelector Key;  // Offset: 8 Size: 40
	char ReturnValue;  // Offset: 48 Size: 1
	char pad_49[7];  // Offset: 49 Size: 7



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat Size 56
class FGetBlackboardValueAsFloat
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct FBlackboardKeySelector Key;  // Offset: 8 Size: 40
	float ReturnValue;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt Size 56
class FGetBlackboardValueAsInt
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct FBlackboardKeySelector Key;  // Offset: 8 Size: 40
	int32_t ReturnValue;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject Size 56
class FGetBlackboardValueAsObject
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct FBlackboardKeySelector Key;  // Offset: 8 Size: 40
	struct UObject* ReturnValue;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator Size 64
class FGetBlackboardValueAsRotator
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct FBlackboardKeySelector Key;  // Offset: 8 Size: 40
	struct FRotator ReturnValue;  // Offset: 48 Size: 12
	char pad_60[4];  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.GetOwnerComponent Size 16
class FGetOwnerComponent
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct UBehaviorTreeComponent* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.GetOwnersBlackboard Size 16
class FGetOwnersBlackboard
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct UBlackboardComponent* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass Size 56
class FSetBlackboardValueAsClass
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct FBlackboardKeySelector Key;  // Offset: 8 Size: 40
	UObject* Value;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat Size 56
class FSetBlackboardValueAsFloat
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct FBlackboardKeySelector Key;  // Offset: 8 Size: 40
	float Value;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt Size 56
class FSetBlackboardValueAsInt
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct FBlackboardKeySelector Key;  // Offset: 8 Size: 40
	int32_t Value;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject Size 56
class FSetBlackboardValueAsObject
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct FBlackboardKeySelector Key;  // Offset: 8 Size: 40
	struct UObject* Value;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector Size 12
class FAddGeneratedVector
{

 public: 
	struct FVector GeneratedVector;  // Offset: 0 Size: 12



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString Size 64
class FSetBlackboardValueAsString
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct FBlackboardKeySelector Key;  // Offset: 8 Size: 40
	struct FString Value;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.StartUsingExternalEvent Size 16
class FStartUsingExternalEvent
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8
	struct AActor* OwningActor;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTFunctionLibrary.StopUsingExternalEvent Size 8
class FStopUsingExternalEvent
{

 public: 
	struct UBTNode* NodeOwner;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTService_BlueprintBase.IsServiceActive Size 1
class FIsServiceActive
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AIModule.BTService_BlueprintBase.ReceiveActivation Size 8
class FReceiveActivation
{

 public: 
	struct AActor* OwnerActor;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTService_BlueprintBase.ReceiveDeactivation Size 8
class FReceiveDeactivation
{

 public: 
	struct AActor* OwnerActor;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI Size 16
class FReceiveDeactivationAI
{

 public: 
	struct AAIController* OwnerController;  // Offset: 0 Size: 8
	struct APawn* ControlledPawn;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTService_BlueprintBase.ReceiveSearchStart Size 8
class FReceiveSearchStart
{

 public: 
	struct AActor* OwnerActor;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTTask_BlueprintBase.IsTaskAborting Size 1
class FIsTaskAborting
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AIModule.BTTask_BlueprintBase.ReceiveAbort Size 8
class FReceiveAbort
{

 public: 
	struct AActor* OwnerActor;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI Size 16
class FReceiveAbortAI
{

 public: 
	struct AAIController* OwnerController;  // Offset: 0 Size: 8
	struct APawn* ControlledPawn;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTTask_BlueprintBase.ReceiveExecute Size 8
class FReceiveExecute
{

 public: 
	struct AActor* OwnerActor;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage Size 8
class FSetFinishOnMessage
{

 public: 
	struct FName MessageName;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.PathFollowingComponent.GetPathDestination Size 12
class FGetPathDestination
{

 public: 
	struct FVector ReturnValue;  // Offset: 0 Size: 12



 // Functions 
 public:
}; 
 
 //Function AIModule.PathFollowingComponent.OnActorBump Size 168
class FOnActorBump
{

 public: 
	struct AActor* SelfActor;  // Offset: 0 Size: 8
	struct AActor* OtherActor;  // Offset: 8 Size: 8
	struct FVector NormalImpulse;  // Offset: 16 Size: 12
	struct FHitResult Hit;  // Offset: 28 Size: 136
	char pad_164[4];  // Offset: 164 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration Size 16
class FDoItemGeneration
{

 public: 
	struct TArray<struct FVector> ContextLocations;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AIModule.PathFollowingComponent.OnNavDataRegistered Size 8
class FOnNavDataRegistered
{

 public: 
	struct ANavigationData* NavData;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet Size 32
class FProvideActorsSet
{

 public: 
	struct UObject* QuerierObject;  // Offset: 0 Size: 8
	struct AActor* QuerierActor;  // Offset: 8 Size: 8
	struct TArray<struct AActor*> ResultingActorsSet;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet Size 32
class FProvideLocationsSet
{

 public: 
	struct UObject* QuerierObject;  // Offset: 0 Size: 8
	struct AActor* QuerierActor;  // Offset: 8 Size: 8
	struct TArray<struct FVector> ResultingLocationSet;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor Size 24
class FProvideSingleActor
{

 public: 
	struct UObject* QuerierObject;  // Offset: 0 Size: 8
	struct AActor* QuerierActor;  // Offset: 8 Size: 8
	struct AActor* ResultingActor;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor Size 8
class FAddGeneratedActor
{

 public: 
	struct AActor* GeneratedActor;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.EnvQueryManager.RunEQSQuery Size 48
class FRunEQSQuery
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UEnvQuery* QueryTemplate;  // Offset: 8 Size: 8
	struct UObject* Querier;  // Offset: 16 Size: 8
	enum class EEnvQueryRunMode RunMode;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7
	UEnvQueryInstanceBlueprintWrapper* WrapperClass;  // Offset: 32 Size: 8
	struct UEnvQueryInstanceBlueprintWrapper* ReturnValue;  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.NavLinkProxy.HasMovingAgents Size 1
class FHasMovingAgents
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AIModule.NavLinkProxy.IsSmartLinkEnabled Size 1
class FIsSmartLinkEnabled
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AIModule.NavLinkProxy.ReceiveSmartLinkReached Size 24
class FReceiveSmartLinkReached
{

 public: 
	struct AActor* Agent;  // Offset: 0 Size: 8
	struct FVector Destination;  // Offset: 8 Size: 12
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.NavLinkProxy.SetSmartLinkEnabled Size 1
class FSetSmartLinkEnabled
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnabled : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox Size 64
class FAddLocalNavigationGridForBox
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FVector Location;  // Offset: 8 Size: 12
	struct FVector Extent;  // Offset: 20 Size: 12
	struct FRotator Rotation;  // Offset: 32 Size: 12
	int32_t Radius2D;  // Offset: 44 Size: 4
	float Height;  // Offset: 48 Size: 4
	char pad_52_1 : 7;  // Offset: 52 Size: 1
	bool bRebuildGrids : 1;  // Offset: 52 Size: 1
	char pad_53[3];  // Offset: 53 Size: 3
	int32_t ReturnValue;  // Offset: 56 Size: 4
	char pad_60[4];  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint Size 40
class FAddLocalNavigationGridForPoint
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FVector Location;  // Offset: 8 Size: 12
	int32_t Radius2D;  // Offset: 20 Size: 4
	float Height;  // Offset: 24 Size: 4
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool bRebuildGrids : 1;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3
	int32_t ReturnValue;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints Size 40
class FAddLocalNavigationGridForPoints
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct TArray<struct FVector> Locations;  // Offset: 8 Size: 16
	int32_t Radius2D;  // Offset: 24 Size: 4
	float Height;  // Offset: 28 Size: 4
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool bRebuildGrids : 1;  // Offset: 32 Size: 1
	char pad_33[3];  // Offset: 33 Size: 3
	int32_t ReturnValue;  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid Size 16
class FRemoveLocalNavigationGrid
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	int32_t GridId;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool bRebuildGrids : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity Size 16
class FSetLocalNavigationGridDensity
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	float CellSize;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool ReturnValue : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //Function AIModule.PawnAction.CreateActionInstance Size 24
class FCreateActionInstance
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	UPawnAction* ActionClass;  // Offset: 8 Size: 8
	struct UPawnAction* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.PawnAction.GetActionPriority Size 1
class FGetActionPriority
{

 public: 
	enum class EAIRequestPriority ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AIModule.PawnAction_BlueprintBase.ActionFinished Size 16
class FActionFinished
{

 public: 
	struct APawn* ControlledPawn;  // Offset: 0 Size: 8
	enum class EPawnActionResult WithResult;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function AIModule.PawnAction_BlueprintBase.ActionPause Size 8
class FActionPause
{

 public: 
	struct APawn* ControlledPawn;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.PawnAction_BlueprintBase.ActionStart Size 8
class FActionStart
{

 public: 
	struct APawn* ControlledPawn;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AIModule.PawnAction_BlueprintBase.ActionTick Size 16
class FActionTick
{

 public: 
	struct APawn* ControlledPawn;  // Offset: 0 Size: 8
	float DeltaSeconds;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function AIModule.PawnActionsComponent.K2_AbortAction Size 16
class FK2_AbortAction
{

 public: 
	struct UPawnAction* ActionToAbort;  // Offset: 0 Size: 8
	enum class EPawnActionAbortState ReturnValue;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function AIModule.PawnActionsComponent.K2_PushAction Size 32
class FK2_PushAction
{

 public: 
	struct UPawnAction* NewAction;  // Offset: 0 Size: 8
	enum class EAIRequestPriority Priority;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct UObject* Instigator;  // Offset: 16 Size: 8
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool ReturnValue : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 