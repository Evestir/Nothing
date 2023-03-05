#pragma once 
#include <DatasmithContent_Structs.h>
 
 
 
class UDatasmithMaterialInstanceTemplate
{
public:
	UDatasmithMaterialInstanceTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<UMaterialInterface> GetParentMaterial() {
		return memory.read<struct TSoftObjectPtr<UMaterialInterface>>(m_addr + 48);
	}
	struct TMap<struct FName, float> GetScalarParameterValues() {
		return memory.read<struct TMap<struct FName, float>>(m_addr + 88);
	}
	struct TMap<struct FName, struct FLinearColor> GetVectorParameterValues() {
		return memory.read<struct TMap<struct FName, struct FLinearColor>>(m_addr + 168);
	}
	struct TMap<struct FName, struct TSoftObjectPtr<UTexture>> GetTextureParameterValues() {
		return memory.read<struct TMap<struct FName, struct TSoftObjectPtr<UTexture>>>(m_addr + 248);
	}
	struct FDatasmithStaticParameterSetTemplate GetStaticParameters() {
		return memory.read<struct FDatasmithStaticParameterSetTemplate>(m_addr + 328);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDatasmithOptionsBase
{
public:
	UDatasmithOptionsBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDatasmithAssetImportData
{
public:
	UDatasmithAssetImportData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDatasmithAdditionalData
{
public:
	UDatasmithAdditionalData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDatasmithObjectTemplate
{
public:
	UDatasmithObjectTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDatasmithLightComponentTemplate
{
public:
	UDatasmithLightComponentTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbVisible() {
		return memory.read<char>(m_addr + 48);
	}
	char GetCastShadows() {
		return memory.read<char>(m_addr + 52);
	}
	char GetbUseTemperature() {
		return memory.read<char>(m_addr + 52);
	}
	char GetbUseIESBrightness() {
		return memory.read<char>(m_addr + 52);
	}
	float GetIntensity() {
		return memory.read<float>(m_addr + 56);
	}
	float GetTemperature() {
		return memory.read<float>(m_addr + 60);
	}
	float GetIESBrightnessScale() {
		return memory.read<float>(m_addr + 64);
	}
	struct FLinearColor GetLightColor() {
		return memory.read<struct FLinearColor>(m_addr + 68);
	}
	struct UMaterialInterface GetLightFunctionMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UTextureLightProfile GetIESTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UTextureLightProfile(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDatasmithContentBlueprintLibrary
{
public:
	UDatasmithContentBlueprintLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDatasmithStaticMeshCADImportData
{
public:
	UDatasmithStaticMeshCADImportData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDatasmithScene
{
public:
	UDatasmithScene(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDatasmithCineCameraComponentTemplate
{
public:
	UDatasmithCineCameraComponentTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDatasmithCameraFilmbackSettingsTemplate GetFilmbackSettings() {
		return memory.read<struct FDatasmithCameraFilmbackSettingsTemplate>(m_addr + 48);
	}
	struct FDatasmithCameraLensSettingsTemplate GetLensSettings() {
		return memory.read<struct FDatasmithCameraLensSettingsTemplate>(m_addr + 56);
	}
	struct FDatasmithCameraFocusSettingsTemplate GetFocusSettings() {
		return memory.read<struct FDatasmithCameraFocusSettingsTemplate>(m_addr + 60);
	}
	float GetCurrentFocalLength() {
		return memory.read<float>(m_addr + 68);
	}
	float GetCurrentAperture() {
		return memory.read<float>(m_addr + 72);
	}
	struct FDatasmithPostProcessSettingsTemplate GetPostProcessSettings() {
		return memory.read<struct FDatasmithPostProcessSettingsTemplate>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDatasmithActorTemplate
{
public:
	UDatasmithActorTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSet<struct FName> GetLayers() {
		return memory.read<struct TSet<struct FName>>(m_addr + 48);
	}
	struct TSet<struct FName> GetTags() {
		return memory.read<struct TSet<struct FName>>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class ADatasmithAreaLightActor
{
public:
	ADatasmithAreaLightActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EComponentMobility GetMobility() {
		return memory.read<enum class EComponentMobility>(m_addr + 544);
	}
	enum class EDatasmithAreaLightActorType GetLightType() {
		return memory.read<enum class EDatasmithAreaLightActorType>(m_addr + 545);
	}
	enum class EDatasmithAreaLightActorShape GetLightShape() {
		return memory.read<enum class EDatasmithAreaLightActorShape>(m_addr + 546);
	}
	struct FVector2D GetDimensions() {
		return memory.read<struct FVector2D>(m_addr + 548);
	}
	float GetIntensity() {
		return memory.read<float>(m_addr + 556);
	}
	enum class ELightUnits GetIntensityUnits() {
		return memory.read<enum class ELightUnits>(m_addr + 560);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 564);
	}
	float GetTemperature() {
		return memory.read<float>(m_addr + 580);
	}
	struct UTextureLightProfile GetIESTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct UTextureLightProfile(ptr_addr);
	}
	bool GetbUseIESBrightness() {
		return memory.read<bool>(m_addr + 592);
	}
	float GetIESBrightnessScale() {
		return memory.read<float>(m_addr + 596);
	}
	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 600);
	}
	float GetSourceRadius() {
		return memory.read<float>(m_addr + 612);
	}
	float GetSourceLength() {
		return memory.read<float>(m_addr + 616);
	}
	float GetAttenuationRadius() {
		return memory.read<float>(m_addr + 620);
	}
	float GetSpotlightInnerAngle() {
		return memory.read<float>(m_addr + 624);
	}
	float GetSpotlightOuterAngle() {
		return memory.read<float>(m_addr + 628);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDatasmithStaticMeshImportData
{
public:
	UDatasmithStaticMeshImportData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDatasmithAreaLightActorTemplate
{
public:
	UDatasmithAreaLightActorTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EDatasmithAreaLightActorType GetLightType() {
		return memory.read<enum class EDatasmithAreaLightActorType>(m_addr + 48);
	}
	enum class EDatasmithAreaLightActorShape GetLightShape() {
		return memory.read<enum class EDatasmithAreaLightActorShape>(m_addr + 49);
	}
	struct FVector2D GetDimensions() {
		return memory.read<struct FVector2D>(m_addr + 52);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 60);
	}
	float GetIntensity() {
		return memory.read<float>(m_addr + 76);
	}
	enum class ELightUnits GetIntensityUnits() {
		return memory.read<enum class ELightUnits>(m_addr + 80);
	}
	float GetTemperature() {
		return memory.read<float>(m_addr + 84);
	}
	struct TSoftObjectPtr<UTextureLightProfile> GetIESTexture() {
		return memory.read<struct TSoftObjectPtr<UTextureLightProfile>>(m_addr + 88);
	}
	bool GetbUseIESBrightness() {
		return memory.read<bool>(m_addr + 128);
	}
	float GetIESBrightnessScale() {
		return memory.read<float>(m_addr + 132);
	}
	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 136);
	}
	float GetSourceRadius() {
		return memory.read<float>(m_addr + 148);
	}
	float GetSourceLength() {
		return memory.read<float>(m_addr + 152);
	}
	float GetAttenuationRadius() {
		return memory.read<float>(m_addr + 156);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDatasmithSceneImportData
{
public:
	UDatasmithSceneImportData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDatasmithTranslatedSceneImportData
{
public:
	UDatasmithTranslatedSceneImportData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDatasmithCADImportSceneData
{
public:
	UDatasmithCADImportSceneData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDatasmithMDLSceneImportData
{
public:
	UDatasmithMDLSceneImportData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ADatasmithImportedSequencesActor
{
public:
	ADatasmithImportedSequencesActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct ULevelSequence> GetImportedSequences() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct TArray<struct ULevelSequence>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDatasmithVREDSceneImportData
{
public:
	UDatasmithVREDSceneImportData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbMergeNodes() {
		return memory.read<bool>(m_addr + 72);
	}
	bool GetbOptimizeDuplicatedNodes() {
		return memory.read<bool>(m_addr + 73);
	}
	bool GetbImportMats() {
		return memory.read<bool>(m_addr + 74);
	}
	struct FString GetMatsPath() {
		return memory.read<struct FString>(m_addr + 80);
	}
	bool GetbImportVar() {
		return memory.read<bool>(m_addr + 96);
	}
	bool GetbCleanVar() {
		return memory.read<bool>(m_addr + 97);
	}
	struct FString GetVarPath() {
		return memory.read<struct FString>(m_addr + 104);
	}
	bool GetbImportLightInfo() {
		return memory.read<bool>(m_addr + 120);
	}
	struct FString GetLightInfoPath() {
		return memory.read<struct FString>(m_addr + 128);
	}
	bool GetbImportClipInfo() {
		return memory.read<bool>(m_addr + 144);
	}
	struct FString GetClipInfoPath() {
		return memory.read<struct FString>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDatasmithGLTFSceneImportData
{
public:
	UDatasmithGLTFSceneImportData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetGenerator() {
		return memory.read<struct FString>(m_addr + 40);
	}
	float GetVersion() {
		return memory.read<float>(m_addr + 56);
	}
	struct FString GetAuthor() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FString GetLicense() {
		return memory.read<struct FString>(m_addr + 80);
	}
	struct FString GetSource() {
		return memory.read<struct FString>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDatasmithStaticMeshGLTFImportData
{
public:
	UDatasmithStaticMeshGLTFImportData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSourceMeshName() {
		return memory.read<struct FString>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDatasmithFBXSceneImportData
{
public:
	UDatasmithFBXSceneImportData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbGenerateLightmapUVs() {
		return memory.read<bool>(m_addr + 40);
	}
	struct FString GetTexturesDir() {
		return memory.read<struct FString>(m_addr + 48);
	}
	char GetIntermediateSerialization() {
		return memory.read<char>(m_addr + 64);
	}
	bool GetbColorizeMaterials() {
		return memory.read<bool>(m_addr + 65);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDatasmithSpotLightComponentTemplate
{
public:
	UDatasmithSpotLightComponentTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInnerConeAngle() {
		return memory.read<float>(m_addr + 48);
	}
	float GetOuterConeAngle() {
		return memory.read<float>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDatasmithPointLightComponentTemplate
{
public:
	UDatasmithPointLightComponentTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELightUnits GetIntensityUnits() {
		return memory.read<enum class ELightUnits>(m_addr + 48);
	}
	float GetSourceRadius() {
		return memory.read<float>(m_addr + 52);
	}
	float GetSourceLength() {
		return memory.read<float>(m_addr + 56);
	}
	float GetAttenuationRadius() {
		return memory.read<float>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDatasmithLandscapeTemplate
{
public:
	UDatasmithLandscapeTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetLandscapeMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UMaterialInterface(ptr_addr);
	}
	int32_t GetStaticLightingLOD() {
		return memory.read<int32_t>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDatasmithStaticMeshIFCImportData
{
public:
	UDatasmithStaticMeshIFCImportData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSourceGlobalId() {
		return memory.read<struct FString>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDatasmithDeltaGenAssetImportData
{
public:
	UDatasmithDeltaGenAssetImportData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDatasmithDeltaGenSceneImportData
{
public:
	UDatasmithDeltaGenSceneImportData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbMergeNodes() {
		return memory.read<bool>(m_addr + 72);
	}
	bool GetbOptimizeDuplicatedNodes() {
		return memory.read<bool>(m_addr + 73);
	}
	bool GetbRemoveInvisibleNodes() {
		return memory.read<bool>(m_addr + 74);
	}
	bool GetbSimplifyNodeHierarchy() {
		return memory.read<bool>(m_addr + 75);
	}
	bool GetbImportVar() {
		return memory.read<bool>(m_addr + 76);
	}
	struct FString GetVarPath() {
		return memory.read<struct FString>(m_addr + 80);
	}
	bool GetbImportPos() {
		return memory.read<bool>(m_addr + 96);
	}
	struct FString GetPosPath() {
		return memory.read<struct FString>(m_addr + 104);
	}
	bool GetbImportTml() {
		return memory.read<bool>(m_addr + 120);
	}
	struct FString GetTmlPath() {
		return memory.read<struct FString>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDatasmithVREDAssetImportData
{
public:
	UDatasmithVREDAssetImportData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDatasmithIFCSceneImportData
{
public:
	UDatasmithIFCSceneImportData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDatasmithAssetUserData
{
public:
	UDatasmithAssetUserData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FName, struct FString> GetMetaData() {
		return memory.read<struct TMap<struct FName, struct FString>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDatasmithCineCameraActorTemplate
{
public:
	UDatasmithCineCameraActorTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDatasmithCameraLookatTrackingSettingsTemplate GetLookatTrackingSettings() {
		return memory.read<struct FDatasmithCameraLookatTrackingSettingsTemplate>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDatasmithCustomActionBase
{
public:
	UDatasmithCustomActionBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDatasmithDecalComponentTemplate
{
public:
	UDatasmithDecalComponentTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSortOrder() {
		return memory.read<int32_t>(m_addr + 48);
	}
	struct FVector GetDecalSize() {
		return memory.read<struct FVector>(m_addr + 52);
	}
	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UMaterialInterface(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDatasmithCommonTessellationOptions
{
public:
	UDatasmithCommonTessellationOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDatasmithTessellationOptions GetOptions() {
		return memory.read<struct FDatasmithTessellationOptions>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDatasmithImportOptions
{
public:
	UDatasmithImportOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EDatasmithImportSearchPackagePolicy GetSearchPackagePolicy() {
		return memory.read<enum class EDatasmithImportSearchPackagePolicy>(m_addr + 40);
	}
	enum class EDatasmithImportAssetConflictPolicy GetMaterialConflictPolicy() {
		return memory.read<enum class EDatasmithImportAssetConflictPolicy>(m_addr + 41);
	}
	enum class EDatasmithImportAssetConflictPolicy GetTextureConflictPolicy() {
		return memory.read<enum class EDatasmithImportAssetConflictPolicy>(m_addr + 42);
	}
	enum class EDatasmithImportActorPolicy GetStaticMeshActorImportPolicy() {
		return memory.read<enum class EDatasmithImportActorPolicy>(m_addr + 43);
	}
	enum class EDatasmithImportActorPolicy GetLightImportPolicy() {
		return memory.read<enum class EDatasmithImportActorPolicy>(m_addr + 44);
	}
	enum class EDatasmithImportActorPolicy GetCameraImportPolicy() {
		return memory.read<enum class EDatasmithImportActorPolicy>(m_addr + 45);
	}
	enum class EDatasmithImportActorPolicy GetOtherActorImportPolicy() {
		return memory.read<enum class EDatasmithImportActorPolicy>(m_addr + 46);
	}
	enum class EDatasmithImportMaterialQuality GetMaterialQuality() {
		return memory.read<enum class EDatasmithImportMaterialQuality>(m_addr + 47);
	}
	struct FDatasmithImportBaseOptions GetBaseOptions() {
		return memory.read<struct FDatasmithImportBaseOptions>(m_addr + 48);
	}
	struct FDatasmithReimportOptions GetReimportOptions() {
		return memory.read<struct FDatasmithReimportOptions>(m_addr + 68);
	}
	struct FString GetFilename() {
		return memory.read<struct FString>(m_addr + 72);
	}
	struct FString GetFilePath() {
		return memory.read<struct FString>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDatasmithPostProcessVolumeTemplate
{
public:
	UDatasmithPostProcessVolumeTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDatasmithPostProcessSettingsTemplate GetSettings() {
		return memory.read<struct FDatasmithPostProcessSettingsTemplate>(m_addr + 48);
	}
	char GetbEnabled() {
		return memory.read<char>(m_addr + 112);
	}
	char GetbUnbound() {
		return memory.read<char>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class ADatasmithSceneActor
{
public:
	ADatasmithSceneActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDatasmithScene GetScene() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UDatasmithScene(ptr_addr);
	}
	struct TMap<struct FName, struct TSoftObjectPtr<AActor>> GetRelatedActors() {
		return memory.read<struct TMap<struct FName, struct TSoftObjectPtr<AActor>>>(m_addr + 552);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDatasmithSceneComponentTemplate
{
public:
	UDatasmithSceneComponentTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetRelativeTransform() {
		return memory.read<struct FTransform>(m_addr + 48);
	}
	enum class EComponentMobility GetMobility() {
		return memory.read<enum class EComponentMobility>(m_addr + 96);
	}
	struct TSoftObjectPtr<USceneComponent> GetAttachParent() {
		return memory.read<struct TSoftObjectPtr<USceneComponent>>(m_addr + 104);
	}
	bool GetbVisible() {
		return memory.read<bool>(m_addr + 144);
	}
	struct TSet<struct FName> GetTags() {
		return memory.read<struct TSet<struct FName>>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDatasmithSkyLightComponentTemplate
{
public:
	UDatasmithSkyLightComponentTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESkyLightSourceType GetSourceType() {
		return memory.read<enum class ESkyLightSourceType>(m_addr + 48);
	}
	int32_t GetCubemapResolution() {
		return memory.read<int32_t>(m_addr + 52);
	}
	struct UTextureCube GetCubemap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UTextureCube(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDatasmithStaticMeshComponentTemplate
{
public:
	UDatasmithStaticMeshComponentTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UStaticMesh GetStaticMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UStaticMesh(ptr_addr);
	}
	struct TArray<struct UMaterialInterface> GetOverrideMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct TArray<struct UMaterialInterface>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDatasmithStaticMeshTemplate
{
public:
	UDatasmithStaticMeshTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDatasmithMeshSectionInfoMapTemplate GetSectionInfoMap() {
		return memory.read<struct FDatasmithMeshSectionInfoMapTemplate>(m_addr + 48);
	}
	int32_t GetLightMapCoordinateIndex() {
		return memory.read<int32_t>(m_addr + 128);
	}
	int32_t GetLightMapResolution() {
		return memory.read<int32_t>(m_addr + 132);
	}
	struct TArray<struct FDatasmithMeshBuildSettingsTemplate> GetBuildSettings() {
		return memory.read<struct TArray<struct FDatasmithMeshBuildSettingsTemplate>>(m_addr + 136);
	}
	struct TArray<struct FDatasmithStaticMaterialTemplate> GetStaticMaterials() {
		return memory.read<struct TArray<struct FDatasmithStaticMaterialTemplate>>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};


