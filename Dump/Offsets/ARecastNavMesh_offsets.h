namespace offsets
{
	namespace ARecastNavMesh
	{
			constexpr auto bDrawTriangleEdges = 0x428; // Size: 1, Type: char
			constexpr auto bDrawPolyEdges = 0x428; // Size: 1, Type: char
			constexpr auto bDrawFilledPolys = 0x428; // Size: 1, Type: char
			constexpr auto bDrawNavMeshEdges = 0x428; // Size: 1, Type: char
			constexpr auto bDrawTileBounds = 0x428; // Size: 1, Type: char
			constexpr auto bDrawPathCollidingGeometry = 0x428; // Size: 1, Type: char
			constexpr auto bDrawTileLabels = 0x428; // Size: 1, Type: char
			constexpr auto bDrawPolygonLabels = 0x428; // Size: 1, Type: char
			constexpr auto bDrawDefaultPolygonCost = 0x429; // Size: 1, Type: char
			constexpr auto bDrawPolygonFlags = 0x429; // Size: 1, Type: char
			constexpr auto bDrawLabelsOnPathNodes = 0x429; // Size: 1, Type: char
			constexpr auto bDrawNavLinks = 0x429; // Size: 1, Type: char
			constexpr auto bDrawFailedNavLinks = 0x429; // Size: 1, Type: char
			constexpr auto bDrawClusters = 0x429; // Size: 1, Type: char
			constexpr auto bDrawOctree = 0x429; // Size: 1, Type: char
			constexpr auto bDrawOctreeDetails = 0x429; // Size: 1, Type: char
			constexpr auto bDrawMarkedForbiddenPolys = 0x42a; // Size: 1, Type: char
			constexpr auto bDistinctlyDrawTilesBeingBuilt = 0x42a; // Size: 1, Type: char
			constexpr auto DrawOffset = 0x42c; // Size: 4, Type: float
			constexpr auto bFixedTilePoolSize = 0x430; // Size: 1, Type: char
			constexpr auto TilePoolSize = 0x434; // Size: 4, Type: int32_t
			constexpr auto TileSizeUU = 0x438; // Size: 4, Type: float
			constexpr auto CellSize = 0x43c; // Size: 4, Type: float
			constexpr auto CellHeight = 0x440; // Size: 4, Type: float
			constexpr auto AgentRadius = 0x444; // Size: 4, Type: float
			constexpr auto AgentHeight = 0x448; // Size: 4, Type: float
			constexpr auto AgentMaxSlope = 0x44c; // Size: 4, Type: float
			constexpr auto AgentMaxStepHeight = 0x450; // Size: 4, Type: float
			constexpr auto MinRegionArea = 0x454; // Size: 4, Type: float
			constexpr auto MergeRegionSize = 0x458; // Size: 4, Type: float
			constexpr auto MaxSimplificationError = 0x45c; // Size: 4, Type: float
			constexpr auto MaxSimultaneousTileGenerationJobsCount = 0x460; // Size: 4, Type: int32_t
			constexpr auto TileNumberHardLimit = 0x464; // Size: 4, Type: int32_t
			constexpr auto PolyRefTileBits = 0x468; // Size: 4, Type: int32_t
			constexpr auto PolyRefNavPolyBits = 0x46c; // Size: 4, Type: int32_t
			constexpr auto PolyRefSaltBits = 0x470; // Size: 4, Type: int32_t
			constexpr auto NavMeshOriginOffset = 0x474; // Size: 12, Type: struct FVector
			constexpr auto DefaultDrawDistance = 0x480; // Size: 4, Type: float
			constexpr auto DefaultMaxSearchNodes = 0x484; // Size: 4, Type: float
			constexpr auto DefaultMaxHierarchicalSearchNodes = 0x488; // Size: 4, Type: float
			constexpr auto RegionPartitioning = 0x48c; // Size: 1, Type: enum class ERecastPartitioning
			constexpr auto LayerPartitioning = 0x48d; // Size: 1, Type: enum class ERecastPartitioning
			constexpr auto RegionChunkSplits = 0x490; // Size: 4, Type: int32_t
			constexpr auto LayerChunkSplits = 0x494; // Size: 4, Type: int32_t
			constexpr auto bSortNavigationAreasByCost = 0x498; // Size: 1, Type: char
			constexpr auto bPerformVoxelFiltering = 0x498; // Size: 1, Type: char
			constexpr auto bMarkLowHeightAreas = 0x498; // Size: 1, Type: char
			constexpr auto bUseExtraTopCellWhenMarkingAreas = 0x498; // Size: 1, Type: char
			constexpr auto bFilterLowSpanSequences = 0x498; // Size: 1, Type: char
			constexpr auto bFilterLowSpanFromTileCache = 0x498; // Size: 1, Type: char
			constexpr auto bDoFullyAsyncNavDataGathering = 0x498; // Size: 1, Type: char
			constexpr auto bUseBetterOffsetsFromCorners = 0x498; // Size: 1, Type: char
			constexpr auto bStoreEmptyTileLayers = 0x499; // Size: 1, Type: char
			constexpr auto bUseVirtualFilters = 0x499; // Size: 1, Type: char
			constexpr auto bAllowNavLinkAsPathEnd = 0x499; // Size: 1, Type: char
			constexpr auto bUseVoxelCache = 0x499; // Size: 1, Type: char
			constexpr auto TileSetUpdateInterval = 0x49c; // Size: 4, Type: float
			constexpr auto HeuristicScale = 0x4a0; // Size: 4, Type: float
			constexpr auto VerticalDeviationFromGroundCompensation = 0x4a4; // Size: 4, Type: float
	}
} 
