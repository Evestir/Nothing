#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FCollectionExists
{
public:
	FCollectionExists(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAssetsInCollection
{
public:
	FGetAssetsInCollection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct TArray<struct FAssetData> GetReturnValue() {
		return memory.read<struct TArray<struct FAssetData>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCollectionsContainingAssetData
{
public:
	FGetCollectionsContainingAssetData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAssetData GetAssetData() {
		return memory.read<struct FAssetData>(m_addr + 0);
	}
	struct TArray<struct FName> GetReturnValue() {
		return memory.read<struct TArray<struct FName>>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCollectionsContainingAsset
{
public:
	FGetCollectionsContainingAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetAssetPathName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct TArray<struct FName> GetReturnValue() {
		return memory.read<struct TArray<struct FName>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCollections
{
public:
	FGetCollections(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FName> GetReturnValue() {
		return memory.read<struct TArray<struct FName>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCollectionsContainingAssetPtr
{
public:
	FGetCollectionsContainingAssetPtr(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetAssetPtr() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct TArray<struct FName> GetReturnValue() {
		return memory.read<struct TArray<struct FName>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};