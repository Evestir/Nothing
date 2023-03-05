#pragma once 
#include <Foliage_Structs.h>
 
 
 
class UFoliageType
{
public:
	UFoliageType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetUpdateGuid() {
		return memory.read<struct FGuid>(m_addr + 40);
	}
	float GetDensity() {
		return memory.read<float>(m_addr + 56);
	}
	float GetDensityAdjustmentFactor() {
		return memory.read<float>(m_addr + 60);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 64);
	}
	bool GetbSingleInstanceModeOverrideRadius() {
		return memory.read<bool>(m_addr + 68);
	}
	float GetSingleInstanceModeRadius() {
		return memory.read<float>(m_addr + 72);
	}
	enum class EFoliageScaling GetScaling() {
		return memory.read<enum class EFoliageScaling>(m_addr + 76);
	}
	struct FFloatInterval GetScaleX() {
		return memory.read<struct FFloatInterval>(m_addr + 80);
	}
	struct FFloatInterval GetScaleY() {
		return memory.read<struct FFloatInterval>(m_addr + 88);
	}
	struct FFloatInterval GetScaleZ() {
		return memory.read<struct FFloatInterval>(m_addr + 96);
	}
	struct FFoliageVertexColorChannelMask GetVertexColorMaskByChannel[4]() {
		return memory.read<struct FFoliageVertexColorChannelMask>(m_addr + 104);
	}
	enum class FoliageVertexColorMask GetVertexColorMask() {
		return memory.read<enum class FoliageVertexColorMask>(m_addr + 152);
	}
	float GetVertexColorMaskThreshold() {
		return memory.read<float>(m_addr + 156);
	}
	char GetVertexColorMaskInvert() {
		return memory.read<char>(m_addr + 160);
	}
	struct FFloatInterval GetZOffset() {
		return memory.read<struct FFloatInterval>(m_addr + 164);
	}
	char GetAlignToNormal() {
		return memory.read<char>(m_addr + 172);
	}
	float GetAlignMaxAngle() {
		return memory.read<float>(m_addr + 176);
	}
	char GetRandomYaw() {
		return memory.read<char>(m_addr + 180);
	}
	float GetRandomPitchAngle() {
		return memory.read<float>(m_addr + 184);
	}
	struct FFloatInterval GetGroundSlopeAngle() {
		return memory.read<struct FFloatInterval>(m_addr + 188);
	}
	struct FFloatInterval GetHeight() {
		return memory.read<struct FFloatInterval>(m_addr + 196);
	}
	struct TArray<struct FName> GetLandscapeLayers() {
		return memory.read<struct TArray<struct FName>>(m_addr + 208);
	}
	float GetMinimumLayerWeight() {
		return memory.read<float>(m_addr + 224);
	}
	struct TArray<struct FName> GetExclusionLandscapeLayers() {
		return memory.read<struct TArray<struct FName>>(m_addr + 232);
	}
	float GetMinimumExclusionLayerWeight() {
		return memory.read<float>(m_addr + 248);
	}
	struct FName GetLandscapeLayer() {
		return memory.read<struct FName>(m_addr + 252);
	}
	char GetCollisionWithWorld() {
		return memory.read<char>(m_addr + 260);
	}
	struct FVector GetCollisionScale() {
		return memory.read<struct FVector>(m_addr + 264);
	}
	struct FBoxSphereBounds GetMeshBounds() {
		return memory.read<struct FBoxSphereBounds>(m_addr + 276);
	}
	struct FVector GetLowBoundOriginRadius() {
		return memory.read<struct FVector>(m_addr + 304);
	}
	enum class EComponentMobility GetMobility() {
		return memory.read<enum class EComponentMobility>(m_addr + 316);
	}
	struct FInt32Interval GetCullDistance() {
		return memory.read<struct FInt32Interval>(m_addr + 320);
	}
	char GetbEnableStaticLighting() {
		return memory.read<char>(m_addr + 328);
	}
	char GetCastShadow() {
		return memory.read<char>(m_addr + 328);
	}
	char GetbAffectDynamicIndirectLighting() {
		return memory.read<char>(m_addr + 328);
	}
	char GetbAffectDistanceFieldLighting() {
		return memory.read<char>(m_addr + 328);
	}
	char GetbCastDynamicShadow() {
		return memory.read<char>(m_addr + 328);
	}
	char GetbCastStaticShadow() {
		return memory.read<char>(m_addr + 328);
	}
	char GetbCastShadowAsTwoSided() {
		return memory.read<char>(m_addr + 328);
	}
	char GetbReceivesDecals() {
		return memory.read<char>(m_addr + 328);
	}
	char GetbOverrideLightMapRes() {
		return memory.read<char>(m_addr + 329);
	}
	int32_t GetOverriddenLightMapRes() {
		return memory.read<int32_t>(m_addr + 332);
	}
	enum class ELightmapType GetLightmapType() {
		return memory.read<enum class ELightmapType>(m_addr + 336);
	}
	char GetbUseAsOccluder() {
		return memory.read<char>(m_addr + 340);
	}
	char GetbVisibleInRayTracing() {
		return memory.read<char>(m_addr + 344);
	}
	char GetbEvaluateWorldPositionOffset() {
		return memory.read<char>(m_addr + 344);
	}
	struct FBodyInstance GetBodyInstance() {
		return memory.read<struct FBodyInstance>(m_addr + 352);
	}
	enum class EHasCustomNavigableGeometry GetCustomNavigableGeometry() {
		return memory.read<enum class EHasCustomNavigableGeometry>(m_addr + 696);
	}
	struct FLightingChannels GetLightingChannels() {
		return memory.read<struct FLightingChannels>(m_addr + 697);
	}
	char GetbRenderCustomDepth() {
		return memory.read<char>(m_addr + 700);
	}
	enum class ERendererStencilMask GetCustomDepthStencilWriteMask() {
		return memory.read<enum class ERendererStencilMask>(m_addr + 704);
	}
	int32_t GetCustomDepthStencilValue() {
		return memory.read<int32_t>(m_addr + 708);
	}
	int32_t GetTranslucencySortPriority() {
		return memory.read<int32_t>(m_addr + 712);
	}
	int32_t GetOutlineStencilValue() {
		return memory.read<int32_t>(m_addr + 716);
	}
	float GetCollisionRadius() {
		return memory.read<float>(m_addr + 720);
	}
	float GetShadeRadius() {
		return memory.read<float>(m_addr + 724);
	}
	int32_t GetNumSteps() {
		return memory.read<int32_t>(m_addr + 728);
	}
	float GetInitialSeedDensity() {
		return memory.read<float>(m_addr + 732);
	}
	float GetAverageSpreadDistance() {
		return memory.read<float>(m_addr + 736);
	}
	float GetSpreadVariance() {
		return memory.read<float>(m_addr + 740);
	}
	int32_t GetSeedsPerStep() {
		return memory.read<int32_t>(m_addr + 744);
	}
	int32_t GetDistributionSeed() {
		return memory.read<int32_t>(m_addr + 748);
	}
	float GetMaxInitialSeedOffset() {
		return memory.read<float>(m_addr + 752);
	}
	bool GetbCanGrowInShade() {
		return memory.read<bool>(m_addr + 756);
	}
	bool GetbSpawnsInShade() {
		return memory.read<bool>(m_addr + 757);
	}
	float GetMaxInitialAge() {
		return memory.read<float>(m_addr + 760);
	}
	float GetMaxAge() {
		return memory.read<float>(m_addr + 764);
	}
	float GetOverlapPriority() {
		return memory.read<float>(m_addr + 768);
	}
	struct FFloatInterval GetProceduralScale() {
		return memory.read<struct FFloatInterval>(m_addr + 772);
	}
	struct FRuntimeFloatCurve GetScaleCurve() {
		return memory.read<struct FRuntimeFloatCurve>(m_addr + 784);
	}
	int32_t GetchangeCount() {
		return memory.read<int32_t>(m_addr + 920);
	}
	char GetReapplyDensity() {
		return memory.read<char>(m_addr + 924);
	}
	char GetReapplyRadius() {
		return memory.read<char>(m_addr + 924);
	}
	char GetReapplyAlignToNormal() {
		return memory.read<char>(m_addr + 924);
	}
	char GetReapplyRandomYaw() {
		return memory.read<char>(m_addr + 924);
	}
	char GetReapplyScaling() {
		return memory.read<char>(m_addr + 924);
	}
	char GetReapplyScaleX() {
		return memory.read<char>(m_addr + 924);
	}
	char GetReapplyScaleY() {
		return memory.read<char>(m_addr + 924);
	}
	char GetReapplyScaleZ() {
		return memory.read<char>(m_addr + 924);
	}
	char GetReapplyRandomPitchAngle() {
		return memory.read<char>(m_addr + 925);
	}
	char GetReapplyGroundSlope() {
		return memory.read<char>(m_addr + 925);
	}
	char GetReapplyHeight() {
		return memory.read<char>(m_addr + 925);
	}
	char GetReapplyLandscapeLayers() {
		return memory.read<char>(m_addr + 925);
	}
	char GetReapplyZOffset() {
		return memory.read<char>(m_addr + 925);
	}
	char GetReapplyCollisionWithWorld() {
		return memory.read<char>(m_addr + 925);
	}
	char GetReapplyVertexColorMask() {
		return memory.read<char>(m_addr + 925);
	}
	char GetbEnableDensityScaling() {
		return memory.read<char>(m_addr + 925);
	}
	char GetbEnableDiscardOnLoad() {
		return memory.read<char>(m_addr + 926);
	}
	struct TArray<struct URuntimeVirtualTexture> GetRuntimeVirtualTextures() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 928);
		return struct TArray<struct URuntimeVirtualTexture>(ptr_addr);
	}
	int32_t GetVirtualTextureCullMips() {
		return memory.read<int32_t>(m_addr + 944);
	}
	enum class ERuntimeVirtualTextureMainPassType GetVirtualTextureRenderPassType() {
		return memory.read<enum class ERuntimeVirtualTextureMainPassType>(m_addr + 948);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFoliageType_Actor
{
public:
	UFoliageType_Actor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	AActor GetActorClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 952);
		return AActor(ptr_addr);
	}
	bool GetbShouldAttachToBaseComponent() {
		return memory.read<bool>(m_addr + 960);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFoliageStatistics
{
public:
	UFoliageStatistics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UFoliageInstancedStaticMeshComponent
{
public:
	UFoliageInstancedStaticMeshComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnInstanceTakePointDamage() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1720);
	}
	struct FMulticastInlineDelegate GetOnInstanceTakeRadialDamage() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1736);
	}
	struct FGuid GetGenerationGuid() {
		return memory.read<struct FGuid>(m_addr + 1752);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFoliageType_InstancedStaticMesh
{
public:
	UFoliageType_InstancedStaticMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UStaticMesh GetMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 952);
		return struct UStaticMesh(ptr_addr);
	}
	struct TArray<struct UMaterialInterface> GetOverrideMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 960);
		return struct TArray<struct UMaterialInterface>(ptr_addr);
	}
	UFoliageInstancedStaticMeshComponent GetComponentClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 976);
		return UFoliageInstancedStaticMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AInstancedFoliageActor
{
public:
	AInstancedFoliageActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AInteractiveFoliageActor
{
public:
	AInteractiveFoliageActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCapsuleComponent GetCapsuleComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UCapsuleComponent(ptr_addr);
	}
	struct FVector GetTouchingActorEntryPosition() {
		return memory.read<struct FVector>(m_addr + 568);
	}
	struct FVector GetFoliageVelocity() {
		return memory.read<struct FVector>(m_addr + 580);
	}
	struct FVector GetFoliageForce() {
		return memory.read<struct FVector>(m_addr + 592);
	}
	struct FVector GetFoliagePosition() {
		return memory.read<struct FVector>(m_addr + 604);
	}
	float GetFoliageDamageImpulseScale() {
		return memory.read<float>(m_addr + 616);
	}
	float GetFoliageTouchImpulseScale() {
		return memory.read<float>(m_addr + 620);
	}
	float GetFoliageStiffness() {
		return memory.read<float>(m_addr + 624);
	}
	float GetFoliageStiffnessQuadratic() {
		return memory.read<float>(m_addr + 628);
	}
	float GetFoliageDamping() {
		return memory.read<float>(m_addr + 632);
	}
	float GetMaxDamageImpulse() {
		return memory.read<float>(m_addr + 636);
	}
	float GetMaxTouchImpulse() {
		return memory.read<float>(m_addr + 640);
	}
	float GetMaxForce() {
		return memory.read<float>(m_addr + 644);
	}
	float GetMass() {
		return memory.read<float>(m_addr + 648);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInteractiveFoliageComponent
{
public:
	UInteractiveFoliageComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AProceduralFoliageBlockingVolume
{
public:
	AProceduralFoliageBlockingVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AProceduralFoliageVolume GetProceduralFoliageVolume() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct AProceduralFoliageVolume(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UProceduralFoliageComponent
{
public:
	UProceduralFoliageComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UProceduralFoliageSpawner GetFoliageSpawner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct UProceduralFoliageSpawner(ptr_addr);
	}
	float GetTileOverlap() {
		return memory.read<float>(m_addr + 184);
	}
	struct AVolume GetSpawningVolume() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct AVolume(ptr_addr);
	}
	struct FGuid GetProceduralGuid() {
		return memory.read<struct FGuid>(m_addr + 200);
	}

private:
	std::uint64_t m_addr = 0;
};


class UProceduralFoliageSpawner
{
public:
	UProceduralFoliageSpawner(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetRandomSeed() {
		return memory.read<int32_t>(m_addr + 40);
	}
	float GetTileSize() {
		return memory.read<float>(m_addr + 44);
	}
	int32_t GetNumUniqueTiles() {
		return memory.read<int32_t>(m_addr + 48);
	}
	float GetMinimumQuadTreeSize() {
		return memory.read<float>(m_addr + 52);
	}
	struct TArray<struct FFoliageTypeObject> GetFoliageTypes() {
		return memory.read<struct TArray<struct FFoliageTypeObject>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UProceduralFoliageTile
{
public:
	UProceduralFoliageTile(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UProceduralFoliageSpawner GetFoliageSpawner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UProceduralFoliageSpawner(ptr_addr);
	}
	struct TArray<struct FProceduralFoliageInstance> GetInstancesArray() {
		return memory.read<struct TArray<struct FProceduralFoliageInstance>>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};


class AProceduralFoliageVolume
{
public:
	AProceduralFoliageVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UProceduralFoliageComponent GetProceduralComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct UProceduralFoliageComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


