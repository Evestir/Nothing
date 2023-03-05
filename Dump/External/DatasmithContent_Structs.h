#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FDatasmithCameraLookatTrackingSettingsTemplate
{
public:
	FDatasmithCameraLookatTrackingSettingsTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbEnableLookAtTracking() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbAllowRoll() {
		return memory.read<char>(m_addr + 0);
	}
	struct TSoftObjectPtr<AActor> GetActorToTrack() {
		return memory.read<struct TSoftObjectPtr<AActor>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FDatasmithCameraLensSettingsTemplate
{
public:
	FDatasmithCameraLensSettingsTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMaxFStop() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDatasmithPostProcessSettingsTemplate
{
public:
	FDatasmithPostProcessSettingsTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbOverride_WhiteTemp() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbOverride_ColorSaturation() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbOverride_VignetteIntensity() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbOverride_FilmWhitePoint() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbOverride_AutoExposureMethod() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbOverride_CameraISO() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbOverride_CameraShutterSpeed() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbOverride_DepthOfFieldFstop() {
		return memory.read<char>(m_addr + 4);
	}
	float GetWhiteTemp() {
		return memory.read<float>(m_addr + 8);
	}
	float GetVignetteIntensity() {
		return memory.read<float>(m_addr + 12);
	}
	struct FLinearColor GetFilmWhitePoint() {
		return memory.read<struct FLinearColor>(m_addr + 16);
	}
	struct FVector4 GetColorSaturation() {
		return memory.read<struct FVector4>(m_addr + 32);
	}
	enum class EAutoExposureMethod GetAutoExposureMethod() {
		return memory.read<enum class EAutoExposureMethod>(m_addr + 48);
	}
	float GetCameraISO() {
		return memory.read<float>(m_addr + 52);
	}
	float GetCameraShutterSpeed() {
		return memory.read<float>(m_addr + 56);
	}
	float GetDepthOfFieldFstop() {
		return memory.read<float>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};class FDatasmithImportBaseOptions
{
public:
	FDatasmithImportBaseOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EDatasmithImportScene GetSceneHandling() {
		return memory.read<enum class EDatasmithImportScene>(m_addr + 0);
	}
	bool GetbIncludeGeometry() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetbIncludeMaterial() {
		return memory.read<bool>(m_addr + 2);
	}
	bool GetbIncludeLight() {
		return memory.read<bool>(m_addr + 3);
	}
	bool GetbIncludeCamera() {
		return memory.read<bool>(m_addr + 4);
	}
	bool GetbIncludeAnimation() {
		return memory.read<bool>(m_addr + 5);
	}
	struct FDatasmithAssetImportOptions GetAssetOptions() {
		return memory.read<struct FDatasmithAssetImportOptions>(m_addr + 8);
	}
	struct FDatasmithStaticMeshImportOptions GetStaticMeshOptions() {
		return memory.read<struct FDatasmithStaticMeshImportOptions>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FDatasmithCameraFocusSettingsTemplate
{
public:
	FDatasmithCameraFocusSettingsTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECameraFocusMethod GetFocusMethod() {
		return memory.read<enum class ECameraFocusMethod>(m_addr + 0);
	}
	float GetManualFocusDistance() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FDatasmithTessellationOptions
{
public:
	FDatasmithTessellationOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetChordTolerance() {
		return memory.read<float>(m_addr + 0);
	}
	float GetMaxEdgeLength() {
		return memory.read<float>(m_addr + 4);
	}
	float GetNormalTolerance() {
		return memory.read<float>(m_addr + 8);
	}
	enum class EDatasmithCADStitchingTechnique GetStitchingTechnique() {
		return memory.read<enum class EDatasmithCADStitchingTechnique>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FDatasmithCameraFilmbackSettingsTemplate
{
public:
	FDatasmithCameraFilmbackSettingsTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSensorWidth() {
		return memory.read<float>(m_addr + 0);
	}
	float GetSensorHeight() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FDatasmithRetessellationOptions
{
public:
	FDatasmithRetessellationOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EDatasmithCADRetessellationRule GetRetessellationRule() {
		return memory.read<enum class EDatasmithCADRetessellationRule>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FDatasmithStaticMeshImportOptions
{
public:
	FDatasmithStaticMeshImportOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EDatasmithImportLightmapMin GetMinLightmapResolution() {
		return memory.read<enum class EDatasmithImportLightmapMin>(m_addr + 0);
	}
	enum class EDatasmithImportLightmapMax GetMaxLightmapResolution() {
		return memory.read<enum class EDatasmithImportLightmapMax>(m_addr + 1);
	}
	bool GetbGenerateLightmapUVs() {
		return memory.read<bool>(m_addr + 2);
	}
	bool GetbRemoveDegenerates() {
		return memory.read<bool>(m_addr + 3);
	}

private:
	std::uint64_t m_addr = 0;
};class FDatasmithStaticParameterSetTemplate
{
public:
	FDatasmithStaticParameterSetTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FName, bool> GetStaticSwitchParameters() {
		return memory.read<struct TMap<struct FName, bool>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDatasmithAssetImportOptions
{
public:
	FDatasmithAssetImportOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetPackagePath() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDatasmithReimportOptions
{
public:
	FDatasmithReimportOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUpdateActors() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbRespawnDeletedActors() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FDatasmithMeshSectionInfoMapTemplate
{
public:
	FDatasmithMeshSectionInfoMapTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<uint32_t, struct FDatasmithMeshSectionInfoTemplate> GetMap() {
		return memory.read<struct TMap<uint32_t, struct FDatasmithMeshSectionInfoTemplate>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayLevelSequence
{
public:
	FPlayLevelSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULevelSequence GetSequenceToPlay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ULevelSequence(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FDatasmithMeshSectionInfoTemplate
{
public:
	FDatasmithMeshSectionInfoTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMaterialIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDatasmithStaticMaterialTemplate
{
public:
	FDatasmithStaticMaterialTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetMaterialSlotName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct UMaterialInterface GetMaterialInterface() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMaterialInterface(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FDatasmithMeshBuildSettingsTemplate
{
public:
	FDatasmithMeshBuildSettingsTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbUseMikkTSpace() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbRecomputeNormals() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbRecomputeTangents() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbRemoveDegenerates() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbBuildAdjacencyBuffer() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbUseHighPrecisionTangentBasis() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbUseFullPrecisionUVs() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbGenerateLightmapUVs() {
		return memory.read<char>(m_addr + 0);
	}
	int32_t GetMinLightmapResolution() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetSrcLightmapIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetDstLightmapIndex() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDatasmithUserData
{
public:
	FGetDatasmithUserData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UDatasmithAssetUserData GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UDatasmithAssetUserData(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDatasmithUserDataKeysAndValuesForValue
{
public:
	FGetDatasmithUserDataKeysAndValuesForValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FString GetStringToMatch() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct TArray<struct FName> GetOutKeys() {
		return memory.read<struct TArray<struct FName>>(m_addr + 24);
	}
	struct TArray<struct FString> GetOutValues() {
		return memory.read<struct TArray<struct FString>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDatasmithUserDataValueForKey
{
public:
	FGetDatasmithUserDataValueForKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FName GetKey() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};