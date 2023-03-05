#pragma once 
#include <CinematicCamera_Structs.h>
 
 
 
class ACineCameraActor
{
public:
	ACineCameraActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCameraLookatTrackingSettings GetLookatTrackingSettings() {
		return memory.read<struct FCameraLookatTrackingSettings>(m_addr + 2080);
	}

private:
	std::uint64_t m_addr = 0;
};


class ACameraRig_Crane
{
public:
	ACameraRig_Crane(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCranePitch() {
		return memory.read<float>(m_addr + 544);
	}
	float GetCraneYaw() {
		return memory.read<float>(m_addr + 548);
	}
	float GetCraneArmLength() {
		return memory.read<float>(m_addr + 552);
	}
	bool GetbLockMountPitch() {
		return memory.read<bool>(m_addr + 556);
	}
	bool GetbLockMountYaw() {
		return memory.read<bool>(m_addr + 557);
	}
	struct USceneComponent GetTransformComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct USceneComponent(ptr_addr);
	}
	struct USceneComponent GetCraneYawControl() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct USceneComponent(ptr_addr);
	}
	struct USceneComponent GetCranePitchControl() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct USceneComponent(ptr_addr);
	}
	struct USceneComponent GetCraneCameraMount() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct USceneComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ACameraRig_Rail
{
public:
	ACameraRig_Rail(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCurrentPositionOnRail() {
		return memory.read<float>(m_addr + 544);
	}
	bool GetbLockOrientationToRail() {
		return memory.read<bool>(m_addr + 548);
	}
	struct USceneComponent GetTransformComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct USceneComponent(ptr_addr);
	}
	struct USplineComponent GetRailSplineComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct USplineComponent(ptr_addr);
	}
	struct USceneComponent GetRailCameraMount() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct USceneComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCineCameraComponent
{
public:
	UCineCameraComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCameraFilmbackSettings GetFilmbackSettings() {
		return memory.read<struct FCameraFilmbackSettings>(m_addr + 2144);
	}
	struct FCameraFilmbackSettings GetFilmback() {
		return memory.read<struct FCameraFilmbackSettings>(m_addr + 2156);
	}
	struct FCameraLensSettings GetLensSettings() {
		return memory.read<struct FCameraLensSettings>(m_addr + 2168);
	}
	struct FCameraFocusSettings GetFocusSettings() {
		return memory.read<struct FCameraFocusSettings>(m_addr + 2192);
	}
	float GetCurrentFocalLength() {
		return memory.read<float>(m_addr + 2280);
	}
	float GetCurrentAperture() {
		return memory.read<float>(m_addr + 2284);
	}
	float GetCurrentFocusDistance() {
		return memory.read<float>(m_addr + 2288);
	}
	struct TArray<struct FNamedFilmbackPreset> GetFilmbackPresets() {
		return memory.read<struct TArray<struct FNamedFilmbackPreset>>(m_addr + 2304);
	}
	struct TArray<struct FNamedLensPreset> GetLensPresets() {
		return memory.read<struct TArray<struct FNamedLensPreset>>(m_addr + 2320);
	}
	struct FString GetDefaultFilmbackPresetName() {
		return memory.read<struct FString>(m_addr + 2336);
	}
	struct FString GetDefaultFilmbackPreset() {
		return memory.read<struct FString>(m_addr + 2352);
	}
	struct FString GetDefaultLensPresetName() {
		return memory.read<struct FString>(m_addr + 2368);
	}
	float GetDefaultLensFocalLength() {
		return memory.read<float>(m_addr + 2384);
	}
	float GetDefaultLensFStop() {
		return memory.read<float>(m_addr + 2388);
	}

private:
	std::uint64_t m_addr = 0;
};


