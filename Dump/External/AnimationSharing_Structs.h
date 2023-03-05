#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FCreateAnimationSharingManager
{
public:
	FCreateAnimationSharingManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UAnimationSharingSetup GetSetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UAnimationSharingSetup(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FTickAnimationSharingFunction
{
public:
	FTickAnimationSharingFunction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FAnimationSharingScalability
{
public:
	FAnimationSharingScalability(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPerPlatformBool GetUseBlendTransitions() {
		return memory.read<struct FPerPlatformBool>(m_addr + 0);
	}
	struct FPerPlatformFloat GetBlendSignificanceValue() {
		return memory.read<struct FPerPlatformFloat>(m_addr + 4);
	}
	struct FPerPlatformInt GetMaximumNumberConcurrentBlends() {
		return memory.read<struct FPerPlatformInt>(m_addr + 8);
	}
	struct FPerPlatformFloat GetTickSignificanceValue() {
		return memory.read<struct FPerPlatformFloat>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimationStateEntry
{
public:
	FAnimationStateEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetState() {
		return memory.read<char>(m_addr + 0);
	}
	struct TArray<struct FAnimationSetup> GetAnimationSetups() {
		return memory.read<struct TArray<struct FAnimationSetup>>(m_addr + 8);
	}
	bool GetbOnDemand() {
		return memory.read<bool>(m_addr + 24);
	}
	bool GetbAdditive() {
		return memory.read<bool>(m_addr + 25);
	}
	float GetBlendTime() {
		return memory.read<float>(m_addr + 28);
	}
	bool GetbReturnToPreviousState() {
		return memory.read<bool>(m_addr + 32);
	}
	bool GetbSetNextState() {
		return memory.read<bool>(m_addr + 33);
	}
	char GetNextState() {
		return memory.read<char>(m_addr + 34);
	}
	struct FPerPlatformInt GetMaximumNumberOfConcurrentInstances() {
		return memory.read<struct FPerPlatformInt>(m_addr + 36);
	}
	float GetWiggleTimePercentage() {
		return memory.read<float>(m_addr + 40);
	}
	bool GetbRequiresCurves() {
		return memory.read<bool>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetInstancedActors
{
public:
	FGetInstancedActors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct AActor> GetActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct AActor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimationSetup
{
public:
	FAnimationSetup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAnimSequence GetAnimSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAnimSequence(ptr_addr);
	}
	UAnimSharingStateInstance GetAnimBlueprint() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UAnimSharingStateInstance(ptr_addr);
	}
	struct FPerPlatformInt GetNumRandomizedInstances() {
		return memory.read<struct FPerPlatformInt>(m_addr + 16);
	}
	struct FPerPlatformBool GetEnabled() {
		return memory.read<struct FPerPlatformBool>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FPerSkeletonAnimationSharingSetup
{
public:
	FPerSkeletonAnimationSharingSetup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkeleton GetSkeleton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USkeleton(ptr_addr);
	}
	struct USkeletalMesh GetSkeletalMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USkeletalMesh(ptr_addr);
	}
	UAnimSharingTransitionInstance GetBlendAnimBlueprint() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return UAnimSharingTransitionInstance(ptr_addr);
	}
	UAnimSharingAdditiveInstance GetAdditiveAnimBlueprint() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return UAnimSharingAdditiveInstance(ptr_addr);
	}
	UAnimationSharingStateProcessor GetStateProcessorClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return UAnimationSharingStateProcessor(ptr_addr);
	}
	struct TArray<struct FAnimationStateEntry> GetAnimationStates() {
		return memory.read<struct TArray<struct FAnimationStateEntry>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimationSharingEnabled
{
public:
	FAnimationSharingEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAnimationSharingManager
{
public:
	FGetAnimationSharingManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UAnimationSharingManager GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UAnimationSharingManager(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRegisterActorWithSkeletonBP
{
public:
	FRegisterActorWithSkeletonBP(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetInActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct USkeleton GetSharingSkeleton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USkeleton(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAnimationStateEnum
{
public:
	FGetAnimationStateEnum(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UEnum GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UEnum(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FProcessActorState
{
public:
	FProcessActorState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOutState() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct AActor GetInActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	char GetCurrentState() {
		return memory.read<char>(m_addr + 16);
	}
	char GetOnDemandState() {
		return memory.read<char>(m_addr + 17);
	}
	bool GetbShouldProcess() {
		return memory.read<bool>(m_addr + 18);
	}

private:
	std::uint64_t m_addr = 0;
};