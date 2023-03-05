#pragma once 
#include <GameplayTasks_Structs.h>
 
 
 
class UGameplayTaskResource
{
public:
	UGameplayTaskResource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetManualResourceID() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int8_t GetAutoResourceID() {
		return memory.read<int8_t>(m_addr + 44);
	}
	char GetbManuallySetID() {
		return memory.read<char>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGameplayTaskOwnerInterface
{
public:
	UGameplayTaskOwnerInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGameplayTask_TimeLimitedExecution
{
public:
	UGameplayTask_TimeLimitedExecution(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnFinished() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 104);
	}
	struct FMulticastInlineDelegate GetOnTimeExpired() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGameplayTask
{
public:
	UGameplayTask(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInstanceName() {
		return memory.read<struct FName>(m_addr + 48);
	}
	enum class ETaskResourceOverlapPolicy GetResourceOverlapPolicy() {
		return memory.read<enum class ETaskResourceOverlapPolicy>(m_addr + 58);
	}
	struct UGameplayTask GetChildTask() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UGameplayTask(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGameplayTask_WaitDelay
{
public:
	UGameplayTask_WaitDelay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnFinish() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGameplayTask_SpawnActor
{
public:
	UGameplayTask_SpawnActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 104);
	}
	struct FMulticastInlineDelegate GetDidNotSpawn() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 120);
	}
	AActor GetClassToSpawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGameplayTask_ClaimResource
{
public:
	UGameplayTask_ClaimResource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGameplayTasksComponent
{
public:
	UGameplayTasksComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbIsNetDirty() {
		return memory.read<char>(m_addr + 188);
	}
	struct TArray<struct UGameplayTask> GetSimulatedTasks() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct TArray<struct UGameplayTask>(ptr_addr);
	}
	struct TArray<struct UGameplayTask> GetTaskPriorityQueue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 208);
		return struct TArray<struct UGameplayTask>(ptr_addr);
	}
	struct TArray<struct UGameplayTask> GetTickingTasks() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 240);
		return struct TArray<struct UGameplayTask>(ptr_addr);
	}
	struct TArray<struct UGameplayTask> GetKnownTasks() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 256);
		return struct TArray<struct UGameplayTask>(ptr_addr);
	}
	struct FMulticastInlineDelegate GetOnClaimedResourcesChange() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 272);
	}

private:
	std::uint64_t m_addr = 0;
};


