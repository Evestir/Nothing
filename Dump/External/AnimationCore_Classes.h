#pragma once 
#include <AnimationCore_Structs.h>
 
 
 
class UAnimationDataSourceRegistry
{
public:
	UAnimationDataSourceRegistry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FName, struct TWeakObjectPtr<UObject>> GetDataSources() {
		return memory.read<struct TMap<struct FName, struct TWeakObjectPtr<UObject>>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


