namespace offsets
{
	namespace UCrowdManager
	{
			constexpr auto MyNavData = 0x28; // Size: 8, Type: struct ANavigationData*
			constexpr auto AvoidanceConfig = 0x30; // Size: 16, Type: struct TArray<struct FCrowdAvoidanceConfig>
			constexpr auto SamplingPatterns = 0x40; // Size: 16, Type: struct TArray<struct FCrowdAvoidanceSamplingPattern>
			constexpr auto MaxAgents = 0x50; // Size: 4, Type: int32_t
			constexpr auto MaxAgentRadius = 0x54; // Size: 4, Type: float
			constexpr auto MaxAvoidedAgents = 0x58; // Size: 4, Type: int32_t
			constexpr auto MaxAvoidedWalls = 0x5c; // Size: 4, Type: int32_t
			constexpr auto NavmeshCheckInterval = 0x60; // Size: 4, Type: float
			constexpr auto PathOptimizationInterval = 0x64; // Size: 4, Type: float
			constexpr auto SeparationDirClamp = 0x68; // Size: 4, Type: float
			constexpr auto PathOffsetRadiusMultiplier = 0x6c; // Size: 4, Type: float
			constexpr auto bResolveCollisions = 0x70; // Size: 1, Type: char
	}
} 
