#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FCreateProxyObjectForConvertToTIFF
{
public:
	FCreateProxyObjectForConvertToTIFF(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture GetSourceImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture(ptr_addr);
	}
	bool GetbWantColor() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetbUseGpu() {
		return memory.read<bool>(m_addr + 9);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 12);
	}
	enum class ETextureRotationDirection GetRotate() {
		return memory.read<enum class ETextureRotationDirection>(m_addr + 16);
	}
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAppleImageConversionDelegate__DelegateSignature
{
public:
	FAppleImageConversionDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAppleImageUtilsImageConversionResult GetConversionResult() {
		return memory.read<struct FAppleImageUtilsImageConversionResult>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateProxyObjectForConvertToHEIF
{
public:
	FCreateProxyObjectForConvertToHEIF(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture GetSourceImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture(ptr_addr);
	}
	int32_t GetQuality() {
		return memory.read<int32_t>(m_addr + 8);
	}
	bool GetbWantColor() {
		return memory.read<bool>(m_addr + 12);
	}
	bool GetbUseGpu() {
		return memory.read<bool>(m_addr + 13);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 16);
	}
	enum class ETextureRotationDirection GetRotate() {
		return memory.read<enum class ETextureRotationDirection>(m_addr + 20);
	}
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAppleImageUtilsImageConversionResult
{
public:
	FAppleImageUtilsImageConversionResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetError() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TArray<char> GetImageData() {
		return memory.read<struct TArray<char>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateProxyObjectForConvertToJPEG
{
public:
	FCreateProxyObjectForConvertToJPEG(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture GetSourceImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture(ptr_addr);
	}
	int32_t GetQuality() {
		return memory.read<int32_t>(m_addr + 8);
	}
	bool GetbWantColor() {
		return memory.read<bool>(m_addr + 12);
	}
	bool GetbUseGpu() {
		return memory.read<bool>(m_addr + 13);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 16);
	}
	enum class ETextureRotationDirection GetRotate() {
		return memory.read<enum class ETextureRotationDirection>(m_addr + 20);
	}
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateProxyObjectForConvertToPNG
{
public:
	FCreateProxyObjectForConvertToPNG(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture GetSourceImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture(ptr_addr);
	}
	bool GetbWantColor() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetbUseGpu() {
		return memory.read<bool>(m_addr + 9);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 12);
	}
	enum class ETextureRotationDirection GetRotate() {
		return memory.read<enum class ETextureRotationDirection>(m_addr + 16);
	}
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};