#pragma once 
#include <Overlay_Structs.h>
 
 
 
class UOverlays
{
public:
	UOverlays(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBasicOverlays
{
public:
	UBasicOverlays(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FOverlayItem> GetOverlays() {
		return memory.read<struct TArray<struct FOverlayItem>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULocalizedOverlays
{
public:
	ULocalizedOverlays(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBasicOverlays GetDefaultOverlays() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UBasicOverlays(ptr_addr);
	}
	struct TMap<struct FString, struct UBasicOverlays> GetLocaleToOverlaysMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct TMap<struct FString, struct UBasicOverlays>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


