#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FLandscapeLayer
{
public:
	FLandscapeLayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetGuid() {
		return memory.read<struct FGuid>(m_addr + 0);
	}
	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 16);
	}
	bool GetbVisible() {
		return memory.read<bool>(m_addr + 24);
	}
	bool GetbLocked() {
		return memory.read<bool>(m_addr + 25);
	}
	float GetHeightmapAlpha() {
		return memory.read<float>(m_addr + 28);
	}
	float GetWeightmapAlpha() {
		return memory.read<float>(m_addr + 32);
	}
	enum class ELandscapeBlendMode GetBlendMode() {
		return memory.read<enum class ELandscapeBlendMode>(m_addr + 36);
	}
	struct TArray<struct FLandscapeLayerBrush> GetBrushes() {
		return memory.read<struct TArray<struct FLandscapeLayerBrush>>(m_addr + 40);
	}
	struct TMap<struct ULandscapeLayerInfoObject, bool> GetWeightmapLayerAllocationBlend() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct TMap<struct ULandscapeLayerInfoObject, bool>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FWeightmapData
{
public:
	FWeightmapData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UTexture2D> GetTextures() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UTexture2D>(ptr_addr);
	}
	struct TArray<struct FWeightmapLayerAllocationInfo> GetLayerAllocations() {
		return memory.read<struct TArray<struct FWeightmapLayerAllocationInfo>>(m_addr + 16);
	}
	struct TArray<struct ULandscapeWeightmapUsage> GetTextureUsages() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct TArray<struct ULandscapeWeightmapUsage>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLandscapeMaterialScalarParameterValue
{
public:
	FSetLandscapeMaterialScalarParameterValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FLandscapeLayerBrush
{
public:
	FLandscapeLayerBrush(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FLandscapeLayerComponentData
{
public:
	FLandscapeLayerComponentData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FHeightmapData GetHeightmapData() {
		return memory.read<struct FHeightmapData>(m_addr + 0);
	}
	struct FWeightmapData GetWeightmapData() {
		return memory.read<struct FWeightmapData>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FWeightmapLayerAllocationInfo
{
public:
	FWeightmapLayerAllocationInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULandscapeLayerInfoObject GetLayerInfo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ULandscapeLayerInfoObject(ptr_addr);
	}
	char GetWeightmapTextureIndex() {
		return memory.read<char>(m_addr + 8);
	}
	char GetWeightmapTextureChannel() {
		return memory.read<char>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FLandscapeEditToolRenderData
{
public:
	FLandscapeEditToolRenderData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetToolMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetGizmoMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMaterialInterface(ptr_addr);
	}
	int32_t GetSelectedType() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetDebugChannelR() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetDebugChannelG() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetDebugChannelB() {
		return memory.read<int32_t>(m_addr + 28);
	}
	struct UTexture2D GetDataTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetLayerContributionTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetDirtyTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FLandscapeComponentMaterialOverride
{
public:
	FLandscapeComponentMaterialOverride(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPerPlatformInt GetLODIndex() {
		return memory.read<struct FPerPlatformInt>(m_addr + 0);
	}
	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMaterialInterface(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLandscapeMaterialTextureParameterValue
{
public:
	FSetLandscapeMaterialTextureParameterValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct UTexture GetValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UTexture(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FHeightmapData
{
public:
	FHeightmapData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture2D GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FEditorApplySpline
{
public:
	FEditorApplySpline(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USplineComponent GetInSplineComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USplineComponent(ptr_addr);
	}
	float GetStartWidth() {
		return memory.read<float>(m_addr + 8);
	}
	float GetEndWidth() {
		return memory.read<float>(m_addr + 12);
	}
	float GetStartSideFalloff() {
		return memory.read<float>(m_addr + 16);
	}
	float GetEndSideFalloff() {
		return memory.read<float>(m_addr + 20);
	}
	float GetStartRoll() {
		return memory.read<float>(m_addr + 24);
	}
	float GetEndRoll() {
		return memory.read<float>(m_addr + 28);
	}
	int32_t GetNumSubdivisions() {
		return memory.read<int32_t>(m_addr + 32);
	}
	bool GetbRaiseHeights() {
		return memory.read<bool>(m_addr + 36);
	}
	bool GetbLowerHeights() {
		return memory.read<bool>(m_addr + 37);
	}
	struct ULandscapeLayerInfoObject GetPaintLayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct ULandscapeLayerInfoObject(ptr_addr);
	}
	struct FName GetEditLayerName() {
		return memory.read<struct FName>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FGizmoSelectData
{
public:
	FGizmoSelectData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FGrassVariety
{
public:
	FGrassVariety(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UStaticMesh GetGrassMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UStaticMesh(ptr_addr);
	}
	struct TArray<struct UMaterialInterface> GetOverrideMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct UMaterialInterface>(ptr_addr);
	}
	struct FPerPlatformFloat GetGrassDensity() {
		return memory.read<struct FPerPlatformFloat>(m_addr + 24);
	}
	bool GetbUseGrid() {
		return memory.read<bool>(m_addr + 28);
	}
	float GetPlacementJitter() {
		return memory.read<float>(m_addr + 32);
	}
	struct FPerPlatformInt GetStartCullDistance() {
		return memory.read<struct FPerPlatformInt>(m_addr + 36);
	}
	struct FPerPlatformInt GetEndCullDistance() {
		return memory.read<struct FPerPlatformInt>(m_addr + 40);
	}
	int32_t GetMinLOD() {
		return memory.read<int32_t>(m_addr + 44);
	}
	enum class EGrassScaling GetScaling() {
		return memory.read<enum class EGrassScaling>(m_addr + 48);
	}
	struct FFloatInterval GetScaleX() {
		return memory.read<struct FFloatInterval>(m_addr + 52);
	}
	struct FFloatInterval GetScaleY() {
		return memory.read<struct FFloatInterval>(m_addr + 60);
	}
	struct FFloatInterval GetScaleZ() {
		return memory.read<struct FFloatInterval>(m_addr + 68);
	}
	bool GetRandomRotation() {
		return memory.read<bool>(m_addr + 76);
	}
	bool GetAlignToSurface() {
		return memory.read<bool>(m_addr + 77);
	}
	bool GetbUseLandscapeLightmap() {
		return memory.read<bool>(m_addr + 78);
	}
	struct FLightingChannels GetLightingChannels() {
		return memory.read<struct FLightingChannels>(m_addr + 79);
	}
	bool GetbReceivesDecals() {
		return memory.read<bool>(m_addr + 80);
	}
	bool GetbCastDynamicShadow() {
		return memory.read<bool>(m_addr + 81);
	}
	bool GetbKeepInstanceBufferCPUCopy() {
		return memory.read<bool>(m_addr + 82);
	}

private:
	std::uint64_t m_addr = 0;
};class FForeignControlPointData
{
public:
	FForeignControlPointData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FLandscapeInfoLayerSettings
{
public:
	FLandscapeInfoLayerSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULandscapeLayerInfoObject GetLayerInfoObj() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ULandscapeLayerInfoObject(ptr_addr);
	}
	struct FName GetLayerName() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FLandscapeMaterialTextureStreamingInfo
{
public:
	FLandscapeMaterialTextureStreamingInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetTextureName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetTexelFactor() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FLayerBlendInput
{
public:
	FLayerBlendInput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetLayerName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	enum class ELandscapeLayerBlendType GetBlendType() {
		return memory.read<enum class ELandscapeLayerBlendType>(m_addr + 8);
	}
	struct FExpressionInput GetLayerInput() {
		return memory.read<struct FExpressionInput>(m_addr + 12);
	}
	struct FExpressionInput GetHeightInput() {
		return memory.read<struct FExpressionInput>(m_addr + 32);
	}
	float GetPreviewWeight() {
		return memory.read<float>(m_addr + 52);
	}
	struct FVector GetConstLayerInput() {
		return memory.read<struct FVector>(m_addr + 56);
	}
	float GetConstHeightInput() {
		return memory.read<float>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};class FLandscapeProxyMaterialOverride
{
public:
	FLandscapeProxyMaterialOverride(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPerPlatformInt GetLODIndex() {
		return memory.read<struct FPerPlatformInt>(m_addr + 0);
	}
	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMaterialInterface(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FLandscapeImportLayerInfo
{
public:
	FLandscapeImportLayerInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FGetRenderComponent
{
public:
	FGetRenderComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULandscapeComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ULandscapeComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FLandscapeLayerStruct
{
public:
	FLandscapeLayerStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULandscapeLayerInfoObject GetLayerInfoObj() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ULandscapeLayerInfoObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FLandscapeEditorLayerSettings
{
public:
	FLandscapeEditorLayerSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FGetSplineMeshComponents
{
public:
	FGetSplineMeshComponents(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct USplineMeshComponent> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct USplineMeshComponent>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FLandscapeSplineConnection
{
public:
	FLandscapeSplineConnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULandscapeSplineSegment GetSegment() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ULandscapeSplineSegment(ptr_addr);
	}
	char GetEnd() {
		return memory.read<char>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FForeignWorldSplineData
{
public:
	FForeignWorldSplineData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FForeignSplineSegmentData
{
public:
	FForeignSplineSegmentData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FLandscapeSplineMeshEntry
{
public:
	FLandscapeSplineMeshEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UStaticMesh GetMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UStaticMesh(ptr_addr);
	}
	struct TArray<struct UMaterialInterface> GetMaterialOverrides() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct UMaterialInterface>(ptr_addr);
	}
	char GetbCenterH() {
		return memory.read<char>(m_addr + 24);
	}
	struct FVector2D GetCenterAdjust() {
		return memory.read<struct FVector2D>(m_addr + 28);
	}
	char GetbScaleToWidth() {
		return memory.read<char>(m_addr + 36);
	}
	struct FVector GetScale() {
		return memory.read<struct FVector>(m_addr + 40);
	}
	enum class LandscapeSplineMeshOrientation GetOrientation() {
		return memory.read<enum class LandscapeSplineMeshOrientation>(m_addr + 52);
	}
	enum class ESplineMeshAxis GetForwardAxis() {
		return memory.read<enum class ESplineMeshAxis>(m_addr + 53);
	}
	enum class ESplineMeshAxis GetUpAxis() {
		return memory.read<enum class ESplineMeshAxis>(m_addr + 54);
	}

private:
	std::uint64_t m_addr = 0;
};class FLandscapeSplineSegmentConnection
{
public:
	FLandscapeSplineSegmentConnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULandscapeSplineControlPoint GetControlPoint() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ULandscapeSplineControlPoint(ptr_addr);
	}
	float GetTangentLen() {
		return memory.read<float>(m_addr + 8);
	}
	struct FName GetSocketName() {
		return memory.read<struct FName>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FLandscapeSplineInterpPoint
{
public:
	FLandscapeSplineInterpPoint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetCenter() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetLeft() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FVector GetRight() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct FVector GetFalloffLeft() {
		return memory.read<struct FVector>(m_addr + 36);
	}
	struct FVector GetFalloffRight() {
		return memory.read<struct FVector>(m_addr + 48);
	}
	struct FVector GetLayerLeft() {
		return memory.read<struct FVector>(m_addr + 60);
	}
	struct FVector GetLayerRight() {
		return memory.read<struct FVector>(m_addr + 72);
	}
	struct FVector GetLayerFalloffLeft() {
		return memory.read<struct FVector>(m_addr + 84);
	}
	struct FVector GetLayerFalloffRight() {
		return memory.read<struct FVector>(m_addr + 96);
	}
	float GetStartEndFalloff() {
		return memory.read<float>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBlueprintRenderDependencies
{
public:
	FGetBlueprintRenderDependencies(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UObject> GetOutStreamableAssets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UObject>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FLandscapeExportHeightmapToRenderTarget
{
public:
	FLandscapeExportHeightmapToRenderTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextureRenderTarget2D GetInRenderTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTextureRenderTarget2D(ptr_addr);
	}
	bool GetInExportHeightIntoRGChannel() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetInExportLandscapeProxies() {
		return memory.read<bool>(m_addr + 9);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 10);
	}

private:
	std::uint64_t m_addr = 0;
};class FGrassInput
{
public:
	FGrassInput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct ULandscapeGrassType GetGrassType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct ULandscapeGrassType(ptr_addr);
	}
	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FPhysicalMaterialInput
{
public:
	FPhysicalMaterialInput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPhysicalMaterial GetPhysicalMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPhysicalMaterial(ptr_addr);
	}
	struct FExpressionInput GetInput() {
		return memory.read<struct FExpressionInput>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeComponentScreenSizeToUseSubSections
{
public:
	FChangeComponentScreenSizeToUseSubSections(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInComponentScreenSizeToUseSubSections() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeLODDistanceFactor
{
public:
	FChangeLODDistanceFactor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInLODDistanceFactor() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeTessellationComponentScreenSize
{
public:
	FChangeTessellationComponentScreenSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInTessellationComponentScreenSize() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeTessellationComponentScreenSizeFalloff
{
public:
	FChangeTessellationComponentScreenSizeFalloff(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInUseTessellationComponentScreenSizeFalloff() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRender
{
public:
	FRender(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetInIsHeightmap() {
		return memory.read<bool>(m_addr + 0);
	}
	struct UTextureRenderTarget2D GetInCombinedResult() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UTextureRenderTarget2D(ptr_addr);
	}
	struct FName GetInWeightmapLayerName() {
		return memory.read<struct FName>(m_addr + 16);
	}
	struct UTextureRenderTarget2D GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UTextureRenderTarget2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeUseTessellationComponentScreenSizeFalloff
{
public:
	FChangeUseTessellationComponentScreenSizeFalloff(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetInComponentScreenSizeToUseSubSections() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FEditorSetLandscapeMaterial
{
public:
	FEditorSetLandscapeMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetNewLandscapeMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMaterialInterface(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLandscapeMaterialVectorParameterValue
{
public:
	FSetLandscapeMaterialVectorParameterValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FLinearColor GetValue() {
		return memory.read<struct FLinearColor>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FEditorGetPaintLayerWeightAtLocation
{
public:
	FEditorGetPaintLayerWeightAtLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetInLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct ULandscapeLayerInfoObject GetPaintLayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct ULandscapeLayerInfoObject(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FInitialize
{
public:
	FInitialize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetInLandscapeTransform() {
		return memory.read<struct FTransform>(m_addr + 0);
	}
	struct FIntPoint GetInLandscapeSize() {
		return memory.read<struct FIntPoint>(m_addr + 48);
	}
	struct FIntPoint GetInLandscapeRenderTargetSize() {
		return memory.read<struct FIntPoint>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FEditorGetPaintLayerWeightByNameAtLocation
{
public:
	FEditorGetPaintLayerWeightByNameAtLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetInLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FName GetInPaintLayerName() {
		return memory.read<struct FName>(m_addr + 12);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMaterialInstanceDynamic
{
public:
	FGetMaterialInstanceDynamic(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UMaterialInstanceDynamic GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};