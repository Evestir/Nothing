#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FStartLocationServices
{
public:
	FStartLocationServices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLocationServicesData_OnLocationChanged__DelegateSignature
{
public:
	FLocationServicesData_OnLocationChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLocationServicesData GetLocationData() {
		return memory.read<struct FLocationServicesData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsLocationAccuracyAvailable
{
public:
	FIsLocationAccuracyAvailable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELocationAccuracy GetAccuracy() {
		return memory.read<enum class ELocationAccuracy>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FLocationServicesData
{
public:
	FLocationServicesData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTimestamp() {
		return memory.read<float>(m_addr + 0);
	}
	float GetLongitude() {
		return memory.read<float>(m_addr + 4);
	}
	float GetLatitude() {
		return memory.read<float>(m_addr + 8);
	}
	float GetHorizontalAccuracy() {
		return memory.read<float>(m_addr + 12);
	}
	float GetVerticalAccuracy() {
		return memory.read<float>(m_addr + 16);
	}
	float GetAltitude() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FAreLocationServicesEnabled
{
public:
	FAreLocationServicesEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLastKnownLocation
{
public:
	FGetLastKnownLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLocationServicesData GetReturnValue() {
		return memory.read<struct FLocationServicesData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLocationServicesImpl
{
public:
	FGetLocationServicesImpl(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULocationServicesImpl GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ULocationServicesImpl(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FInitLocationServices
{
public:
	FInitLocationServices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELocationAccuracy GetAccuracy() {
		return memory.read<enum class ELocationAccuracy>(m_addr + 0);
	}
	float GetUpdateFrequency() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMinDistanceFilter() {
		return memory.read<float>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FStopLocationServices
{
public:
	FStopLocationServices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};