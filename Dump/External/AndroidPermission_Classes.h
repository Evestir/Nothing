#pragma once 
#include <AndroidPermission_Structs.h>
 
 
 
class UAndroidPermissionCallbackProxy
{
public:
	UAndroidPermissionCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnPermissionsGrantedDynamicDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAndroidPermissionFunctionLibrary
{
public:
	UAndroidPermissionFunctionLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


