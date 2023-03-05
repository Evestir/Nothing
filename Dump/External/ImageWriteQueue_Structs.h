#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FOnImageWriteComplete__DelegateSignature
{
public:
	FOnImageWriteComplete__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbSuccess() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FImageWriteOptions
{
public:
	FImageWriteOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EDesiredImageFormat GetFormat() {
		return memory.read<enum class EDesiredImageFormat>(m_addr + 0);
	}
	struct FDelegate GetOnComplete() {
		return memory.read<struct FDelegate>(m_addr + 4);
	}
	int32_t GetCompressionQuality() {
		return memory.read<int32_t>(m_addr + 20);
	}
	bool GetbOverwriteFile() {
		return memory.read<bool>(m_addr + 24);
	}
	bool GetbAsync() {
		return memory.read<bool>(m_addr + 25);
	}

private:
	std::uint64_t m_addr = 0;
};class FExportToDisk
{
public:
	FExportToDisk(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture(ptr_addr);
	}
	struct FString GetFilename() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FImageWriteOptions GetOptions() {
		return memory.read<struct FImageWriteOptions>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};