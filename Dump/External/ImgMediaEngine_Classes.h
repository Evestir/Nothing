#pragma once 
#include <ImgMediaEngine_Structs.h>
 
 
 
class UImgMediaPlaybackComponent
{
public:
	UImgMediaPlaybackComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetWidth() {
		return memory.read<float>(m_addr + 176);
	}
	float GetLODBias() {
		return memory.read<float>(m_addr + 180);
	}

private:
	std::uint64_t m_addr = 0;
};


