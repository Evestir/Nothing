#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FAutoCompleteCommand
{
public:
	FAutoCompleteCommand(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCommand() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString Getdesc() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGameMapsSettings
{
public:
	FGetGameMapsSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGameMapsSettings GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UGameMapsSettings(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGameModeName
{
public:
	FGameModeName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FSoftClassPath GetGameMode() {
		return memory.read<struct FSoftClassPath>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSkipAssigningGamepadToPlayer1
{
public:
	FGetSkipAssigningGamepadToPlayer1(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSkipAssigningGamepadToPlayer1
{
public:
	FSetSkipAssigningGamepadToPlayer1(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbSkipFirstPlayer() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};