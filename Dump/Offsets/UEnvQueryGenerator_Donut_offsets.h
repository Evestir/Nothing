namespace offsets
{
	namespace UEnvQueryGenerator_Donut
	{
			constexpr auto InnerRadius = 0x80; // Size: 56, Type: struct FAIDataProviderFloatValue
			constexpr auto OuterRadius = 0xb8; // Size: 56, Type: struct FAIDataProviderFloatValue
			constexpr auto NumberOfRings = 0xf0; // Size: 56, Type: struct FAIDataProviderIntValue
			constexpr auto PointsPerRing = 0x128; // Size: 56, Type: struct FAIDataProviderIntValue
			constexpr auto ArcDirection = 0x160; // Size: 32, Type: struct FEnvDirection
			constexpr auto ArcAngle = 0x180; // Size: 56, Type: struct FAIDataProviderFloatValue
			constexpr auto bUseSpiralPattern = 0x1b8; // Size: 1, Type: bool
			constexpr auto Center = 0x1c0; // Size: 8, Type: UEnvQueryContext*
			constexpr auto bDefineArc = 0x1c8; // Size: 1, Type: char
	}
} 
