#pragma once 
#include <NexonPlatform_Structs.h>
 
 
 
class UNXPToyCSInterface
{
public:
	UNXPToyCSInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNXPToyPreferences
{
public:
	UNXPToyPreferences(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FString> GetBannerDoNotShowToday() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 40);
	}
	struct TArray<struct FString> GetConditionalBannerDoNotShowAnymore() {
		return memory.read<struct TArray<struct FString>>(m_addr + 120);
	}
	struct TMap<struct FString, struct FString> GetConditionalBannerDoNotShowToday() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 136);
	}
	struct TMap<struct FString, int32_t> GetConditionalBannerTotalDisplayCount() {
		return memory.read<struct TMap<struct FString, int32_t>>(m_addr + 216);
	}
	struct TMap<struct FString, struct FString> GetConditionalBannerLastDisplayDateTime() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 296);
	}
	struct TMap<struct FString, struct FString> GetTodayDoNotShowToday() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 376);
	}
	struct FString GetNXID() {
		return memory.read<struct FString>(m_addr + 456);
	}
	struct FString GetNXPW() {
		return memory.read<struct FString>(m_addr + 472);
	}

private:
	std::uint64_t m_addr = 0;
};


