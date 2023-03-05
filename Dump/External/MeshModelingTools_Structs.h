#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FGetUVLayerNamesFunc
{
public:
	FGetUVLayerNamesFunc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetReturnValue() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPerlinLayerProperties
{
public:
	FPerlinLayerProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFrequency() {
		return memory.read<float>(m_addr + 0);
	}
	float GetIntensity() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FPhysicsCapsuleData
{
public:
	FPhysicsCapsuleData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRadius() {
		return memory.read<float>(m_addr + 0);
	}
	float GetLength() {
		return memory.read<float>(m_addr + 4);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct FKShapeElem GetElement() {
		return memory.read<struct FKShapeElem>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FPhysicsConvexData
{
public:
	FPhysicsConvexData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumVertices() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetNumFaces() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FKShapeElem GetElement() {
		return memory.read<struct FKShapeElem>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FTransformMeshesTarget
{
public:
	FTransformMeshesTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTransformProxy GetTransformProxy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTransformProxy(ptr_addr);
	}
	struct UTransformGizmo GetTransformGizmo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UTransformGizmo(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FPhysicsSphereData
{
public:
	FPhysicsSphereData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRadius() {
		return memory.read<float>(m_addr + 0);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct FKShapeElem GetElement() {
		return memory.read<struct FKShapeElem>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FPhysicsBoxData
{
public:
	FPhysicsBoxData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetDimensions() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct FKShapeElem GetElement() {
		return memory.read<struct FKShapeElem>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FEditPivotTarget
{
public:
	FEditPivotTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTransformProxy GetTransformProxy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTransformProxy(ptr_addr);
	}
	struct UTransformGizmo GetTransformGizmo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UTransformGizmo(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWeightMapsFunc
{
public:
	FGetWeightMapsFunc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetReturnValue() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};