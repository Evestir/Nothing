namespace offsets
{
	namespace UEnvQueryManager
	{
			constexpr auto InstanceCache = 0xa8; // Size: 16, Type: struct TArray<struct FEnvQueryInstanceCache>
			constexpr auto LocalContexts = 0xb8; // Size: 16, Type: struct TArray<struct UEnvQueryContext*>
			constexpr auto GCShieldedWrappers = 0xc8; // Size: 16, Type: struct TArray<struct UEnvQueryInstanceBlueprintWrapper*>
			constexpr auto MaxAllowedTestingTime = 0x12c; // Size: 4, Type: float
			constexpr auto bTestQueriesUsingBreadth = 0x130; // Size: 1, Type: bool
			constexpr auto QueryCountWarningThreshold = 0x134; // Size: 4, Type: int32_t
			constexpr auto QueryCountWarningInterval = 0x138; // Size: 8, Type: double
	}
} 
