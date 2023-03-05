#pragma once 
#include <ChaosSolverEngine_Structs.h>
 
 
 
class UChaosDebugDrawComponent
{
public:
	UChaosDebugDrawComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AChaosSolverActor
{
public:
	AChaosSolverActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FChaosSolverConfiguration GetProperties() {
		return memory.read<struct FChaosSolverConfiguration>(m_addr + 544);
	}
	float GetTimeStepMultiplier() {
		return memory.read<float>(m_addr + 648);
	}
	int32_t GetCollisionIterations() {
		return memory.read<int32_t>(m_addr + 652);
	}
	int32_t GetPushOutIterations() {
		return memory.read<int32_t>(m_addr + 656);
	}
	int32_t GetPushOutPairIterations() {
		return memory.read<int32_t>(m_addr + 660);
	}
	float GetClusterConnectionFactor() {
		return memory.read<float>(m_addr + 664);
	}
	enum class EClusterConnectionTypeEnum GetClusterUnionConnectionType() {
		return memory.read<enum class EClusterConnectionTypeEnum>(m_addr + 668);
	}
	bool GetDoGenerateCollisionData() {
		return memory.read<bool>(m_addr + 669);
	}
	struct FSolverCollisionFilterSettings GetCollisionFilterSettings() {
		return memory.read<struct FSolverCollisionFilterSettings>(m_addr + 672);
	}
	bool GetDoGenerateBreakingData() {
		return memory.read<bool>(m_addr + 688);
	}
	struct FSolverBreakingFilterSettings GetBreakingFilterSettings() {
		return memory.read<struct FSolverBreakingFilterSettings>(m_addr + 692);
	}
	bool GetDoGenerateTrailingData() {
		return memory.read<bool>(m_addr + 708);
	}
	struct FSolverTrailingFilterSettings GetTrailingFilterSettings() {
		return memory.read<struct FSolverTrailingFilterSettings>(m_addr + 712);
	}
	float GetMassScale() {
		return memory.read<float>(m_addr + 728);
	}
	bool GetbGenerateContactGraph() {
		return memory.read<bool>(m_addr + 732);
	}
	bool GetbHasFloor() {
		return memory.read<bool>(m_addr + 733);
	}
	float GetFloorHeight() {
		return memory.read<float>(m_addr + 736);
	}
	struct FChaosDebugSubstepControl GetChaosDebugSubstepControl() {
		return memory.read<struct FChaosDebugSubstepControl>(m_addr + 740);
	}
	struct UBillboardComponent GetSpriteComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct UBillboardComponent(ptr_addr);
	}
	struct UChaosGameplayEventDispatcher GetGameplayEventDispatcherComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UChaosGameplayEventDispatcher(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UChaosEventListenerComponent
{
public:
	UChaosEventListenerComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UChaosSolver
{
public:
	UChaosSolver(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UChaosGameplayEventDispatcher
{
public:
	UChaosGameplayEventDispatcher(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct UPrimitiveComponent, struct FChaosHandlerSet> GetCollisionEventRegistrations() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 456);
		return struct TMap<struct UPrimitiveComponent, struct FChaosHandlerSet>(ptr_addr);
	}
	struct TMap<struct UPrimitiveComponent, struct FBreakEventCallbackWrapper> GetBreakEventRegistrations() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 536);
		return struct TMap<struct UPrimitiveComponent, struct FBreakEventCallbackWrapper>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UChaosSolverSettings
{
public:
	UChaosSolverSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSoftClassPath GetDefaultChaosSolverActorClass() {
		return memory.read<struct FSoftClassPath>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UChaosNotifyHandlerInterface
{
public:
	UChaosNotifyHandlerInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UChaosSolverEngineBlueprintLibrary
{
public:
	UChaosSolverEngineBlueprintLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


