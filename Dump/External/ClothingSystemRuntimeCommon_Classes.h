#pragma once 
#include <ClothingSystemRuntimeCommon_Structs.h>
 
 
 
class UClothingAssetCommon
{
public:
	UClothingAssetCommon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPhysicsAsset GetPhysicsAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UPhysicsAsset(ptr_addr);
	}
	struct TMap<struct FName, struct UClothConfigBase> GetClothConfigs() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct TMap<struct FName, struct UClothConfigBase>(ptr_addr);
	}
	struct TArray<struct FClothLODDataCommon> GetLODData() {
		return memory.read<struct TArray<struct FClothLODDataCommon>>(m_addr + 160);
	}
	struct TArray<int32_t> GetLodMap() {
		return memory.read<struct TArray<int32_t>>(m_addr + 176);
	}
	struct TArray<struct FName> GetUsedBoneNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 192);
	}
	struct TArray<int32_t> GetUsedBoneIndices() {
		return memory.read<struct TArray<int32_t>>(m_addr + 208);
	}
	int32_t GetReferenceBoneIndex() {
		return memory.read<int32_t>(m_addr + 224);
	}
	struct UClothingAssetCustomData GetCustomData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 232);
		return struct UClothingAssetCustomData(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UClothConfigCommon
{
public:
	UClothConfigCommon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UClothSharedConfigCommon
{
public:
	UClothSharedConfigCommon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UClothingAssetCustomData
{
public:
	UClothingAssetCustomData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UClothLODDataCommon_Legacy
{
public:
	UClothLODDataCommon_Legacy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UClothPhysicalMeshDataBase_Legacy GetPhysicalMeshData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UClothPhysicalMeshDataBase_Legacy(ptr_addr);
	}
	struct FClothPhysicalMeshData GetClothPhysicalMeshData() {
		return memory.read<struct FClothPhysicalMeshData>(m_addr + 48);
	}
	struct FClothCollisionData GetCollisionData() {
		return memory.read<struct FClothCollisionData>(m_addr + 296);
	}

private:
	std::uint64_t m_addr = 0;
};


