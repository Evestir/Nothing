#pragma once 
#include <BP_LiveryCameraActor_Structs.h>
 
 
 
class ABP_LiveryCameraActor_C
{
public:
	ABP_LiveryCameraActor_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


