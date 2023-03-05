#pragma once 
#include <GameplayCameras_Structs.h>
 
 
 
class UWaveOscillatorCameraShakePattern
{
public:
	UWaveOscillatorCameraShakePattern(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetLocationAmplitudeMultiplier() {
		return memory.read<float>(m_addr + 56);
	}
	float GetLocationFrequencyMultiplier() {
		return memory.read<float>(m_addr + 60);
	}
	struct FWaveOscillator GetX() {
		return memory.read<struct FWaveOscillator>(m_addr + 64);
	}
	struct FWaveOscillator GetY() {
		return memory.read<struct FWaveOscillator>(m_addr + 76);
	}
	struct FWaveOscillator GetZ() {
		return memory.read<struct FWaveOscillator>(m_addr + 88);
	}
	float GetRotationAmplitudeMultiplier() {
		return memory.read<float>(m_addr + 100);
	}
	float GetRotationFrequencyMultiplier() {
		return memory.read<float>(m_addr + 104);
	}
	struct FWaveOscillator GetPitch() {
		return memory.read<struct FWaveOscillator>(m_addr + 108);
	}
	struct FWaveOscillator GetYaw() {
		return memory.read<struct FWaveOscillator>(m_addr + 120);
	}
	struct FWaveOscillator GetRoll() {
		return memory.read<struct FWaveOscillator>(m_addr + 132);
	}
	struct FWaveOscillator GetFOV() {
		return memory.read<struct FWaveOscillator>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTestCameraShake
{
public:
	UTestCameraShake(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneMatineeCameraShakeEvaluator
{
public:
	UMovieSceneMatineeCameraShakeEvaluator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USimpleCameraShakePattern
{
public:
	USimpleCameraShakePattern(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDuration() {
		return memory.read<float>(m_addr + 40);
	}
	float GetBlendInTime() {
		return memory.read<float>(m_addr + 44);
	}
	float GetBlendOutTime() {
		return memory.read<float>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMatineeCameraShake
{
public:
	UMatineeCameraShake(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetOscillationDuration() {
		return memory.read<float>(m_addr + 168);
	}
	float GetOscillationBlendInTime() {
		return memory.read<float>(m_addr + 172);
	}
	float GetOscillationBlendOutTime() {
		return memory.read<float>(m_addr + 176);
	}
	struct FROscillator GetRotOscillation() {
		return memory.read<struct FROscillator>(m_addr + 180);
	}
	struct FVOscillator GetLocOscillation() {
		return memory.read<struct FVOscillator>(m_addr + 216);
	}
	struct FFOscillator GetFOVOscillation() {
		return memory.read<struct FFOscillator>(m_addr + 252);
	}
	float GetAnimPlayRate() {
		return memory.read<float>(m_addr + 264);
	}
	float GetAnimScale() {
		return memory.read<float>(m_addr + 268);
	}
	float GetAnimBlendInTime() {
		return memory.read<float>(m_addr + 272);
	}
	float GetAnimBlendOutTime() {
		return memory.read<float>(m_addr + 276);
	}
	float GetRandomAnimSegmentDuration() {
		return memory.read<float>(m_addr + 280);
	}
	struct UCameraAnim GetAnim() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 288);
		return struct UCameraAnim(ptr_addr);
	}
	struct UCameraAnimationSequence GetAnimSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 296);
		return struct UCameraAnimationSequence(ptr_addr);
	}
	char GetbRandomAnimSegment() {
		return memory.read<char>(m_addr + 304);
	}
	float GetOscillatorTimeRemaining() {
		return memory.read<float>(m_addr + 308);
	}
	struct UCameraAnimInst GetAnimInst() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 312);
		return struct UCameraAnimInst(ptr_addr);
	}
	struct USequenceCameraShakePattern GetSequenceShakePattern() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 384);
		return struct USequenceCameraShakePattern(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UConstantCameraShakePattern
{
public:
	UConstantCameraShakePattern(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocationOffset() {
		return memory.read<struct FVector>(m_addr + 56);
	}
	struct FRotator GetRotationOffset() {
		return memory.read<struct FRotator>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCompositeCameraShakePattern
{
public:
	UCompositeCameraShakePattern(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UCameraShakePattern> GetChildPatterns() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct UCameraShakePattern>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMatineeCameraShakePattern
{
public:
	UMatineeCameraShakePattern(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDefaultCameraShakeBase
{
public:
	UDefaultCameraShakeBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMatineeCameraShakeFunctionLibrary
{
public:
	UMatineeCameraShakeFunctionLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPerlinNoiseCameraShakePattern
{
public:
	UPerlinNoiseCameraShakePattern(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetLocationAmplitudeMultiplier() {
		return memory.read<float>(m_addr + 56);
	}
	float GetLocationFrequencyMultiplier() {
		return memory.read<float>(m_addr + 60);
	}
	struct FPerlinNoiseShaker GetX() {
		return memory.read<struct FPerlinNoiseShaker>(m_addr + 64);
	}
	struct FPerlinNoiseShaker GetY() {
		return memory.read<struct FPerlinNoiseShaker>(m_addr + 72);
	}
	struct FPerlinNoiseShaker GetZ() {
		return memory.read<struct FPerlinNoiseShaker>(m_addr + 80);
	}
	float GetRotationAmplitudeMultiplier() {
		return memory.read<float>(m_addr + 88);
	}
	float GetRotationFrequencyMultiplier() {
		return memory.read<float>(m_addr + 92);
	}
	struct FPerlinNoiseShaker GetPitch() {
		return memory.read<struct FPerlinNoiseShaker>(m_addr + 96);
	}
	struct FPerlinNoiseShaker GetYaw() {
		return memory.read<struct FPerlinNoiseShaker>(m_addr + 104);
	}
	struct FPerlinNoiseShaker GetRoll() {
		return memory.read<struct FPerlinNoiseShaker>(m_addr + 112);
	}
	struct FPerlinNoiseShaker GetFOV() {
		return memory.read<struct FPerlinNoiseShaker>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


