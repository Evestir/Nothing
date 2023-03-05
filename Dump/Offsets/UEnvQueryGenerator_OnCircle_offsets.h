namespace offsets
{
	namespace UEnvQueryGenerator_OnCircle
	{
			constexpr auto CircleRadius = 0x80; // Size: 56, Type: struct FAIDataProviderFloatValue
			constexpr auto SpaceBetween = 0xb8; // Size: 56, Type: struct FAIDataProviderFloatValue
			constexpr auto NumberOfPoints = 0xf0; // Size: 56, Type: struct FAIDataProviderIntValue
			constexpr auto PointOnCircleSpacingMethod = 0x128; // Size: 1, Type: enum class EPointOnCircleSpacingMethod
			constexpr auto ArcDirection = 0x130; // Size: 32, Type: struct FEnvDirection
			constexpr auto ArcAngle = 0x150; // Size: 56, Type: struct FAIDataProviderFloatValue
			constexpr auto AngleRadians = 0x188; // Size: 4, Type: float
			constexpr auto CircleCenter = 0x190; // Size: 8, Type: UEnvQueryContext*
			constexpr auto bIgnoreAnyContextActorsWhenGeneratingCircle = 0x198; // Size: 1, Type: bool
			constexpr auto CircleCenterZOffset = 0x1a0; // Size: 56, Type: struct FAIDataProviderFloatValue
			constexpr auto TraceData = 0x1d8; // Size: 48, Type: struct FEnvTraceData
			constexpr auto bDefineArc = 0x208; // Size: 1, Type: char
	}
} 
