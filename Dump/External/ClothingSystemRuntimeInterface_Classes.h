#pragma once 
#include <ClothingSystemRuntimeInterface_Structs.h>
 
 
 
class UClothingInteractor
{
public:
	UClothingInteractor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UClothingSimulationFactory
{
public:
	UClothingSimulationFactory(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UClothConfigBase
{
public:
	UClothConfigBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UClothingSimulationInteractor
{
public:
	UClothingSimulationInteractor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FName, struct UClothingInteractor> GetClothingInteractors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TMap<struct FName, struct UClothingInteractor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UClothSharedSimConfigBase
{
public:
	UClothSharedSimConfigBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UClothingAssetBase
{
public:
	UClothingAssetBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetImportedFilePath() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FGuid GetAssetGuid() {
		return memory.read<struct FGuid>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UClothPhysicalMeshDataBase_Legacy
{
public:
	UClothPhysicalMeshDataBase_Legacy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVector> GetVertices() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 40);
	}
	struct TArray<struct FVector> GetNormals() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 56);
	}
	struct TArray<uint32_t> GetIndices() {
		return memory.read<struct TArray<uint32_t>>(m_addr + 72);
	}
	struct TArray<float> GetInverseMasses() {
		return memory.read<struct TArray<float>>(m_addr + 88);
	}
	struct TArray<struct FClothVertBoneData> GetBoneData() {
		return memory.read<struct TArray<struct FClothVertBoneData>>(m_addr + 104);
	}
	int32_t GetNumFixedVerts() {
		return memory.read<int32_t>(m_addr + 120);
	}
	int32_t GetMaxBoneWeights() {
		return memory.read<int32_t>(m_addr + 124);
	}
	struct TArray<uint32_t> GetSelfCollisionIndices() {
		return memory.read<struct TArray<uint32_t>>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


