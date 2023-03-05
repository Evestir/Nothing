#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FRemoveDataTableRowFromName
{
public:
	FRemoveDataTableRowFromName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDataTable GetTable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UDataTable(ptr_addr);
	}
	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FClearDataTable
{
public:
	FClearDataTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDataTable GetTable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UDataTable(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDataTable
{
public:
	FGetDataTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FString GetTablePath() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct UDataTable GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UDataTable(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSaveDataTable
{
public:
	FSaveDataTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDataTable GetTable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UDataTable(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSaveDataTableRowFromName
{
public:
	FSaveDataTableRowFromName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDataTable GetTable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UDataTable(ptr_addr);
	}
	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FGenericStruct GetValue() {
		return memory.read<struct FGenericStruct>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};