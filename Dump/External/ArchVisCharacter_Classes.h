#pragma once 
#include <ArchVisCharacter_Structs.h>
 
 
 
class AArchVisCharacter
{
public:
	AArchVisCharacter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetLookUpAxisName() {
		return memory.read<struct FString>(m_addr + 1208);
	}
	struct FString GetLookUpAtRateAxisName() {
		return memory.read<struct FString>(m_addr + 1224);
	}
	struct FString GetTurnAxisName() {
		return memory.read<struct FString>(m_addr + 1240);
	}
	struct FString GetTurnAtRateAxisName() {
		return memory.read<struct FString>(m_addr + 1256);
	}
	struct FString GetMoveForwardAxisName() {
		return memory.read<struct FString>(m_addr + 1272);
	}
	struct FString GetMoveRightAxisName() {
		return memory.read<struct FString>(m_addr + 1288);
	}
	float GetMouseSensitivityScale_Pitch() {
		return memory.read<float>(m_addr + 1304);
	}
	float GetMouseSensitivityScale_Yaw() {
		return memory.read<float>(m_addr + 1308);
	}

private:
	std::uint64_t m_addr = 0;
};


class UArchVisCharMovementComponent
{
public:
	UArchVisCharMovementComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRotator GetRotationalAcceleration() {
		return memory.read<struct FRotator>(m_addr + 2800);
	}
	struct FRotator GetRotationalDeceleration() {
		return memory.read<struct FRotator>(m_addr + 2812);
	}
	struct FRotator GetMaxRotationalVelocity() {
		return memory.read<struct FRotator>(m_addr + 2824);
	}
	float GetMinPitch() {
		return memory.read<float>(m_addr + 2836);
	}
	float GetMaxPitch() {
		return memory.read<float>(m_addr + 2840);
	}
	float GetWalkingFriction() {
		return memory.read<float>(m_addr + 2844);
	}
	float GetWalkingSpeed() {
		return memory.read<float>(m_addr + 2848);
	}
	float GetWalkingAcceleration() {
		return memory.read<float>(m_addr + 2852);
	}

private:
	std::uint64_t m_addr = 0;
};


