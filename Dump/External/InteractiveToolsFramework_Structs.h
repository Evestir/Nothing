#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FInputRayHit
{
public:
	FInputRayHit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FBrushStampData
{
public:
	FBrushStampData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FUpdateHoverState
{
public:
	FUpdateHoverState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbHovering() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBehaviorInfo
{
public:
	FBehaviorInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UInputBehavior GetBehavior() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UInputBehavior(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FActiveGizmo
{
public:
	FActiveGizmo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FGizmoVec2ParameterChange
{
public:
	FGizmoVec2ParameterChange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetInitialValue() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}
	struct FVector2D GetCurrentValue() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGizmoFloatParameterChange
{
public:
	FGizmoFloatParameterChange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInitialValue() {
		return memory.read<float>(m_addr + 0);
	}
	float GetCurrentValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateWorldLocalState
{
public:
	FUpdateWorldLocalState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbWorldIn() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTransform
{
public:
	FGetTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetReturnValue() {
		return memory.read<struct FTransform>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTransform
{
public:
	FSetTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetNewTransform() {
		return memory.read<struct FTransform>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDirection
{
public:
	FGetDirection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOrigin
{
public:
	FGetOrigin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTangentVectors
{
public:
	FGetTangentVectors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetTangentXOut() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetTangentYOut() {
		return memory.read<struct FVector>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasTangentVectors
{
public:
	FHasTangentVectors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetParameter
{
public:
	FGetParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetParameter
{
public:
	FSetParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetNewValue() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};