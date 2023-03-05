#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FOnClaimedResourcesChangeSignature__DelegateSignature
{
public:
	FOnClaimedResourcesChangeSignature__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FClaimResource
{
public:
	FClaimResource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<IGameplayTaskOwnerInterface> GetInTaskOwner() {
		return memory.read<struct TScriptInterface<IGameplayTaskOwnerInterface>>(m_addr + 0);
	}
	UGameplayTaskResource GetResourceClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return UGameplayTaskResource(ptr_addr);
	}
	char GetPriority() {
		return memory.read<char>(m_addr + 24);
	}
	struct FName GetTaskInstanceName() {
		return memory.read<struct FName>(m_addr + 28);
	}
	struct UGameplayTask_ClaimResource GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UGameplayTask_ClaimResource(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGameplayResourceSet
{
public:
	FGameplayResourceSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FBeginSpawningActor
{
public:
	FBeginSpawningActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct AActor GetSpawnedActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FClaimResources
{
public:
	FClaimResources(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<IGameplayTaskOwnerInterface> GetInTaskOwner() {
		return memory.read<struct TScriptInterface<IGameplayTaskOwnerInterface>>(m_addr + 0);
	}
	struct TArray<UGameplayTaskResource> GetResourceClasses() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct TArray<UGameplayTaskResource>(ptr_addr);
	}
	char GetPriority() {
		return memory.read<char>(m_addr + 32);
	}
	struct FName GetTaskInstanceName() {
		return memory.read<struct FName>(m_addr + 36);
	}
	struct UGameplayTask_ClaimResource GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UGameplayTask_ClaimResource(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FTaskWaitDelay
{
public:
	FTaskWaitDelay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<IGameplayTaskOwnerInterface> GetTaskOwner() {
		return memory.read<struct TScriptInterface<IGameplayTaskOwnerInterface>>(m_addr + 0);
	}
	float GetTime() {
		return memory.read<float>(m_addr + 16);
	}
	char GetPriority() {
		return memory.read<char>(m_addr + 20);
	}
	struct UGameplayTask_WaitDelay GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UGameplayTask_WaitDelay(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGameplayTaskSpawnActorDelegate__DelegateSignature
{
public:
	FGameplayTaskSpawnActorDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetSpawnedActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FFinishSpawningActor
{
public:
	FFinishSpawningActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct AActor GetSpawnedActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpawnActor
{
public:
	FSpawnActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<IGameplayTaskOwnerInterface> GetTaskOwner() {
		return memory.read<struct TScriptInterface<IGameplayTaskOwnerInterface>>(m_addr + 0);
	}
	struct FVector GetSpawnLocation() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	struct FRotator GetSpawnRotation() {
		return memory.read<struct FRotator>(m_addr + 28);
	}
	AActor GetClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return AActor(ptr_addr);
	}
	bool GetbSpawnOnlyOnAuthority() {
		return memory.read<bool>(m_addr + 48);
	}
	struct UGameplayTask_SpawnActor GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UGameplayTask_SpawnActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_RunGameplayTask
{
public:
	FK2_RunGameplayTask(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<IGameplayTaskOwnerInterface> GetTaskOwner() {
		return memory.read<struct TScriptInterface<IGameplayTaskOwnerInterface>>(m_addr + 0);
	}
	struct UGameplayTask GetTask() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UGameplayTask(ptr_addr);
	}
	char GetPriority() {
		return memory.read<char>(m_addr + 24);
	}
	struct TArray<UGameplayTaskResource> GetAdditionalRequiredResources() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct TArray<UGameplayTaskResource>(ptr_addr);
	}
	struct TArray<UGameplayTaskResource> GetAdditionalClaimedResources() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct TArray<UGameplayTaskResource>(ptr_addr);
	}
	enum class EGameplayTaskRunResult GetReturnValue() {
		return memory.read<enum class EGameplayTaskRunResult>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};