#pragma once 
#include <NavigationSystem_Structs.h>
 
 
 
class AAbstractNavData
{
public:
	AAbstractNavData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ANavigationData
{
public:
	ANavigationData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetRenderingComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct FNavDataConfig GetNavDataConfig() {
		return memory.read<struct FNavDataConfig>(m_addr + 560);
	}
	char GetbEnableDrawing() {
		return memory.read<char>(m_addr + 680);
	}
	char GetbForceRebuildOnLoad() {
		return memory.read<char>(m_addr + 680);
	}
	char GetbAutoDestroyWhenNoNavigation() {
		return memory.read<char>(m_addr + 680);
	}
	char GetbCanBeMainNavData() {
		return memory.read<char>(m_addr + 680);
	}
	char GetbCanSpawnOnRebuild() {
		return memory.read<char>(m_addr + 680);
	}
	char GetbRebuildAtRuntime() {
		return memory.read<char>(m_addr + 680);
	}
	enum class ERuntimeGenerationType GetRuntimeGeneration() {
		return memory.read<enum class ERuntimeGenerationType>(m_addr + 684);
	}
	float GetObservedPathsTickInterval() {
		return memory.read<float>(m_addr + 688);
	}
	uint32_t GetDataVersion() {
		return memory.read<uint32_t>(m_addr + 692);
	}
	struct TArray<struct FSupportedAreaData> GetSupportedAreas() {
		return memory.read<struct TArray<struct FSupportedAreaData>>(m_addr + 960);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCrowdManagerBase
{
public:
	UCrowdManagerBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNavArea
{
public:
	UNavArea(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDefaultCost() {
		return memory.read<float>(m_addr + 48);
	}
	float GetFixedAreaEnteringCost() {
		return memory.read<float>(m_addr + 52);
	}
	struct FColor GetDrawColor() {
		return memory.read<struct FColor>(m_addr + 56);
	}
	struct FNavAgentSelector GetSupportedAgents() {
		return memory.read<struct FNavAgentSelector>(m_addr + 60);
	}
	char GetbSupportsAgent0() {
		return memory.read<char>(m_addr + 64);
	}
	char GetbSupportsAgent1() {
		return memory.read<char>(m_addr + 64);
	}
	char GetbSupportsAgent2() {
		return memory.read<char>(m_addr + 64);
	}
	char GetbSupportsAgent3() {
		return memory.read<char>(m_addr + 64);
	}
	char GetbSupportsAgent4() {
		return memory.read<char>(m_addr + 64);
	}
	char GetbSupportsAgent5() {
		return memory.read<char>(m_addr + 64);
	}
	char GetbSupportsAgent6() {
		return memory.read<char>(m_addr + 64);
	}
	char GetbSupportsAgent7() {
		return memory.read<char>(m_addr + 64);
	}
	char GetbSupportsAgent8() {
		return memory.read<char>(m_addr + 65);
	}
	char GetbSupportsAgent9() {
		return memory.read<char>(m_addr + 65);
	}
	char GetbSupportsAgent10() {
		return memory.read<char>(m_addr + 65);
	}
	char GetbSupportsAgent11() {
		return memory.read<char>(m_addr + 65);
	}
	char GetbSupportsAgent12() {
		return memory.read<char>(m_addr + 65);
	}
	char GetbSupportsAgent13() {
		return memory.read<char>(m_addr + 65);
	}
	char GetbSupportsAgent14() {
		return memory.read<char>(m_addr + 65);
	}
	char GetbSupportsAgent15() {
		return memory.read<char>(m_addr + 65);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNavArea_LowHeight
{
public:
	UNavArea_LowHeight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNavArea_Default
{
public:
	UNavArea_Default(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNavigationSystemV1
{
public:
	UNavigationSystemV1(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ANavigationData GetMainNavData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct ANavigationData(ptr_addr);
	}
	struct ANavigationData GetAbstractNavData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct ANavigationData(ptr_addr);
	}
	struct FName GetDefaultAgentName() {
		return memory.read<struct FName>(m_addr + 56);
	}
	struct TSoftClassPtr<UObject> GetCrowdManagerClass() {
		return memory.read<struct TSoftClassPtr<UObject>>(m_addr + 64);
	}
	char GetbAutoCreateNavigationData() {
		return memory.read<char>(m_addr + 104);
	}
	char GetbSpawnNavDataInNavBoundsLevel() {
		return memory.read<char>(m_addr + 104);
	}
	char GetbAllowClientSideNavigation() {
		return memory.read<char>(m_addr + 104);
	}
	char GetbShouldDiscardSubLevelNavData() {
		return memory.read<char>(m_addr + 104);
	}
	char GetbTickWhilePaused() {
		return memory.read<char>(m_addr + 104);
	}
	char GetbSupportRebuilding() {
		return memory.read<char>(m_addr + 104);
	}
	char GetbInitialBuildingLocked() {
		return memory.read<char>(m_addr + 104);
	}
	char GetbSkipAgentHeightCheckWhenPickingNavData() {
		return memory.read<char>(m_addr + 105);
	}
	char GetbGenerateNavigationOnlyAroundNavigationInvokers() {
		return memory.read<char>(m_addr + 105);
	}
	float GetActiveTilesUpdateInterval() {
		return memory.read<float>(m_addr + 108);
	}
	enum class ENavDataGatheringModeConfig GetDataGatheringMode() {
		return memory.read<enum class ENavDataGatheringModeConfig>(m_addr + 112);
	}
	float GetDirtyAreaWarningSizeThreshold() {
		return memory.read<float>(m_addr + 116);
	}
	struct TArray<struct FNavDataConfig> GetSupportedAgents() {
		return memory.read<struct TArray<struct FNavDataConfig>>(m_addr + 120);
	}
	struct FNavAgentSelector GetSupportedAgentsMask() {
		return memory.read<struct FNavAgentSelector>(m_addr + 136);
	}
	struct TArray<struct ANavigationData> GetNavDataSet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct TArray<struct ANavigationData>(ptr_addr);
	}
	struct TArray<struct ANavigationData> GetNavDataRegistrationQueue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct TArray<struct ANavigationData>(ptr_addr);
	}
	struct FMulticastInlineDelegate GetOnNavDataRegisteredEvent() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 192);
	}
	struct FMulticastInlineDelegate GetOnNavigationGenerationFinishedDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 208);
	}
	enum class FNavigationSystemRunMode GetOperationMode() {
		return memory.read<enum class FNavigationSystemRunMode>(m_addr + 444);
	}
	float GetDirtyAreasUpdateFreq() {
		return memory.read<float>(m_addr + 5564);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNavArea_Obstacle
{
public:
	UNavArea_Obstacle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNavArea_Null
{
public:
	UNavArea_Null(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNavAreaMeta
{
public:
	UNavAreaMeta(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNavAreaMeta_SwitchByAgent
{
public:
	UNavAreaMeta_SwitchByAgent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UNavArea GetAgent0Area() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return UNavArea(ptr_addr);
	}
	UNavArea GetAgent1Area() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return UNavArea(ptr_addr);
	}
	UNavArea GetAgent2Area() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return UNavArea(ptr_addr);
	}
	UNavArea GetAgent3Area() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return UNavArea(ptr_addr);
	}
	UNavArea GetAgent4Area() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return UNavArea(ptr_addr);
	}
	UNavArea GetAgent5Area() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return UNavArea(ptr_addr);
	}
	UNavArea GetAgent6Area() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return UNavArea(ptr_addr);
	}
	UNavArea GetAgent7Area() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 128);
		return UNavArea(ptr_addr);
	}
	UNavArea GetAgent8Area() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return UNavArea(ptr_addr);
	}
	UNavArea GetAgent9Area() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return UNavArea(ptr_addr);
	}
	UNavArea GetAgent10Area() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return UNavArea(ptr_addr);
	}
	UNavArea GetAgent11Area() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return UNavArea(ptr_addr);
	}
	UNavArea GetAgent12Area() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return UNavArea(ptr_addr);
	}
	UNavArea GetAgent13Area() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return UNavArea(ptr_addr);
	}
	UNavArea GetAgent14Area() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return UNavArea(ptr_addr);
	}
	UNavArea GetAgent15Area() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return UNavArea(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNavCollision
{
public:
	UNavCollision(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FNavCollisionCylinder> GetCylinderCollision() {
		return memory.read<struct TArray<struct FNavCollisionCylinder>>(m_addr + 128);
	}
	struct TArray<struct FNavCollisionBox> GetBoxCollision() {
		return memory.read<struct TArray<struct FNavCollisionBox>>(m_addr + 144);
	}
	UNavArea GetAreaClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return UNavArea(ptr_addr);
	}
	char GetbGatherConvexGeometry() {
		return memory.read<char>(m_addr + 168);
	}
	char GetbCreateOnClient() {
		return memory.read<char>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};


class ANavigationGraph
{
public:
	ANavigationGraph(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ANavigationGraphNode
{
public:
	ANavigationGraphNode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class URecastFilter_UseDefaultArea
{
public:
	URecastFilter_UseDefaultArea(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNavigationGraphNodeComponent
{
public:
	UNavigationGraphNodeComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNavGraphNode GetNode() {
		return memory.read<struct FNavGraphNode>(m_addr + 520);
	}
	struct UNavigationGraphNodeComponent GetNextNodeComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UNavigationGraphNodeComponent(ptr_addr);
	}
	struct UNavigationGraphNodeComponent GetPrevNodeComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UNavigationGraphNodeComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNavLinkHostInterface
{
public:
	UNavLinkHostInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNavigationInvokerComponent
{
public:
	UNavigationInvokerComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTileGenerationRadius() {
		return memory.read<float>(m_addr + 176);
	}
	float GetTileRemovalRadius() {
		return memory.read<float>(m_addr + 180);
	}

private:
	std::uint64_t m_addr = 0;
};


class URecastNavMeshDataChunk
{
public:
	URecastNavMeshDataChunk(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ARecastNavMesh
{
public:
	ARecastNavMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbDrawTriangleEdges() {
		return memory.read<char>(m_addr + 1064);
	}
	char GetbDrawPolyEdges() {
		return memory.read<char>(m_addr + 1064);
	}
	char GetbDrawFilledPolys() {
		return memory.read<char>(m_addr + 1064);
	}
	char GetbDrawNavMeshEdges() {
		return memory.read<char>(m_addr + 1064);
	}
	char GetbDrawTileBounds() {
		return memory.read<char>(m_addr + 1064);
	}
	char GetbDrawPathCollidingGeometry() {
		return memory.read<char>(m_addr + 1064);
	}
	char GetbDrawTileLabels() {
		return memory.read<char>(m_addr + 1064);
	}
	char GetbDrawPolygonLabels() {
		return memory.read<char>(m_addr + 1064);
	}
	char GetbDrawDefaultPolygonCost() {
		return memory.read<char>(m_addr + 1065);
	}
	char GetbDrawPolygonFlags() {
		return memory.read<char>(m_addr + 1065);
	}
	char GetbDrawLabelsOnPathNodes() {
		return memory.read<char>(m_addr + 1065);
	}
	char GetbDrawNavLinks() {
		return memory.read<char>(m_addr + 1065);
	}
	char GetbDrawFailedNavLinks() {
		return memory.read<char>(m_addr + 1065);
	}
	char GetbDrawClusters() {
		return memory.read<char>(m_addr + 1065);
	}
	char GetbDrawOctree() {
		return memory.read<char>(m_addr + 1065);
	}
	char GetbDrawOctreeDetails() {
		return memory.read<char>(m_addr + 1065);
	}
	char GetbDrawMarkedForbiddenPolys() {
		return memory.read<char>(m_addr + 1066);
	}
	char GetbDistinctlyDrawTilesBeingBuilt() {
		return memory.read<char>(m_addr + 1066);
	}
	float GetDrawOffset() {
		return memory.read<float>(m_addr + 1068);
	}
	char GetbFixedTilePoolSize() {
		return memory.read<char>(m_addr + 1072);
	}
	int32_t GetTilePoolSize() {
		return memory.read<int32_t>(m_addr + 1076);
	}
	float GetTileSizeUU() {
		return memory.read<float>(m_addr + 1080);
	}
	float GetCellSize() {
		return memory.read<float>(m_addr + 1084);
	}
	float GetCellHeight() {
		return memory.read<float>(m_addr + 1088);
	}
	float GetAgentRadius() {
		return memory.read<float>(m_addr + 1092);
	}
	float GetAgentHeight() {
		return memory.read<float>(m_addr + 1096);
	}
	float GetAgentMaxSlope() {
		return memory.read<float>(m_addr + 1100);
	}
	float GetAgentMaxStepHeight() {
		return memory.read<float>(m_addr + 1104);
	}
	float GetMinRegionArea() {
		return memory.read<float>(m_addr + 1108);
	}
	float GetMergeRegionSize() {
		return memory.read<float>(m_addr + 1112);
	}
	float GetMaxSimplificationError() {
		return memory.read<float>(m_addr + 1116);
	}
	int32_t GetMaxSimultaneousTileGenerationJobsCount() {
		return memory.read<int32_t>(m_addr + 1120);
	}
	int32_t GetTileNumberHardLimit() {
		return memory.read<int32_t>(m_addr + 1124);
	}
	int32_t GetPolyRefTileBits() {
		return memory.read<int32_t>(m_addr + 1128);
	}
	int32_t GetPolyRefNavPolyBits() {
		return memory.read<int32_t>(m_addr + 1132);
	}
	int32_t GetPolyRefSaltBits() {
		return memory.read<int32_t>(m_addr + 1136);
	}
	struct FVector GetNavMeshOriginOffset() {
		return memory.read<struct FVector>(m_addr + 1140);
	}
	float GetDefaultDrawDistance() {
		return memory.read<float>(m_addr + 1152);
	}
	float GetDefaultMaxSearchNodes() {
		return memory.read<float>(m_addr + 1156);
	}
	float GetDefaultMaxHierarchicalSearchNodes() {
		return memory.read<float>(m_addr + 1160);
	}
	enum class ERecastPartitioning GetRegionPartitioning() {
		return memory.read<enum class ERecastPartitioning>(m_addr + 1164);
	}
	enum class ERecastPartitioning GetLayerPartitioning() {
		return memory.read<enum class ERecastPartitioning>(m_addr + 1165);
	}
	int32_t GetRegionChunkSplits() {
		return memory.read<int32_t>(m_addr + 1168);
	}
	int32_t GetLayerChunkSplits() {
		return memory.read<int32_t>(m_addr + 1172);
	}
	char GetbSortNavigationAreasByCost() {
		return memory.read<char>(m_addr + 1176);
	}
	char GetbPerformVoxelFiltering() {
		return memory.read<char>(m_addr + 1176);
	}
	char GetbMarkLowHeightAreas() {
		return memory.read<char>(m_addr + 1176);
	}
	char GetbUseExtraTopCellWhenMarkingAreas() {
		return memory.read<char>(m_addr + 1176);
	}
	char GetbFilterLowSpanSequences() {
		return memory.read<char>(m_addr + 1176);
	}
	char GetbFilterLowSpanFromTileCache() {
		return memory.read<char>(m_addr + 1176);
	}
	char GetbDoFullyAsyncNavDataGathering() {
		return memory.read<char>(m_addr + 1176);
	}
	char GetbUseBetterOffsetsFromCorners() {
		return memory.read<char>(m_addr + 1176);
	}
	char GetbStoreEmptyTileLayers() {
		return memory.read<char>(m_addr + 1177);
	}
	char GetbUseVirtualFilters() {
		return memory.read<char>(m_addr + 1177);
	}
	char GetbAllowNavLinkAsPathEnd() {
		return memory.read<char>(m_addr + 1177);
	}
	char GetbUseVoxelCache() {
		return memory.read<char>(m_addr + 1177);
	}
	float GetTileSetUpdateInterval() {
		return memory.read<float>(m_addr + 1180);
	}
	float GetHeuristicScale() {
		return memory.read<float>(m_addr + 1184);
	}
	float GetVerticalDeviationFromGroundCompensation() {
		return memory.read<float>(m_addr + 1188);
	}

private:
	std::uint64_t m_addr = 0;
};


class ANavModifierVolume
{
public:
	ANavModifierVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UNavArea GetAreaClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return UNavArea(ptr_addr);
	}
	bool GetbMaskFillCollisionUnderneathForNavmesh() {
		return memory.read<bool>(m_addr + 616);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNavLinkCustomComponent
{
public:
	UNavLinkCustomComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetNavLinkUserId() {
		return memory.read<uint32_t>(m_addr + 232);
	}
	UNavArea GetEnabledAreaClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 240);
		return UNavArea(ptr_addr);
	}
	UNavArea GetDisabledAreaClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 248);
		return UNavArea(ptr_addr);
	}
	struct FNavAgentSelector GetSupportedAgents() {
		return memory.read<struct FNavAgentSelector>(m_addr + 256);
	}
	struct FVector GetLinkRelativeStart() {
		return memory.read<struct FVector>(m_addr + 260);
	}
	struct FVector GetLinkRelativeEnd() {
		return memory.read<struct FVector>(m_addr + 272);
	}
	enum class ENavLinkDirection GetLinkDirection() {
		return memory.read<enum class ENavLinkDirection>(m_addr + 284);
	}
	char GetbLinkEnabled() {
		return memory.read<char>(m_addr + 288);
	}
	char GetbNotifyWhenEnabled() {
		return memory.read<char>(m_addr + 288);
	}
	char GetbNotifyWhenDisabled() {
		return memory.read<char>(m_addr + 288);
	}
	char GetbCreateBoxObstacle() {
		return memory.read<char>(m_addr + 288);
	}
	struct FVector GetObstacleOffset() {
		return memory.read<struct FVector>(m_addr + 292);
	}
	struct FVector GetObstacleExtent() {
		return memory.read<struct FVector>(m_addr + 304);
	}
	UNavArea GetObstacleAreaClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 320);
		return UNavArea(ptr_addr);
	}
	float GetBroadcastRadius() {
		return memory.read<float>(m_addr + 328);
	}
	float GetBroadcastInterval() {
		return memory.read<float>(m_addr + 332);
	}
	enum class ECollisionChannel GetBroadcastChannel() {
		return memory.read<enum class ECollisionChannel>(m_addr + 336);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNavigationPath
{
public:
	UNavigationPath(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetPathUpdatedNotifier() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 40);
	}
	struct TArray<struct FVector> GetPathPoints() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 56);
	}
	enum class ENavigationOptionFlag GetRecalculateOnInvalidation() {
		return memory.read<enum class ENavigationOptionFlag>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNavigationPathGenerator
{
public:
	UNavigationPathGenerator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNavigationQueryFilter
{
public:
	UNavigationQueryFilter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FNavigationFilterArea> GetAreas() {
		return memory.read<struct TArray<struct FNavigationFilterArea>>(m_addr + 40);
	}
	struct FNavigationFilterFlags GetIncludeFlags() {
		return memory.read<struct FNavigationFilterFlags>(m_addr + 56);
	}
	struct FNavigationFilterFlags GetExcludeFlags() {
		return memory.read<struct FNavigationFilterFlags>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNavigationSystemModuleConfig
{
public:
	UNavigationSystemModuleConfig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbStrictlyStatic() {
		return memory.read<char>(m_addr + 80);
	}
	char GetbCreateOnClient() {
		return memory.read<char>(m_addr + 80);
	}
	char GetbAutoSpawnMissingNavData() {
		return memory.read<char>(m_addr + 80);
	}
	char GetbSpawnNavDataInNavBoundsLevel() {
		return memory.read<char>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class ANavigationTestingActor
{
public:
	ANavigationTestingActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCapsuleComponent GetCapsuleComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UCapsuleComponent(ptr_addr);
	}
	struct UNavigationInvokerComponent GetInvokerComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct UNavigationInvokerComponent(ptr_addr);
	}
	char GetbActAsNavigationInvoker() {
		return memory.read<char>(m_addr + 576);
	}
	struct FNavAgentProperties GetNavAgentProps() {
		return memory.read<struct FNavAgentProperties>(m_addr + 584);
	}
	struct FVector GetQueryingExtent() {
		return memory.read<struct FVector>(m_addr + 632);
	}
	struct ANavigationData GetMyNavData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct ANavigationData(ptr_addr);
	}
	struct FVector GetProjectedLocation() {
		return memory.read<struct FVector>(m_addr + 656);
	}
	char GetbProjectedLocationValid() {
		return memory.read<char>(m_addr + 668);
	}
	char GetbSearchStart() {
		return memory.read<char>(m_addr + 668);
	}
	float GetCostLimitFactor() {
		return memory.read<float>(m_addr + 672);
	}
	float GetMinimumCostLimit() {
		return memory.read<float>(m_addr + 676);
	}
	char GetbBacktracking() {
		return memory.read<char>(m_addr + 680);
	}
	char GetbUseHierarchicalPathfinding() {
		return memory.read<char>(m_addr + 680);
	}
	char GetbGatherDetailedInfo() {
		return memory.read<char>(m_addr + 680);
	}
	char GetbDrawDistanceToWall() {
		return memory.read<char>(m_addr + 680);
	}
	char GetbShowNodePool() {
		return memory.read<char>(m_addr + 680);
	}
	char GetbShowBestPath() {
		return memory.read<char>(m_addr + 680);
	}
	char GetbShowDiffWithPreviousStep() {
		return memory.read<char>(m_addr + 680);
	}
	char GetbShouldBeVisibleInGame() {
		return memory.read<char>(m_addr + 680);
	}
	enum class ENavCostDisplay GetCostDisplayMode() {
		return memory.read<enum class ENavCostDisplay>(m_addr + 684);
	}
	struct FVector2D GetTextCanvasOffset() {
		return memory.read<struct FVector2D>(m_addr + 688);
	}
	char GetbPathExist() {
		return memory.read<char>(m_addr + 696);
	}
	char GetbPathIsPartial() {
		return memory.read<char>(m_addr + 696);
	}
	char GetbPathSearchOutOfNodes() {
		return memory.read<char>(m_addr + 696);
	}
	float GetPathfindingTime() {
		return memory.read<float>(m_addr + 700);
	}
	float GetPathCost() {
		return memory.read<float>(m_addr + 704);
	}
	int32_t GetPathfindingSteps() {
		return memory.read<int32_t>(m_addr + 708);
	}
	struct ANavigationTestingActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct ANavigationTestingActor(ptr_addr);
	}
	UNavigationQueryFilter GetFilterClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return UNavigationQueryFilter(ptr_addr);
	}
	int32_t GetShowStepIndex() {
		return memory.read<int32_t>(m_addr + 728);
	}
	float GetOffsetFromCornersDistance() {
		return memory.read<float>(m_addr + 732);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNavLinkComponent
{
public:
	UNavLinkComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FNavigationLink> GetLinks() {
		return memory.read<struct TArray<struct FNavigationLink>>(m_addr + 1144);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNavRelevantComponent
{
public:
	UNavRelevantComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbAttachToOwnersRoot() {
		return memory.read<char>(m_addr + 212);
	}
	struct UObject GetCachedNavParent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 216);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNavLinkCustomInterface
{
public:
	UNavLinkCustomInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNavLinkRenderingComponent
{
public:
	UNavLinkRenderingComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNavLinkTrivial
{
public:
	UNavLinkTrivial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ANavMeshBoundsVolume
{
public:
	ANavMeshBoundsVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNavAgentSelector GetSupportedAgents() {
		return memory.read<struct FNavAgentSelector>(m_addr + 600);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNavMeshRenderingComponent
{
public:
	UNavMeshRenderingComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNavModifierComponent
{
public:
	UNavModifierComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UNavArea GetAreaClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 224);
		return UNavArea(ptr_addr);
	}
	struct FVector GetFailsafeExtent() {
		return memory.read<struct FVector>(m_addr + 232);
	}
	char GetbIncludeAgentHeight() {
		return memory.read<char>(m_addr + 244);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNavNodeInterface
{
public:
	UNavNodeInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ANavSystemConfigOverride
{
public:
	ANavSystemConfigOverride(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNavigationSystemConfig GetNavigationSystemConfig() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UNavigationSystemConfig(ptr_addr);
	}
	enum class ENavSystemOverridePolicy GetOverridePolicy() {
		return memory.read<enum class ENavSystemOverridePolicy>(m_addr + 552);
	}
	char GetbLoadOnClient() {
		return memory.read<char>(m_addr + 553);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNavTestRenderingComponent
{
public:
	UNavTestRenderingComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


