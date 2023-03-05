#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FActorSequenceObjectReferenceMap
{
public:
	FActorSequenceObjectReferenceMap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FGuid> GetBindingIds() {
		return memory.read<struct TArray<struct FGuid>>(m_addr + 0);
	}
	struct TArray<struct FActorSequenceObjectReferences> GetReferences() {
		return memory.read<struct TArray<struct FActorSequenceObjectReferences>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FActorSequenceObjectReferences
{
public:
	FActorSequenceObjectReferences(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FActorSequenceObjectReference> GetArray() {
		return memory.read<struct TArray<struct FActorSequenceObjectReference>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FActorSequenceObjectReference
{
public:
	FActorSequenceObjectReference(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EActorSequenceObjectReferenceType GetType() {
		return memory.read<enum class EActorSequenceObjectReferenceType>(m_addr + 0);
	}
	struct FGuid GetActorId() {
		return memory.read<struct FGuid>(m_addr + 4);
	}
	struct FString GetPathToComponent() {
		return memory.read<struct FString>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};