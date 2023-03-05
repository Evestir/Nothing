#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FSetBindingAsset
{
public:
	FSetBindingAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGroomBindingAsset GetInBinding() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UGroomBindingAsset(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairGroupsMaterial
{
public:
	FHairGroupsMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMaterialInterface(ptr_addr);
	}
	struct FName GetSlotName() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairGroupsLOD
{
public:
	FHairGroupsLOD(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FHairLODSettings> GetLODs() {
		return memory.read<struct TArray<struct FHairLODSettings>>(m_addr + 0);
	}
	float GetClusterWorldSize() {
		return memory.read<float>(m_addr + 16);
	}
	float GetClusterScreenSizeScale() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairGroupInfoWithVisibility
{
public:
	FHairGroupInfoWithVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsVisible() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairInterpolationSettings
{
public:
	FHairInterpolationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbOverrideGuides() {
		return memory.read<bool>(m_addr + 0);
	}
	float GetHairToGuideDensity() {
		return memory.read<float>(m_addr + 4);
	}
	enum class EHairInterpolationQuality GetInterpolationQuality() {
		return memory.read<enum class EHairInterpolationQuality>(m_addr + 8);
	}
	enum class EHairInterpolationWeight GetInterpolationDistance() {
		return memory.read<enum class EHairInterpolationWeight>(m_addr + 9);
	}
	bool GetbRandomizeGuide() {
		return memory.read<bool>(m_addr + 10);
	}
	bool GetbUseUniqueGuide() {
		return memory.read<bool>(m_addr + 11);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairGroupInfo
{
public:
	FHairGroupInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetGroupID() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetNumCurves() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetNumGuides() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetNumCurveVertices() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetNumGuideVertices() {
		return memory.read<int32_t>(m_addr + 16);
	}
	float GetMaxCurveLength() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneGroomCacheSectionTemplateParameters
{
public:
	FMovieSceneGroomCacheSectionTemplateParameters(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetSectionStartTime() {
		return memory.read<struct FFrameNumber>(m_addr + 32);
	}
	struct FFrameNumber GetSectionEndTime() {
		return memory.read<struct FFrameNumber>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairGroupsCardsSourceDescription
{
public:
	FHairGroupsCardsSourceDescription(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMaterialInterface(ptr_addr);
	}
	struct FName GetMaterialSlotName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	enum class EHairCardsSourceType GetSourceType() {
		return memory.read<enum class EHairCardsSourceType>(m_addr + 16);
	}
	struct UStaticMesh GetProceduralMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UStaticMesh(ptr_addr);
	}
	struct FString GetProceduralMeshKey() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct UStaticMesh GetImportedMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UStaticMesh(ptr_addr);
	}
	struct FHairGroupsProceduralCards GetProceduralSettings() {
		return memory.read<struct FHairGroupsProceduralCards>(m_addr + 56);
	}
	struct FHairGroupCardsTextures GetTextures() {
		return memory.read<struct FHairGroupCardsTextures>(m_addr + 112);
	}
	int32_t GetGroupIndex() {
		return memory.read<int32_t>(m_addr + 160);
	}
	int32_t GetLODIndex() {
		return memory.read<int32_t>(m_addr + 164);
	}
	struct FHairGroupCardsInfo GetCardsInfo() {
		return memory.read<struct FHairGroupCardsInfo>(m_addr + 168);
	}
	struct FString GetImportedMeshKey() {
		return memory.read<struct FString>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairGroupCardsInfo
{
public:
	FHairGroupCardsInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumCards() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetNumCardVertices() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairSolverSettings
{
public:
	FHairSolverSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetEnableSimulation() {
		return memory.read<bool>(m_addr + 0);
	}
	enum class EGroomNiagaraSolvers GetNiagaraSolver() {
		return memory.read<enum class EGroomNiagaraSolvers>(m_addr + 1);
	}
	struct TSoftObjectPtr<UNiagaraSystem> GetCustomSystem() {
		return memory.read<struct TSoftObjectPtr<UNiagaraSystem>>(m_addr + 8);
	}
	int32_t GetSubSteps() {
		return memory.read<int32_t>(m_addr + 48);
	}
	int32_t GetIterationCount() {
		return memory.read<int32_t>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairGroupCardsTextures
{
public:
	FHairGroupCardsTextures(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture2D GetDepthTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetCoverageTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetTangentTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetAttributeTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetAuxilaryDataTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairBendConstraint
{
public:
	FHairBendConstraint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetSolveBend() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetProjectBend() {
		return memory.read<bool>(m_addr + 1);
	}
	float GetBendDamping() {
		return memory.read<float>(m_addr + 4);
	}
	float GetBendStiffness() {
		return memory.read<float>(m_addr + 8);
	}
	struct FRuntimeFloatCurve GetBendScale() {
		return memory.read<struct FRuntimeFloatCurve>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairGroupsProceduralCards
{
public:
	FHairGroupsProceduralCards(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FHairCardsClusterSettings GetClusterSettings() {
		return memory.read<struct FHairCardsClusterSettings>(m_addr + 0);
	}
	struct FHairCardsGeometrySettings GetGeometrySettings() {
		return memory.read<struct FHairCardsGeometrySettings>(m_addr + 8);
	}
	struct FHairCardsTextureSettings GetTextureSettings() {
		return memory.read<struct FHairCardsTextureSettings>(m_addr + 36);
	}
	int32_t GetVersion() {
		return memory.read<int32_t>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FGroomBuildSettings
{
public:
	FGroomBuildSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbOverrideGuides() {
		return memory.read<bool>(m_addr + 0);
	}
	float GetHairToGuideDensity() {
		return memory.read<float>(m_addr + 4);
	}
	enum class EGroomInterpolationQuality GetInterpolationQuality() {
		return memory.read<enum class EGroomInterpolationQuality>(m_addr + 8);
	}
	enum class EGroomInterpolationWeight GetInterpolationDistance() {
		return memory.read<enum class EGroomInterpolationWeight>(m_addr + 9);
	}
	bool GetbRandomizeGuide() {
		return memory.read<bool>(m_addr + 10);
	}
	bool GetbUseUniqueGuide() {
		return memory.read<bool>(m_addr + 11);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairCardsTextureSettings
{
public:
	FHairCardsTextureSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetAtlasMaxResolution() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetPixelPerCentimeters() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetLengthTextureCount() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetDensityTextureCount() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FFollicleMaskOptions
{
public:
	FFollicleMaskOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGroomAsset GetGroom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UGroomAsset(ptr_addr);
	}
	enum class EFollicleMaskChannel GetChannel() {
		return memory.read<enum class EFollicleMaskChannel>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairCardsGeometrySettings
{
public:
	FHairCardsGeometrySettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EHairCardsGenerationType GetGenerationType() {
		return memory.read<enum class EHairCardsGenerationType>(m_addr + 0);
	}
	int32_t GetCardsCount() {
		return memory.read<int32_t>(m_addr + 4);
	}
	enum class EHairCardsClusterType GetClusterType() {
		return memory.read<enum class EHairCardsClusterType>(m_addr + 8);
	}
	float GetMinSegmentLength() {
		return memory.read<float>(m_addr + 12);
	}
	float GetAngularThreshold() {
		return memory.read<float>(m_addr + 16);
	}
	float GetMinCardsLength() {
		return memory.read<float>(m_addr + 20);
	}
	float GetMaxCardsLength() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairCardsClusterSettings
{
public:
	FHairCardsClusterSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetClusterDecimation() {
		return memory.read<float>(m_addr + 0);
	}
	enum class EHairCardsClusterType GetType() {
		return memory.read<enum class EHairCardsClusterType>(m_addr + 4);
	}
	bool GetbUseGuide() {
		return memory.read<bool>(m_addr + 5);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairLODSettings
{
public:
	FHairLODSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCurveDecimation() {
		return memory.read<float>(m_addr + 0);
	}
	float GetVertexDecimation() {
		return memory.read<float>(m_addr + 4);
	}
	float GetAngularThreshold() {
		return memory.read<float>(m_addr + 8);
	}
	float GetScreenSize() {
		return memory.read<float>(m_addr + 12);
	}
	float GetThicknessScale() {
		return memory.read<float>(m_addr + 16);
	}
	bool GetbVisible() {
		return memory.read<bool>(m_addr + 20);
	}
	enum class EGroomGeometryType GetGeometryType() {
		return memory.read<enum class EGroomGeometryType>(m_addr + 21);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGroomAsset
{
public:
	FSetGroomAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGroomAsset GetAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UGroomAsset(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairGroupsInterpolation
{
public:
	FHairGroupsInterpolation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FHairDecimationSettings GetDecimationSettings() {
		return memory.read<struct FHairDecimationSettings>(m_addr + 0);
	}
	struct FHairInterpolationSettings GetInterpolationSettings() {
		return memory.read<struct FHairInterpolationSettings>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairDecimationSettings
{
public:
	FHairDecimationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCurveDecimation() {
		return memory.read<float>(m_addr + 0);
	}
	float GetVertexDecimation() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairGroupsMeshesSourceDescription
{
public:
	FHairGroupsMeshesSourceDescription(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMaterialInterface(ptr_addr);
	}
	struct FName GetMaterialSlotName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct UStaticMesh GetImportedMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UStaticMesh(ptr_addr);
	}
	struct FHairGroupCardsTextures GetTextures() {
		return memory.read<struct FHairGroupCardsTextures>(m_addr + 24);
	}
	int32_t GetGroupIndex() {
		return memory.read<int32_t>(m_addr + 72);
	}
	int32_t GetLODIndex() {
		return memory.read<int32_t>(m_addr + 76);
	}
	struct FString GetImportedMeshKey() {
		return memory.read<struct FString>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairGroupsPhysics
{
public:
	FHairGroupsPhysics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FHairSolverSettings GetSolverSettings() {
		return memory.read<struct FHairSolverSettings>(m_addr + 0);
	}
	struct FHairExternalForces GetExternalForces() {
		return memory.read<struct FHairExternalForces>(m_addr + 56);
	}
	struct FHairMaterialConstraints GetMaterialConstraints() {
		return memory.read<struct FHairMaterialConstraints>(m_addr + 88);
	}
	struct FHairStrandsParameters GetStrandsParameters() {
		return memory.read<struct FHairStrandsParameters>(m_addr + 560);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairStrandsParameters
{
public:
	FHairStrandsParameters(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGroomStrandsSize GetStrandsSize() {
		return memory.read<enum class EGroomStrandsSize>(m_addr + 0);
	}
	float GetStrandsDensity() {
		return memory.read<float>(m_addr + 4);
	}
	float GetStrandsSmoothing() {
		return memory.read<float>(m_addr + 8);
	}
	float GetStrandsThickness() {
		return memory.read<float>(m_addr + 12);
	}
	struct FRuntimeFloatCurve GetThicknessScale() {
		return memory.read<struct FRuntimeFloatCurve>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairGeometrySettings
{
public:
	FHairGeometrySettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetHairWidth() {
		return memory.read<float>(m_addr + 0);
	}
	float GetHairRootScale() {
		return memory.read<float>(m_addr + 4);
	}
	float GetHairTipScale() {
		return memory.read<float>(m_addr + 8);
	}
	float GetHairClipScale() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairShadowSettings
{
public:
	FHairShadowSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetHairShadowDensity() {
		return memory.read<float>(m_addr + 0);
	}
	float GetHairRaytracingRadiusScale() {
		return memory.read<float>(m_addr + 4);
	}
	bool GetbUseHairRaytracingGeometry() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetbVoxelize() {
		return memory.read<bool>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairMaterialConstraints
{
public:
	FHairMaterialConstraints(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FHairBendConstraint GetBendConstraint() {
		return memory.read<struct FHairBendConstraint>(m_addr + 0);
	}
	struct FHairStretchConstraint GetStretchConstraint() {
		return memory.read<struct FHairStretchConstraint>(m_addr + 152);
	}
	struct FHairCollisionConstraint GetCollisionConstraint() {
		return memory.read<struct FHairCollisionConstraint>(m_addr + 304);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairCollisionConstraint
{
public:
	FHairCollisionConstraint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetSolveCollision() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetProjectCollision() {
		return memory.read<bool>(m_addr + 1);
	}
	float GetStaticFriction() {
		return memory.read<float>(m_addr + 4);
	}
	float GetKineticFriction() {
		return memory.read<float>(m_addr + 8);
	}
	float GetStrandsViscosity() {
		return memory.read<float>(m_addr + 12);
	}
	struct FIntVector GetGridDimension() {
		return memory.read<struct FIntVector>(m_addr + 16);
	}
	float GetCollisionRadius() {
		return memory.read<float>(m_addr + 28);
	}
	struct FRuntimeFloatCurve GetRadiusScale() {
		return memory.read<struct FRuntimeFloatCurve>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGroomCacheInfo
{
public:
	FGroomCacheInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetVersion() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class EGroomCacheType GetType() {
		return memory.read<enum class EGroomCacheType>(m_addr + 4);
	}
	struct FGroomAnimationInfo GetAnimationInfo() {
		return memory.read<struct FGroomAnimationInfo>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairStretchConstraint
{
public:
	FHairStretchConstraint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetSolveStretch() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetProjectStretch() {
		return memory.read<bool>(m_addr + 1);
	}
	float GetStretchDamping() {
		return memory.read<float>(m_addr + 4);
	}
	float GetStretchStiffness() {
		return memory.read<float>(m_addr + 8);
	}
	struct FRuntimeFloatCurve GetStretchScale() {
		return memory.read<struct FRuntimeFloatCurve>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairExternalForces
{
public:
	FHairExternalForces(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetGravityVector() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	float GetAirDrag() {
		return memory.read<float>(m_addr + 12);
	}
	struct FVector GetAirVelocity() {
		return memory.read<struct FVector>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairGroupsRendering
{
public:
	FHairGroupsRendering(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetMaterialSlotName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMaterialInterface(ptr_addr);
	}
	struct FHairGeometrySettings GetGeometrySettings() {
		return memory.read<struct FHairGeometrySettings>(m_addr + 16);
	}
	struct FHairShadowSettings GetShadowSettings() {
		return memory.read<struct FHairShadowSettings>(m_addr + 32);
	}
	struct FHairAdvancedRenderingSettings GetAdvancedSettings() {
		return memory.read<struct FHairAdvancedRenderingSettings>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairAdvancedRenderingSettings
{
public:
	FHairAdvancedRenderingSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUseStableRasterization() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbScatterSceneLighting() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneGroomCacheParams
{
public:
	FMovieSceneGroomCacheParams(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGroomCache GetGroomCache() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UGroomCache(ptr_addr);
	}
	struct FFrameNumber GetFirstLoopStartFrameOffset() {
		return memory.read<struct FFrameNumber>(m_addr + 8);
	}
	struct FFrameNumber GetStartFrameOffset() {
		return memory.read<struct FFrameNumber>(m_addr + 12);
	}
	struct FFrameNumber GetEndFrameOffset() {
		return memory.read<struct FFrameNumber>(m_addr + 16);
	}
	float GetPlayRate() {
		return memory.read<float>(m_addr + 20);
	}
	char GetbReverse() {
		return memory.read<char>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGoomBindingGroupInfo
{
public:
	FGoomBindingGroupInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetRenRootCount() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetRenLODCount() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetSimRootCount() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetSimLODCount() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGroomAnimationInfo
{
public:
	FGroomAnimationInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetNumFrames() {
		return memory.read<uint32_t>(m_addr + 0);
	}
	float GetSecondsPerFrame() {
		return memory.read<float>(m_addr + 4);
	}
	float GetDuration() {
		return memory.read<float>(m_addr + 8);
	}
	float GetStartTime() {
		return memory.read<float>(m_addr + 12);
	}
	float GetEndTime() {
		return memory.read<float>(m_addr + 16);
	}
	int32_t GetStartFrame() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetEndFrame() {
		return memory.read<int32_t>(m_addr + 24);
	}
	enum class EGroomCacheAttributes GetAttributes() {
		return memory.read<enum class EGroomCacheAttributes>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FGroomCacheImportSettings
{
public:
	FGroomCacheImportSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbImportGroomCache() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbImportGroomAsset() {
		return memory.read<bool>(m_addr + 1);
	}
	struct FSoftObjectPath GetGroomAsset() {
		return memory.read<struct FSoftObjectPath>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateNewGeometryCacheGroomBindingAssetWithPath
{
public:
	FCreateNewGeometryCacheGroomBindingAssetWithPath(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetDesiredPackagePath() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct UGroomAsset GetGroomAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UGroomAsset(ptr_addr);
	}
	struct UGeometryCache GetGeometryCache() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UGeometryCache(ptr_addr);
	}
	int32_t GetNumInterpolationPoints() {
		return memory.read<int32_t>(m_addr + 32);
	}
	struct UGeometryCache GetSourceGeometryCacheForTransfer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UGeometryCache(ptr_addr);
	}
	int32_t GetMatchingSection() {
		return memory.read<int32_t>(m_addr + 48);
	}
	struct UGroomBindingAsset GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UGroomBindingAsset(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FHairGroupDesc
{
public:
	FHairGroupDesc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetHairLength() {
		return memory.read<float>(m_addr + 0);
	}
	float GetHairWidth() {
		return memory.read<float>(m_addr + 4);
	}
	bool GetHairWidth_Override() {
		return memory.read<bool>(m_addr + 8);
	}
	float GetHairRootScale() {
		return memory.read<float>(m_addr + 12);
	}
	bool GetHairRootScale_Override() {
		return memory.read<bool>(m_addr + 16);
	}
	float GetHairTipScale() {
		return memory.read<float>(m_addr + 20);
	}
	bool GetHairTipScale_Override() {
		return memory.read<bool>(m_addr + 24);
	}
	float GetHairClipScale() {
		return memory.read<float>(m_addr + 28);
	}
	bool GetHairClipScale_Override() {
		return memory.read<bool>(m_addr + 32);
	}
	float GetHairShadowDensity() {
		return memory.read<float>(m_addr + 36);
	}
	bool GetHairShadowDensity_Override() {
		return memory.read<bool>(m_addr + 40);
	}
	float GetHairRaytracingRadiusScale() {
		return memory.read<float>(m_addr + 44);
	}
	bool GetHairRaytracingRadiusScale_Override() {
		return memory.read<bool>(m_addr + 48);
	}
	bool GetbUseHairRaytracingGeometry() {
		return memory.read<bool>(m_addr + 49);
	}
	bool GetbUseHairRaytracingGeometry_Override() {
		return memory.read<bool>(m_addr + 50);
	}
	float GetLODBias() {
		return memory.read<float>(m_addr + 52);
	}
	bool GetbUseStableRasterization() {
		return memory.read<bool>(m_addr + 56);
	}
	bool GetbUseStableRasterization_Override() {
		return memory.read<bool>(m_addr + 57);
	}
	bool GetbScatterSceneLighting() {
		return memory.read<bool>(m_addr + 58);
	}
	bool GetbScatterSceneLighting_Override() {
		return memory.read<bool>(m_addr + 59);
	}
	bool GetbSupportVoxelization() {
		return memory.read<bool>(m_addr + 60);
	}
	bool GetbSupportVoxelization_Override() {
		return memory.read<bool>(m_addr + 61);
	}
	int32_t GetLODForcedIndex() {
		return memory.read<int32_t>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FGroomHairGroupPreview
{
public:
	FGroomHairGroupPreview(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetGroupID() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetCurveCount() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetGuideCount() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct FHairGroupsInterpolation GetInterpolationSettings() {
		return memory.read<struct FHairGroupsInterpolation>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGroomConversionSettings
{
public:
	FGroomConversionSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetRotation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetScale() {
		return memory.read<struct FVector>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneGroomCacheSectionTemplate
{
public:
	FMovieSceneGroomCacheSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneGroomCacheSectionTemplateParameters GetParams() {
		return memory.read<struct FMovieSceneGroomCacheSectionTemplateParameters>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateNewGeometryCacheGroomBindingAsset
{
public:
	FCreateNewGeometryCacheGroomBindingAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGroomAsset GetGroomAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UGroomAsset(ptr_addr);
	}
	struct UGeometryCache GetGeometryCache() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UGeometryCache(ptr_addr);
	}
	int32_t GetNumInterpolationPoints() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct UGeometryCache GetSourceGeometryCacheForTransfer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UGeometryCache(ptr_addr);
	}
	int32_t GetMatchingSection() {
		return memory.read<int32_t>(m_addr + 32);
	}
	struct UGroomBindingAsset GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UGroomBindingAsset(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateNewGroomBindingAsset
{
public:
	FCreateNewGroomBindingAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGroomAsset GetInGroomAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UGroomAsset(ptr_addr);
	}
	struct USkeletalMesh GetInSkeletalMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USkeletalMesh(ptr_addr);
	}
	int32_t GetInNumInterpolationPoints() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct USkeletalMesh GetInSourceSkeletalMeshForTransfer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct USkeletalMesh(ptr_addr);
	}
	int32_t GetInMatchingSection() {
		return memory.read<int32_t>(m_addr + 32);
	}
	struct UGroomBindingAsset GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UGroomBindingAsset(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateNewGroomBindingAssetWithPath
{
public:
	FCreateNewGroomBindingAssetWithPath(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInDesiredPackagePath() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct UGroomAsset GetInGroomAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UGroomAsset(ptr_addr);
	}
	struct USkeletalMesh GetInSkeletalMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct USkeletalMesh(ptr_addr);
	}
	int32_t GetInNumInterpolationPoints() {
		return memory.read<int32_t>(m_addr + 32);
	}
	struct USkeletalMesh GetInSourceSkeletalMeshForTransfer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct USkeletalMesh(ptr_addr);
	}
	int32_t GetInMatchingSection() {
		return memory.read<int32_t>(m_addr + 48);
	}
	struct UGroomBindingAsset GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UGroomBindingAsset(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};