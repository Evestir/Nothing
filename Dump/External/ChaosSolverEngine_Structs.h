#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FOnChaosPhysicsCollision__DelegateSignature
{
public:
	FOnChaosPhysicsCollision__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FChaosPhysicsCollisionInfo GetCollisionInfo() {
		return memory.read<struct FChaosPhysicsCollisionInfo>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChaosPhysicsCollisionInfo
{
public:
	FChaosPhysicsCollisionInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct UPrimitiveComponent GetOtherComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	struct FVector GetNormal() {
		return memory.read<struct FVector>(m_addr + 28);
	}
	struct FVector GetAccumulatedImpulse() {
		return memory.read<struct FVector>(m_addr + 40);
	}
	struct FVector GetVelocity() {
		return memory.read<struct FVector>(m_addr + 52);
	}
	struct FVector GetOtherVelocity() {
		return memory.read<struct FVector>(m_addr + 64);
	}
	struct FVector GetAngularVelocity() {
		return memory.read<struct FVector>(m_addr + 76);
	}
	struct FVector GetOtherAngularVelocity() {
		return memory.read<struct FVector>(m_addr + 88);
	}
	float GetMass() {
		return memory.read<float>(m_addr + 100);
	}
	float GetOtherMass() {
		return memory.read<float>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSolverActive
{
public:
	FSetSolverActive(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbActive() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FConvertPhysicsCollisionToHitResult
{
public:
	FConvertPhysicsCollisionToHitResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FChaosPhysicsCollisionInfo GetPhysicsCollision() {
		return memory.read<struct FChaosPhysicsCollisionInfo>(m_addr + 0);
	}
	struct FHitResult GetReturnValue() {
		return memory.read<struct FHitResult>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FChaosBreakEvent
{
public:
	FChaosBreakEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetVelocity() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct FVector GetAngularVelocity() {
		return memory.read<struct FVector>(m_addr + 32);
	}
	float GetMass() {
		return memory.read<float>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FChaosHandlerSet
{
public:
	FChaosHandlerSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSet<struct UObject> GetChaosHandlers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TSet<struct UObject>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FBreakEventCallbackWrapper
{
public:
	FBreakEventCallbackWrapper(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FChaosDebugSubstepControl
{
public:
	FChaosDebugSubstepControl(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbPause() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbSubstep() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetbStep() {
		return memory.read<bool>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};