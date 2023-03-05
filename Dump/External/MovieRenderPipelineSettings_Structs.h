#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FOnOutputFrameStarted
{
public:
	FOnOutputFrameStarted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMoviePipeline GetForPipeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMoviePipeline(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};