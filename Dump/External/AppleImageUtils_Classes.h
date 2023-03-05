#pragma once 
#include <AppleImageUtils_Structs.h>
 
 
 
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy
{
public:
	UAppleImageUtilsBaseAsyncTaskBlueprintProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}
	struct FMulticastInlineDelegate GetOnFailure() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}
	struct FAppleImageUtilsImageConversionResult GetConversionResult() {
		return memory.read<struct FAppleImageUtilsImageConversionResult>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAppleImageInterface
{
public:
	UAppleImageInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


