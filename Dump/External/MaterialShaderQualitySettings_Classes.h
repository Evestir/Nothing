#pragma once 
#include <MaterialShaderQualitySettings_Structs.h>
 
 
 
class UMaterialShaderQualitySettings
{
public:
	UMaterialShaderQualitySettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FName, struct UShaderPlatformQualitySettings> GetForwardSettingMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TMap<struct FName, struct UShaderPlatformQualitySettings>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UShaderPlatformQualitySettings
{
public:
	UShaderPlatformQualitySettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMaterialQualityOverrides GetQualityOverrides[4]() {
		return memory.read<struct FMaterialQualityOverrides>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


