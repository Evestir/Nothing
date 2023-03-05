#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FAddCustomMeshTriangles
{
public:
	FAddCustomMeshTriangles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FCustomMeshTriangle> GetTriangles() {
		return memory.read<struct TArray<struct FCustomMeshTriangle>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCustomMeshTriangle
{
public:
	FCustomMeshTriangle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetVertex0() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetVertex1() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FVector GetVertex2() {
		return memory.read<struct FVector>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCustomMeshTriangles
{
public:
	FSetCustomMeshTriangles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FCustomMeshTriangle> GetTriangles() {
		return memory.read<struct TArray<struct FCustomMeshTriangle>>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};