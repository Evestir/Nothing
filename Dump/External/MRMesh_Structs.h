#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FConnectMRMesh
{
public:
	FConnectMRMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMRMeshComponent GetMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMRMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsReconstructionPaused
{
public:
	FIsReconstructionPaused(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMockDataMeshTrackerUpdated__DelegateSignature
{
public:
	FOnMockDataMeshTrackerUpdated__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<struct FVector> GetVertices() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 8);
	}
	struct TArray<int32_t> GetTriangles() {
		return memory.read<struct TArray<int32_t>>(m_addr + 24);
	}
	struct TArray<struct FVector> GetNormals() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 40);
	}
	struct TArray<float> GetConfidence() {
		return memory.read<struct TArray<float>>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FDisconnectMRMesh
{
public:
	FDisconnectMRMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMRMeshComponent GetInMRMeshPtr() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMRMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMRMeshConfiguration
{
public:
	FMRMeshConfiguration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FIsReconstructionStarted
{
public:
	FIsReconstructionStarted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEnableMeshOcclusion
{
public:
	FGetEnableMeshOcclusion(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetUseWireframe
{
public:
	FGetUseWireframe(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWireframeColor
{
public:
	FGetWireframeColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetReturnValue() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsConnected
{
public:
	FIsConnected(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWireframeMaterial
{
public:
	FSetWireframeMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetInMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMaterialInterface(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEnableMeshOcclusion
{
public:
	FSetEnableMeshOcclusion(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetUseWireframe
{
public:
	FSetUseWireframe(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUseWireframe() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWireframeColor
{
public:
	FSetWireframeColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetInColor() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};