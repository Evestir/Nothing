#pragma once 
#include <AIModule_Structs.h>
 
 
 
class UAIAsyncTaskBlueprintProxy
{
public:
	UAIAsyncTaskBlueprintProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 40);
	}
	struct FMulticastInlineDelegate GetOnFail() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAIBlueprintHelperLibrary
{
public:
	UAIBlueprintHelperLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBlackboardKeyType_Rotator
{
public:
	UBlackboardKeyType_Rotator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBehaviorTreeTypes
{
public:
	UBehaviorTreeTypes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBTDecorator_TagCooldown
{
public:
	UBTDecorator_TagCooldown(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTag GetCooldownTag() {
		return memory.read<struct FGameplayTag>(m_addr + 104);
	}
	float GetCooldownDuration() {
		return memory.read<float>(m_addr + 112);
	}
	bool GetbAddToExistingDuration() {
		return memory.read<bool>(m_addr + 116);
	}
	bool GetbActivatesCooldown() {
		return memory.read<bool>(m_addr + 117);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAISenseConfig_Sight
{
public:
	UAISenseConfig_Sight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UAISense_Sight GetImplementation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return UAISense_Sight(ptr_addr);
	}
	float GetSightRadius() {
		return memory.read<float>(m_addr + 80);
	}
	float GetLoseSightRadius() {
		return memory.read<float>(m_addr + 84);
	}
	float GetPeripheralVisionAngleDegrees() {
		return memory.read<float>(m_addr + 88);
	}
	struct FAISenseAffiliationFilter GetDetectionByAffiliation() {
		return memory.read<struct FAISenseAffiliationFilter>(m_addr + 92);
	}
	float GetAutoSuccessRangeFromLastSeenLocation() {
		return memory.read<float>(m_addr + 96);
	}
	float GetPointOfViewBackwardOffset() {
		return memory.read<float>(m_addr + 100);
	}
	float GetNearClippingRadius() {
		return memory.read<float>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTDecorator_CheckGameplayTagsOnActor
{
public:
	UBTDecorator_CheckGameplayTagsOnActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBlackboardKeySelector GetActorToCheck() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 104);
	}
	enum class EGameplayContainerMatchType GetTagsToMatch() {
		return memory.read<enum class EGameplayContainerMatchType>(m_addr + 144);
	}
	struct FGameplayTagContainer GetGameplayTags() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 152);
	}
	struct FString GetCachedDescription() {
		return memory.read<struct FString>(m_addr + 184);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAIDataProvider
{
public:
	UAIDataProvider(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBlackboardKeyType_Int
{
public:
	UBlackboardKeyType_Int(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AAIController
{
public:
	AAIController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbStartAILogicOnPossess() {
		return memory.read<char>(m_addr + 720);
	}
	char GetbStopAILogicOnUnposses() {
		return memory.read<char>(m_addr + 720);
	}
	char GetbLOSflag() {
		return memory.read<char>(m_addr + 720);
	}
	char GetbSkipExtraLOSChecks() {
		return memory.read<char>(m_addr + 720);
	}
	char GetbAllowStrafe() {
		return memory.read<char>(m_addr + 720);
	}
	char GetbWantsPlayerState() {
		return memory.read<char>(m_addr + 720);
	}
	char GetbSetControlRotationFromPawnOrientation() {
		return memory.read<char>(m_addr + 720);
	}
	struct UPathFollowingComponent GetPathFollowingComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UPathFollowingComponent(ptr_addr);
	}
	struct UBrainComponent GetBrainComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UBrainComponent(ptr_addr);
	}
	struct UAIPerceptionComponent GetPerceptionComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct UAIPerceptionComponent(ptr_addr);
	}
	struct UPawnActionsComponent GetActionsComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 752);
		return struct UPawnActionsComponent(ptr_addr);
	}
	struct UBlackboardComponent GetBlackboard() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UBlackboardComponent(ptr_addr);
	}
	struct UGameplayTasksComponent GetCachedGameplayTasksComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UGameplayTasksComponent(ptr_addr);
	}
	UNavigationQueryFilter GetDefaultNavigationFilterClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return UNavigationQueryFilter(ptr_addr);
	}
	struct FMulticastInlineDelegate GetReceiveMoveCompleted() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 784);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTDecorator_BlueprintBase
{
public:
	UBTDecorator_BlueprintBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AAIController GetAIOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct AAIController(ptr_addr);
	}
	struct AActor GetActorOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct AActor(ptr_addr);
	}
	struct TArray<struct FName> GetObservedKeyNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 120);
	}
	char GetbShowPropertyDetails() {
		return memory.read<char>(m_addr + 152);
	}
	char GetbCheckConditionOnlyBlackBoardChanges() {
		return memory.read<char>(m_addr + 152);
	}
	char GetbIsObservingBB() {
		return memory.read<char>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBlackboardKeyType_Float
{
public:
	UBlackboardKeyType_Float(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAIDataProvider_QueryParams
{
public:
	UAIDataProvider_QueryParams(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParamName() {
		return memory.read<struct FName>(m_addr + 40);
	}
	float GetFloatValue() {
		return memory.read<float>(m_addr + 48);
	}
	int32_t GetIntValue() {
		return memory.read<int32_t>(m_addr + 52);
	}
	bool GetBoolValue() {
		return memory.read<bool>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAIDataProvider_Random
{
public:
	UAIDataProvider_Random(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMin() {
		return memory.read<float>(m_addr + 64);
	}
	float GetMax() {
		return memory.read<float>(m_addr + 68);
	}
	char GetbInteger() {
		return memory.read<char>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAITask_RunEQS
{
public:
	UAITask_RunEQS(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAIHotSpotManager
{
public:
	UAIHotSpotManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAIPerceptionComponent
{
public:
	UAIPerceptionComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UAISenseConfig> GetSensesConfig() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct TArray<struct UAISenseConfig>(ptr_addr);
	}
	UAISense GetDominantSense() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return UAISense(ptr_addr);
	}
	struct AAIController GetAIOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 216);
		return struct AAIController(ptr_addr);
	}
	struct FMulticastInlineDelegate GetOnPerceptionUpdated() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 352);
	}
	struct FMulticastInlineDelegate GetOnTargetPerceptionUpdated() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 368);
	}
	struct FMulticastInlineDelegate GetOnTargetPerceptionInfoUpdated() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 384);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAIPerceptionListenerInterface
{
public:
	UAIPerceptionListenerInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAISenseConfig_Team
{
public:
	UAISenseConfig_Team(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAISenseConfig_Prediction
{
public:
	UAISenseConfig_Prediction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryGenerator_ProjectedPoints
{
public:
	UEnvQueryGenerator_ProjectedPoints(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEnvTraceData GetProjectionData() {
		return memory.read<struct FEnvTraceData>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAIPerceptionStimuliSourceComponent
{
public:
	UAIPerceptionStimuliSourceComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbAutoRegisterAsSource() {
		return memory.read<char>(m_addr + 176);
	}
	struct TArray<UAISense> GetRegisterAsSourceForSenses() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct TArray<UAISense>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPathFollowingManager
{
public:
	UPathFollowingManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAISubsystem
{
public:
	UAISubsystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAISystem GetAISystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UAISystem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBlackboardComponent
{
public:
	UBlackboardComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBrainComponent GetBrainComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct UBrainComponent(ptr_addr);
	}
	struct UBlackboardData GetDefaultBlackboardAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct UBlackboardData(ptr_addr);
	}
	struct UBlackboardData GetBlackboardAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct UBlackboardData(ptr_addr);
	}
	struct TArray<struct UBlackboardKeyType> GetKeyInstances() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 232);
		return struct TArray<struct UBlackboardKeyType>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAISenseEvent_Damage
{
public:
	UAISenseEvent_Damage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAIDamageEvent GetEvent() {
		return memory.read<struct FAIDamageEvent>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPawnAction_Sequence
{
public:
	UPawnAction_Sequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UPawnAction> GetActionSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct TArray<struct UPawnAction>(ptr_addr);
	}
	enum class EPawnActionFailHandling GetChildFailureHandlingMode() {
		return memory.read<enum class EPawnActionFailHandling>(m_addr + 160);
	}
	struct UPawnAction GetRecentActionCopy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct UPawnAction(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAIResource_Logic
{
public:
	UAIResource_Logic(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAIPerceptionSystem
{
public:
	UAIPerceptionSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UAISense> GetSenses() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct TArray<struct UAISense>(ptr_addr);
	}
	float GetPerceptionAgingRate() {
		return memory.read<float>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryTest_Dot
{
public:
	UEnvQueryTest_Dot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEnvDirection GetLineA() {
		return memory.read<struct FEnvDirection>(m_addr + 504);
	}
	struct FEnvDirection GetLineB() {
		return memory.read<struct FEnvDirection>(m_addr + 536);
	}
	enum class EEnvTestDot GetTestMode() {
		return memory.read<enum class EEnvTestDot>(m_addr + 568);
	}
	bool GetbAbsoluteValue() {
		return memory.read<bool>(m_addr + 569);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAIResourceInterface
{
public:
	UAIResourceInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBlackboardKeyType_Object
{
public:
	UBlackboardKeyType_Object(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject GetBaseClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryContext
{
public:
	UEnvQueryContext(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAIResource_Movement
{
public:
	UAIResource_Movement(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAISenseConfig_Hearing
{
public:
	UAISenseConfig_Hearing(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UAISense_Hearing GetImplementation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return UAISense_Hearing(ptr_addr);
	}
	float GetHearingRange() {
		return memory.read<float>(m_addr + 80);
	}
	float GetLoSHearingRange() {
		return memory.read<float>(m_addr + 84);
	}
	char GetbUseLoSHearing() {
		return memory.read<char>(m_addr + 88);
	}
	struct FAISenseAffiliationFilter GetDetectionByAffiliation() {
		return memory.read<struct FAISenseAffiliationFilter>(m_addr + 92);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBlackboardKeyType_Class
{
public:
	UBlackboardKeyType_Class(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject GetBaseClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAISense
{
public:
	UAISense(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDefaultExpirationAge() {
		return memory.read<float>(m_addr + 40);
	}
	enum class EAISenseNotifyType GetNotifyType() {
		return memory.read<enum class EAISenseNotifyType>(m_addr + 44);
	}
	char GetbWantsNewPawnNotification() {
		return memory.read<char>(m_addr + 48);
	}
	char GetbAutoRegisterAllPawnsAsSources() {
		return memory.read<char>(m_addr + 48);
	}
	struct UAIPerceptionSystem GetPerceptionSystemInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UAIPerceptionSystem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBehaviorTreeManager
{
public:
	UBehaviorTreeManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMaxDebuggerSteps() {
		return memory.read<int32_t>(m_addr + 40);
	}
	struct TArray<struct FBehaviorTreeTemplateInfo> GetLoadedTemplates() {
		return memory.read<struct TArray<struct FBehaviorTreeTemplateInfo>>(m_addr + 48);
	}
	struct TArray<struct UBehaviorTreeComponent> GetActiveComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct TArray<struct UBehaviorTreeComponent>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVisualLoggerExtension
{
public:
	UVisualLoggerExtension(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAISense_Blueprint
{
public:
	UAISense_Blueprint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UUserDefinedStruct GetListenerDataType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 128);
		return UUserDefinedStruct(ptr_addr);
	}
	struct TArray<struct UAIPerceptionComponent> GetListenerContainer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct TArray<struct UAIPerceptionComponent>(ptr_addr);
	}
	struct TArray<struct UAISenseEvent> GetUnprocessedEvents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct TArray<struct UAISenseEvent>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAISense_Damage
{
public:
	UAISense_Damage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAIDamageEvent> GetRegisteredEvents() {
		return memory.read<struct TArray<struct FAIDamageEvent>>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAISense_Hearing
{
public:
	UAISense_Hearing(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAINoiseEvent> GetNoiseEvents() {
		return memory.read<struct TArray<struct FAINoiseEvent>>(m_addr + 128);
	}
	float GetSpeedOfSoundSq() {
		return memory.read<float>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAISense_Prediction
{
public:
	UAISense_Prediction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAIPredictionEvent> GetRegisteredEvents() {
		return memory.read<struct TArray<struct FAIPredictionEvent>>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBlackboardKeyType_Name
{
public:
	UBlackboardKeyType_Name(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAISense_Sight
{
public:
	UAISense_Sight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMaxTracesPerTick() {
		return memory.read<int32_t>(m_addr + 328);
	}
	int32_t GetMinQueriesPerTimeSliceCheck() {
		return memory.read<int32_t>(m_addr + 332);
	}
	double GetMaxTimeSlicePerTick() {
		return memory.read<double>(m_addr + 336);
	}
	float GetHighImportanceQueryDistanceThreshold() {
		return memory.read<float>(m_addr + 344);
	}
	float GetMaxQueryImportance() {
		return memory.read<float>(m_addr + 352);
	}
	float GetSightLimitQueryImportance() {
		return memory.read<float>(m_addr + 356);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAISense_Team
{
public:
	UAISense_Team(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAITeamStimulusEvent> GetRegisteredEvents() {
		return memory.read<struct TArray<struct FAITeamStimulusEvent>>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAISense_Touch
{
public:
	UAISense_Touch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAITouchEvent> GetRegisteredEvents() {
		return memory.read<struct TArray<struct FAITouchEvent>>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTDecorator_CompareBBEntries
{
public:
	UBTDecorator_CompareBBEntries(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EBlackBoardEntryComparison GetOperator() {
		return memory.read<enum class EBlackBoardEntryComparison>(m_addr + 104);
	}
	struct FBlackboardKeySelector GetBlackboardKeyA() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 112);
	}
	struct FBlackboardKeySelector GetBlackboardKeyB() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAISightTargetInterface
{
public:
	UAISightTargetInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAISenseBlueprintListener
{
public:
	UAISenseBlueprintListener(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryGenerator_PathingGrid
{
public:
	UEnvQueryGenerator_PathingGrid(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAIDataProviderBoolValue GetPathToItem() {
		return memory.read<struct FAIDataProviderBoolValue>(m_addr + 248);
	}
	UNavigationQueryFilter GetNavigationFilter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 304);
		return UNavigationQueryFilter(ptr_addr);
	}
	struct FAIDataProviderFloatValue GetScanRangeMultiplier() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 312);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAISenseConfig
{
public:
	UAISenseConfig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FColor GetDebugColor() {
		return memory.read<struct FColor>(m_addr + 40);
	}
	float GetMaxAge() {
		return memory.read<float>(m_addr + 44);
	}
	char GetbStartsEnabled() {
		return memory.read<char>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAISenseConfig_Blueprint
{
public:
	UAISenseConfig_Blueprint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UAISense_Blueprint GetImplementation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return UAISense_Blueprint(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAISenseConfig_Damage
{
public:
	UAISenseConfig_Damage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UAISense_Damage GetImplementation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return UAISense_Damage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTAuxiliaryNode
{
public:
	UBTAuxiliaryNode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAISenseConfig_Touch
{
public:
	UAISenseConfig_Touch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBehaviorTreeComponent
{
public:
	UBehaviorTreeComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UBTNode> GetNodeInstances() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 296);
		return struct TArray<struct UBTNode>(ptr_addr);
	}
	struct UBehaviorTree GetDefaultBehaviorTreeAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UBehaviorTree(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAITask_MoveTo
{
public:
	UAITask_MoveTo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnRequestFailed() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 112);
	}
	struct FMulticastInlineDelegate GetOnMoveFinished() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 128);
	}
	struct FAIMoveRequest GetMoveRequest() {
		return memory.read<struct FAIMoveRequest>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAISenseEvent
{
public:
	UAISenseEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAISenseEvent_Hearing
{
public:
	UAISenseEvent_Hearing(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAINoiseEvent GetEvent() {
		return memory.read<struct FAINoiseEvent>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAISystem
{
public:
	UAISystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSoftClassPath GetPerceptionSystemClassName() {
		return memory.read<struct FSoftClassPath>(m_addr + 88);
	}
	struct FSoftClassPath GetHotSpotManagerClassName() {
		return memory.read<struct FSoftClassPath>(m_addr + 112);
	}
	float GetAcceptanceRadius() {
		return memory.read<float>(m_addr + 136);
	}
	float GetPathfollowingRegularPathPointAcceptanceRadius() {
		return memory.read<float>(m_addr + 140);
	}
	float GetPathfollowingNavLinkAcceptanceRadius() {
		return memory.read<float>(m_addr + 144);
	}
	bool GetbFinishMoveOnGoalOverlap() {
		return memory.read<bool>(m_addr + 148);
	}
	bool GetbAcceptPartialPaths() {
		return memory.read<bool>(m_addr + 149);
	}
	bool GetbAllowStrafing() {
		return memory.read<bool>(m_addr + 150);
	}
	bool GetbEnableBTAITasks() {
		return memory.read<bool>(m_addr + 151);
	}
	bool GetbAllowControllersAsEQSQuerier() {
		return memory.read<bool>(m_addr + 152);
	}
	bool GetbEnableDebuggerPlugin() {
		return memory.read<bool>(m_addr + 153);
	}
	bool GetbForgetStaleActors() {
		return memory.read<bool>(m_addr + 154);
	}
	bool GetbAddBlackboardSelfKey() {
		return memory.read<bool>(m_addr + 155);
	}
	enum class ECollisionChannel GetDefaultSightCollisionChannel() {
		return memory.read<enum class ECollisionChannel>(m_addr + 156);
	}
	struct UBehaviorTreeManager GetBehaviorTreeManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UBehaviorTreeManager(ptr_addr);
	}
	struct UEnvQueryManager GetEnvironmentQueryManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct UEnvQueryManager(ptr_addr);
	}
	struct UAIPerceptionSystem GetPerceptionSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct UAIPerceptionSystem(ptr_addr);
	}
	struct TArray<struct UAIAsyncTaskBlueprintProxy> GetAllProxyObjects() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct TArray<struct UAIAsyncTaskBlueprintProxy>(ptr_addr);
	}
	struct UAIHotSpotManager GetHotSpotManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct UAIHotSpotManager(ptr_addr);
	}
	struct UNavLocalGridManager GetNavLocalGrids() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 208);
		return struct UNavLocalGridManager(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBlackboardKeyType_String
{
public:
	UBlackboardKeyType_String(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetStringValue() {
		return memory.read<struct FString>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAITask
{
public:
	UAITask(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AAIController GetOwnerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct AAIController(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAITask_LockLogic
{
public:
	UAITask_LockLogic(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBehaviorTree
{
public:
	UBehaviorTree(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBTCompositeNode GetRootNode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UBTCompositeNode(ptr_addr);
	}
	struct UBlackboardData GetBlackboardAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UBlackboardData(ptr_addr);
	}
	struct TArray<struct UBTDecorator> GetRootDecorators() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct TArray<struct UBTDecorator>(ptr_addr);
	}
	struct TArray<struct FBTDecoratorLogic> GetRootDecoratorOps() {
		return memory.read<struct TArray<struct FBTDecoratorLogic>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBrainComponent
{
public:
	UBrainComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBlackboardComponent GetBlackboardComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct UBlackboardComponent(ptr_addr);
	}
	struct AAIController GetAIOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct AAIController(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBlackboardAssetProvider
{
public:
	UBlackboardAssetProvider(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBlackboardData
{
public:
	UBlackboardData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBlackboardData GetParent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UBlackboardData(ptr_addr);
	}
	struct TArray<struct FBlackboardEntry> GetKeys() {
		return memory.read<struct TArray<struct FBlackboardEntry>>(m_addr + 56);
	}
	char GetbHasSynchronizedKeys() {
		return memory.read<char>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTDecorator_ReachedMoveGoal
{
public:
	UBTDecorator_ReachedMoveGoal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBlackboardKeyType
{
public:
	UBlackboardKeyType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBlackboardKeyType_Bool
{
public:
	UBlackboardKeyType_Bool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBlackboardKeyType_Enum
{
public:
	UBlackboardKeyType_Enum(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UEnum GetEnumType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UEnum(ptr_addr);
	}
	struct FString GetEnumName() {
		return memory.read<struct FString>(m_addr + 56);
	}
	char GetbIsEnumNameValid() {
		return memory.read<char>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBlackboardKeyType_NativeEnum
{
public:
	UBlackboardKeyType_NativeEnum(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetEnumName() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct UEnum GetEnumType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UEnum(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBlackboardKeyType_Vector
{
public:
	UBlackboardKeyType_Vector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBTNode
{
public:
	UBTNode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetNodeName() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct UBehaviorTree GetTreeAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UBehaviorTree(ptr_addr);
	}
	struct UBTCompositeNode GetParentNode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UBTCompositeNode(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryTest_Volume
{
public:
	UEnvQueryTest_Volume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UEnvQueryContext GetVolumeContext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 504);
		return UEnvQueryContext(ptr_addr);
	}
	AVolume GetVolumeClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 512);
		return AVolume(ptr_addr);
	}
	char GetbDoComplexVolumeTest() {
		return memory.read<char>(m_addr + 520);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTCompositeNode
{
public:
	UBTCompositeNode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FBTCompositeChild> GetChildren() {
		return memory.read<struct TArray<struct FBTCompositeChild>>(m_addr + 88);
	}
	struct TArray<struct UBTService> GetServices() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct TArray<struct UBTService>(ptr_addr);
	}
	char GetbApplyDecoratorScope() {
		return memory.read<char>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTComposite_Selector
{
public:
	UBTComposite_Selector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBTComposite_Sequence
{
public:
	UBTComposite_Sequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBTComposite_SimpleParallel
{
public:
	UBTComposite_SimpleParallel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EBTParallelMode GetFinishMode() {
		return memory.read<enum class EBTParallelMode>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTDecorator
{
public:
	UBTDecorator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbInverseCondition() {
		return memory.read<char>(m_addr + 96);
	}
	enum class EBTFlowAbortMode GetFlowAbortMode() {
		return memory.read<enum class EBTFlowAbortMode>(m_addr + 100);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTDecorator_BlackboardBase
{
public:
	UBTDecorator_BlackboardBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBlackboardKeySelector GetBlackboardKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTDecorator_Blackboard
{
public:
	UBTDecorator_Blackboard(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIntValue() {
		return memory.read<int32_t>(m_addr + 144);
	}
	float GetFloatValue() {
		return memory.read<float>(m_addr + 148);
	}
	struct FString GetStringValue() {
		return memory.read<struct FString>(m_addr + 152);
	}
	struct FString GetCachedDescription() {
		return memory.read<struct FString>(m_addr + 168);
	}
	char GetOperationType() {
		return memory.read<char>(m_addr + 184);
	}
	enum class EBTBlackboardRestart GetNotifyObserver() {
		return memory.read<enum class EBTBlackboardRestart>(m_addr + 185);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryGenerator
{
public:
	UEnvQueryGenerator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetoptionName() {
		return memory.read<struct FString>(m_addr + 48);
	}
	UEnvQueryItemType GetItemType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return UEnvQueryItemType(ptr_addr);
	}
	char GetbAutoSortTests() {
		return memory.read<char>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTDecorator_ConditionalLoop
{
public:
	UBTDecorator_ConditionalLoop(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBTDecorator_ConeCheck
{
public:
	UBTDecorator_ConeCheck(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetConeHalfAngle() {
		return memory.read<float>(m_addr + 104);
	}
	struct FBlackboardKeySelector GetConeOrigin() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 112);
	}
	struct FBlackboardKeySelector GetConeDirection() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 152);
	}
	struct FBlackboardKeySelector GetObserved() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryItemType_Point
{
public:
	UEnvQueryItemType_Point(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBTDecorator_Cooldown
{
public:
	UBTDecorator_Cooldown(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCoolDownTime() {
		return memory.read<float>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTDecorator_DoesPathExist
{
public:
	UBTDecorator_DoesPathExist(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBlackboardKeySelector GetBlackboardKeyA() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 104);
	}
	struct FBlackboardKeySelector GetBlackboardKeyB() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 144);
	}
	char GetbUseSelf() {
		return memory.read<char>(m_addr + 184);
	}
	enum class EPathExistanceQueryType GetPathQueryType() {
		return memory.read<enum class EPathExistanceQueryType>(m_addr + 188);
	}
	UNavigationQueryFilter GetFilterClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return UNavigationQueryFilter(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTDecorator_ForceSuccess
{
public:
	UBTDecorator_ForceSuccess(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBTDecorator_IsAtLocation
{
public:
	UBTDecorator_IsAtLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetAcceptableRadius() {
		return memory.read<float>(m_addr + 144);
	}
	struct FAIDataProviderFloatValue GetParametrizedAcceptableRadius() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 152);
	}
	enum class FAIDistanceType GetGeometricDistanceType() {
		return memory.read<enum class FAIDistanceType>(m_addr + 208);
	}
	char GetbUseParametrizedRadius() {
		return memory.read<char>(m_addr + 212);
	}
	char GetbUseNavAgentGoalLocation() {
		return memory.read<char>(m_addr + 212);
	}
	char GetbPathFindingBasedTest() {
		return memory.read<char>(m_addr + 212);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCrowdManager
{
public:
	UCrowdManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ANavigationData GetMyNavData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct ANavigationData(ptr_addr);
	}
	struct TArray<struct FCrowdAvoidanceConfig> GetAvoidanceConfig() {
		return memory.read<struct TArray<struct FCrowdAvoidanceConfig>>(m_addr + 48);
	}
	struct TArray<struct FCrowdAvoidanceSamplingPattern> GetSamplingPatterns() {
		return memory.read<struct TArray<struct FCrowdAvoidanceSamplingPattern>>(m_addr + 64);
	}
	int32_t GetMaxAgents() {
		return memory.read<int32_t>(m_addr + 80);
	}
	float GetMaxAgentRadius() {
		return memory.read<float>(m_addr + 84);
	}
	int32_t GetMaxAvoidedAgents() {
		return memory.read<int32_t>(m_addr + 88);
	}
	int32_t GetMaxAvoidedWalls() {
		return memory.read<int32_t>(m_addr + 92);
	}
	float GetNavmeshCheckInterval() {
		return memory.read<float>(m_addr + 96);
	}
	float GetPathOptimizationInterval() {
		return memory.read<float>(m_addr + 100);
	}
	float GetSeparationDirClamp() {
		return memory.read<float>(m_addr + 104);
	}
	float GetPathOffsetRadiusMultiplier() {
		return memory.read<float>(m_addr + 108);
	}
	char GetbResolveCollisions() {
		return memory.read<char>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTDecorator_IsBBEntryOfClass
{
public:
	UBTDecorator_IsBBEntryOfClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject GetTestClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTDecorator_KeepInCone
{
public:
	UBTDecorator_KeepInCone(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetConeHalfAngle() {
		return memory.read<float>(m_addr + 104);
	}
	struct FBlackboardKeySelector GetConeOrigin() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 112);
	}
	struct FBlackboardKeySelector GetObserved() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 152);
	}
	char GetbUseSelfAsOrigin() {
		return memory.read<char>(m_addr + 192);
	}
	char GetbUseSelfAsObserved() {
		return memory.read<char>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTDecorator_Loop
{
public:
	UBTDecorator_Loop(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumLoops() {
		return memory.read<int32_t>(m_addr + 104);
	}
	bool GetbInfiniteLoop() {
		return memory.read<bool>(m_addr + 108);
	}
	float GetInfiniteLoopTimeoutTime() {
		return memory.read<float>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTDecorator_SetTagCooldown
{
public:
	UBTDecorator_SetTagCooldown(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTag GetCooldownTag() {
		return memory.read<struct FGameplayTag>(m_addr + 104);
	}
	float GetCooldownDuration() {
		return memory.read<float>(m_addr + 112);
	}
	bool GetbAddToExistingDuration() {
		return memory.read<bool>(m_addr + 116);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTDecorator_TimeLimit
{
public:
	UBTDecorator_TimeLimit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTimeLimit() {
		return memory.read<float>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTFunctionLibrary
{
public:
	UBTFunctionLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBTService
{
public:
	UBTService(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInterval() {
		return memory.read<float>(m_addr + 96);
	}
	float GetRandomDeviation() {
		return memory.read<float>(m_addr + 100);
	}
	char GetbCallTickOnSearchStart() {
		return memory.read<char>(m_addr + 104);
	}
	char GetbRestartTimerOnEachActivation() {
		return memory.read<char>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTService_BlackboardBase
{
public:
	UBTService_BlackboardBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBlackboardKeySelector GetBlackboardKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTService_BlueprintBase
{
public:
	UBTService_BlueprintBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AAIController GetAIOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct AAIController(ptr_addr);
	}
	struct AActor GetActorOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct AActor(ptr_addr);
	}
	char GetbShowPropertyDetails() {
		return memory.read<char>(m_addr + 144);
	}
	char GetbShowEventDetails() {
		return memory.read<char>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTService_DefaultFocus
{
public:
	UBTService_DefaultFocus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetFocusPriority() {
		return memory.read<char>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTService_RunEQS
{
public:
	UBTService_RunEQS(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEQSParametrizedQueryExecutionRequest GetEQSRequest() {
		return memory.read<struct FEQSParametrizedQueryExecutionRequest>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTTaskNode
{
public:
	UBTTaskNode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UBTService> GetServices() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct TArray<struct UBTService>(ptr_addr);
	}
	char GetbIgnoreRestartSelf() {
		return memory.read<char>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTTask_BlackboardBase
{
public:
	UBTTask_BlackboardBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBlackboardKeySelector GetBlackboardKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTTask_BlueprintBase
{
public:
	UBTTask_BlueprintBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AAIController GetAIOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct AAIController(ptr_addr);
	}
	struct AActor GetActorOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct AActor(ptr_addr);
	}
	struct FIntervalCountdown GetTickInterval() {
		return memory.read<struct FIntervalCountdown>(m_addr + 128);
	}
	char GetbShowPropertyDetails() {
		return memory.read<char>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTTask_FinishWithResult
{
public:
	UBTTask_FinishWithResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EBTNodeResult GetResult() {
		return memory.read<enum class EBTNodeResult>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTTask_GameplayTaskBase
{
public:
	UBTTask_GameplayTaskBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbWaitForGameplayTask() {
		return memory.read<char>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryInstanceBlueprintWrapper
{
public:
	UEnvQueryInstanceBlueprintWrapper(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetQueryID() {
		return memory.read<int32_t>(m_addr + 48);
	}
	UEnvQueryItemType GetItemType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return UEnvQueryItemType(ptr_addr);
	}
	int32_t GetOptionIndex() {
		return memory.read<int32_t>(m_addr + 96);
	}
	struct FMulticastInlineDelegate GetOnQueryFinishedEvent() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTTask_MakeNoise
{
public:
	UBTTask_MakeNoise(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetLoudnes() {
		return memory.read<float>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTTask_MoveTo
{
public:
	UBTTask_MoveTo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetAcceptableRadius() {
		return memory.read<float>(m_addr + 152);
	}
	UNavigationQueryFilter GetFilterClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return UNavigationQueryFilter(ptr_addr);
	}
	float GetObservedBlackboardValueTolerance() {
		return memory.read<float>(m_addr + 168);
	}
	char GetbObserveBlackboardValue() {
		return memory.read<char>(m_addr + 172);
	}
	char GetbAllowStrafe() {
		return memory.read<char>(m_addr + 172);
	}
	char GetbAllowPartialPath() {
		return memory.read<char>(m_addr + 172);
	}
	char GetbTrackMovingGoal() {
		return memory.read<char>(m_addr + 172);
	}
	char GetbProjectGoalLocation() {
		return memory.read<char>(m_addr + 172);
	}
	char GetbReachTestIncludesAgentRadius() {
		return memory.read<char>(m_addr + 172);
	}
	char GetbReachTestIncludesGoalRadius() {
		return memory.read<char>(m_addr + 172);
	}
	char GetbStopOnOverlap() {
		return memory.read<char>(m_addr + 172);
	}
	char GetbStopOnOverlapNeedsUpdate() {
		return memory.read<char>(m_addr + 173);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTTask_MoveDirectlyToward
{
public:
	UBTTask_MoveDirectlyToward(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbDisablePathUpdateOnGoalLocationChange() {
		return memory.read<char>(m_addr + 176);
	}
	char GetbProjectVectorGoalToNavigation() {
		return memory.read<char>(m_addr + 176);
	}
	char GetbUpdatedDeprecatedProperties() {
		return memory.read<char>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTTask_PlaySound
{
public:
	UBTTask_PlaySound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundCue GetSoundToPlay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct USoundCue(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTTask_PawnActionBase
{
public:
	UBTTask_PawnActionBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBTTask_PlayAnimation
{
public:
	UBTTask_PlayAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAnimationAsset GetAnimationToPlay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct UAnimationAsset(ptr_addr);
	}
	char GetbLooping() {
		return memory.read<char>(m_addr + 120);
	}
	char GetbNonBlocking() {
		return memory.read<char>(m_addr + 120);
	}
	struct UBehaviorTreeComponent GetMyOwnerComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 128);
		return struct UBehaviorTreeComponent(ptr_addr);
	}
	struct USkeletalMeshComponent GetCachedSkelMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct USkeletalMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTTask_PushPawnAction
{
public:
	UBTTask_PushPawnAction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPawnAction GetAction() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct UPawnAction(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTTask_RotateToFaceBBEntry
{
public:
	UBTTask_RotateToFaceBBEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetPrecision() {
		return memory.read<float>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTTask_RunBehavior
{
public:
	UBTTask_RunBehavior(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBehaviorTree GetBehaviorAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct UBehaviorTree(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTTask_RunBehaviorDynamic
{
public:
	UBTTask_RunBehaviorDynamic(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTag GetInjectionTag() {
		return memory.read<struct FGameplayTag>(m_addr + 112);
	}
	struct UBehaviorTree GetDefaultBehaviorAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct UBehaviorTree(ptr_addr);
	}
	struct UBehaviorTree GetBehaviorAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 128);
		return struct UBehaviorTree(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTTask_RunEQSQuery
{
public:
	UBTTask_RunEQSQuery(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UEnvQuery GetQueryTemplate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UEnvQuery(ptr_addr);
	}
	struct TArray<struct FEnvNamedValue> GetQueryParams() {
		return memory.read<struct TArray<struct FEnvNamedValue>>(m_addr + 160);
	}
	struct TArray<struct FAIDynamicParam> GetQueryConfig() {
		return memory.read<struct TArray<struct FAIDynamicParam>>(m_addr + 176);
	}
	enum class EEnvQueryRunMode GetRunMode() {
		return memory.read<enum class EEnvQueryRunMode>(m_addr + 192);
	}
	struct FBlackboardKeySelector GetEQSQueryBlackboardKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 200);
	}
	bool GetbUseBBKey() {
		return memory.read<bool>(m_addr + 240);
	}
	struct FEQSParametrizedQueryExecutionRequest GetEQSRequest() {
		return memory.read<struct FEQSParametrizedQueryExecutionRequest>(m_addr + 248);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTTask_SetTagCooldown
{
public:
	UBTTask_SetTagCooldown(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTag GetCooldownTag() {
		return memory.read<struct FGameplayTag>(m_addr + 112);
	}
	bool GetbAddToExistingDuration() {
		return memory.read<bool>(m_addr + 120);
	}
	float GetCooldownDuration() {
		return memory.read<float>(m_addr + 124);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTTask_Wait
{
public:
	UBTTask_Wait(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetWaitTime() {
		return memory.read<float>(m_addr + 112);
	}
	float GetRandomDeviation() {
		return memory.read<float>(m_addr + 116);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBTTask_WaitBlackboardTime
{
public:
	UBTTask_WaitBlackboardTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBlackboardKeySelector GetBlackboardKey() {
		return memory.read<struct FBlackboardKeySelector>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCrowdAgentInterface
{
public:
	UCrowdAgentInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPathFollowingComponent
{
public:
	UPathFollowingComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNavMovementComponent GetMovementComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 232);
		return struct UNavMovementComponent(ptr_addr);
	}
	struct ANavigationData GetMyNavData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 248);
		return struct ANavigationData(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCrowdFollowingComponent
{
public:
	UCrowdFollowingComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetCrowdAgentMoveDirection() {
		return memory.read<struct FVector>(m_addr + 616);
	}

private:
	std::uint64_t m_addr = 0;
};


class ADetourCrowdAIController
{
public:
	ADetourCrowdAIController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEnvQuery
{
public:
	UEnvQuery(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetQueryName() {
		return memory.read<struct FName>(m_addr + 48);
	}
	struct TArray<struct UEnvQueryOption> GetOptions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct TArray<struct UEnvQueryOption>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryContext_BlueprintBase
{
public:
	UEnvQueryContext_BlueprintBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryContext_Item
{
public:
	UEnvQueryContext_Item(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryContext_Querier
{
public:
	UEnvQueryContext_Querier(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryDebugHelpers
{
public:
	UEnvQueryDebugHelpers(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryNode
{
public:
	UEnvQueryNode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetVerNum() {
		return memory.read<int32_t>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryGenerator_ActorsOfClass
{
public:
	UEnvQueryGenerator_ActorsOfClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	AActor GetSearchedActorClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return AActor(ptr_addr);
	}
	struct FAIDataProviderBoolValue GetGenerateOnlyActorsInRadius() {
		return memory.read<struct FAIDataProviderBoolValue>(m_addr + 88);
	}
	struct FAIDataProviderFloatValue GetSearchRadius() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 144);
	}
	UEnvQueryContext GetSearchCenter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return UEnvQueryContext(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryGenerator_BlueprintBase
{
public:
	UEnvQueryGenerator_BlueprintBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetGeneratorsActionDescription() {
		return memory.read<struct FText>(m_addr + 80);
	}
	UEnvQueryContext GetContext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return UEnvQueryContext(ptr_addr);
	}
	UEnvQueryItemType GetGeneratedItemType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return UEnvQueryItemType(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryGenerator_Composite
{
public:
	UEnvQueryGenerator_Composite(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UEnvQueryGenerator> GetGenerators() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct TArray<struct UEnvQueryGenerator>(ptr_addr);
	}
	char GetbAllowDifferentItemTypes() {
		return memory.read<char>(m_addr + 96);
	}
	char GetbHasMatchingItemType() {
		return memory.read<char>(m_addr + 96);
	}
	UEnvQueryItemType GetForcedItemType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return UEnvQueryItemType(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryGenerator_Cone
{
public:
	UEnvQueryGenerator_Cone(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAIDataProviderFloatValue GetAlignedPointsDistance() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 128);
	}
	struct FAIDataProviderFloatValue GetConeDegrees() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 184);
	}
	struct FAIDataProviderFloatValue GetAngleStep() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 240);
	}
	struct FAIDataProviderFloatValue GetRange() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 296);
	}
	UEnvQueryContext GetCenterActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 352);
		return UEnvQueryContext(ptr_addr);
	}
	char GetbIncludeContextLocation() {
		return memory.read<char>(m_addr + 360);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryGenerator_CurrentLocation
{
public:
	UEnvQueryGenerator_CurrentLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UEnvQueryContext GetQueryContext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return UEnvQueryContext(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryGenerator_Donut
{
public:
	UEnvQueryGenerator_Donut(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAIDataProviderFloatValue GetInnerRadius() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 128);
	}
	struct FAIDataProviderFloatValue GetOuterRadius() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 184);
	}
	struct FAIDataProviderIntValue GetNumberOfRings() {
		return memory.read<struct FAIDataProviderIntValue>(m_addr + 240);
	}
	struct FAIDataProviderIntValue GetPointsPerRing() {
		return memory.read<struct FAIDataProviderIntValue>(m_addr + 296);
	}
	struct FEnvDirection GetArcDirection() {
		return memory.read<struct FEnvDirection>(m_addr + 352);
	}
	struct FAIDataProviderFloatValue GetArcAngle() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 384);
	}
	bool GetbUseSpiralPattern() {
		return memory.read<bool>(m_addr + 440);
	}
	UEnvQueryContext GetCenter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 448);
		return UEnvQueryContext(ptr_addr);
	}
	char GetbDefineArc() {
		return memory.read<char>(m_addr + 456);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryGenerator_OnCircle
{
public:
	UEnvQueryGenerator_OnCircle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAIDataProviderFloatValue GetCircleRadius() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 128);
	}
	struct FAIDataProviderFloatValue GetSpaceBetween() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 184);
	}
	struct FAIDataProviderIntValue GetNumberOfPoints() {
		return memory.read<struct FAIDataProviderIntValue>(m_addr + 240);
	}
	enum class EPointOnCircleSpacingMethod GetPointOnCircleSpacingMethod() {
		return memory.read<enum class EPointOnCircleSpacingMethod>(m_addr + 296);
	}
	struct FEnvDirection GetArcDirection() {
		return memory.read<struct FEnvDirection>(m_addr + 304);
	}
	struct FAIDataProviderFloatValue GetArcAngle() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 336);
	}
	float GetAngleRadians() {
		return memory.read<float>(m_addr + 392);
	}
	UEnvQueryContext GetCircleCenter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 400);
		return UEnvQueryContext(ptr_addr);
	}
	bool GetbIgnoreAnyContextActorsWhenGeneratingCircle() {
		return memory.read<bool>(m_addr + 408);
	}
	struct FAIDataProviderFloatValue GetCircleCenterZOffset() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 416);
	}
	struct FEnvTraceData GetTraceData() {
		return memory.read<struct FEnvTraceData>(m_addr + 472);
	}
	char GetbDefineArc() {
		return memory.read<char>(m_addr + 520);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryGenerator_SimpleGrid
{
public:
	UEnvQueryGenerator_SimpleGrid(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAIDataProviderFloatValue GetGridSize() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 128);
	}
	struct FAIDataProviderFloatValue GetSpaceBetween() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 184);
	}
	UEnvQueryContext GetGenerateAround() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 240);
		return UEnvQueryContext(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryItemType
{
public:
	UEnvQueryItemType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryItemType_VectorBase
{
public:
	UEnvQueryItemType_VectorBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryItemType_ActorBase
{
public:
	UEnvQueryItemType_ActorBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryItemType_Actor
{
public:
	UEnvQueryItemType_Actor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryItemType_Direction
{
public:
	UEnvQueryItemType_Direction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryManager
{
public:
	UEnvQueryManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FEnvQueryInstanceCache> GetInstanceCache() {
		return memory.read<struct TArray<struct FEnvQueryInstanceCache>>(m_addr + 168);
	}
	struct TArray<struct UEnvQueryContext> GetLocalContexts() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct TArray<struct UEnvQueryContext>(ptr_addr);
	}
	struct TArray<struct UEnvQueryInstanceBlueprintWrapper> GetGCShieldedWrappers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct TArray<struct UEnvQueryInstanceBlueprintWrapper>(ptr_addr);
	}
	float GetMaxAllowedTestingTime() {
		return memory.read<float>(m_addr + 300);
	}
	bool GetbTestQueriesUsingBreadth() {
		return memory.read<bool>(m_addr + 304);
	}
	int32_t GetQueryCountWarningThreshold() {
		return memory.read<int32_t>(m_addr + 308);
	}
	double GetQueryCountWarningInterval() {
		return memory.read<double>(m_addr + 312);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryOption
{
public:
	UEnvQueryOption(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UEnvQueryGenerator GetGenerator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UEnvQueryGenerator(ptr_addr);
	}
	struct TArray<struct UEnvQueryTest> GetTests() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct TArray<struct UEnvQueryTest>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryTest
{
public:
	UEnvQueryTest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTestOrder() {
		return memory.read<int32_t>(m_addr + 48);
	}
	enum class EEnvTestPurpose GetTestPurpose() {
		return memory.read<enum class EEnvTestPurpose>(m_addr + 52);
	}
	struct FString GetTestComment() {
		return memory.read<struct FString>(m_addr + 56);
	}
	enum class EEnvTestFilterOperator GetMultipleContextFilterOp() {
		return memory.read<enum class EEnvTestFilterOperator>(m_addr + 72);
	}
	enum class EEnvTestScoreOperator GetMultipleContextScoreOp() {
		return memory.read<enum class EEnvTestScoreOperator>(m_addr + 73);
	}
	enum class EEnvTestFilterType GetFilterType() {
		return memory.read<enum class EEnvTestFilterType>(m_addr + 74);
	}
	struct FAIDataProviderBoolValue GetBoolValue() {
		return memory.read<struct FAIDataProviderBoolValue>(m_addr + 80);
	}
	struct FAIDataProviderFloatValue GetFloatValueMin() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 136);
	}
	struct FAIDataProviderFloatValue GetFloatValueMax() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 192);
	}
	enum class EEnvTestScoreEquation GetScoringEquation() {
		return memory.read<enum class EEnvTestScoreEquation>(m_addr + 249);
	}
	enum class EEnvQueryTestClamping GetClampMinType() {
		return memory.read<enum class EEnvQueryTestClamping>(m_addr + 250);
	}
	enum class EEnvQueryTestClamping GetClampMaxType() {
		return memory.read<enum class EEnvQueryTestClamping>(m_addr + 251);
	}
	enum class EEQSNormalizationType GetNormalizationType() {
		return memory.read<enum class EEQSNormalizationType>(m_addr + 252);
	}
	struct FAIDataProviderFloatValue GetScoreClampMin() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 256);
	}
	struct FAIDataProviderFloatValue GetScoreClampMax() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 312);
	}
	struct FAIDataProviderFloatValue GetScoringFactor() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 368);
	}
	struct FAIDataProviderFloatValue GetReferenceValue() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 424);
	}
	bool GetbDefineReferenceValue() {
		return memory.read<bool>(m_addr + 480);
	}
	char GetbWorkOnFloatValues() {
		return memory.read<char>(m_addr + 496);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryTest_Distance
{
public:
	UEnvQueryTest_Distance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EEnvTestDistance GetTestMode() {
		return memory.read<enum class EEnvTestDistance>(m_addr + 504);
	}
	UEnvQueryContext GetDistanceTo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 512);
		return UEnvQueryContext(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryTest_GameplayTags
{
public:
	UEnvQueryTest_GameplayTags(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTagQuery GetTagQueryToMatch() {
		return memory.read<struct FGameplayTagQuery>(m_addr + 504);
	}
	bool GetbUpdatedToUseQuery() {
		return memory.read<bool>(m_addr + 576);
	}
	enum class EGameplayContainerMatchType GetTagsToMatch() {
		return memory.read<enum class EGameplayContainerMatchType>(m_addr + 577);
	}
	struct FGameplayTagContainer GetGameplayTags() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 584);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryTest_Overlap
{
public:
	UEnvQueryTest_Overlap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEnvOverlapData GetOverlapData() {
		return memory.read<struct FEnvOverlapData>(m_addr + 504);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryTest_Pathfinding
{
public:
	UEnvQueryTest_Pathfinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EEnvTestPathfinding GetTestMode() {
		return memory.read<enum class EEnvTestPathfinding>(m_addr + 504);
	}
	UEnvQueryContext GetContext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 512);
		return UEnvQueryContext(ptr_addr);
	}
	struct FAIDataProviderBoolValue GetPathFromContext() {
		return memory.read<struct FAIDataProviderBoolValue>(m_addr + 520);
	}
	struct FAIDataProviderBoolValue GetSkipUnreachable() {
		return memory.read<struct FAIDataProviderBoolValue>(m_addr + 576);
	}
	UNavigationQueryFilter GetFilterClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return UNavigationQueryFilter(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryTest_PathfindingBatch
{
public:
	UEnvQueryTest_PathfindingBatch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAIDataProviderFloatValue GetScanRangeMultiplier() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 640);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryTest_Project
{
public:
	UEnvQueryTest_Project(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEnvTraceData GetProjectionData() {
		return memory.read<struct FEnvTraceData>(m_addr + 504);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryTest_Random
{
public:
	UEnvQueryTest_Random(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryTest_Trace
{
public:
	UEnvQueryTest_Trace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEnvTraceData GetTraceData() {
		return memory.read<struct FEnvTraceData>(m_addr + 504);
	}
	struct FAIDataProviderBoolValue GetTraceFromContext() {
		return memory.read<struct FAIDataProviderBoolValue>(m_addr + 552);
	}
	struct FAIDataProviderFloatValue GetItemHeightOffset() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 608);
	}
	struct FAIDataProviderFloatValue GetContextHeightOffset() {
		return memory.read<struct FAIDataProviderFloatValue>(m_addr + 664);
	}
	UEnvQueryContext GetContext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return UEnvQueryContext(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvQueryTypes
{
public:
	UEnvQueryTypes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEQSQueryResultSourceInterface
{
public:
	UEQSQueryResultSourceInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEQSRenderingComponent
{
public:
	UEQSRenderingComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AEQSTestingPawn
{
public:
	AEQSTestingPawn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UEnvQuery GetQueryTemplate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1216);
		return struct UEnvQuery(ptr_addr);
	}
	struct TArray<struct FEnvNamedValue> GetQueryParams() {
		return memory.read<struct TArray<struct FEnvNamedValue>>(m_addr + 1224);
	}
	struct TArray<struct FAIDynamicParam> GetQueryConfig() {
		return memory.read<struct TArray<struct FAIDynamicParam>>(m_addr + 1240);
	}
	float GetTimeLimitPerStep() {
		return memory.read<float>(m_addr + 1256);
	}
	int32_t GetStepToDebugDraw() {
		return memory.read<int32_t>(m_addr + 1260);
	}
	enum class EEnvQueryHightlightMode GetHighlightMode() {
		return memory.read<enum class EEnvQueryHightlightMode>(m_addr + 1264);
	}
	char GetbDrawLabels() {
		return memory.read<char>(m_addr + 1268);
	}
	char GetbDrawFailedItems() {
		return memory.read<char>(m_addr + 1268);
	}
	char GetbReRunQueryOnlyOnFinishedMove() {
		return memory.read<char>(m_addr + 1268);
	}
	char GetbShouldBeVisibleInGame() {
		return memory.read<char>(m_addr + 1268);
	}
	char GetbTickDuringGame() {
		return memory.read<char>(m_addr + 1268);
	}
	enum class EEnvQueryRunMode GetQueryingMode() {
		return memory.read<enum class EEnvQueryRunMode>(m_addr + 1272);
	}
	struct FNavAgentProperties GetNavAgentProperties() {
		return memory.read<struct FNavAgentProperties>(m_addr + 1280);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGenericTeamAgentInterface
{
public:
	UGenericTeamAgentInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AGridPathAIController
{
public:
	AGridPathAIController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGridPathFollowingComponent
{
public:
	UGridPathFollowingComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNavLocalGridManager GetGridManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 592);
		return struct UNavLocalGridManager(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNavFilter_AIControllerDefault
{
public:
	UNavFilter_AIControllerDefault(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ANavLinkProxy
{
public:
	ANavLinkProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FNavigationLink> GetPointLinks() {
		return memory.read<struct TArray<struct FNavigationLink>>(m_addr + 560);
	}
	struct TArray<struct FNavigationSegmentLink> GetSegmentLinks() {
		return memory.read<struct TArray<struct FNavigationSegmentLink>>(m_addr + 576);
	}
	struct UNavLinkCustomComponent GetSmartLinkComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 592);
		return struct UNavLinkCustomComponent(ptr_addr);
	}
	bool GetbSmartLinkIsRelevant() {
		return memory.read<bool>(m_addr + 600);
	}
	struct FMulticastInlineDelegate GetOnSmartLinkReached() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 608);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNavLocalGridManager
{
public:
	UNavLocalGridManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPawnAction
{
public:
	UPawnAction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPawnAction GetChildAction() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UPawnAction(ptr_addr);
	}
	struct UPawnAction GetParentAction() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UPawnAction(ptr_addr);
	}
	struct UPawnActionsComponent GetOwnerComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UPawnActionsComponent(ptr_addr);
	}
	struct UObject GetInstigator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UObject(ptr_addr);
	}
	struct UBrainComponent GetBrainComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UBrainComponent(ptr_addr);
	}
	char GetbAllowNewSameClassInstance() {
		return memory.read<char>(m_addr + 128);
	}
	char GetbReplaceActiveSameClassInstance() {
		return memory.read<char>(m_addr + 128);
	}
	char GetbShouldPauseMovement() {
		return memory.read<char>(m_addr + 128);
	}
	char GetbAlwaysNotifyOnFinished() {
		return memory.read<char>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPawnAction_BlueprintBase
{
public:
	UPawnAction_BlueprintBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPawnAction_Move
{
public:
	UPawnAction_Move(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetGoalActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct AActor(ptr_addr);
	}
	struct FVector GetGoalLocation() {
		return memory.read<struct FVector>(m_addr + 152);
	}
	float GetAcceptableRadius() {
		return memory.read<float>(m_addr + 164);
	}
	UNavigationQueryFilter GetFilterClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return UNavigationQueryFilter(ptr_addr);
	}
	char GetbAllowStrafe() {
		return memory.read<char>(m_addr + 176);
	}
	char GetbFinishOnOverlap() {
		return memory.read<char>(m_addr + 176);
	}
	char GetbUsePathfinding() {
		return memory.read<char>(m_addr + 176);
	}
	char GetbAllowPartialPath() {
		return memory.read<char>(m_addr + 176);
	}
	char GetbProjectGoalToNavigation() {
		return memory.read<char>(m_addr + 176);
	}
	char GetbUpdatePathToGoal() {
		return memory.read<char>(m_addr + 176);
	}
	char GetbAbortChildActionOnPathChange() {
		return memory.read<char>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPawnAction_Repeat
{
public:
	UPawnAction_Repeat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPawnAction GetActionToRepeat() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UPawnAction(ptr_addr);
	}
	struct UPawnAction GetRecentActionCopy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UPawnAction(ptr_addr);
	}
	enum class EPawnActionFailHandling GetChildFailureHandlingMode() {
		return memory.read<enum class EPawnActionFailHandling>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPawnAction_Wait
{
public:
	UPawnAction_Wait(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTimeToWait() {
		return memory.read<float>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPawnActionsComponent
{
public:
	UPawnActionsComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetControlledPawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct APawn(ptr_addr);
	}
	struct TArray<struct FPawnActionStack> GetActionStacks() {
		return memory.read<struct TArray<struct FPawnActionStack>>(m_addr + 184);
	}
	struct TArray<struct FPawnActionEvent> GetActionEvents() {
		return memory.read<struct TArray<struct FPawnActionEvent>>(m_addr + 200);
	}
	struct UPawnAction GetCurrentAction() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 216);
		return struct UPawnAction(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPawnSensingComponent
{
public:
	UPawnSensingComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetHearingThreshold() {
		return memory.read<float>(m_addr + 176);
	}
	float GetLOSHearingThreshold() {
		return memory.read<float>(m_addr + 180);
	}
	float GetSightRadius() {
		return memory.read<float>(m_addr + 184);
	}
	float GetSensingInterval() {
		return memory.read<float>(m_addr + 188);
	}
	float GetHearingMaxSoundAge() {
		return memory.read<float>(m_addr + 192);
	}
	char GetbEnableSensingUpdates() {
		return memory.read<char>(m_addr + 196);
	}
	char GetbOnlySensePlayers() {
		return memory.read<char>(m_addr + 196);
	}
	char GetbSeePawns() {
		return memory.read<char>(m_addr + 196);
	}
	char GetbHearNoises() {
		return memory.read<char>(m_addr + 196);
	}
	struct FMulticastInlineDelegate GetOnSeePawn() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 208);
	}
	struct FMulticastInlineDelegate GetOnHearNoise() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 224);
	}
	float GetPeripheralVisionAngle() {
		return memory.read<float>(m_addr + 240);
	}
	float GetPeripheralVisionCosine() {
		return memory.read<float>(m_addr + 244);
	}

private:
	std::uint64_t m_addr = 0;
};


