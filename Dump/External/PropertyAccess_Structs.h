#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FPropertyAccessLibrary
{
public:
	FPropertyAccessLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPropertyAccessSegment> GetPathSegments() {
		return memory.read<struct TArray<struct FPropertyAccessSegment>>(m_addr + 0);
	}
	struct TArray<struct FPropertyAccessPath> GetSrcPaths() {
		return memory.read<struct TArray<struct FPropertyAccessPath>>(m_addr + 16);
	}
	struct TArray<struct FPropertyAccessPath> GetDestPaths() {
		return memory.read<struct TArray<struct FPropertyAccessPath>>(m_addr + 32);
	}
	struct FPropertyAccessCopyBatch GetCopyBatches[4]() {
		return memory.read<struct FPropertyAccessCopyBatch>(m_addr + 48);
	}
	struct TArray<struct FPropertyAccessIndirectionChain> GetSrcAccesses() {
		return memory.read<struct TArray<struct FPropertyAccessIndirectionChain>>(m_addr + 112);
	}
	struct TArray<struct FPropertyAccessIndirectionChain> GetDestAccesses() {
		return memory.read<struct TArray<struct FPropertyAccessIndirectionChain>>(m_addr + 128);
	}
	struct TArray<struct FPropertyAccessIndirection> GetIndirections() {
		return memory.read<struct TArray<struct FPropertyAccessIndirection>>(m_addr + 144);
	}
	struct TArray<int32_t> GetEventAccessIndices() {
		return memory.read<struct TArray<int32_t>>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};class FPropertyAccessIndirection
{
public:
	FPropertyAccessIndirection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TFieldPath<FNone> GetArrayProperty() {
		return memory.read<struct TFieldPath<FNone>>(m_addr + 0);
	}
	struct UFunction GetFunction() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UFunction(ptr_addr);
	}
	int32_t GetReturnBufferSize() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetReturnBufferAlignment() {
		return memory.read<int32_t>(m_addr + 44);
	}
	int32_t GetArrayIndex() {
		return memory.read<int32_t>(m_addr + 48);
	}
	uint32_t GetOffset() {
		return memory.read<uint32_t>(m_addr + 52);
	}
	enum class EPropertyAccessObjectType GetObjectType() {
		return memory.read<enum class EPropertyAccessObjectType>(m_addr + 56);
	}
	enum class EPropertyAccessIndirectionType GetType() {
		return memory.read<enum class EPropertyAccessIndirectionType>(m_addr + 57);
	}

private:
	std::uint64_t m_addr = 0;
};class FPropertyAccessCopy
{
public:
	FPropertyAccessCopy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetAccessIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetDestAccessStartIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetDestAccessEndIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	enum class EPropertyAccessCopyType GetType() {
		return memory.read<enum class EPropertyAccessCopyType>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FPropertyAccessIndirectionChain
{
public:
	FPropertyAccessIndirectionChain(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TFieldPath<FNone> GetProperty() {
		return memory.read<struct TFieldPath<FNone>>(m_addr + 0);
	}
	int32_t GetIndirectionStartIndex() {
		return memory.read<int32_t>(m_addr + 32);
	}
	int32_t GetIndirectionEndIndex() {
		return memory.read<int32_t>(m_addr + 36);
	}
	int32_t GetEventID() {
		return memory.read<int32_t>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FPropertyAccessPath
{
public:
	FPropertyAccessPath(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPathSegmentStartIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetPathSegmentCount() {
		return memory.read<int32_t>(m_addr + 4);
	}
	char GetbHasEvents() {
		return memory.read<char>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FPropertyAccessCopyBatch
{
public:
	FPropertyAccessCopyBatch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPropertyAccessCopy> GetCopies() {
		return memory.read<struct TArray<struct FPropertyAccessCopy>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPropertyAccessSegment
{
public:
	FPropertyAccessSegment(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct UStruct GetStruct() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UStruct(ptr_addr);
	}
	struct TFieldPath<FNone> GetProperty() {
		return memory.read<struct TFieldPath<FNone>>(m_addr + 16);
	}
	struct UFunction GetFunction() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UFunction(ptr_addr);
	}
	int32_t GetArrayIndex() {
		return memory.read<int32_t>(m_addr + 56);
	}
	uint16_t GetFlags() {
		return memory.read<uint16_t>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};