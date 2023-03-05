#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FGetSenseClassForStimulus
{
public:
	FGetSenseClassForStimulus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FAIStimulus GetStimulus() {
		return memory.read<struct FAIStimulus>(m_addr + 8);
	}
	UAISense GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return UAISense(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateMoveToProxyObject
{
public:
	FCreateMoveToProxyObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct APawn GetPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APawn(ptr_addr);
	}
	struct FVector GetDestination() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	struct AActor GetTargetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct AActor(ptr_addr);
	}
	float GetAcceptanceRadius() {
		return memory.read<float>(m_addr + 40);
	}
	bool GetbStopOnOverlap() {
		return memory.read<bool>(m_addr + 44);
	}
	struct UAIAsyncTaskBlueprintProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UAIAsyncTaskBlueprintProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIMoveCompletedSignature__DelegateSignature
{
public:
	FAIMoveCompletedSignature__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAIRequestID GetRequestID() {
		return memory.read<struct FAIRequestID>(m_addr + 0);
	}
	enum class EPathFollowingResult GetResult() {
		return memory.read<enum class EPathFollowingResult>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIRequestID
{
public:
	FAIRequestID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetRequestID() {
		return memory.read<uint32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPeripheralVisionAngle
{
public:
	FSetPeripheralVisionAngle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNewPeripheralVisionAngle() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetItemScore
{
public:
	FGetItemScore(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetItemIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FBTDecoratorLogic
{
public:
	FBTDecoratorLogic(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EBTDecoratorLogic GetOperation() {
		return memory.read<enum class EBTDecoratorLogic>(m_addr + 0);
	}
	uint16_t GetNumber() {
		return memory.read<uint16_t>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIPredictionEvent
{
public:
	FAIPredictionEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetRequestor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct AActor GetPredictedActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAITouchEvent
{
public:
	FAITouchEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetTouchReceiver() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct AActor(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOAISimpleDelegate__DelegateSignature
{
public:
	FOAISimpleDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPathFollowingResult GetMovementResult() {
		return memory.read<enum class EPathFollowingResult>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetValueAsObject
{
public:
	FSetValueAsObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct UObject GetObjectValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FHearNoiseDelegate__DelegateSignature
{
public:
	FHearNoiseDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetInstigator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	float GetVolume() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetQueryResultsAsLocations
{
public:
	FGetQueryResultsAsLocations(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVector> GetResultLocations() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnvQueryInstanceCache
{
public:
	FEnvQueryInstanceCache(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UEnvQuery GetTemplate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UEnvQuery(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FEQSQueryDoneSignature__DelegateSignature
{
public:
	FEQSQueryDoneSignature__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UEnvQueryInstanceBlueprintWrapper GetQueryInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UEnvQueryInstanceBlueprintWrapper(ptr_addr);
	}
	enum class EEnvQueryStatus GetQueryStatus() {
		return memory.read<enum class EEnvQueryStatus>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetQueryResultsAsActors
{
public:
	FGetQueryResultsAsActors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct AActor> GetResultActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct AActor>(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FEQSParametrizedQueryExecutionRequest
{
public:
	FEQSParametrizedQueryExecutionRequest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UEnvQuery GetQueryTemplate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UEnvQuery(ptr_addr);
	}
	struct TArray<struct FAIDynamicParam> GetQueryConfig() {
		return memory.read<struct TArray<struct FAIDynamicParam>>(m_addr + 8);
	}
	struct FBlackboardKeySelector GetEQSQueryBlackboardKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 24);
	}
	enum class EEnvQueryRunMode GetRunMode() {
		return memory.read<enum class EEnvQueryRunMode>(m_addr + 64);
	}
	char GetbUseBBKeyForQueryTemplate() {
		return memory.read<char>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};class FAINoiseEvent
{
public:
	FAINoiseEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetNoiseLocation() {
		return memory.read<struct FVector>(m_addr + 4);
	}
	float GetLoudness() {
		return memory.read<float>(m_addr + 16);
	}
	float GetMaxRange() {
		return memory.read<float>(m_addr + 20);
	}
	struct AActor GetInstigator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct AActor(ptr_addr);
	}
	struct FName GetTag() {
		return memory.read<struct FName>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetResultsAsActors
{
public:
	FGetResultsAsActors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct AActor> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct AActor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetResultsAsLocations
{
public:
	FGetResultsAsLocations(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVector> GetReturnValue() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAISenseAffiliationFilter
{
public:
	FAISenseAffiliationFilter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbDetectEnemies() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbDetectNeutrals() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbDetectFriendlies() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMoveTaskCompletedSignature__DelegateSignature
{
public:
	FMoveTaskCompletedSignature__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPathFollowingResult GetResult() {
		return memory.read<enum class EPathFollowingResult>(m_addr + 0);
	}
	struct AAIController GetAIController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AAIController(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNamedParam
{
public:
	FSetNamedParam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParamName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsPaused
{
public:
	FIsPaused(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIntervalCountdown
{
public:
	FIntervalCountdown(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInterval() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSmartLinkReachedSignature__DelegateSignature
{
public:
	FSmartLinkReachedSignature__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetMovingActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct FVector GetDestinationPoint() {
		return memory.read<struct FVector>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FPerceptionUpdatedDelegate__DelegateSignature
{
public:
	FPerceptionUpdatedDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct AActor> GetUpdatedActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct AActor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FActorPerceptionUpdateInfo
{
public:
	FActorPerceptionUpdateInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTargetId() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TWeakObjectPtr<AActor> GetTarget() {
		return memory.read<struct TWeakObjectPtr<AActor>>(m_addr + 4);
	}
	struct FAIStimulus GetStimulus() {
		return memory.read<struct FAIStimulus>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetValueAsBool
{
public:
	FSetValueAsBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetBoolValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FActorPerceptionUpdatedDelegate__DelegateSignature
{
public:
	FActorPerceptionUpdatedDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct FAIStimulus GetStimulus() {
		return memory.read<struct FAIStimulus>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveExecuteAI
{
public:
	FReceiveExecuteAI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AAIController GetOwnerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AAIController(ptr_addr);
	}
	struct APawn GetControlledPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIStimulus
{
public:
	FAIStimulus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetAge() {
		return memory.read<float>(m_addr + 0);
	}
	float GetExpirationAge() {
		return memory.read<float>(m_addr + 4);
	}
	float GetStrength() {
		return memory.read<float>(m_addr + 8);
	}
	struct FVector GetStimulusLocation() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FVector GetReceiverLocation() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct FName GetTag() {
		return memory.read<struct FName>(m_addr + 36);
	}
	char GetbSuccessfullySensed() {
		return memory.read<char>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_PerformAction
{
public:
	FK2_PerformAction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}
	struct UPawnAction GetAction() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UPawnAction(ptr_addr);
	}
	enum class EAIRequestPriority GetPriority() {
		return memory.read<enum class EAIRequestPriority>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 17);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveActivationAI
{
public:
	FReceiveActivationAI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AAIController GetOwnerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AAIController(ptr_addr);
	}
	struct APawn GetControlledPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FActorPerceptionInfoUpdatedDelegate__DelegateSignature
{
public:
	FActorPerceptionInfoUpdatedDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FActorPerceptionUpdateInfo GetUpdateInfo() {
		return memory.read<struct FActorPerceptionUpdateInfo>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPeripheralVisionAngle
{
public:
	FGetPeripheralVisionAngle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBTCompositeChild
{
public:
	FBTCompositeChild(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTCompositeNode GetChildComposite() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTCompositeNode(ptr_addr);
	}
	struct UBTTaskNode GetChildTask() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UBTTaskNode(ptr_addr);
	}
	struct TArray<struct UBTDecorator> GetDecorators() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct TArray<struct UBTDecorator>(ptr_addr);
	}
	struct TArray<struct FBTDecoratorLogic> GetDecoratorOps() {
		return memory.read<struct TArray<struct FBTDecoratorLogic>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFocalPointOnActor
{
public:
	FGetFocalPointOnActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPeripheralVisionCosine
{
public:
	FGetPeripheralVisionCosine(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSeePawnDelegate__DelegateSignature
{
public:
	FSeePawnDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsVectorValueSet
{
public:
	FIsVectorValueSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSensingInterval
{
public:
	FSetSensingInterval(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNewSensingInterval() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIMoveRequest
{
public:
	FAIMoveRequest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetGoalActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSensingUpdatesEnabled
{
public:
	FSetSensingUpdatesEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRotationFromEntry
{
public:
	FGetRotationFromEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FRotator GetResultRotation() {
		return memory.read<struct FRotator>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FRegisterPerceptionStimuliSource
{
public:
	FRegisterPerceptionStimuliSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	UAISense GetSense() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UAISense(ptr_addr);
	}
	struct AActor GetTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct AActor(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIDataProviderValue
{
public:
	FAIDataProviderValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAIDataProvider GetDataBinding() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UAIDataProvider(ptr_addr);
	}
	struct FName GetDataField() {
		return memory.read<struct FName>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBlackboardValueAsRotator
{
public:
	FSetBlackboardValueAsRotator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct FBlackboardKeySelector GetKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 8);
	}
	struct FRotator GetValue() {
		return memory.read<struct FRotator>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIDataProviderFloatValue
{
public:
	FAIDataProviderFloatValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDefaultValue() {
		return memory.read<float>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIDataProviderTypedValue
{
public:
	FAIDataProviderTypedValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject GetPropertyType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIDataProviderBoolValue
{
public:
	FAIDataProviderBoolValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetDefaultValue() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnGameplayTaskResourcesClaimed
{
public:
	FOnGameplayTaskResourcesClaimed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayResourceSet GetNewlyClaimed() {
		return memory.read<struct FGameplayResourceSet>(m_addr + 0);
	}
	struct FGameplayResourceSet GetFreshlyReleased() {
		return memory.read<struct FGameplayResourceSet>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIDataProviderIntValue
{
public:
	FAIDataProviderIntValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDefaultValue() {
		return memory.read<int32_t>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddLocalNavigationGridForCapsule
{
public:
	FAddLocalNavigationGridForCapsule(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	float GetCapsuleRadius() {
		return memory.read<float>(m_addr + 20);
	}
	float GetCapsuleHalfHeight() {
		return memory.read<float>(m_addr + 24);
	}
	int32_t GetRadius2D() {
		return memory.read<int32_t>(m_addr + 28);
	}
	float GetHeight() {
		return memory.read<float>(m_addr + 32);
	}
	bool GetbRebuildGrids() {
		return memory.read<bool>(m_addr + 36);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIDataProviderStructValue
{
public:
	FAIDataProviderStructValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FActorPerceptionBlueprintInfo
{
public:
	FActorPerceptionBlueprintInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct TArray<struct FAIStimulus> GetLastSensedStimuli() {
		return memory.read<struct TArray<struct FAIStimulus>>(m_addr + 8);
	}
	char GetbIsHostile() {
		return memory.read<char>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMoveCompleted
{
public:
	FOnMoveCompleted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAIRequestID GetRequestID() {
		return memory.read<struct FAIRequestID>(m_addr + 0);
	}
	enum class EPathFollowingResult GetMovementResult() {
		return memory.read<enum class EPathFollowingResult>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIDamageEvent
{
public:
	FAIDamageEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetAmount() {
		return memory.read<float>(m_addr + 0);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 4);
	}
	struct FVector GetHitLocation() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	struct AActor GetDamagedActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct AActor(ptr_addr);
	}
	struct AActor GetInstigator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct AActor(ptr_addr);
	}
	struct FName GetTag() {
		return memory.read<struct FName>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindLocalNavigationGridPath
{
public:
	FFindLocalNavigationGridPath(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector GetStart() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetEnd() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct TArray<struct FVector> GetPathPoints() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 32);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentPathPoints
{
public:
	FGetCurrentPathPoints(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AController GetController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AController(ptr_addr);
	}
	struct TArray<struct FVector> GetReturnValue() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FAISightEvent
{
public:
	FAISightEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetSeenActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct AActor GetObserver() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FFinish
{
public:
	FFinish(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPawnActionResult GetWithResult() {
		return memory.read<enum class EPawnActionResult>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAITeamStimulusEvent
{
public:
	FAITeamStimulusEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetBroadcaster() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct AActor(ptr_addr);
	}
	struct AActor GetEnemy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFinishOnMessageWithId
{
public:
	FSetFinishOnMessageWithId(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetMessageName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetRequestID() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FBehaviorTreeTemplateInfo
{
public:
	FBehaviorTreeTemplateInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBehaviorTree GetAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBehaviorTree(ptr_addr);
	}
	struct UBTCompositeNode GetTemplate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UBTCompositeNode(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FBlackboardKeySelector
{
public:
	FBlackboardKeySelector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UBlackboardKeyType> GetAllowedTypes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UBlackboardKeyType>(ptr_addr);
	}
	struct FName GetSelectedKeyName() {
		return memory.read<struct FName>(m_addr + 16);
	}
	UBlackboardKeyType GetSelectedKeyType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return UBlackboardKeyType(ptr_addr);
	}
	char GetSelectedKeyID() {
		return memory.read<char>(m_addr + 32);
	}
	char GetbNoneIsAllowedValue() {
		return memory.read<char>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveSearchStartAI
{
public:
	FReceiveSearchStartAI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AAIController GetOwnerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AAIController(ptr_addr);
	}
	struct APawn GetControlledPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FBlackboardEntry
{
public:
	FBlackboardEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetEntryName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct UBlackboardKeyType GetKeyType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UBlackboardKeyType(ptr_addr);
	}
	char GetbInstanceSynced() {
		return memory.read<char>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnvQueryRequest
{
public:
	FEnvQueryRequest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UEnvQuery GetQueryTemplate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UEnvQuery(ptr_addr);
	}
	struct UObject GetOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}
	struct UWorld GetWorld() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UWorld(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCrowdAvoidanceSamplingPattern
{
public:
	FCrowdAvoidanceSamplingPattern(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<float> GetAngles() {
		return memory.read<struct TArray<float>>(m_addr + 0);
	}
	struct TArray<float> GetRadii() {
		return memory.read<struct TArray<float>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FCrowdAvoidanceConfig
{
public:
	FCrowdAvoidanceConfig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetVelocityBias() {
		return memory.read<float>(m_addr + 0);
	}
	float GetDesiredVelocityWeight() {
		return memory.read<float>(m_addr + 4);
	}
	float GetCurrentVelocityWeight() {
		return memory.read<float>(m_addr + 8);
	}
	float GetSideBiasWeight() {
		return memory.read<float>(m_addr + 12);
	}
	float GetImpactTimeWeight() {
		return memory.read<float>(m_addr + 16);
	}
	float GetImpactTimeRange() {
		return memory.read<float>(m_addr + 20);
	}
	char GetCustomPatternIdx() {
		return memory.read<char>(m_addr + 24);
	}
	char GetAdaptiveDivisions() {
		return memory.read<char>(m_addr + 25);
	}
	char GetAdaptiveRings() {
		return memory.read<char>(m_addr + 26);
	}
	char GetAdaptiveDepth() {
		return memory.read<char>(m_addr + 27);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIDynamicParam
{
public:
	FAIDynamicParam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParamName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	enum class EAIParamType GetParamType() {
		return memory.read<enum class EAIParamType>(m_addr + 8);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 12);
	}
	struct FBlackboardKeySelector GetBBKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FStopLogic
{
public:
	FStopLogic(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReason() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnvQueryResult
{
public:
	FEnvQueryResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UEnvQueryItemType GetItemType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return UEnvQueryItemType(ptr_addr);
	}
	int32_t GetOptionIndex() {
		return memory.read<int32_t>(m_addr + 44);
	}
	int32_t GetQueryID() {
		return memory.read<int32_t>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnvOverlapData
{
public:
	FEnvOverlapData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetExtentX() {
		return memory.read<float>(m_addr + 0);
	}
	float GetExtentY() {
		return memory.read<float>(m_addr + 4);
	}
	float GetExtentZ() {
		return memory.read<float>(m_addr + 8);
	}
	struct FVector GetShapeOffset() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	enum class ECollisionChannel GetOverlapChannel() {
		return memory.read<enum class ECollisionChannel>(m_addr + 24);
	}
	enum class EEnvOverlapShape GetOverlapShape() {
		return memory.read<enum class EEnvOverlapShape>(m_addr + 25);
	}
	char GetbOnlyBlockingHits() {
		return memory.read<char>(m_addr + 28);
	}
	char GetbOverlapComplex() {
		return memory.read<char>(m_addr + 28);
	}
	char GetbSkipOverlapQuerier() {
		return memory.read<char>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUsingBlackBoard
{
public:
	FOnUsingBlackBoard(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBlackboardComponent GetBlackboardComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBlackboardComponent(ptr_addr);
	}
	struct UBlackboardData GetBlackboardAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UBlackboardData(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnvTraceData
{
public:
	FEnvTraceData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetVersionNum() {
		return memory.read<int32_t>(m_addr + 0);
	}
	UNavigationQueryFilter GetNavigationFilter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UNavigationQueryFilter(ptr_addr);
	}
	float GetProjectDown() {
		return memory.read<float>(m_addr + 16);
	}
	float GetProjectUp() {
		return memory.read<float>(m_addr + 20);
	}
	float GetExtentX() {
		return memory.read<float>(m_addr + 24);
	}
	float GetExtentY() {
		return memory.read<float>(m_addr + 28);
	}
	float GetExtentZ() {
		return memory.read<float>(m_addr + 32);
	}
	float GetPostProjectionVerticalOffset() {
		return memory.read<float>(m_addr + 36);
	}
	enum class ETraceTypeQuery GetTraceChannel() {
		return memory.read<enum class ETraceTypeQuery>(m_addr + 40);
	}
	enum class ECollisionChannel GetSerializedChannel() {
		return memory.read<enum class ECollisionChannel>(m_addr + 41);
	}
	enum class EEnvTraceShape GetTraceShape() {
		return memory.read<enum class EEnvTraceShape>(m_addr + 42);
	}
	enum class EEnvQueryTrace GetTraceMode() {
		return memory.read<enum class EEnvQueryTrace>(m_addr + 43);
	}
	char GetbTraceComplex() {
		return memory.read<char>(m_addr + 44);
	}
	char GetbOnlyBlockingHits() {
		return memory.read<char>(m_addr + 44);
	}
	char GetbCanTraceOnNavMesh() {
		return memory.read<char>(m_addr + 44);
	}
	char GetbCanTraceOnGeometry() {
		return memory.read<char>(m_addr + 44);
	}
	char GetbCanDisableTrace() {
		return memory.read<char>(m_addr + 44);
	}
	char GetbCanProjectDown() {
		return memory.read<char>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnvDirection
{
public:
	FEnvDirection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UEnvQueryContext GetLineFrom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UEnvQueryContext(ptr_addr);
	}
	UEnvQueryContext GetLineTo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UEnvQueryContext(ptr_addr);
	}
	UEnvQueryContext GetRotation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return UEnvQueryContext(ptr_addr);
	}
	enum class EEnvDirection GetDirMode() {
		return memory.read<enum class EEnvDirection>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnvNamedValue
{
public:
	FEnvNamedValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParamName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	enum class EAIParamType GetParamType() {
		return memory.read<enum class EAIParamType>(m_addr + 8);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGenericTeamId
{
public:
	FGenericTeamId(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetTeamID() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBlackboardValueAsBool
{
public:
	FSetBlackboardValueAsBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct FBlackboardKeySelector GetKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 8);
	}
	bool GetValue() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FPawnActionEvent
{
public:
	FPawnActionEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPawnAction GetAction() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPawnAction(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FPawnActionStack
{
public:
	FPawnActionStack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPawnAction GetTopAction() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPawnAction(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRecastGraphWrapper
{
public:
	FRecastGraphWrapper(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ARecastNavMesh GetRecastNavMeshActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ARecastNavMesh(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAIController
{
public:
	FGetAIController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetControlledActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct AAIController GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AAIController(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBlackboardValueAsString
{
public:
	FGetBlackboardValueAsString(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct FBlackboardKeySelector GetKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 8);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBlackboard
{
public:
	FGetBlackboard(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct UBlackboardComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UBlackboardComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentPath
{
public:
	FGetCurrentPath(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AController GetController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AController(ptr_addr);
	}
	struct UNavigationPath GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UNavigationPath(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentPathIndex
{
public:
	FGetCurrentPathIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AController GetController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AController(ptr_addr);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNextNavLinkIndex
{
public:
	FGetNextNavLinkIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AController GetController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AController(ptr_addr);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FResumePathFollowing
{
public:
	FResumePathFollowing(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetAgent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_OnNewPawn
{
public:
	FK2_OnNewPawn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetNewPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsValidAIDirection
{
public:
	FIsValidAIDirection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetDirectionVector() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsValidAILocation
{
public:
	FIsValidAILocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsValidAIRotation
{
public:
	FIsValidAIRotation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FLockAIResourcesWithAnimation
{
public:
	FLockAIResourcesWithAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAnimInstance GetAnimInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAnimInstance(ptr_addr);
	}
	bool GetbLockMovement() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetLockAILogic() {
		return memory.read<bool>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FSendAIMessage
{
public:
	FSendAIMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}
	struct FName GetMessage() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct UObject GetMessageSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UObject(ptr_addr);
	}
	bool GetbSuccess() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBlackboardValueAsVector
{
public:
	FGetBlackboardValueAsVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct FBlackboardKeySelector GetKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 8);
	}
	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FSimpleMoveToActor
{
public:
	FSimpleMoveToActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AController GetController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AController(ptr_addr);
	}
	struct AActor GetGoal() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSimpleMoveToLocation
{
public:
	FSimpleMoveToLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AController GetController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AController(ptr_addr);
	}
	struct FVector GetGoal() {
		return memory.read<struct FVector>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpawnAIFromClass
{
public:
	FSpawnAIFromClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	APawn GetPawnClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return APawn(ptr_addr);
	}
	struct UBehaviorTree GetBehaviorTree() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UBehaviorTree(ptr_addr);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 36);
	}
	bool GetbNoCollisionFail() {
		return memory.read<bool>(m_addr + 48);
	}
	struct AActor GetOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct AActor(ptr_addr);
	}
	struct APawn GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FUnlockAIResourcesWithAnimation
{
public:
	FUnlockAIResourcesWithAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAnimInstance GetAnimInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAnimInstance(ptr_addr);
	}
	bool GetbUnlockMovement() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetUnlockAILogic() {
		return memory.read<bool>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FClaimTaskResource
{
public:
	FClaimTaskResource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UGameplayTaskResource GetResourceClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UGameplayTaskResource(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FProvideSingleLocation
{
public:
	FProvideSingleLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetQuerierObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct AActor GetQuerierActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct FVector GetResultingLocation() {
		return memory.read<struct FVector>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FUseBlackboard
{
public:
	FUseBlackboard(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBlackboardData GetBlackboardAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBlackboardData(ptr_addr);
	}
	struct UBlackboardComponent GetBlackboardComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UBlackboardComponent(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAIPerceptionComponent
{
public:
	FGetAIPerceptionComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAIPerceptionComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAIPerceptionComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFocalPoint
{
public:
	FGetFocalPoint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFocusActor
{
public:
	FGetFocusActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetImmediateMoveDestination
{
public:
	FGetImmediateMoveDestination(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMoveStatus
{
public:
	FGetMoveStatus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPathFollowingStatus GetReturnValue() {
		return memory.read<enum class EPathFollowingStatus>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPathFollowingComponent
{
public:
	FGetPathFollowingComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPathFollowingComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPathFollowingComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasPartialPath
{
public:
	FHasPartialPath(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_SetFocalPoint
{
public:
	FK2_SetFocalPoint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetFP() {
		return memory.read<struct FVector>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_SetFocus
{
public:
	FK2_SetFocus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetNewFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPathActionType
{
public:
	FGetPathActionType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPathFollowingAction GetReturnValue() {
		return memory.read<enum class EPathFollowingAction>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMoveToActor
{
public:
	FMoveToActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetGoal() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	float GetAcceptanceRadius() {
		return memory.read<float>(m_addr + 8);
	}
	bool GetbStopOnOverlap() {
		return memory.read<bool>(m_addr + 12);
	}
	bool GetbUsePathfinding() {
		return memory.read<bool>(m_addr + 13);
	}
	bool GetbCanStrafe() {
		return memory.read<bool>(m_addr + 14);
	}
	UNavigationQueryFilter GetFilterClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return UNavigationQueryFilter(ptr_addr);
	}
	bool GetbAllowPartialPath() {
		return memory.read<bool>(m_addr + 24);
	}
	enum class EPathFollowingRequestResult GetReturnValue() {
		return memory.read<enum class EPathFollowingRequestResult>(m_addr + 25);
	}

private:
	std::uint64_t m_addr = 0;
};class FMoveToLocation
{
public:
	FMoveToLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetDest() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	float GetAcceptanceRadius() {
		return memory.read<float>(m_addr + 12);
	}
	bool GetbStopOnOverlap() {
		return memory.read<bool>(m_addr + 16);
	}
	bool GetbUsePathfinding() {
		return memory.read<bool>(m_addr + 17);
	}
	bool GetbProjectDestinationToNavigation() {
		return memory.read<bool>(m_addr + 18);
	}
	bool GetbCanStrafe() {
		return memory.read<bool>(m_addr + 19);
	}
	UNavigationQueryFilter GetFilterClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return UNavigationQueryFilter(ptr_addr);
	}
	bool GetbAllowPartialPath() {
		return memory.read<bool>(m_addr + 32);
	}
	enum class EPathFollowingRequestResult GetReturnValue() {
		return memory.read<enum class EPathFollowingRequestResult>(m_addr + 33);
	}

private:
	std::uint64_t m_addr = 0;
};class FRunBehaviorTree
{
public:
	FRunBehaviorTree(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBehaviorTree GetBTAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBehaviorTree(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMoveBlockDetection
{
public:
	FSetMoveBlockDetection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPathFollowingComponent
{
public:
	FSetPathFollowingComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPathFollowingComponent GetNewPFComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPathFollowingComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRequestPawnPredictionEvent
{
public:
	FRequestPawnPredictionEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetRequestor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}
	struct AActor GetPredictedActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	float GetPredictionTime() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FUnclaimTaskResource
{
public:
	FUnclaimTaskResource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UGameplayTaskResource GetResourceClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UGameplayTaskResource(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetActorsPerception
{
public:
	FGetActorsPerception(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct FActorPerceptionBlueprintInfo GetInfo() {
		return memory.read<struct FActorPerceptionBlueprintInfo>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentlyPerceivedActors
{
public:
	FGetCurrentlyPerceivedActors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UAISense GetSenseToUse() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UAISense(ptr_addr);
	}
	struct TArray<struct AActor> GetOutActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct AActor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRequestControllerPredictionEvent
{
public:
	FRequestControllerPredictionEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AAIController GetRequestor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AAIController(ptr_addr);
	}
	struct AActor GetPredictedActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	float GetPredictionTime() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetKnownPerceivedActors
{
public:
	FGetKnownPerceivedActors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UAISense GetSenseToUse() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UAISense(ptr_addr);
	}
	struct TArray<struct AActor> GetOutActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct AActor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPerceivedActors
{
public:
	FGetPerceivedActors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UAISense GetSenseToUse() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UAISense(ptr_addr);
	}
	struct TArray<struct AActor> GetOutActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct AActor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FActionResume
{
public:
	FActionResume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetControlledPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBlackboardValueAsName
{
public:
	FSetBlackboardValueAsName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct FBlackboardKeySelector GetKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 8);
	}
	struct FName GetValue() {
		return memory.read<struct FName>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPerceivedHostileActors
{
public:
	FGetPerceivedHostileActors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct AActor> GetOutActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct AActor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetValueAsEnum
{
public:
	FSetValueAsEnum(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	char GetEnumValue() {
		return memory.read<char>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPerceivedHostileActorsBySense
{
public:
	FGetPerceivedHostileActorsBySense(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UAISense GetSenseToUse() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UAISense(ptr_addr);
	}
	struct TArray<struct AActor> GetOutActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct AActor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetQuerier
{
public:
	FGetQuerier(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnOwnerEndPlay
{
public:
	FOnOwnerEndPlay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	enum class EEndPlayReason GetEndPlayReason() {
		return memory.read<enum class EEndPlayReason>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsTaskExecuting
{
public:
	FIsTaskExecuting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSenseEnabled
{
public:
	FSetSenseEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UAISense GetSenseClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UAISense(ptr_addr);
	}
	bool GetbEnable() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRegisterForSense
{
public:
	FRegisterForSense(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UAISense GetSenseClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UAISense(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FUnregisterFromSense
{
public:
	FUnregisterFromSense(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UAISense GetSenseClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UAISense(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBlackboardValueAsEnum
{
public:
	FSetBlackboardValueAsEnum(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct FBlackboardKeySelector GetKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 8);
	}
	char GetValue() {
		return memory.read<char>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPerceptionStimuliSourceEndPlay
{
public:
	FOnPerceptionStimuliSourceEndPlay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	enum class EEndPlayReason GetEndPlayReason() {
		return memory.read<enum class EEndPlayReason>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FReportEvent
{
public:
	FReportEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAISenseEvent GetPerceptionEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAISenseEvent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FReportPerceptionEvent
{
public:
	FReportPerceptionEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UAISenseEvent GetPerceptionEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UAISenseEvent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllListenerActors
{
public:
	FGetAllListenerActors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct AActor> GetListenerActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct AActor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllListenerComponents
{
public:
	FGetAllListenerComponents(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UAIPerceptionComponent> GetListenerComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UAIPerceptionComponent>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBlackboardValueAsName
{
public:
	FGetBlackboardValueAsName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct FBlackboardKeySelector GetKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 8);
	}
	struct FName GetReturnValue() {
		return memory.read<struct FName>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnListenerRegistered
{
public:
	FOnListenerRegistered(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetActorListener() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct UAIPerceptionComponent GetPerceptionComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UAIPerceptionComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnListenerUnregistered
{
public:
	FOnListenerUnregistered(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetActorListener() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct UAIPerceptionComponent GetPerceptionComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UAIPerceptionComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnListenerUpdated
{
public:
	FOnListenerUpdated(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetActorListener() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct UAIPerceptionComponent GetPerceptionComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UAIPerceptionComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdate
{
public:
	FOnUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UAISenseEvent> GetEventsToProcess() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UAISenseEvent>(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FReportDamageEvent
{
public:
	FReportDamageEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct AActor GetDamagedActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct AActor GetInstigator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct AActor(ptr_addr);
	}
	float GetDamageAmount() {
		return memory.read<float>(m_addr + 24);
	}
	struct FVector GetEventLocation() {
		return memory.read<struct FVector>(m_addr + 28);
	}
	struct FVector GetHitLocation() {
		return memory.read<struct FVector>(m_addr + 40);
	}
	struct FName GetTag() {
		return memory.read<struct FName>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FReportNoiseEvent
{
public:
	FReportNoiseEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector GetNoiseLocation() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	float GetLoudness() {
		return memory.read<float>(m_addr + 20);
	}
	struct AActor GetInstigator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct AActor(ptr_addr);
	}
	float GetMaxRange() {
		return memory.read<float>(m_addr + 32);
	}
	struct FName GetTag() {
		return memory.read<struct FName>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIMoveTo
{
public:
	FAIMoveTo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AAIController GetController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AAIController(ptr_addr);
	}
	struct FVector GetGoalLocation() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct AActor GetGoalActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct AActor(ptr_addr);
	}
	float GetAcceptanceRadius() {
		return memory.read<float>(m_addr + 32);
	}
	enum class EAIOptionFlag GetStopOnOverlap() {
		return memory.read<enum class EAIOptionFlag>(m_addr + 36);
	}
	enum class EAIOptionFlag GetAcceptPartialPath() {
		return memory.read<enum class EAIOptionFlag>(m_addr + 37);
	}
	bool GetbUsePathfinding() {
		return memory.read<bool>(m_addr + 38);
	}
	bool GetbLockAILogic() {
		return memory.read<bool>(m_addr + 39);
	}
	bool GetbUseContinuosGoalTracking() {
		return memory.read<bool>(m_addr + 40);
	}
	enum class EAIOptionFlag GetProjectGoalOnNavigation() {
		return memory.read<enum class EAIOptionFlag>(m_addr + 41);
	}
	struct UAITask_MoveTo GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UAITask_MoveTo(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRunEQS
{
public:
	FRunEQS(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AAIController GetController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AAIController(ptr_addr);
	}
	struct UEnvQuery GetQueryTemplate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UEnvQuery(ptr_addr);
	}
	struct UAITask_RunEQS GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UAITask_RunEQS(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsRunning
{
public:
	FIsRunning(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddCooldownTagDuration
{
public:
	FAddCooldownTagDuration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTag GetCooldownTag() {
		return memory.read<struct FGameplayTag>(m_addr + 0);
	}
	float GetCooldownDuration() {
		return memory.read<float>(m_addr + 8);
	}
	bool GetbAddToExistingDuration() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTagCooldownEndTime
{
public:
	FGetTagCooldownEndTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTag GetCooldownTag() {
		return memory.read<struct FGameplayTag>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDynamicSubtree
{
public:
	FSetDynamicSubtree(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTag GetInjectTag() {
		return memory.read<struct FGameplayTag>(m_addr + 0);
	}
	struct UBehaviorTree GetBehaviorAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UBehaviorTree(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveExecutionStartAI
{
public:
	FReceiveExecutionStartAI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AAIController GetOwnerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AAIController(ptr_addr);
	}
	struct APawn GetControlledPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBlackboardAsset
{
public:
	FGetBlackboardAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBlackboardData GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBlackboardData(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FClearValue
{
public:
	FClearValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_ForceAbortAction
{
public:
	FK2_ForceAbortAction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPawnAction GetActionToAbort() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPawnAction(ptr_addr);
	}
	enum class EPawnActionAbortState GetReturnValue() {
		return memory.read<enum class EPawnActionAbortState>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLocationFromEntry
{
public:
	FGetLocationFromEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FVector GetResultLocation() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBlackboardValueAsVector
{
public:
	FSetBlackboardValueAsVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct FBlackboardKeySelector GetKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 8);
	}
	struct FVector GetValue() {
		return memory.read<struct FVector>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetValueAsBool
{
public:
	FGetValueAsBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetValueAsClass
{
public:
	FGetValueAsClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	UObject GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetValueAsEnum
{
public:
	FGetValueAsEnum(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	char GetReturnValue() {
		return memory.read<char>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetValueAsFloat
{
public:
	FGetValueAsFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetValueAsInt
{
public:
	FGetValueAsInt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetValueAsName
{
public:
	FGetValueAsName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FName GetReturnValue() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetValueAsObject
{
public:
	FGetValueAsObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct UObject GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetValueAsString
{
public:
	FSetValueAsString(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FString GetStringValue() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetValueAsRotator
{
public:
	FGetValueAsRotator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FRotator GetReturnValue() {
		return memory.read<struct FRotator>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetValueAsString
{
public:
	FGetValueAsString(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetValueAsVector
{
public:
	FGetValueAsVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetValueAsClass
{
public:
	FSetValueAsClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	UObject GetClassValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetValueAsFloat
{
public:
	FSetValueAsFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetFloatValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveExecutionFinishAI
{
public:
	FReceiveExecutionFinishAI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AAIController GetOwnerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AAIController(ptr_addr);
	}
	struct APawn GetControlledPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APawn(ptr_addr);
	}
	enum class EBTNodeResult GetNodeResult() {
		return memory.read<enum class EBTNodeResult>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetValueAsInt
{
public:
	FSetValueAsInt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetIntValue() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetValueAsName
{
public:
	FSetValueAsName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FName GetNameValue() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetValueAsRotator
{
public:
	FSetValueAsRotator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FRotator GetVectorValue() {
		return memory.read<struct FRotator>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetValueAsVector
{
public:
	FSetValueAsVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FVector GetVectorValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsDecoratorExecutionActive
{
public:
	FIsDecoratorExecutionActive(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsDecoratorObserverActive
{
public:
	FIsDecoratorObserverActive(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPerformConditionCheck
{
public:
	FPerformConditionCheck(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetOwnerActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FPerformConditionCheckAI
{
public:
	FPerformConditionCheckAI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AAIController GetOwnerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AAIController(ptr_addr);
	}
	struct APawn GetControlledPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APawn(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveExecutionFinish
{
public:
	FReceiveExecutionFinish(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetOwnerActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	enum class EBTNodeResult GetNodeResult() {
		return memory.read<enum class EBTNodeResult>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveExecutionStart
{
public:
	FReceiveExecutionStart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetOwnerActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveObserverActivated
{
public:
	FReceiveObserverActivated(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetOwnerActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveObserverActivatedAI
{
public:
	FReceiveObserverActivatedAI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AAIController GetOwnerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AAIController(ptr_addr);
	}
	struct APawn GetControlledPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveObserverDeactivated
{
public:
	FReceiveObserverDeactivated(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetOwnerActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveObserverDeactivatedAI
{
public:
	FReceiveObserverDeactivatedAI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AAIController GetOwnerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AAIController(ptr_addr);
	}
	struct APawn GetControlledPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveTick
{
public:
	FReceiveTick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetOwnerActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	float GetDeltaSeconds() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FFinishExecute
{
public:
	FFinishExecute(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbSuccess() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveTickAI
{
public:
	FReceiveTickAI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AAIController GetOwnerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AAIController(ptr_addr);
	}
	struct APawn GetControlledPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APawn(ptr_addr);
	}
	float GetDeltaSeconds() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FClearBlackboardValue
{
public:
	FClearBlackboardValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct FBlackboardKeySelector GetKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FClearBlackboardValueAsVector
{
public:
	FClearBlackboardValueAsVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct FBlackboardKeySelector GetKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBlackboardValueAsActor
{
public:
	FGetBlackboardValueAsActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct FBlackboardKeySelector GetKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 8);
	}
	struct AActor GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSuspendCrowdSteering
{
public:
	FSuspendCrowdSteering(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbSuspend() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBlackboardValueAsBool
{
public:
	FGetBlackboardValueAsBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct FBlackboardKeySelector GetKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBlackboardValueAsClass
{
public:
	FGetBlackboardValueAsClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct FBlackboardKeySelector GetKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 8);
	}
	UObject GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBlackboardValueAsEnum
{
public:
	FGetBlackboardValueAsEnum(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct FBlackboardKeySelector GetKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 8);
	}
	char GetReturnValue() {
		return memory.read<char>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBlackboardValueAsFloat
{
public:
	FGetBlackboardValueAsFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct FBlackboardKeySelector GetKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 8);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBlackboardValueAsInt
{
public:
	FGetBlackboardValueAsInt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct FBlackboardKeySelector GetKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 8);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBlackboardValueAsObject
{
public:
	FGetBlackboardValueAsObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct FBlackboardKeySelector GetKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 8);
	}
	struct UObject GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBlackboardValueAsRotator
{
public:
	FGetBlackboardValueAsRotator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct FBlackboardKeySelector GetKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 8);
	}
	struct FRotator GetReturnValue() {
		return memory.read<struct FRotator>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOwnerComponent
{
public:
	FGetOwnerComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct UBehaviorTreeComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UBehaviorTreeComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOwnersBlackboard
{
public:
	FGetOwnersBlackboard(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct UBlackboardComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UBlackboardComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBlackboardValueAsClass
{
public:
	FSetBlackboardValueAsClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct FBlackboardKeySelector GetKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 8);
	}
	UObject GetValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBlackboardValueAsFloat
{
public:
	FSetBlackboardValueAsFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct FBlackboardKeySelector GetKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 8);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBlackboardValueAsInt
{
public:
	FSetBlackboardValueAsInt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct FBlackboardKeySelector GetKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 8);
	}
	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBlackboardValueAsObject
{
public:
	FSetBlackboardValueAsObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct FBlackboardKeySelector GetKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 8);
	}
	struct UObject GetValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddGeneratedVector
{
public:
	FAddGeneratedVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetGeneratedVector() {
		return memory.read<struct FVector>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBlackboardValueAsString
{
public:
	FSetBlackboardValueAsString(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct FBlackboardKeySelector GetKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 8);
	}
	struct FString GetValue() {
		return memory.read<struct FString>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FStartUsingExternalEvent
{
public:
	FStartUsingExternalEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}
	struct AActor GetOwningActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FStopUsingExternalEvent
{
public:
	FStopUsingExternalEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTNode GetNodeOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBTNode(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsServiceActive
{
public:
	FIsServiceActive(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveActivation
{
public:
	FReceiveActivation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetOwnerActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveDeactivation
{
public:
	FReceiveDeactivation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetOwnerActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveDeactivationAI
{
public:
	FReceiveDeactivationAI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AAIController GetOwnerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AAIController(ptr_addr);
	}
	struct APawn GetControlledPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveSearchStart
{
public:
	FReceiveSearchStart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetOwnerActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsTaskAborting
{
public:
	FIsTaskAborting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveAbort
{
public:
	FReceiveAbort(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetOwnerActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveAbortAI
{
public:
	FReceiveAbortAI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AAIController GetOwnerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AAIController(ptr_addr);
	}
	struct APawn GetControlledPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveExecute
{
public:
	FReceiveExecute(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetOwnerActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFinishOnMessage
{
public:
	FSetFinishOnMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetMessageName() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPathDestination
{
public:
	FGetPathDestination(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnActorBump
{
public:
	FOnActorBump(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetSelfActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct FVector GetNormalImpulse() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	struct FHitResult GetHit() {
		return memory.read<struct FHitResult>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FDoItemGeneration
{
public:
	FDoItemGeneration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVector> GetContextLocations() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNavDataRegistered
{
public:
	FOnNavDataRegistered(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ANavigationData GetNavData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ANavigationData(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FProvideActorsSet
{
public:
	FProvideActorsSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetQuerierObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct AActor GetQuerierActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct TArray<struct AActor> GetResultingActorsSet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct TArray<struct AActor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FProvideLocationsSet
{
public:
	FProvideLocationsSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetQuerierObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct AActor GetQuerierActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct TArray<struct FVector> GetResultingLocationSet() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FProvideSingleActor
{
public:
	FProvideSingleActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetQuerierObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct AActor GetQuerierActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct AActor GetResultingActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddGeneratedActor
{
public:
	FAddGeneratedActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetGeneratedActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRunEQSQuery
{
public:
	FRunEQSQuery(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UEnvQuery GetQueryTemplate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UEnvQuery(ptr_addr);
	}
	struct UObject GetQuerier() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UObject(ptr_addr);
	}
	enum class EEnvQueryRunMode GetRunMode() {
		return memory.read<enum class EEnvQueryRunMode>(m_addr + 24);
	}
	UEnvQueryInstanceBlueprintWrapper GetWrapperClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return UEnvQueryInstanceBlueprintWrapper(ptr_addr);
	}
	struct UEnvQueryInstanceBlueprintWrapper GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UEnvQueryInstanceBlueprintWrapper(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasMovingAgents
{
public:
	FHasMovingAgents(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsSmartLinkEnabled
{
public:
	FIsSmartLinkEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveSmartLinkReached
{
public:
	FReceiveSmartLinkReached(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetAgent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct FVector GetDestination() {
		return memory.read<struct FVector>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSmartLinkEnabled
{
public:
	FSetSmartLinkEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddLocalNavigationGridForBox
{
public:
	FAddLocalNavigationGridForBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetExtent() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 32);
	}
	int32_t GetRadius2D() {
		return memory.read<int32_t>(m_addr + 44);
	}
	float GetHeight() {
		return memory.read<float>(m_addr + 48);
	}
	bool GetbRebuildGrids() {
		return memory.read<bool>(m_addr + 52);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddLocalNavigationGridForPoint
{
public:
	FAddLocalNavigationGridForPoint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	int32_t GetRadius2D() {
		return memory.read<int32_t>(m_addr + 20);
	}
	float GetHeight() {
		return memory.read<float>(m_addr + 24);
	}
	bool GetbRebuildGrids() {
		return memory.read<bool>(m_addr + 28);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddLocalNavigationGridForPoints
{
public:
	FAddLocalNavigationGridForPoints(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct TArray<struct FVector> GetLocations() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 8);
	}
	int32_t GetRadius2D() {
		return memory.read<int32_t>(m_addr + 24);
	}
	float GetHeight() {
		return memory.read<float>(m_addr + 28);
	}
	bool GetbRebuildGrids() {
		return memory.read<bool>(m_addr + 32);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveLocalNavigationGrid
{
public:
	FRemoveLocalNavigationGrid(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	int32_t GetGridId() {
		return memory.read<int32_t>(m_addr + 8);
	}
	bool GetbRebuildGrids() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLocalNavigationGridDensity
{
public:
	FSetLocalNavigationGridDensity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	float GetCellSize() {
		return memory.read<float>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateActionInstance
{
public:
	FCreateActionInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	UPawnAction GetActionClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UPawnAction(ptr_addr);
	}
	struct UPawnAction GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UPawnAction(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetActionPriority
{
public:
	FGetActionPriority(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EAIRequestPriority GetReturnValue() {
		return memory.read<enum class EAIRequestPriority>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FActionFinished
{
public:
	FActionFinished(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetControlledPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}
	enum class EPawnActionResult GetWithResult() {
		return memory.read<enum class EPawnActionResult>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FActionPause
{
public:
	FActionPause(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetControlledPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FActionStart
{
public:
	FActionStart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetControlledPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FActionTick
{
public:
	FActionTick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetControlledPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}
	float GetDeltaSeconds() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_AbortAction
{
public:
	FK2_AbortAction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPawnAction GetActionToAbort() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPawnAction(ptr_addr);
	}
	enum class EPawnActionAbortState GetReturnValue() {
		return memory.read<enum class EPawnActionAbortState>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_PushAction
{
public:
	FK2_PushAction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPawnAction GetNewAction() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPawnAction(ptr_addr);
	}
	enum class EAIRequestPriority GetPriority() {
		return memory.read<enum class EAIRequestPriority>(m_addr + 8);
	}
	struct UObject GetInstigator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UObject(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};