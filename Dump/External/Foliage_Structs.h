#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FInstancePointDamageSignature__DelegateSignature
{
public:
	FInstancePointDamageSignature__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInstanceIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetDamage() {
		return memory.read<float>(m_addr + 4);
	}
	struct AController GetInstigatedBy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AController(ptr_addr);
	}
	struct FVector GetHitLocation() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	struct FVector GetShotFromDirection() {
		return memory.read<struct FVector>(m_addr + 28);
	}
	struct UDamageType GetDamageType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UDamageType(ptr_addr);
	}
	struct AActor GetDamageCauser() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSimulate
{
public:
	FSimulate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumSteps() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FFoliageOverlappingBoxCount
{
public:
	FFoliageOverlappingBoxCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UStaticMesh GetStaticMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UStaticMesh(ptr_addr);
	}
	struct FBox GetBox() {
		return memory.read<struct FBox>(m_addr + 16);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FFoliageTypeObject
{
public:
	FFoliageTypeObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetFoliageTypeObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UFoliageType GetTypeInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UFoliageType(ptr_addr);
	}
	bool GetbIsAsset() {
		return memory.read<bool>(m_addr + 16);
	}
	UFoliageType_InstancedStaticMesh GetType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return UFoliageType_InstancedStaticMesh(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FInstanceRadialDamageSignature__DelegateSignature
{
public:
	FInstanceRadialDamageSignature__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> GetInstances() {
		return memory.read<struct TArray<int32_t>>(m_addr + 0);
	}
	struct TArray<float> GetDamages() {
		return memory.read<struct TArray<float>>(m_addr + 16);
	}
	struct AController GetInstigatedBy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct AController(ptr_addr);
	}
	struct FVector GetOrigin() {
		return memory.read<struct FVector>(m_addr + 40);
	}
	float GetMaxRadius() {
		return memory.read<float>(m_addr + 52);
	}
	struct UDamageType GetDamageType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UDamageType(ptr_addr);
	}
	struct AActor GetDamageCauser() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FFoliageVertexColorChannelMask
{
public:
	FFoliageVertexColorChannelMask(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetUseMask() {
		return memory.read<char>(m_addr + 0);
	}
	float GetMaskThreshold() {
		return memory.read<float>(m_addr + 4);
	}
	char GetInvertMask() {
		return memory.read<char>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FProceduralFoliageInstance
{
public:
	FProceduralFoliageInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetRotation() {
		return memory.read<struct FQuat>(m_addr + 0);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	float GetAge() {
		return memory.read<float>(m_addr + 28);
	}
	struct FVector GetNormal() {
		return memory.read<struct FVector>(m_addr + 32);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 44);
	}
	struct UFoliageType GetType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UFoliageType(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCapsuleTouched
{
public:
	FCapsuleTouched(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetOverlappedComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct AActor GetOther() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct UPrimitiveComponent GetOtherComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UPrimitiveComponent(ptr_addr);
	}
	int32_t GetOtherBodyIndex() {
		return memory.read<int32_t>(m_addr + 24);
	}
	bool GetbFromSweep() {
		return memory.read<bool>(m_addr + 28);
	}
	struct FHitResult GetOverlapInfo() {
		return memory.read<struct FHitResult>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FFoliageOverlappingSphereCount
{
public:
	FFoliageOverlappingSphereCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UStaticMesh GetStaticMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UStaticMesh(ptr_addr);
	}
	struct FVector GetCenterPosition() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 28);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};