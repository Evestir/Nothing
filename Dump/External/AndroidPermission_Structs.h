#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FCheckPermission
{
public:
	FCheckPermission(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Getpermission() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAndroidPermissionDynamicDelegate__DelegateSignature
{
public:
	FAndroidPermissionDynamicDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetPermissions() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}
	struct TArray<bool> GetGrantResults() {
		return memory.read<struct TArray<bool>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAcquirePermissions
{
public:
	FAcquirePermissions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetPermissions() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}
	struct UAndroidPermissionCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UAndroidPermissionCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};