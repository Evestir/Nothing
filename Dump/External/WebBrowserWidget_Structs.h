#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteJavascript
{
public:
	FExecuteJavascript(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetScriptText() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUrlChanged__DelegateSignature
{
public:
	FOnUrlChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetUrl
{
public:
	FGetUrl(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTitleText
{
public:
	FGetTitleText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnBeforePopup__DelegateSignature
{
public:
	FOnBeforePopup__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetURL() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetFrame() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoadString
{
public:
	FLoadString(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Getcontents() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetDummyURL() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoadURL
{
public:
	FLoadURL(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetNewURL() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};