#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FSetCollision
{
public:
	FSetCollision(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCollisionThickness() {
		return memory.read<float>(m_addr + 0);
	}
	float GetFrictionCoefficient() {
		return memory.read<float>(m_addr + 4);
	}
	bool GetbUseCCD() {
		return memory.read<bool>(m_addr + 8);
	}
	float GetSelfCollisionThickness() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FChaosClothWeightedValue
{
public:
	FChaosClothWeightedValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetLow() {
		return memory.read<float>(m_addr + 0);
	}
	float GetHigh() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FResetAndTeleport
{
public:
	FResetAndTeleport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbReset() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbTeleport() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAerodynamics
{
public:
	FSetAerodynamics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDragCoefficient() {
		return memory.read<float>(m_addr + 0);
	}
	float GetLiftCoefficient() {
		return memory.read<float>(m_addr + 4);
	}
	struct FVector GetWindVelocity() {
		return memory.read<struct FVector>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAnimDrive
{
public:
	FSetAnimDrive(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetAnimDriveStiffness() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}
	struct FVector2D GetAnimDriveDamping() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDamping
{
public:
	FSetDamping(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDampingCoefficient() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAnimDriveLinear
{
public:
	FSetAnimDriveLinear(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetAnimDriveStiffness() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGravity
{
public:
	FSetGravity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetGravityScale() {
		return memory.read<float>(m_addr + 0);
	}
	bool GetbIsGravityOverridden() {
		return memory.read<bool>(m_addr + 4);
	}
	struct FVector GetGravityOverride() {
		return memory.read<struct FVector>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLongRangeAttachment
{
public:
	FSetLongRangeAttachment(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetTetherStiffness() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLongRangeAttachmentLinear
{
public:
	FSetLongRangeAttachmentLinear(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTetherStiffness() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMaterialLinear
{
public:
	FSetMaterialLinear(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetEdgeStiffness() {
		return memory.read<float>(m_addr + 0);
	}
	float GetBendingStiffness() {
		return memory.read<float>(m_addr + 4);
	}
	float GetAreaStiffness() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVelocityScale
{
public:
	FSetVelocityScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLinearVelocityScale() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	float GetAngularVelocityScale() {
		return memory.read<float>(m_addr + 12);
	}
	float GetFictitiousAngularScale() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};