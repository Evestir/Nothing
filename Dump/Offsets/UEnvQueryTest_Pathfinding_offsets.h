namespace offsets
{
	namespace UEnvQueryTest_Pathfinding
	{
			constexpr auto TestMode = 0x1f8; // Size: 1, Type: enum class EEnvTestPathfinding
			constexpr auto Context = 0x200; // Size: 8, Type: UEnvQueryContext*
			constexpr auto PathFromContext = 0x208; // Size: 56, Type: struct FAIDataProviderBoolValue
			constexpr auto SkipUnreachable = 0x240; // Size: 56, Type: struct FAIDataProviderBoolValue
			constexpr auto FilterClass = 0x278; // Size: 8, Type: UNavigationQueryFilter*
	}
} 
