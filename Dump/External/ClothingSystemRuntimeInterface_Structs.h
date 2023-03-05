#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FClothCollisionData
{
public:
	FClothCollisionData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FClothCollisionPrim_Sphere> GetSpheres() {
		return memory.read<struct TArray<struct FClothCollisionPrim_Sphere>>(m_addr + 0);
	}
	struct TArray<struct FClothCollisionPrim_SphereConnection> GetSphereConnections() {
		return memory.read<struct TArray<struct FClothCollisionPrim_SphereConnection>>(m_addr + 16);
	}
	struct TArray<struct FClothCollisionPrim_Convex> GetConvexes() {
		return memory.read<struct TArray<struct FClothCollisionPrim_Convex>>(m_addr + 32);
	}
	struct TArray<struct FClothCollisionPrim_Box> GetBoxes() {
		return memory.read<struct TArray<struct FClothCollisionPrim_Box>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FClothCollisionPrim_Sphere
{
public:
	FClothCollisionPrim_Sphere(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetBoneIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 4);
	}
	struct FVector GetLocalPosition() {
		return memory.read<struct FVector>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FClothCollisionPrim_SphereConnection
{
public:
	FClothCollisionPrim_SphereConnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSphereIndices[2]() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClothCollisionPrim_Box
{
public:
	FClothCollisionPrim_Box(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocalPosition() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FQuat GetLocalRotation() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FVector GetHalfExtents() {
		return memory.read<struct FVector>(m_addr + 32);
	}
	int32_t GetBoneIndex() {
		return memory.read<int32_t>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumKinematicParticles
{
public:
	FGetNumKinematicParticles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClothCollisionPrim_Convex
{
public:
	FClothCollisionPrim_Convex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FClothCollisionPrim_ConvexFace> GetFaces() {
		return memory.read<struct TArray<struct FClothCollisionPrim_ConvexFace>>(m_addr + 0);
	}
	struct TArray<struct FVector> GetSurfacePoints() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 16);
	}
	int32_t GetBoneIndex() {
		return memory.read<int32_t>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumCloths
{
public:
	FGetNumCloths(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClothCollisionPrim_ConvexFace
{
public:
	FClothCollisionPrim_ConvexFace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPlane GetPlane() {
		return memory.read<struct FPlane>(m_addr + 0);
	}
	struct TArray<int32_t> GetIndices() {
		return memory.read<struct TArray<int32_t>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FClothVertBoneData
{
public:
	FClothVertBoneData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumInfluences() {
		return memory.read<int32_t>(m_addr + 0);
	}
	uint16_t GetBoneIndices[c]() {
		return memory.read<uint16_t>(m_addr + 4);
	}
	float GetBoneWeights[c]() {
		return memory.read<float>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnableGravityOverride
{
public:
	FEnableGravityOverride(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetInVector() {
		return memory.read<struct FVector>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetClothingInteractor
{
public:
	FGetClothingInteractor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetClothingAssetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct UClothingInteractor GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UClothingInteractor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumDynamicParticles
{
public:
	FGetNumDynamicParticles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumIterations
{
public:
	FGetNumIterations(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumSubsteps
{
public:
	FGetNumSubsteps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSimulationTime
{
public:
	FGetSimulationTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAnimDriveSpringStiffness
{
public:
	FSetAnimDriveSpringStiffness(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInStiffness() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNumIterations
{
public:
	FSetNumIterations(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumIterations() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNumSubsteps
{
public:
	FSetNumSubsteps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumSubsteps() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};