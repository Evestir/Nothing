#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FCustomizedToolMenu
{
public:
	FCustomizedToolMenu(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct TMap<struct FName, struct FCustomizedToolMenuEntry> GetEntries() {
		return memory.read<struct TMap<struct FName, struct FCustomizedToolMenuEntry>>(m_addr + 8);
	}
	struct TMap<struct FName, struct FCustomizedToolMenuSection> GetSections() {
		return memory.read<struct TMap<struct FName, struct FCustomizedToolMenuSection>>(m_addr + 88);
	}
	struct TMap<struct FName, struct FCustomizedToolMenuNameArray> GetEntryOrder() {
		return memory.read<struct TMap<struct FName, struct FCustomizedToolMenuNameArray>>(m_addr + 168);
	}
	struct TArray<struct FName> GetSectionOrder() {
		return memory.read<struct TArray<struct FName>>(m_addr + 248);
	}

private:
	std::uint64_t m_addr = 0;
};class FVirtualKeyboardOptions
{
public:
	FVirtualKeyboardOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnableAutocorrect() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCustomizedToolMenuNameArray
{
public:
	FCustomizedToolMenuNameArray(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FName> GetNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInputChord
{
public:
	FInputChord(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKey GetKey() {
		return memory.read<struct FKey>(m_addr + 0);
	}
	char GetbShift() {
		return memory.read<char>(m_addr + 24);
	}
	char GetbCtrl() {
		return memory.read<char>(m_addr + 24);
	}
	char GetbAlt() {
		return memory.read<char>(m_addr + 24);
	}
	char GetbCmd() {
		return memory.read<char>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnchors
{
public:
	FAnchors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetMinimum() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}
	struct FVector2D GetMaximum() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCustomizedToolMenuSection
{
public:
	FCustomizedToolMenuSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECustomizedToolMenuVisibility GetVisibility() {
		return memory.read<enum class ECustomizedToolMenuVisibility>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCustomizedToolMenuEntry
{
public:
	FCustomizedToolMenuEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECustomizedToolMenuVisibility GetVisibility() {
		return memory.read<enum class ECustomizedToolMenuVisibility>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};