#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FCancelDownload
{
public:
	FCancelDownload(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetAssetPacks() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}
	enum class EGooglePADErrorCode GetReturnValue() {
		return memory.read<enum class EGooglePADErrorCode>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetShowCellularDataConfirmationStatus
{
public:
	FGetShowCellularDataConfirmationStatus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGooglePADCellularDataConfirmStatus Getstatus() {
		return memory.read<enum class EGooglePADCellularDataConfirmStatus>(m_addr + 0);
	}
	enum class EGooglePADErrorCode GetReturnValue() {
		return memory.read<enum class EGooglePADErrorCode>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTotalBytesToDownload
{
public:
	FGetTotalBytesToDownload(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetState() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBytesDownloaded
{
public:
	FGetBytesDownloaded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetState() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FReleaseDownloadState
{
public:
	FReleaseDownloadState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetState() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAssetPackLocation
{
public:
	FGetAssetPackLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetLocation() {
		return memory.read<int32_t>(m_addr + 16);
	}
	enum class EGooglePADErrorCode GetReturnValue() {
		return memory.read<enum class EGooglePADErrorCode>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAssetsPath
{
public:
	FGetAssetsPath(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLocation() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetStorageMethod
{
public:
	FGetStorageMethod(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLocation() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class EGooglePADStorageMethod GetReturnValue() {
		return memory.read<enum class EGooglePADStorageMethod>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDownloadStatus
{
public:
	FGetDownloadStatus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetState() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class EGooglePADDownloadStatus GetReturnValue() {
		return memory.read<enum class EGooglePADDownloadStatus>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDownloadState
{
public:
	FGetDownloadState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetState() {
		return memory.read<int32_t>(m_addr + 16);
	}
	enum class EGooglePADErrorCode GetReturnValue() {
		return memory.read<enum class EGooglePADErrorCode>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FReleaseAssetPackLocation
{
public:
	FReleaseAssetPackLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLocation() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRequestDownload
{
public:
	FRequestDownload(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetAssetPacks() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}
	enum class EGooglePADErrorCode GetReturnValue() {
		return memory.read<enum class EGooglePADErrorCode>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRequestInfo
{
public:
	FRequestInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetAssetPacks() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}
	enum class EGooglePADErrorCode GetReturnValue() {
		return memory.read<enum class EGooglePADErrorCode>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRequestRemoval
{
public:
	FRequestRemoval(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class EGooglePADErrorCode GetReturnValue() {
		return memory.read<enum class EGooglePADErrorCode>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FShowCellularDataConfirmation
{
public:
	FShowCellularDataConfirmation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGooglePADErrorCode GetReturnValue() {
		return memory.read<enum class EGooglePADErrorCode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};