#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FSliceProceduralMesh
{
public:
	FSliceProceduralMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UProceduralMeshComponent GetInProcMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UProceduralMeshComponent(ptr_addr);
	}
	struct FVector GetPlanePosition() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetPlaneNormal() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	bool GetbCreateOtherHalf() {
		return memory.read<bool>(m_addr + 32);
	}
	struct UProceduralMeshComponent GetOutOtherHalfProcMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UProceduralMeshComponent(ptr_addr);
	}
	enum class EProcMeshSliceCapOption GetCapOption() {
		return memory.read<enum class EProcMeshSliceCapOption>(m_addr + 48);
	}
	struct UMaterialInterface GetCapMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UMaterialInterface(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FProcMeshSection
{
public:
	FProcMeshSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FProcMeshVertex> GetProcVertexBuffer() {
		return memory.read<struct TArray<struct FProcMeshVertex>>(m_addr + 0);
	}
	struct TArray<uint32_t> GetProcIndexBuffer() {
		return memory.read<struct TArray<uint32_t>>(m_addr + 16);
	}
	struct FBox GetSectionLocalBox() {
		return memory.read<struct FBox>(m_addr + 32);
	}
	bool GetbEnableCollision() {
		return memory.read<bool>(m_addr + 60);
	}
	bool GetbSectionVisible() {
		return memory.read<bool>(m_addr + 61);
	}

private:
	std::uint64_t m_addr = 0;
};class FProcMeshVertex
{
public:
	FProcMeshVertex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetNormal() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FProcMeshTangent GetTangent() {
		return memory.read<struct FProcMeshTangent>(m_addr + 24);
	}
	struct FColor GetColor() {
		return memory.read<struct FColor>(m_addr + 40);
	}
	struct FVector2D GetUV0() {
		return memory.read<struct FVector2D>(m_addr + 44);
	}
	struct FVector2D GetUV1() {
		return memory.read<struct FVector2D>(m_addr + 52);
	}
	struct FVector2D GetUV2() {
		return memory.read<struct FVector2D>(m_addr + 60);
	}
	struct FVector2D GetUV3() {
		return memory.read<struct FVector2D>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};class FClearMeshSection
{
public:
	FClearMeshSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSectionIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FProcMeshTangent
{
public:
	FProcMeshTangent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetTangentX() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	bool GetbFlipTangentY() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddCollisionConvexMesh
{
public:
	FAddCollisionConvexMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVector> GetConvexVerts() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FConvertQuadToTriangles
{
public:
	FConvertQuadToTriangles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> GetTriangles() {
		return memory.read<struct TArray<int32_t>>(m_addr + 0);
	}
	int32_t GetVert0() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetVert1() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetVert2() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetVert3() {
		return memory.read<int32_t>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateMeshSection
{
public:
	FCreateMeshSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSectionIndex() {
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
	struct TArray<struct FVector2D> GetUV0() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 56);
	}
	struct TArray<struct FColor> GetVertexColors() {
		return memory.read<struct TArray<struct FColor>>(m_addr + 72);
	}
	struct TArray<struct FProcMeshTangent> GetTangents() {
		return memory.read<struct TArray<struct FProcMeshTangent>>(m_addr + 88);
	}
	bool GetbCreateCollision() {
		return memory.read<bool>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateMeshSection
{
public:
	FUpdateMeshSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSectionIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<struct FVector> GetVertices() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 8);
	}
	struct TArray<struct FVector> GetNormals() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 24);
	}
	struct TArray<struct FVector2D> GetUV0() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 40);
	}
	struct TArray<struct FColor> GetVertexColors() {
		return memory.read<struct TArray<struct FColor>>(m_addr + 56);
	}
	struct TArray<struct FProcMeshTangent> GetTangents() {
		return memory.read<struct TArray<struct FProcMeshTangent>>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateMeshSection_LinearColor
{
public:
	FCreateMeshSection_LinearColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSectionIndex() {
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
	struct TArray<struct FVector2D> GetUV0() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 56);
	}
	struct TArray<struct FVector2D> GetUV1() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 72);
	}
	struct TArray<struct FVector2D> GetUV2() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 88);
	}
	struct TArray<struct FVector2D> GetUV3() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 104);
	}
	struct TArray<struct FLinearColor> GetVertexColors() {
		return memory.read<struct TArray<struct FLinearColor>>(m_addr + 120);
	}
	struct TArray<struct FProcMeshTangent> GetTangents() {
		return memory.read<struct TArray<struct FProcMeshTangent>>(m_addr + 136);
	}
	bool GetbCreateCollision() {
		return memory.read<bool>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumSections
{
public:
	FGetNumSections(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsMeshSectionVisible
{
public:
	FIsMeshSectionVisible(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSectionIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMeshSectionVisible
{
public:
	FSetMeshSectionVisible(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSectionIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetbNewVisibility() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetUpdateMeshSection
{
public:
	FSetUpdateMeshSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSectionIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetbUpdateMeshSection() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateMeshSection_LinearColor
{
public:
	FUpdateMeshSection_LinearColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSectionIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<struct FVector> GetVertices() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 8);
	}
	struct TArray<struct FVector> GetNormals() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 24);
	}
	struct TArray<struct FVector2D> GetUV0() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 40);
	}
	struct TArray<struct FVector2D> GetUV1() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 56);
	}
	struct TArray<struct FVector2D> GetUV2() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 72);
	}
	struct TArray<struct FVector2D> GetUV3() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 88);
	}
	struct TArray<struct FLinearColor> GetVertexColors() {
		return memory.read<struct TArray<struct FLinearColor>>(m_addr + 104);
	}
	struct TArray<struct FProcMeshTangent> GetTangents() {
		return memory.read<struct TArray<struct FProcMeshTangent>>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateGridMeshTriangles
{
public:
	FCreateGridMeshTriangles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumX() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetNumY() {
		return memory.read<int32_t>(m_addr + 4);
	}
	bool GetbWinding() {
		return memory.read<bool>(m_addr + 8);
	}
	struct TArray<int32_t> GetTriangles() {
		return memory.read<struct TArray<int32_t>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FCalculateTangentsForMesh
{
public:
	FCalculateTangentsForMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVector> GetVertices() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 0);
	}
	struct TArray<int32_t> GetTriangles() {
		return memory.read<struct TArray<int32_t>>(m_addr + 16);
	}
	struct TArray<struct FVector2D> GetUVs() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 32);
	}
	struct TArray<struct FVector> GetNormals() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 48);
	}
	struct TArray<struct FProcMeshTangent> GetTangents() {
		return memory.read<struct TArray<struct FProcMeshTangent>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FCopyProceduralMeshFromStaticMeshComponent
{
public:
	FCopyProceduralMeshFromStaticMeshComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UStaticMeshComponent GetStaticMeshComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UStaticMeshComponent(ptr_addr);
	}
	int32_t GetLODIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct UProceduralMeshComponent GetProcMeshComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UProceduralMeshComponent(ptr_addr);
	}
	bool GetbCreateCollision() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateGridMeshSplit
{
public:
	FCreateGridMeshSplit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumX() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetNumY() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct TArray<int32_t> GetTriangles() {
		return memory.read<struct TArray<int32_t>>(m_addr + 8);
	}
	struct TArray<struct FVector> GetVertices() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 24);
	}
	struct TArray<struct FVector2D> GetUVs() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 40);
	}
	struct TArray<struct FVector2D> GetUV1s() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 56);
	}
	float GetGridSpacing() {
		return memory.read<float>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateGridMeshWelded
{
public:
	FCreateGridMeshWelded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumX() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetNumY() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct TArray<int32_t> GetTriangles() {
		return memory.read<struct TArray<int32_t>>(m_addr + 8);
	}
	struct TArray<struct FVector> GetVertices() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 24);
	}
	struct TArray<struct FVector2D> GetUVs() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 40);
	}
	float GetGridSpacing() {
		return memory.read<float>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FGenerateBoxMesh
{
public:
	FGenerateBoxMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetBoxRadius() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct TArray<struct FVector> GetVertices() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 16);
	}
	struct TArray<int32_t> GetTriangles() {
		return memory.read<struct TArray<int32_t>>(m_addr + 32);
	}
	struct TArray<struct FVector> GetNormals() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 48);
	}
	struct TArray<struct FVector2D> GetUVs() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 64);
	}
	struct TArray<struct FProcMeshTangent> GetTangents() {
		return memory.read<struct TArray<struct FProcMeshTangent>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSectionFromProceduralMesh
{
public:
	FGetSectionFromProceduralMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UProceduralMeshComponent GetInProcMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UProceduralMeshComponent(ptr_addr);
	}
	int32_t GetSectionIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct TArray<struct FVector> GetVertices() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 16);
	}
	struct TArray<int32_t> GetTriangles() {
		return memory.read<struct TArray<int32_t>>(m_addr + 32);
	}
	struct TArray<struct FVector> GetNormals() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 48);
	}
	struct TArray<struct FVector2D> GetUVs() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 64);
	}
	struct TArray<struct FProcMeshTangent> GetTangents() {
		return memory.read<struct TArray<struct FProcMeshTangent>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSectionFromStaticMesh
{
public:
	FGetSectionFromStaticMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UStaticMesh GetInMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UStaticMesh(ptr_addr);
	}
	int32_t GetLODIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetSectionIndex() {
		return memory.read<int32_t>(m_addr + 12);
	}
	struct TArray<struct FVector> GetVertices() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 16);
	}
	struct TArray<int32_t> GetTriangles() {
		return memory.read<struct TArray<int32_t>>(m_addr + 32);
	}
	struct TArray<struct FVector> GetNormals() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 48);
	}
	struct TArray<struct FVector2D> GetUVs() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 64);
	}
	struct TArray<struct FProcMeshTangent> GetTangents() {
		return memory.read<struct TArray<struct FProcMeshTangent>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};