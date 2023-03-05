#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FLightPropagationVolumeSettings
{
public:
	FLightPropagationVolumeSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbOverride_LPVIntensity() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbOverride_LPVDirectionalOcclusionIntensity() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbOverride_LPVDirectionalOcclusionRadius() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbOverride_LPVDiffuseOcclusionExponent() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbOverride_LPVSpecularOcclusionExponent() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbOverride_LPVDiffuseOcclusionIntensity() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbOverride_LPVSpecularOcclusionIntensity() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbOverride_LPVSize() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbOverride_LPVSecondaryOcclusionIntensity() {
		return memory.read<char>(m_addr + 1);
	}
	char GetbOverride_LPVSecondaryBounceIntensity() {
		return memory.read<char>(m_addr + 1);
	}
	char GetbOverride_LPVGeometryVolumeBias() {
		return memory.read<char>(m_addr + 1);
	}
	char GetbOverride_LPVVplInjectionBias() {
		return memory.read<char>(m_addr + 1);
	}
	char GetbOverride_LPVEmissiveInjectionIntensity() {
		return memory.read<char>(m_addr + 1);
	}
	float GetLPVIntensity() {
		return memory.read<float>(m_addr + 4);
	}
	float GetLPVVplInjectionBias() {
		return memory.read<float>(m_addr + 8);
	}
	float GetLPVSize() {
		return memory.read<float>(m_addr + 12);
	}
	float GetLPVSecondaryOcclusionIntensity() {
		return memory.read<float>(m_addr + 16);
	}
	float GetLPVSecondaryBounceIntensity() {
		return memory.read<float>(m_addr + 20);
	}
	float GetLPVGeometryVolumeBias() {
		return memory.read<float>(m_addr + 24);
	}
	float GetLPVEmissiveInjectionIntensity() {
		return memory.read<float>(m_addr + 28);
	}
	float GetLPVDirectionalOcclusionIntensity() {
		return memory.read<float>(m_addr + 32);
	}
	float GetLPVDirectionalOcclusionRadius() {
		return memory.read<float>(m_addr + 36);
	}
	float GetLPVDiffuseOcclusionExponent() {
		return memory.read<float>(m_addr + 40);
	}
	float GetLPVSpecularOcclusionExponent() {
		return memory.read<float>(m_addr + 44);
	}
	float GetLPVDiffuseOcclusionIntensity() {
		return memory.read<float>(m_addr + 48);
	}
	float GetLPVSpecularOcclusionIntensity() {
		return memory.read<float>(m_addr + 52);
	}
	float GetLPVFadeRange() {
		return memory.read<float>(m_addr + 56);
	}
	float GetLPVDirectionalOcclusionFadeRange() {
		return memory.read<float>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};