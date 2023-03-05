#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FOnNavigationPathUpdated__DelegateSignature
{
public:
	FOnNavigationPathUpdated__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNavigationPath GetAffectedPath() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNavigationPath(ptr_addr);
	}
	enum class ENavPathEvent GetPathEvent() {
		return memory.read<enum class ENavPathEvent>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FProjectPointToNavigation
{
public:
	FProjectPointToNavigation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector GetPoint() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct ANavigationData GetNavData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct ANavigationData(ptr_addr);
	}
	UNavigationQueryFilter GetFilterClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return UNavigationQueryFilter(ptr_addr);
	}
	struct FVector GetQueryExtent() {
		return memory.read<struct FVector>(m_addr + 40);
	}
	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FNavCollisionBox
{
public:
	FNavCollisionBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetOffset() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetExtent() {
		return memory.read<struct FVector>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNavDataGenericEvent__DelegateSignature
{
public:
	FOnNavDataGenericEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ANavigationData GetNavData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ANavigationData(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNavigationRelevancy
{
public:
	FSetNavigationRelevancy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbRelevant() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNavigationFilterArea
{
public:
	FNavigationFilterArea(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UNavArea GetAreaClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UNavArea(ptr_addr);
	}
	float GetTravelCostOverride() {
		return memory.read<float>(m_addr + 8);
	}
	float GetEnteringCostOverride() {
		return memory.read<float>(m_addr + 12);
	}
	char GetbIsExcluded() {
		return memory.read<char>(m_addr + 16);
	}
	char GetbOverrideTravelCost() {
		return memory.read<char>(m_addr + 16);
	}
	char GetbOverrideEnteringCost() {
		return memory.read<char>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FNavigationFilterFlags
{
public:
	FNavigationFilterFlags(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbNavFlag0() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbNavFlag1() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbNavFlag2() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbNavFlag3() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbNavFlag4() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbNavFlag5() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbNavFlag6() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbNavFlag7() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbNavFlag8() {
		return memory.read<char>(m_addr + 1);
	}
	char GetbNavFlag9() {
		return memory.read<char>(m_addr + 1);
	}
	char GetbNavFlag10() {
		return memory.read<char>(m_addr + 1);
	}
	char GetbNavFlag11() {
		return memory.read<char>(m_addr + 1);
	}
	char GetbNavFlag12() {
		return memory.read<char>(m_addr + 1);
	}
	char GetbNavFlag13() {
		return memory.read<char>(m_addr + 1);
	}
	char GetbNavFlag14() {
		return memory.read<char>(m_addr + 1);
	}
	char GetbNavFlag15() {
		return memory.read<char>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FNavCollisionCylinder
{
public:
	FNavCollisionCylinder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetOffset() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 12);
	}
	float GetHeight() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNavigationSystem
{
public:
	FGetNavigationSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UNavigationSystemV1 GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UNavigationSystemV1(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSupportedAreaData
{
public:
	FSupportedAreaData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetAreaClassName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetAreaID() {
		return memory.read<int32_t>(m_addr + 16);
	}
	UObject GetAreaClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRecastNavMeshGenerationProperties
{
public:
	FRecastNavMeshGenerationProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTilePoolSize() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetTileSizeUU() {
		return memory.read<float>(m_addr + 4);
	}
	float GetCellSize() {
		return memory.read<float>(m_addr + 8);
	}
	float GetCellHeight() {
		return memory.read<float>(m_addr + 12);
	}
	float GetAgentRadius() {
		return memory.read<float>(m_addr + 16);
	}
	float GetAgentHeight() {
		return memory.read<float>(m_addr + 20);
	}
	float GetAgentMaxSlope() {
		return memory.read<float>(m_addr + 24);
	}
	float GetAgentMaxStepHeight() {
		return memory.read<float>(m_addr + 28);
	}
	float GetMinRegionArea() {
		return memory.read<float>(m_addr + 32);
	}
	float GetMergeRegionSize() {
		return memory.read<float>(m_addr + 36);
	}
	float GetMaxSimplificationError() {
		return memory.read<float>(m_addr + 40);
	}
	int32_t GetTileNumberHardLimit() {
		return memory.read<int32_t>(m_addr + 44);
	}
	enum class ERecastPartitioning GetRegionPartitioning() {
		return memory.read<enum class ERecastPartitioning>(m_addr + 48);
	}
	enum class ERecastPartitioning GetLayerPartitioning() {
		return memory.read<enum class ERecastPartitioning>(m_addr + 49);
	}
	int32_t GetRegionChunkSplits() {
		return memory.read<int32_t>(m_addr + 52);
	}
	int32_t GetLayerChunkSplits() {
		return memory.read<int32_t>(m_addr + 56);
	}
	char GetbSortNavigationAreasByCost() {
		return memory.read<char>(m_addr + 60);
	}
	char GetbPerformVoxelFiltering() {
		return memory.read<char>(m_addr + 60);
	}
	char GetbMarkLowHeightAreas() {
		return memory.read<char>(m_addr + 60);
	}
	char GetbUseExtraTopCellWhenMarkingAreas() {
		return memory.read<char>(m_addr + 60);
	}
	char GetbFilterLowSpanSequences() {
		return memory.read<char>(m_addr + 60);
	}
	char GetbFilterLowSpanFromTileCache() {
		return memory.read<char>(m_addr + 60);
	}
	char GetbFixedTilePoolSize() {
		return memory.read<char>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};class FNavGraphNode
{
public:
	FNavGraphNode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetOwner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FNavGraphEdge
{
public:
	FNavGraphEdge(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FNavLinkCustomInstanceData
{
public:
	FNavLinkCustomInstanceData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetNavLinkUserId() {
		return memory.read<uint32_t>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnableDebugDrawing
{
public:
	FEnableDebugDrawing(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbShouldDrawDebugData() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FLinearColor GetPathColor() {
		return memory.read<struct FLinearColor>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnableRecalculationOnInvalidation
{
public:
	FEnableRecalculationOnInvalidation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ENavigationOptionFlag GetDoRecalculation() {
		return memory.read<enum class ENavigationOptionFlag>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_ProjectPointToNavigation
{
public:
	FK2_ProjectPointToNavigation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector GetPoint() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetProjectedLocation() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct ANavigationData GetNavData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct ANavigationData(ptr_addr);
	}
	UNavigationQueryFilter GetFilterClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return UNavigationQueryFilter(ptr_addr);
	}
	struct FVector GetQueryExtent() {
		return memory.read<struct FVector>(m_addr + 48);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDebugString
{
public:
	FGetDebugString(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPathCost
{
public:
	FGetPathCost(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector GetPathStart() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetPathEnd() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	float GetPathCost() {
		return memory.read<float>(m_addr + 32);
	}
	struct ANavigationData GetNavData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct ANavigationData(ptr_addr);
	}
	UNavigationQueryFilter GetFilterClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return UNavigationQueryFilter(ptr_addr);
	}
	enum class ENavigationQueryResult GetReturnValue() {
		return memory.read<enum class ENavigationQueryResult>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPathLength
{
public:
	FGetPathLength(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector GetPathStart() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetPathEnd() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	float GetPathLength() {
		return memory.read<float>(m_addr + 32);
	}
	struct ANavigationData GetNavData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct ANavigationData(ptr_addr);
	}
	UNavigationQueryFilter GetFilterClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return UNavigationQueryFilter(ptr_addr);
	}
	enum class ENavigationQueryResult GetReturnValue() {
		return memory.read<enum class ENavigationQueryResult>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsPartial
{
public:
	FIsPartial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsStringPulled
{
public:
	FIsStringPulled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsValid
{
public:
	FIsValid(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindPathToActorSynchronously
{
public:
	FFindPathToActorSynchronously(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector GetPathStart() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct AActor GetGoalActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct AActor(ptr_addr);
	}
	float GetTetherDistance() {
		return memory.read<float>(m_addr + 32);
	}
	struct AActor GetPathfindingContext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct AActor(ptr_addr);
	}
	UNavigationQueryFilter GetFilterClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return UNavigationQueryFilter(ptr_addr);
	}
	struct UNavigationPath GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UNavigationPath(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindPathToLocationSynchronously
{
public:
	FFindPathToLocationSynchronously(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector GetPathStart() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetPathEnd() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct AActor GetPathfindingContext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct AActor(ptr_addr);
	}
	UNavigationQueryFilter GetFilterClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return UNavigationQueryFilter(ptr_addr);
	}
	struct UNavigationPath GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UNavigationPath(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRandomPointInNavigableRadius
{
public:
	FGetRandomPointInNavigableRadius(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector GetOrigin() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 20);
	}
	struct ANavigationData GetNavData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct ANavigationData(ptr_addr);
	}
	UNavigationQueryFilter GetFilterClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return UNavigationQueryFilter(ptr_addr);
	}
	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRandomReachablePointInRadius
{
public:
	FGetRandomReachablePointInRadius(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector GetOrigin() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 20);
	}
	struct ANavigationData GetNavData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct ANavigationData(ptr_addr);
	}
	UNavigationQueryFilter GetFilterClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return UNavigationQueryFilter(ptr_addr);
	}
	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FNavigationRaycast
{
public:
	FNavigationRaycast(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector GetRayStart() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetRayEnd() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct FVector GetHitLocation() {
		return memory.read<struct FVector>(m_addr + 32);
	}
	UNavigationQueryFilter GetFilterClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return UNavigationQueryFilter(ptr_addr);
	}
	struct AController GetQuerier() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct AController(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsNavigationBeingBuilt
{
public:
	FIsNavigationBeingBuilt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsNavigationBeingBuiltOrLocked
{
public:
	FIsNavigationBeingBuiltOrLocked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGeometryGatheringMode
{
public:
	FSetGeometryGatheringMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ENavDataGatheringModeConfig GetNewMode() {
		return memory.read<enum class ENavDataGatheringModeConfig>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_GetRandomLocationInNavigableRadius
{
public:
	FK2_GetRandomLocationInNavigableRadius(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector GetOrigin() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetRandomLocation() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 32);
	}
	struct ANavigationData GetNavData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct ANavigationData(ptr_addr);
	}
	UNavigationQueryFilter GetFilterClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return UNavigationQueryFilter(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_ReplaceAreaInTileBounds
{
public:
	FK2_ReplaceAreaInTileBounds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBox GetBounds() {
		return memory.read<struct FBox>(m_addr + 0);
	}
	UNavArea GetOldArea() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return UNavArea(ptr_addr);
	}
	UNavArea GetNewArea() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return UNavArea(ptr_addr);
	}
	bool GetReplaceLinks() {
		return memory.read<bool>(m_addr + 48);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 49);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_GetRandomPointInNavigableRadius
{
public:
	FK2_GetRandomPointInNavigableRadius(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector GetOrigin() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetRandomLocation() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 32);
	}
	struct ANavigationData GetNavData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct ANavigationData(ptr_addr);
	}
	UNavigationQueryFilter GetFilterClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return UNavigationQueryFilter(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_GetRandomReachablePointInRadius
{
public:
	FK2_GetRandomReachablePointInRadius(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector GetOrigin() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetRandomLocation() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 32);
	}
	struct ANavigationData GetNavData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct ANavigationData(ptr_addr);
	}
	UNavigationQueryFilter GetFilterClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return UNavigationQueryFilter(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_ReplaceAreaInOctreeData
{
public:
	FK2_ReplaceAreaInOctreeData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	UNavArea GetOldArea() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UNavArea(ptr_addr);
	}
	UNavArea GetNewArea() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return UNavArea(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNavigationBoundsUpdated
{
public:
	FOnNavigationBoundsUpdated(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ANavMeshBoundsVolume GetNavVolume() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ANavMeshBoundsVolume(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRegisterNavigationInvoker
{
public:
	FRegisterNavigationInvoker(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetInvoker() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	float GetTileGenerationRadius() {
		return memory.read<float>(m_addr + 8);
	}
	float GetTileRemovalRadius() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMaxSimultaneousTileGenerationJobsCount
{
public:
	FSetMaxSimultaneousTileGenerationJobsCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMaxNumberOfJobs() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSimpleMoveToActor
{
public:
	FSimpleMoveToActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AController GetController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AController(ptr_addr);
	}
	struct AActor GetGoal() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSimpleMoveToLocation
{
public:
	FSimpleMoveToLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AController GetController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AController(ptr_addr);
	}
	struct FVector GetGoal() {
		return memory.read<struct FVector>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FUnregisterNavigationInvoker
{
public:
	FUnregisterNavigationInvoker(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetInvoker() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAreaClass
{
public:
	FSetAreaClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UNavArea GetNewAreaClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UNavArea(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};