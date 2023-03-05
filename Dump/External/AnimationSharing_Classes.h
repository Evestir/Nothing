#pragma once 
#include <AnimationSharing_Structs.h>
 
 
 
class UAnimSharingTransitionInstance
{
public:
	UAnimSharingTransitionInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TWeakObjectPtr<USkeletalMeshComponent> GetFromComponent() {
		return memory.read<struct TWeakObjectPtr<USkeletalMeshComponent>>(m_addr + 696);
	}
	struct TWeakObjectPtr<USkeletalMeshComponent> GetToComponent() {
		return memory.read<struct TWeakObjectPtr<USkeletalMeshComponent>>(m_addr + 704);
	}
	float GetBlendTime() {
		return memory.read<float>(m_addr + 712);
	}
	bool GetbBlendBool() {
		return memory.read<bool>(m_addr + 716);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimSharingStateInstance
{
public:
	UAnimSharingStateInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAnimSequence GetAnimationToPlay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UAnimSequence(ptr_addr);
	}
	float GetPermutationTimeOffset() {
		return memory.read<float>(m_addr + 704);
	}
	float GetPlayRate() {
		return memory.read<float>(m_addr + 708);
	}
	bool GetbStateBool() {
		return memory.read<bool>(m_addr + 712);
	}
	struct UAnimSharingInstance GetInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UAnimSharingInstance(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimationSharingSetup
{
public:
	UAnimationSharingSetup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPerSkeletonAnimationSharingSetup> GetSkeletonSetups() {
		return memory.read<struct TArray<struct FPerSkeletonAnimationSharingSetup>>(m_addr + 40);
	}
	struct FAnimationSharingScalability GetScalabilitySettings() {
		return memory.read<struct FAnimationSharingScalability>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimSharingAdditiveInstance
{
public:
	UAnimSharingAdditiveInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TWeakObjectPtr<USkeletalMeshComponent> GetBaseComponent() {
		return memory.read<struct TWeakObjectPtr<USkeletalMeshComponent>>(m_addr + 696);
	}
	struct TWeakObjectPtr<UAnimSequence> GetAdditiveAnimation() {
		return memory.read<struct TWeakObjectPtr<UAnimSequence>>(m_addr + 704);
	}
	float GetAlpha() {
		return memory.read<float>(m_addr + 712);
	}
	bool GetbStateBool() {
		return memory.read<bool>(m_addr + 716);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimSharingInstance
{
public:
	UAnimSharingInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct AActor> GetRegisteredActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct AActor>(ptr_addr);
	}
	struct UAnimationSharingStateProcessor GetStateProcessor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct UAnimationSharingStateProcessor(ptr_addr);
	}
	struct TArray<struct UAnimSequence> GetUsedAnimationSequences() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct TArray<struct UAnimSequence>(ptr_addr);
	}
	struct UEnum GetStateEnum() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 232);
		return struct UEnum(ptr_addr);
	}
	struct AActor GetSharingActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 240);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimationSharingStateProcessor
{
public:
	UAnimationSharingStateProcessor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<UEnum> GetAnimationStateEnum() {
		return memory.read<struct TSoftObjectPtr<UEnum>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnimationSharingManager
{
public:
	UAnimationSharingManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct USkeleton> GetSkeletons() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct USkeleton>(ptr_addr);
	}
	struct TArray<struct UAnimSharingInstance> GetPerSkeletonData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct TArray<struct UAnimSharingInstance>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


