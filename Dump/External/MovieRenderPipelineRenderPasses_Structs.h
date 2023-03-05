#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FMoviePipelinePostProcessPass
{
public:
	FMoviePipelinePostProcessPass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	struct TSoftObjectPtr<UMaterialInterface> GetMaterial() {
		return memory.read<struct TSoftObjectPtr<UMaterialInterface>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};