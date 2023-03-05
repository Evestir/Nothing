#pragma once 
#include <Landscape_Structs.h>
 
 
 
class ULandscapeMeshCollisionComponent
{
public:
	ULandscapeMeshCollisionComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetMeshGuid() {
		return memory.read<struct FGuid>(m_addr + 1360);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULandscapeComponent
{
public:
	ULandscapeComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSectionBaseX() {
		return memory.read<int32_t>(m_addr + 1136);
	}
	int32_t GetSectionBaseY() {
		return memory.read<int32_t>(m_addr + 1140);
	}
	int32_t GetComponentSizeQuads() {
		return memory.read<int32_t>(m_addr + 1144);
	}
	int32_t GetSubsectionSizeQuads() {
		return memory.read<int32_t>(m_addr + 1148);
	}
	int32_t GetNumSubsections() {
		return memory.read<int32_t>(m_addr + 1152);
	}
	struct UMaterialInterface GetOverrideMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1160);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetOverrideHoleMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1168);
		return struct UMaterialInterface(ptr_addr);
	}
	struct TArray<struct FLandscapeComponentMaterialOverride> GetOverrideMaterials() {
		return memory.read<struct TArray<struct FLandscapeComponentMaterialOverride>>(m_addr + 1176);
	}
	struct TArray<struct UMaterialInstanceConstant> GetMaterialInstances() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1192);
		return struct TArray<struct UMaterialInstanceConstant>(ptr_addr);
	}
	struct TArray<struct UMaterialInstanceDynamic> GetMaterialInstancesDynamic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1208);
		return struct TArray<struct UMaterialInstanceDynamic>(ptr_addr);
	}
	struct TArray<int8_t> GetLODIndexToMaterialIndex() {
		return memory.read<struct TArray<int8_t>>(m_addr + 1224);
	}
	struct TArray<int8_t> GetMaterialIndexToDisabledTessellationMaterial() {
		return memory.read<struct TArray<int8_t>>(m_addr + 1240);
	}
	struct UTexture2D GetXYOffsetmapTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1256);
		return struct UTexture2D(ptr_addr);
	}
	struct FVector4 GetWeightmapScaleBias() {
		return memory.read<struct FVector4>(m_addr + 1264);
	}
	float GetWeightmapSubsectionOffset() {
		return memory.read<float>(m_addr + 1280);
	}
	struct FVector4 GetHeightmapScaleBias() {
		return memory.read<struct FVector4>(m_addr + 1296);
	}
	struct FBox GetCachedLocalBox() {
		return memory.read<struct FBox>(m_addr + 1312);
	}
	 GetCollisionComponent() {
		return memory.read<>(m_addr + 1340);
	}
	struct UTexture2D GetHeightmapTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UTexture2D(ptr_addr);
	}
	struct TArray<struct FWeightmapLayerAllocationInfo> GetWeightmapLayerAllocations() {
		return memory.read<struct TArray<struct FWeightmapLayerAllocationInfo>>(m_addr + 1376);
	}
	struct TArray<struct UTexture2D> GetWeightmapTextures() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1392);
		return struct TArray<struct UTexture2D>(ptr_addr);
	}
	struct ULandscapeLODStreamingProxy GetLODStreamingProxy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1408);
		return struct ULandscapeLODStreamingProxy(ptr_addr);
	}
	struct FGuid GetMapBuildDataId() {
		return memory.read<struct FGuid>(m_addr + 1416);
	}
	struct TArray<struct FGuid> GetIrrelevantLights() {
		return memory.read<struct TArray<struct FGuid>>(m_addr + 1432);
	}
	int32_t GetCollisionMipLevel() {
		return memory.read<int32_t>(m_addr + 1448);
	}
	int32_t GetSimpleCollisionMipLevel() {
		return memory.read<int32_t>(m_addr + 1452);
	}
	float GetNegativeZBoundsExtension() {
		return memory.read<float>(m_addr + 1456);
	}
	float GetPositiveZBoundsExtension() {
		return memory.read<float>(m_addr + 1460);
	}
	float GetStaticLightingResolution() {
		return memory.read<float>(m_addr + 1464);
	}
	int32_t GetForcedLOD() {
		return memory.read<int32_t>(m_addr + 1468);
	}
	int32_t GetLODBias() {
		return memory.read<int32_t>(m_addr + 1472);
	}
	struct FGuid GetStateId() {
		return memory.read<struct FGuid>(m_addr + 1476);
	}
	struct FGuid GetBakedTextureMaterialGuid() {
		return memory.read<struct FGuid>(m_addr + 1492);
	}
	struct UTexture2D GetGIBakedBaseColorTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UTexture2D(ptr_addr);
	}
	char GetMobileBlendableLayerMask() {
		return memory.read<char>(m_addr + 1520);
	}
	struct UMaterialInterface GetMobileMaterialInterface() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UMaterialInterface(ptr_addr);
	}
	struct TArray<struct UMaterialInterface> GetMobileMaterialInterfaces() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct TArray<struct UMaterialInterface>(ptr_addr);
	}
	struct TArray<struct UTexture2D> GetMobileWeightmapTextures() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct TArray<struct UTexture2D>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULandscapeInfoMap
{
public:
	ULandscapeInfoMap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AControlPointMeshActor
{
public:
	AControlPointMeshActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UControlPointMeshComponent GetControlPointMeshComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UControlPointMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UControlPointMeshComponent
{
public:
	UControlPointMeshComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetVirtualTextureMainPassMaxDrawDistance() {
		return memory.read<float>(m_addr + 1304);
	}

private:
	std::uint64_t m_addr = 0;
};


class ALandscapeProxy
{
public:
	ALandscapeProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULandscapeSplinesComponent GetSplineComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct ULandscapeSplinesComponent(ptr_addr);
	}
	struct FGuid GetLandscapeGuid() {
		return memory.read<struct FGuid>(m_addr + 552);
	}
	struct FIntPoint GetLandscapeSectionOffset() {
		return memory.read<struct FIntPoint>(m_addr + 568);
	}
	int32_t GetMaxLODLevel() {
		return memory.read<int32_t>(m_addr + 576);
	}
	float GetLODDistanceFactor() {
		return memory.read<float>(m_addr + 580);
	}
	enum class ELandscapeLODFalloff GetLODFalloff() {
		return memory.read<enum class ELandscapeLODFalloff>(m_addr + 584);
	}
	float GetComponentScreenSizeToUseSubSections() {
		return memory.read<float>(m_addr + 588);
	}
	float GetLOD0ScreenSize() {
		return memory.read<float>(m_addr + 592);
	}
	float GetLOD0DistributionSetting() {
		return memory.read<float>(m_addr + 596);
	}
	float GetLODDistributionSetting() {
		return memory.read<float>(m_addr + 600);
	}
	float GetTessellationComponentScreenSize() {
		return memory.read<float>(m_addr + 604);
	}
	bool GetUseTessellationComponentScreenSizeFalloff() {
		return memory.read<bool>(m_addr + 608);
	}
	float GetTessellationComponentScreenSizeFalloff() {
		return memory.read<float>(m_addr + 612);
	}
	int32_t GetOccluderGeometryLOD() {
		return memory.read<int32_t>(m_addr + 616);
	}
	int32_t GetStaticLightingLOD() {
		return memory.read<int32_t>(m_addr + 620);
	}
	struct UPhysicalMaterial GetDefaultPhysMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UPhysicalMaterial(ptr_addr);
	}
	float GetStreamingDistanceMultiplier() {
		return memory.read<float>(m_addr + 632);
	}
	struct UMaterialInterface GetLandscapeMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetLandscapeHoleMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UMaterialInterface(ptr_addr);
	}
	struct TArray<struct FLandscapeProxyMaterialOverride> GetLandscapeMaterialsOverride() {
		return memory.read<struct TArray<struct FLandscapeProxyMaterialOverride>>(m_addr + 688);
	}
	bool GetbMeshHoles() {
		return memory.read<bool>(m_addr + 704);
	}
	char GetMeshHolesMaxLod() {
		return memory.read<char>(m_addr + 705);
	}
	struct TArray<struct URuntimeVirtualTexture> GetRuntimeVirtualTextures() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct TArray<struct URuntimeVirtualTexture>(ptr_addr);
	}
	int32_t GetVirtualTextureNumLods() {
		return memory.read<int32_t>(m_addr + 728);
	}
	int32_t GetVirtualTextureLodBias() {
		return memory.read<int32_t>(m_addr + 732);
	}
	enum class ERuntimeVirtualTextureMainPassType GetVirtualTextureRenderPassType() {
		return memory.read<enum class ERuntimeVirtualTextureMainPassType>(m_addr + 736);
	}
	float GetNegativeZBoundsExtension() {
		return memory.read<float>(m_addr + 740);
	}
	float GetPositiveZBoundsExtension() {
		return memory.read<float>(m_addr + 744);
	}
	struct TArray<struct ULandscapeComponent> GetLandscapeComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 752);
		return struct TArray<struct ULandscapeComponent>(ptr_addr);
	}
	struct TArray<struct ULandscapeHeightfieldCollisionComponent> GetCollisionComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct TArray<struct ULandscapeHeightfieldCollisionComponent>(ptr_addr);
	}
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent> GetFoliageComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct TArray<struct UHierarchicalInstancedStaticMeshComponent>(ptr_addr);
	}
	bool GetbHasLandscapeGrass() {
		return memory.read<bool>(m_addr + 900);
	}
	float GetStaticLightingResolution() {
		return memory.read<float>(m_addr + 904);
	}
	char GetCastShadow() {
		return memory.read<char>(m_addr + 908);
	}
	char GetbCastDynamicShadow() {
		return memory.read<char>(m_addr + 908);
	}
	char GetbCastStaticShadow() {
		return memory.read<char>(m_addr + 908);
	}
	char GetbCastFarShadow() {
		return memory.read<char>(m_addr + 912);
	}
	char GetbCastHiddenShadow() {
		return memory.read<char>(m_addr + 916);
	}
	char GetbCastShadowAsTwoSided() {
		return memory.read<char>(m_addr + 920);
	}
	char GetbAffectDistanceFieldLighting() {
		return memory.read<char>(m_addr + 924);
	}
	struct FLightingChannels GetLightingChannels() {
		return memory.read<struct FLightingChannels>(m_addr + 925);
	}
	char GetbUseMaterialPositionOffsetInStaticLighting() {
		return memory.read<char>(m_addr + 928);
	}
	char GetbRenderCustomDepth() {
		return memory.read<char>(m_addr + 928);
	}
	enum class ERendererStencilMask GetCustomDepthStencilWriteMask() {
		return memory.read<enum class ERendererStencilMask>(m_addr + 932);
	}
	int32_t GetCustomDepthStencilValue() {
		return memory.read<int32_t>(m_addr + 936);
	}
	int32_t GetOutlineStencilValue() {
		return memory.read<int32_t>(m_addr + 940);
	}
	float GetLDMaxDrawDistance() {
		return memory.read<float>(m_addr + 944);
	}
	struct FLightmassPrimitiveSettings GetLightmassSettings() {
		return memory.read<struct FLightmassPrimitiveSettings>(m_addr + 948);
	}
	int32_t GetCollisionMipLevel() {
		return memory.read<int32_t>(m_addr + 972);
	}
	int32_t GetSimpleCollisionMipLevel() {
		return memory.read<int32_t>(m_addr + 976);
	}
	float GetCollisionThickness() {
		return memory.read<float>(m_addr + 980);
	}
	struct FBodyInstance GetBodyInstance() {
		return memory.read<struct FBodyInstance>(m_addr + 984);
	}
	char GetbGenerateOverlapEvents() {
		return memory.read<char>(m_addr + 1328);
	}
	char GetbBakeMaterialPositionOffsetIntoCollision() {
		return memory.read<char>(m_addr + 1328);
	}
	int32_t GetComponentSizeQuads() {
		return memory.read<int32_t>(m_addr + 1332);
	}
	int32_t GetSubsectionSizeQuads() {
		return memory.read<int32_t>(m_addr + 1336);
	}
	int32_t GetNumSubsections() {
		return memory.read<int32_t>(m_addr + 1340);
	}
	char GetbUsedForNavigation() {
		return memory.read<char>(m_addr + 1344);
	}
	char GetbFillCollisionUnderLandscapeForNavmesh() {
		return memory.read<char>(m_addr + 1344);
	}
	bool GetbUseDynamicMaterialInstance() {
		return memory.read<bool>(m_addr + 1348);
	}
	enum class ENavDataGatheringMode GetNavigationGeometryGatheringMode() {
		return memory.read<enum class ENavDataGatheringMode>(m_addr + 1349);
	}
	bool GetbUseLandscapeForCullingInvisibleHLODVertices() {
		return memory.read<bool>(m_addr + 1350);
	}
	bool GetbHasLayersContent() {
		return memory.read<bool>(m_addr + 1351);
	}
	struct TMap<struct UTexture2D, struct ULandscapeWeightmapUsage*> GetWeightmapUsageMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct TMap<struct UTexture2D, struct ULandscapeWeightmapUsage*>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionLandscapeGrassOutput
{
public:
	UMaterialExpressionLandscapeGrassOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FGrassInput> GetGrassTypes() {
		return memory.read<struct TArray<struct FGrassInput>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class ALandscape
{
public:
	ALandscape(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULandscapeLODStreamingProxy
{
public:
	ULandscapeLODStreamingProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ALandscapeMeshProxyActor
{
public:
	ALandscapeMeshProxyActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULandscapeMeshProxyComponent GetLandscapeMeshProxyComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct ULandscapeMeshProxyComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ALandscapeBlueprintBrushBase
{
public:
	ALandscapeBlueprintBrushBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ALandscapeGizmoActor
{
public:
	ALandscapeGizmoActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ALandscapeGizmoActiveActor
{
public:
	ALandscapeGizmoActiveActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULandscapeGizmoRenderComponent
{
public:
	ULandscapeGizmoRenderComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULandscapeGrassType
{
public:
	ULandscapeGrassType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FGrassVariety> GetGrassVarieties() {
		return memory.read<struct TArray<struct FGrassVariety>>(m_addr + 40);
	}
	char GetbEnableDensityScaling() {
		return memory.read<char>(m_addr + 56);
	}
	struct UStaticMesh GetGrassMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UStaticMesh(ptr_addr);
	}
	float GetGrassDensity() {
		return memory.read<float>(m_addr + 72);
	}
	float GetPlacementJitter() {
		return memory.read<float>(m_addr + 76);
	}
	int32_t GetStartCullDistance() {
		return memory.read<int32_t>(m_addr + 80);
	}
	int32_t GetEndCullDistance() {
		return memory.read<int32_t>(m_addr + 84);
	}
	bool GetRandomRotation() {
		return memory.read<bool>(m_addr + 88);
	}
	bool GetAlignToSurface() {
		return memory.read<bool>(m_addr + 89);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULandscapeWeightmapUsage
{
public:
	ULandscapeWeightmapUsage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULandscapeComponent GetChannelUsage[4]() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct ULandscapeComponent(ptr_addr);
	}
	struct FGuid GetLayerGuid() {
		return memory.read<struct FGuid>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULandscapeHeightfieldCollisionComponent
{
public:
	ULandscapeHeightfieldCollisionComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct ULandscapeLayerInfoObject> GetComponentLayerInfos() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1136);
		return struct TArray<struct ULandscapeLayerInfoObject>(ptr_addr);
	}
	int32_t GetSectionBaseX() {
		return memory.read<int32_t>(m_addr + 1152);
	}
	int32_t GetSectionBaseY() {
		return memory.read<int32_t>(m_addr + 1156);
	}
	int32_t GetCollisionSizeQuads() {
		return memory.read<int32_t>(m_addr + 1160);
	}
	float GetCollisionScale() {
		return memory.read<float>(m_addr + 1164);
	}
	int32_t GetSimpleCollisionSizeQuads() {
		return memory.read<int32_t>(m_addr + 1168);
	}
	struct TArray<char> GetCollisionQuadFlags() {
		return memory.read<struct TArray<char>>(m_addr + 1176);
	}
	struct FGuid GetHeightfieldGuid() {
		return memory.read<struct FGuid>(m_addr + 1192);
	}
	struct FBox GetCachedLocalBox() {
		return memory.read<struct FBox>(m_addr + 1208);
	}
	 GetRenderComponent() {
		return memory.read<>(m_addr + 1236);
	}
	struct TArray<struct UPhysicalMaterial> GetCookedPhysicalMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1280);
		return struct TArray<struct UPhysicalMaterial>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULandscapeSplineSegment
{
public:
	ULandscapeSplineSegment(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLandscapeSplineSegmentConnection GetConnections[2]() {
		return memory.read<struct FLandscapeSplineSegmentConnection>(m_addr + 40);
	}
	struct FInterpCurveVector GetSplineInfo() {
		return memory.read<struct FInterpCurveVector>(m_addr + 88);
	}
	struct TArray<struct FLandscapeSplineInterpPoint> GetPoints() {
		return memory.read<struct TArray<struct FLandscapeSplineInterpPoint>>(m_addr + 112);
	}
	struct FBox GetBounds() {
		return memory.read<struct FBox>(m_addr + 128);
	}
	struct TArray<struct USplineMeshComponent> GetLocalMeshComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct TArray<struct USplineMeshComponent>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULandscapeInfo
{
public:
	ULandscapeInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	 GetLandscapeActor() {
		return memory.read<>(m_addr + 40);
	}
	struct FGuid GetLandscapeGuid() {
		return memory.read<struct FGuid>(m_addr + 68);
	}
	int32_t GetComponentSizeQuads() {
		return memory.read<int32_t>(m_addr + 84);
	}
	int32_t GetSubsectionSizeQuads() {
		return memory.read<int32_t>(m_addr + 88);
	}
	int32_t GetComponentNumSubsections() {
		return memory.read<int32_t>(m_addr + 92);
	}
	struct FVector GetDrawScale() {
		return memory.read<struct FVector>(m_addr + 96);
	}
	struct TArray<struct ALandscapeStreamingProxy> GetProxies() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 272);
		return struct TArray<struct ALandscapeStreamingProxy>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionLandscapeLayerSwitch
{
public:
	UMaterialExpressionLandscapeLayerSwitch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetLayerUsed() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetLayerNotUsed() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 104);
	}
	char GetPreviewUsed() {
		return memory.read<char>(m_addr + 112);
	}
	struct FGuid GetExpressionGUID() {
		return memory.read<struct FGuid>(m_addr + 116);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULandscapeLayerInfoObject
{
public:
	ULandscapeLayerInfoObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetLayerName() {
		return memory.read<struct FName>(m_addr + 40);
	}
	struct UPhysicalMaterial GetPhysMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UPhysicalMaterial(ptr_addr);
	}
	float GetHardness() {
		return memory.read<float>(m_addr + 56);
	}
	struct FLinearColor GetLayerUsageDebugColor() {
		return memory.read<struct FLinearColor>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULandscapeMaterialInstanceConstant
{
public:
	ULandscapeMaterialInstanceConstant(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FLandscapeMaterialTextureStreamingInfo> GetTextureStreamingInfo() {
		return memory.read<struct TArray<struct FLandscapeMaterialTextureStreamingInfo>>(m_addr + 816);
	}
	char GetbIsLayerThumbnail() {
		return memory.read<char>(m_addr + 832);
	}
	char GetbDisableTessellation() {
		return memory.read<char>(m_addr + 832);
	}
	char GetbMobile() {
		return memory.read<char>(m_addr + 832);
	}
	char GetbEditorToolUsage() {
		return memory.read<char>(m_addr + 832);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULandscapeMeshProxyComponent
{
public:
	ULandscapeMeshProxyComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetLandscapeGuid() {
		return memory.read<struct FGuid>(m_addr + 1304);
	}
	struct TArray<struct FIntPoint> GetProxyComponentBases() {
		return memory.read<struct TArray<struct FIntPoint>>(m_addr + 1320);
	}
	int8_t GetProxyLOD() {
		return memory.read<int8_t>(m_addr + 1336);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULandscapeSettings
{
public:
	ULandscapeSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMaxNumberOfLayers() {
		return memory.read<int32_t>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULandscapeSplinesComponent
{
public:
	ULandscapeSplinesComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct ULandscapeSplineControlPoint> GetControlPoints() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1136);
		return struct TArray<struct ULandscapeSplineControlPoint>(ptr_addr);
	}
	struct TArray<struct ULandscapeSplineSegment> GetSegments() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1152);
		return struct TArray<struct ULandscapeSplineSegment>(ptr_addr);
	}
	struct TArray<struct UMeshComponent> GetCookedForeignMeshComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1168);
		return struct TArray<struct UMeshComponent>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionLandscapeLayerWeight
{
public:
	UMaterialExpressionLandscapeLayerWeight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpressionInput GetBase() {
		return memory.read<struct FExpressionInput>(m_addr + 64);
	}
	struct FExpressionInput GetLayer() {
		return memory.read<struct FExpressionInput>(m_addr + 84);
	}
	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 104);
	}
	float GetPreviewWeight() {
		return memory.read<float>(m_addr + 112);
	}
	struct FVector GetConstBase() {
		return memory.read<struct FVector>(m_addr + 116);
	}
	struct FGuid GetExpressionGUID() {
		return memory.read<struct FGuid>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULandscapeSplineControlPoint
{
public:
	ULandscapeSplineControlPoint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 40);
	}
	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 52);
	}
	float GetWidth() {
		return memory.read<float>(m_addr + 64);
	}
	float GetLayerWidthRatio() {
		return memory.read<float>(m_addr + 68);
	}
	float GetSideFalloff() {
		return memory.read<float>(m_addr + 72);
	}
	float GetLeftSideFalloffFactor() {
		return memory.read<float>(m_addr + 76);
	}
	float GetRightSideFalloffFactor() {
		return memory.read<float>(m_addr + 80);
	}
	float GetLeftSideLayerFalloffFactor() {
		return memory.read<float>(m_addr + 84);
	}
	float GetRightSideLayerFalloffFactor() {
		return memory.read<float>(m_addr + 88);
	}
	float GetEndFalloff() {
		return memory.read<float>(m_addr + 92);
	}
	struct TArray<struct FLandscapeSplineConnection> GetConnectedSegments() {
		return memory.read<struct TArray<struct FLandscapeSplineConnection>>(m_addr + 96);
	}
	struct TArray<struct FLandscapeSplineInterpPoint> GetPoints() {
		return memory.read<struct TArray<struct FLandscapeSplineInterpPoint>>(m_addr + 112);
	}
	struct FBox GetBounds() {
		return memory.read<struct FBox>(m_addr + 128);
	}
	struct UControlPointMeshComponent GetLocalMeshComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UControlPointMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ALandscapeStreamingProxy
{
public:
	ALandscapeStreamingProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	 GetLandscapeActor() {
		return memory.read<>(m_addr + 1432);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionLandscapePhysicalMaterialOutput
{
public:
	UMaterialExpressionLandscapePhysicalMaterialOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPhysicalMaterialInput> GetInputs() {
		return memory.read<struct TArray<struct FPhysicalMaterialInput>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULandscapeSubsystem
{
public:
	ULandscapeSubsystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionLandscapeLayerBlend
{
public:
	UMaterialExpressionLandscapeLayerBlend(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FLayerBlendInput> GetLayers() {
		return memory.read<struct TArray<struct FLayerBlendInput>>(m_addr + 64);
	}
	struct FGuid GetExpressionGUID() {
		return memory.read<struct FGuid>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionLandscapeLayerCoords
{
public:
	UMaterialExpressionLandscapeLayerCoords(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ETerrainCoordMappingType GetMappingType() {
		return memory.read<enum class ETerrainCoordMappingType>(m_addr + 64);
	}
	enum class ELandscapeCustomizedCoordType GetCustomUVType() {
		return memory.read<enum class ELandscapeCustomizedCoordType>(m_addr + 65);
	}
	float GetMappingScale() {
		return memory.read<float>(m_addr + 68);
	}
	float GetMappingRotation() {
		return memory.read<float>(m_addr + 72);
	}
	float GetMappingPanU() {
		return memory.read<float>(m_addr + 76);
	}
	float GetMappingPanV() {
		return memory.read<float>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionLandscapeLayerSample
{
public:
	UMaterialExpressionLandscapeLayerSample(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 64);
	}
	float GetPreviewWeight() {
		return memory.read<float>(m_addr + 72);
	}
	struct FGuid GetExpressionGUID() {
		return memory.read<struct FGuid>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMaterialExpressionLandscapeVisibilityMask
{
public:
	UMaterialExpressionLandscapeVisibilityMask(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetExpressionGUID() {
		return memory.read<struct FGuid>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


