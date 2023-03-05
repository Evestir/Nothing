#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FSetSceneExtensionIsActiveFunction
{
public:
	FSetSceneExtensionIsActiveFunction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSceneViewExtensionIsActiveFunctor GetIsActiveFunction() {
		return memory.read<struct FSceneViewExtensionIsActiveFunctor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOpenColorIOConfiguration
{
public:
	FSetOpenColorIOConfiguration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FOpenColorIODisplayConfiguration GetInDisplayConfiguration() {
		return memory.read<struct FOpenColorIODisplayConfiguration>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOpenColorIODisplayConfiguration
{
public:
	FOpenColorIODisplayConfiguration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FOpenColorIOColorConversionSettings GetColorConfiguration() {
		return memory.read<struct FOpenColorIOColorConversionSettings>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOpenColorIOColorConversionSettings
{
public:
	FOpenColorIOColorConversionSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UOpenColorIOConfiguration GetConfigurationSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UOpenColorIOConfiguration(ptr_addr);
	}
	struct FOpenColorIOColorSpace GetSourceColorSpace() {
		return memory.read<struct FOpenColorIOColorSpace>(m_addr + 8);
	}
	struct FOpenColorIOColorSpace GetDestinationColorSpace() {
		return memory.read<struct FOpenColorIOColorSpace>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FOpenColorIOColorSpace
{
public:
	FOpenColorIOColorSpace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetColorSpaceName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetColorSpaceIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct FString GetFamilyName() {
		return memory.read<struct FString>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FApplyColorSpaceTransform
{
public:
	FApplyColorSpaceTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FOpenColorIOColorConversionSettings GetConversionSettings() {
		return memory.read<struct FOpenColorIOColorConversionSettings>(m_addr + 8);
	}
	struct UTexture GetInputTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UTexture(ptr_addr);
	}
	struct UTextureRenderTarget2D GetOutputRenderTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UTextureRenderTarget2D(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateOpenColorIODisplayExtension
{
public:
	FCreateOpenColorIODisplayExtension(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FOpenColorIODisplayConfiguration GetInDisplayConfiguration() {
		return memory.read<struct FOpenColorIODisplayConfiguration>(m_addr + 0);
	}
	struct FSceneViewExtensionIsActiveFunctor GetIsActiveFunction() {
		return memory.read<struct FSceneViewExtensionIsActiveFunctor>(m_addr + 96);
	}
	struct UOpenColorIODisplayExtensionWrapper GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct UOpenColorIODisplayExtensionWrapper(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSceneExtensionIsActiveFunctions
{
public:
	FSetSceneExtensionIsActiveFunctions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FSceneViewExtensionIsActiveFunctor> GetIsActiveFunctions() {
		return memory.read<struct TArray<struct FSceneViewExtensionIsActiveFunctor>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};