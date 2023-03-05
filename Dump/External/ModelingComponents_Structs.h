#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FRemoveLineSet
{
public:
	FRemoveLineSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetLineSetIdentifier() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetbDestroy() {
		return memory.read<bool>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 17);
	}

private:
	std::uint64_t m_addr = 0;
};class FRenderableTriangle
{
public:
	FRenderableTriangle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMaterialInterface(ptr_addr);
	}
	struct FRenderableTriangleVertex GetVertex0() {
		return memory.read<struct FRenderableTriangleVertex>(m_addr + 8);
	}
	struct FRenderableTriangleVertex GetVertex1() {
		return memory.read<struct FRenderableTriangleVertex>(m_addr + 44);
	}
	struct FRenderableTriangleVertex GetVertex2() {
		return memory.read<struct FRenderableTriangleVertex>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FRenderableTriangleVertex
{
public:
	FRenderableTriangleVertex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector2D GetUV() {
		return memory.read<struct FVector2D>(m_addr + 12);
	}
	struct FVector GetNormal() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct FColor GetColor() {
		return memory.read<struct FColor>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveAllLineSets
{
public:
	FRemoveAllLineSets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbDestroy() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddLineSet
{
public:
	FAddLineSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetLineSetIdentifier() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct ULineSetComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct ULineSetComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateInWorld
{
public:
	FCreateInWorld(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWorld GetWorld() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWorld(ptr_addr);
	}
	struct FTransform GetWithTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindLineSet
{
public:
	FFindLineSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetLineSetIdentifier() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct ULineSetComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct ULineSetComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetActor
{
public:
	FGetActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APreviewGeometryActor GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APreviewGeometryActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAllLineSetsMaterial
{
public:
	FSetAllLineSetsMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMaterialInterface(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLineSetMaterial
{
public:
	FSetLineSetMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetLineSetIdentifier() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct UMaterialInterface GetNewMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UMaterialInterface(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLineSetVisibility
{
public:
	FSetLineSetVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetLineSetIdentifier() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetbVisible() {
		return memory.read<bool>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 17);
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