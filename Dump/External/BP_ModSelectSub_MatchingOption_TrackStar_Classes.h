#pragma once 
#include <BP_ModSelectSub_MatchingOption_TrackStar_Structs.h>
 
 
 
class UBP_ModSelectSub_MatchingOption_TrackStar_C
{
public:
	UBP_ModSelectSub_MatchingOption_TrackStar_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UKdTextBlock GetTextDifficult() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UImage GetV_Img_Delimiter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct FText GetStar_DifficultNum() {
		return memory.read<struct FText>(m_addr + 632);
	}

private:
	std::uint64_t m_addr = 0;
};


