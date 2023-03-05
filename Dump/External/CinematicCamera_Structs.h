#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FGetCineCameraComponent
{
public:
	FGetCineCameraComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCineCameraComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UCineCameraComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FNamedFilmbackPreset
{
public:
	FNamedFilmbackPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FCameraFilmbackSettings GetFilmbackSettings() {
		return memory.read<struct FCameraFilmbackSettings>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FCameraLookatTrackingSettings
{
public:
	FCameraLookatTrackingSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbEnableLookAtTracking() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbDrawDebugLookAtTrackingPosition() {
		return memory.read<char>(m_addr + 0);
	}
	float GetLookAtTrackingInterpSpeed() {
		return memory.read<float>(m_addr + 4);
	}
	struct TSoftObjectPtr<AActor> GetActorToTrack() {
		return memory.read<struct TSoftObjectPtr<AActor>>(m_addr + 24);
	}
	struct FVector GetRelativeOffset() {
		return memory.read<struct FVector>(m_addr + 64);
	}
	char GetbAllowRoll() {
		return memory.read<char>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};class FCameraLensSettings
{
public:
	FCameraLensSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMinFocalLength() {
		return memory.read<float>(m_addr + 0);
	}
	float GetMaxFocalLength() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMinFStop() {
		return memory.read<float>(m_addr + 8);
	}
	float GetMaxFStop() {
		return memory.read<float>(m_addr + 12);
	}
	float GetMinimumFocusDistance() {
		return memory.read<float>(m_addr + 16);
	}
	int32_t GetDiaphragmBladeCount() {
		return memory.read<int32_t>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FCameraFocusSettings
{
public:
	FCameraFocusSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECameraFocusMethod GetFocusMethod() {
		return memory.read<enum class ECameraFocusMethod>(m_addr + 0);
	}
	float GetManualFocusDistance() {
		return memory.read<float>(m_addr + 4);
	}
	struct FCameraTrackingFocusSettings GetTrackingFocusSettings() {
		return memory.read<struct FCameraTrackingFocusSettings>(m_addr + 8);
	}
	char GetbDrawDebugFocusPlane() {
		return memory.read<char>(m_addr + 64);
	}
	struct FColor GetDebugFocusPlaneColor() {
		return memory.read<struct FColor>(m_addr + 68);
	}
	char GetbSmoothFocusChanges() {
		return memory.read<char>(m_addr + 72);
	}
	float GetFocusSmoothingInterpSpeed() {
		return memory.read<float>(m_addr + 76);
	}
	float GetFocusOffset() {
		return memory.read<float>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FCameraTrackingFocusSettings
{
public:
	FCameraTrackingFocusSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<AActor> GetActorToTrack() {
		return memory.read<struct TSoftObjectPtr<AActor>>(m_addr + 0);
	}
	struct FVector GetRelativeOffset() {
		return memory.read<struct FVector>(m_addr + 40);
	}
	char GetbDrawDebugTrackingFocusPoint() {
		return memory.read<char>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FNamedLensPreset
{
public:
	FNamedLensPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FCameraLensSettings GetLensSettings() {
		return memory.read<struct FCameraLensSettings>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFilmbackPresetName
{
public:
	FGetFilmbackPresetName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCameraFilmbackSettings
{
public:
	FCameraFilmbackSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSensorWidth() {
		return memory.read<float>(m_addr + 0);
	}
	float GetSensorHeight() {
		return memory.read<float>(m_addr + 4);
	}
	float GetSensorAspectRatio() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRailSplineComponent
{
public:
	FGetRailSplineComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USplineComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USplineComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDefaultFilmbackPresetName
{
public:
	FGetDefaultFilmbackPresetName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFilmbackPresetsCopy
{
public:
	FGetFilmbackPresetsCopy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FNamedFilmbackPreset> GetReturnValue() {
		return memory.read<struct TArray<struct FNamedFilmbackPreset>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetHorizontalFieldOfView
{
public:
	FGetHorizontalFieldOfView(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLensPresetName
{
public:
	FGetLensPresetName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLensPresetsCopy
{
public:
	FGetLensPresetsCopy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FNamedLensPreset> GetReturnValue() {
		return memory.read<struct TArray<struct FNamedLensPreset>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVerticalFieldOfView
{
public:
	FGetVerticalFieldOfView(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCurrentFocalLength
{
public:
	FSetCurrentFocalLength(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInFocalLength() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFilmbackPresetByName
{
public:
	FSetFilmbackPresetByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInPresetName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLensPresetByName
{
public:
	FSetLensPresetByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInPresetName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};