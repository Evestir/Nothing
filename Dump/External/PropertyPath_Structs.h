#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FCachedPropertyPath
{
public:
	FCachedPropertyPath(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPropertyPathSegment> GetSegments() {
		return memory.read<struct TArray<struct FPropertyPathSegment>>(m_addr + 0);
	}
	struct UFunction GetCachedFunction() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UFunction(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FPropertyPathSegment
{
public:
	FPropertyPathSegment(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetArrayIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct UStruct GetStruct() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UStruct(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};