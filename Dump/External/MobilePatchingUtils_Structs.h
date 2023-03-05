#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FGetDownloadSpeed
{
public:
	FGetDownloadSpeed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnContentInstallFailed__DelegateSignature
{
public:
	FOnContentInstallFailed__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetErrorText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	int32_t GetErrorCode() {
		return memory.read<int32_t>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnRequestContentSucceeded__DelegateSignature
{
public:
	FOnRequestContentSucceeded__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMobilePendingContent GetMobilePendingContent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMobilePendingContent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnRequestContentFailed__DelegateSignature
{
public:
	FOnRequestContentFailed__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetErrorText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	int32_t GetErrorCode() {
		return memory.read<int32_t>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDownloadSize
{
public:
	FGetDownloadSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDiskFreeSpace
{
public:
	FGetDiskFreeSpace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMount
{
public:
	FMount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPakOrder() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetMountPoint() {
		return memory.read<struct FString>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetInstalledContentSize
{
public:
	FGetInstalledContentSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDownloadStatusText
{
public:
	FGetDownloadStatusText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetInstallProgress
{
public:
	FGetInstallProgress(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRequestContent
{
public:
	FRequestContent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetRemoteManifestURL() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetCloudURL() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetInstallDirectory() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FDelegate GetOnSucceeded() {
		return memory.read<struct FDelegate>(m_addr + 48);
	}
	struct FDelegate GetOnFailed() {
		return memory.read<struct FDelegate>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTotalDownloadedSize
{
public:
	FGetTotalDownloadedSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRequiredDiskSpace
{
public:
	FGetRequiredDiskSpace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FStartInstall
{
public:
	FStartInstall(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDelegate GetOnSucceeded() {
		return memory.read<struct FDelegate>(m_addr + 0);
	}
	struct FDelegate GetOnFailed() {
		return memory.read<struct FDelegate>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetActiveDeviceProfileName
{
public:
	FGetActiveDeviceProfileName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetInstalledContent
{
public:
	FGetInstalledContent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInstallDirectory() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct UMobileInstalledContent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UMobileInstalledContent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSupportedPlatformNames
{
public:
	FGetSupportedPlatformNames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetReturnValue() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasActiveWiFiConnection
{
public:
	FHasActiveWiFiConnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};