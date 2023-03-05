#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FActorLayer
{
public:
	FActorLayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddActorToLayer
{
public:
	FAddActorToLayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetInActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct FActorLayer GetLayer() {
		return memory.read<struct FActorLayer>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetActors
{
public:
	FGetActors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FActorLayer GetActorLayer() {
		return memory.read<struct FActorLayer>(m_addr + 8);
	}
	struct TArray<struct AActor> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct TArray<struct AActor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveActorFromLayer
{
public:
	FRemoveActorFromLayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetInActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct FActorLayer GetLayer() {
		return memory.read<struct FActorLayer>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};