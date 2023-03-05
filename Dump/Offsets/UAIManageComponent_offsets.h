namespace offsets
{
	namespace UAIManageComponent
	{
			constexpr auto RaceRankComponent = 0xb0; // Size: 8, Type: struct URaceRankComponent*
			constexpr auto SplineList = 0xb8; // Size: 16, Type: struct TArray<struct USplineComponent*>
			constexpr auto Sub_SplineList = 0xc8; // Size: 16, Type: struct TArray<struct USplineComponent*>
			constexpr auto bUseSpeedSplineOnly = 0x118; // Size: 1, Type: bool
			constexpr auto bChangeSplineOnRank = 0x119; // Size: 1, Type: bool
			constexpr auto bEnableSpeedFactor = 0x11a; // Size: 1, Type: bool
			constexpr auto bExecuteScenario = 0x11b; // Size: 1, Type: bool
	}
} 
