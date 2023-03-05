#pragma once 
#include <OpenColorIO_Structs.h>
 
 
 
class UOpenColorIOColorTransform
{
public:
	UOpenColorIOColorTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UOpenColorIOConfiguration GetConfigurationOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UOpenColorIOConfiguration(ptr_addr);
	}
	struct FString GetSourceColorSpace() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetDestinationColorSpace() {
		return memory.read<struct FString>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UOpenColorIOBlueprintLibrary
{
public:
	UOpenColorIOBlueprintLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UOpenColorIOConfiguration
{
public:
	UOpenColorIOConfiguration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFilePath GetConfigurationFile() {
		return memory.read<struct FFilePath>(m_addr + 40);
	}
	struct TArray<struct FOpenColorIOColorSpace> GetDesiredColorSpaces() {
		return memory.read<struct TArray<struct FOpenColorIOColorSpace>>(m_addr + 56);
	}
	struct TArray<struct UOpenColorIOColorTransform> GetColorTransforms() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct TArray<struct UOpenColorIOColorTransform>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UOpenColorIODisplayExtensionWrapper
{
public:
	UOpenColorIODisplayExtensionWrapper(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


