#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FFOscillator
{
public:
	FFOscillator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetAmplitude() {
		return memory.read<float>(m_addr + 0);
	}
	float GetFrequency() {
		return memory.read<float>(m_addr + 4);
	}
	enum class EInitialOscillatorOffset GetInitialOffset() {
		return memory.read<enum class EInitialOscillatorOffset>(m_addr + 8);
	}
	enum class EOscillatorWaveform GetWaveform() {
		return memory.read<enum class EOscillatorWaveform>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FVOscillator
{
public:
	FVOscillator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFOscillator GetX() {
		return memory.read<struct FFOscillator>(m_addr + 0);
	}
	struct FFOscillator GetY() {
		return memory.read<struct FFOscillator>(m_addr + 12);
	}
	struct FFOscillator GetZ() {
		return memory.read<struct FFOscillator>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FPerlinNoiseShaker
{
public:
	FPerlinNoiseShaker(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetAmplitude() {
		return memory.read<float>(m_addr + 0);
	}
	float GetFrequency() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FROscillator
{
public:
	FROscillator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFOscillator GetPitch() {
		return memory.read<struct FFOscillator>(m_addr + 0);
	}
	struct FFOscillator GetYaw() {
		return memory.read<struct FFOscillator>(m_addr + 12);
	}
	struct FFOscillator GetRoll() {
		return memory.read<struct FFOscillator>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FConv_MatineeCameraShake
{
public:
	FConv_MatineeCameraShake(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCameraShakeBase GetCameraShake() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UCameraShakeBase(ptr_addr);
	}
	struct UMatineeCameraShake GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMatineeCameraShake(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FWaveOscillator
{
public:
	FWaveOscillator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetAmplitude() {
		return memory.read<float>(m_addr + 0);
	}
	float GetFrequency() {
		return memory.read<float>(m_addr + 4);
	}
	enum class EInitialWaveOscillatorOffsetType GetInitialOffsetType() {
		return memory.read<enum class EInitialWaveOscillatorOffsetType>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FBlueprintUpdateCameraShake
{
public:
	FBlueprintUpdateCameraShake(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDeltaTime() {
		return memory.read<float>(m_addr + 0);
	}
	float GetAlpha() {
		return memory.read<float>(m_addr + 4);
	}
	struct FMinimalViewInfo GetPOV() {
		return memory.read<struct FMinimalViewInfo>(m_addr + 16);
	}
	struct FMinimalViewInfo GetModifiedPOV() {
		return memory.read<struct FMinimalViewInfo>(m_addr + 1664);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveIsFinished
{
public:
	FReceiveIsFinished(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceivePlayShake
{
public:
	FReceivePlayShake(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetScale() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveStopShake
{
public:
	FReceiveStopShake(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbImmediately() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FStartMatineeCameraShake
{
public:
	FStartMatineeCameraShake(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerCameraManager GetPlayerCameraManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerCameraManager(ptr_addr);
	}
	UMatineeCameraShake GetShakeClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UMatineeCameraShake(ptr_addr);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 16);
	}
	enum class ECameraShakePlaySpace GetPlaySpace() {
		return memory.read<enum class ECameraShakePlaySpace>(m_addr + 20);
	}
	struct FRotator GetUserPlaySpaceRot() {
		return memory.read<struct FRotator>(m_addr + 24);
	}
	struct UMatineeCameraShake GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UMatineeCameraShake(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FStartMatineeCameraShakeFromSource
{
public:
	FStartMatineeCameraShakeFromSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerCameraManager GetPlayerCameraManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerCameraManager(ptr_addr);
	}
	UMatineeCameraShake GetShakeClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UMatineeCameraShake(ptr_addr);
	}
	struct UCameraShakeSourceComponent GetSourceComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UCameraShakeSourceComponent(ptr_addr);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 24);
	}
	enum class ECameraShakePlaySpace GetPlaySpace() {
		return memory.read<enum class ECameraShakePlaySpace>(m_addr + 28);
	}
	struct FRotator GetUserPlaySpaceRot() {
		return memory.read<struct FRotator>(m_addr + 32);
	}
	struct UMatineeCameraShake GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UMatineeCameraShake(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};