#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FInAppPurchaseProductInfo
{
public:
	FInAppPurchaseProductInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetIdentifier() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetTransactionIdentifier() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetDisplayName() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FString GetDisplayDescription() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetDisplayPrice() {
		return memory.read<struct FString>(m_addr + 64);
	}
	float GetRawPrice() {
		return memory.read<float>(m_addr + 80);
	}
	struct FString GetCurrencyCode() {
		return memory.read<struct FString>(m_addr + 88);
	}
	struct FString GetCurrencySymbol() {
		return memory.read<struct FString>(m_addr + 104);
	}
	struct FString GetDecimalSeparator() {
		return memory.read<struct FString>(m_addr + 120);
	}
	struct FString GetGroupingSeparator() {
		return memory.read<struct FString>(m_addr + 136);
	}
	struct FString GetReceiptData() {
		return memory.read<struct FString>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};class FNamedInterfaceDef
{
public:
	FNamedInterfaceDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInterfaceName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FString GetInterfaceClassName() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FInAppPurchaseRestoreInfo
{
public:
	FInAppPurchaseRestoreInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetIdentifier() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetReceiptData() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetTransactionIdentifier() {
		return memory.read<struct FString>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMatchReceivedTurn
{
public:
	FOnMatchReceivedTurn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetMatch() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetbDidBecomeActive() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FNamedInterface
{
public:
	FNamedInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInterfaceName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct UObject GetInterfaceObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FInAppPurchaseProductRequest
{
public:
	FInAppPurchaseProductRequest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetProductIdentifier() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetbIsConsumable() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMatchEnded
{
public:
	FOnMatchEnded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetMatch() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};