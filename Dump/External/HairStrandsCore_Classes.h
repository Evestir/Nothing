#pragma once 
#include <HairStrandsCore_Structs.h>
 
 
 
class UGroomImportOptions
{
public:
	UGroomImportOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGroomConversionSettings GetConversionSettings() {
		return memory.read<struct FGroomConversionSettings>(m_addr + 40);
	}
	struct TArray<struct FHairGroupsInterpolation> GetInterpolationSettings() {
		return memory.read<struct TArray<struct FHairGroupsInterpolation>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class AGroomActor
{
public:
	AGroomActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGroomComponent GetGroomComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UGroomComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGroomBlueprintLibrary
{
public:
	UGroomBlueprintLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGroomAssetImportData
{
public:
	UGroomAssetImportData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGroomImportOptions GetImportOptions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UGroomImportOptions(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGroomAsset
{
public:
	UGroomAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FHairGroupInfoWithVisibility> GetHairGroupsInfo() {
		return memory.read<struct TArray<struct FHairGroupInfoWithVisibility>>(m_addr + 48);
	}
	struct TArray<struct FHairGroupsRendering> GetHairGroupsRendering() {
		return memory.read<struct TArray<struct FHairGroupsRendering>>(m_addr + 64);
	}
	struct TArray<struct FHairGroupsPhysics> GetHairGroupsPhysics() {
		return memory.read<struct TArray<struct FHairGroupsPhysics>>(m_addr + 80);
	}
	struct TArray<struct FHairGroupsInterpolation> GetHairGroupsInterpolation() {
		return memory.read<struct TArray<struct FHairGroupsInterpolation>>(m_addr + 96);
	}
	struct TArray<struct FHairGroupsLOD> GetHairGroupsLOD() {
		return memory.read<struct TArray<struct FHairGroupsLOD>>(m_addr + 112);
	}
	struct TArray<struct FHairGroupsCardsSourceDescription> GetHairGroupsCards() {
		return memory.read<struct TArray<struct FHairGroupsCardsSourceDescription>>(m_addr + 128);
	}
	struct TArray<struct FHairGroupsMeshesSourceDescription> GetHairGroupsMeshes() {
		return memory.read<struct TArray<struct FHairGroupsMeshesSourceDescription>>(m_addr + 144);
	}
	struct TArray<struct FHairGroupsMaterial> GetHairGroupsMaterials() {
		return memory.read<struct TArray<struct FHairGroupsMaterial>>(m_addr + 160);
	}
	bool GetEnableGlobalInterpolation() {
		return memory.read<bool>(m_addr + 192);
	}
	enum class EGroomInterpolationType GetHairInterpolationType() {
		return memory.read<enum class EGroomInterpolationType>(m_addr + 193);
	}
	enum class EHairLODSelectionType GetLODSelectionType() {
		return memory.read<enum class EHairLODSelectionType>(m_addr + 194);
	}
	struct FPerPlatformInt GetMinLOD() {
		return memory.read<struct FPerPlatformInt>(m_addr + 196);
	}
	struct FPerPlatformBool GetDisableBelowMinLodStripping() {
		return memory.read<struct FPerPlatformBool>(m_addr + 200);
	}
	struct TArray<float> GetEffectiveLODBias() {
		return memory.read<struct TArray<float>>(m_addr + 208);
	}
	struct TArray<struct UAssetUserData> GetAssetUserData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 224);
		return struct TArray<struct UAssetUserData>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGroomCacheImportData
{
public:
	UGroomCacheImportData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGroomCacheImportSettings GetSettings() {
		return memory.read<struct FGroomCacheImportSettings>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGroomBindingAsset
{
public:
	UGroomBindingAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGroomBindingMeshType GetGroomBindingType() {
		return memory.read<enum class EGroomBindingMeshType>(m_addr + 40);
	}
	struct UGroomAsset GetGroom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UGroomAsset(ptr_addr);
	}
	struct USkeletalMesh GetSourceSkeletalMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct USkeletalMesh(ptr_addr);
	}
	struct USkeletalMesh GetTargetSkeletalMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct USkeletalMesh(ptr_addr);
	}
	struct UGeometryCache GetSourceGeometryCache() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UGeometryCache(ptr_addr);
	}
	struct UGeometryCache GetTargetGeometryCache() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UGeometryCache(ptr_addr);
	}
	int32_t GetNumInterpolationPoints() {
		return memory.read<int32_t>(m_addr + 88);
	}
	int32_t GetMatchingSection() {
		return memory.read<int32_t>(m_addr + 92);
	}
	struct TArray<struct FGoomBindingGroupInfo> GetGroupInfos() {
		return memory.read<struct TArray<struct FGoomBindingGroupInfo>>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGroomCache
{
public:
	UGroomCache(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGroomCacheInfo GetGroomCacheInfo() {
		return memory.read<struct FGroomCacheInfo>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGroomCacheImportOptions
{
public:
	UGroomCacheImportOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGroomCacheImportSettings GetImportSettings() {
		return memory.read<struct FGroomCacheImportSettings>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGroomComponent
{
public:
	UGroomComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGroomAsset GetGroomAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1200);
		return struct UGroomAsset(ptr_addr);
	}
	struct UGroomCache GetGroomCache() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1208);
		return struct UGroomCache(ptr_addr);
	}
	struct TArray<struct UNiagaraComponent> GetNiagaraComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1216);
		return struct TArray<struct UNiagaraComponent>(ptr_addr);
	}
	struct USkeletalMesh GetSourceSkeletalMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1232);
		return struct USkeletalMesh(ptr_addr);
	}
	struct UGroomBindingAsset GetBindingAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1240);
		return struct UGroomBindingAsset(ptr_addr);
	}
	struct UPhysicsAsset GetPhysicsAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1248);
		return struct UPhysicsAsset(ptr_addr);
	}
	struct UMaterialInterface GetStrands_DebugMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1256);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetStrands_DefaultMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1264);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetCards_DefaultMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1272);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetMeshes_DefaultMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1280);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UNiagaraSystem GetAngularSpringsSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1288);
		return struct UNiagaraSystem(ptr_addr);
	}
	struct UNiagaraSystem GetCosseratRodsSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1296);
		return struct UNiagaraSystem(ptr_addr);
	}
	struct FString GetAttachmentName() {
		return memory.read<struct FString>(m_addr + 1304);
	}
	struct TArray<struct FHairGroupDesc> GetGroomGroupsDesc() {
		return memory.read<struct TArray<struct FHairGroupDesc>>(m_addr + 1392);
	}
	bool GetbRunning() {
		return memory.read<bool>(m_addr + 1408);
	}
	bool GetbLooping() {
		return memory.read<bool>(m_addr + 1409);
	}
	bool GetbManualTick() {
		return memory.read<bool>(m_addr + 1410);
	}
	float GetElapsedTime() {
		return memory.read<float>(m_addr + 1412);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGroomCreateBindingOptions
{
public:
	UGroomCreateBindingOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGroomBindingMeshType GetGroomBindingType() {
		return memory.read<enum class EGroomBindingMeshType>(m_addr + 40);
	}
	struct USkeletalMesh GetSourceSkeletalMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct USkeletalMesh(ptr_addr);
	}
	struct USkeletalMesh GetTargetSkeletalMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct USkeletalMesh(ptr_addr);
	}
	struct UGeometryCache GetSourceGeometryCache() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UGeometryCache(ptr_addr);
	}
	struct UGeometryCache GetTargetGeometryCache() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UGeometryCache(ptr_addr);
	}
	int32_t GetNumInterpolationPoints() {
		return memory.read<int32_t>(m_addr + 80);
	}
	int32_t GetMatchingSection() {
		return memory.read<int32_t>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGroomCreateFollicleMaskOptions
{
public:
	UGroomCreateFollicleMaskOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetResolution() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetRootRadius() {
		return memory.read<int32_t>(m_addr + 44);
	}
	struct TArray<struct FFollicleMaskOptions> GetGrooms() {
		return memory.read<struct TArray<struct FFollicleMaskOptions>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGroomCreateStrandsTexturesOptions
{
public:
	UGroomCreateStrandsTexturesOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetResolution() {
		return memory.read<int32_t>(m_addr + 40);
	}
	enum class EStrandsTexturesTraceType GetTraceType() {
		return memory.read<enum class EStrandsTexturesTraceType>(m_addr + 44);
	}
	float GetTraceDistance() {
		return memory.read<float>(m_addr + 48);
	}
	enum class EStrandsTexturesMeshType GetMeshType() {
		return memory.read<enum class EStrandsTexturesMeshType>(m_addr + 52);
	}
	struct UStaticMesh GetStaticMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UStaticMesh(ptr_addr);
	}
	struct USkeletalMesh GetSkeletalMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct USkeletalMesh(ptr_addr);
	}
	int32_t GetLODIndex() {
		return memory.read<int32_t>(m_addr + 72);
	}
	int32_t GetSectionIndex() {
		return memory.read<int32_t>(m_addr + 76);
	}
	int32_t GetUVChannelIndex() {
		return memory.read<int32_t>(m_addr + 80);
	}
	struct TArray<int32_t> GetGroupIndex() {
		return memory.read<struct TArray<int32_t>>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfacePhysicsAsset
{
public:
	UNiagaraDataInterfacePhysicsAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPhysicsAsset GetDefaultSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UPhysicsAsset(ptr_addr);
	}
	struct AActor GetSourceActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGroomHairGroupsPreview
{
public:
	UGroomHairGroupsPreview(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FGroomHairGroupPreview> GetGroups() {
		return memory.read<struct TArray<struct FGroomHairGroupPreview>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGroomPluginSettings
{
public:
	UGroomPluginSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetGroomCacheLookAheadBuffer() {
		return memory.read<float>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneGroomCacheSection
{
public:
	UMovieSceneGroomCacheSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneGroomCacheParams GetParams() {
		return memory.read<struct FMovieSceneGroomCacheParams>(m_addr + 232);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneGroomCacheTrack
{
public:
	UMovieSceneGroomCacheTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMovieSceneSection> GetAnimationSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceHairStrands
{
public:
	UNiagaraDataInterfaceHairStrands(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGroomAsset GetDefaultSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UGroomAsset(ptr_addr);
	}
	struct AActor GetSourceActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfaceVelocityGrid
{
public:
	UNiagaraDataInterfaceVelocityGrid(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FIntVector GetGridSize() {
		return memory.read<struct FIntVector>(m_addr + 216);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfacePressureGrid
{
public:
	UNiagaraDataInterfacePressureGrid(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


