#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FGetAttachedActor
{
public:
	FGetAttachedActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAttachEndTo
{
public:
	FSetAttachEndTo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct FName GetComponentProperty() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FName GetSocketName() {
		return memory.read<struct FName>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAttachedComponent
{
public:
	FGetAttachedComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USceneComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USceneComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCableParticleLocations
{
public:
	FGetCableParticleLocations(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVector> GetLocations() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAttachEndToComponent
{
public:
	FSetAttachEndToComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USceneComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USceneComponent(ptr_addr);
	}
	struct FName GetSocketName() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};