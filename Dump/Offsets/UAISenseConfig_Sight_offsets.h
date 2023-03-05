namespace offsets
{
	namespace UAISenseConfig_Sight
	{
			constexpr auto Implementation = 0x48; // Size: 8, Type: UAISense_Sight*
			constexpr auto SightRadius = 0x50; // Size: 4, Type: float
			constexpr auto LoseSightRadius = 0x54; // Size: 4, Type: float
			constexpr auto PeripheralVisionAngleDegrees = 0x58; // Size: 4, Type: float
			constexpr auto DetectionByAffiliation = 0x5c; // Size: 4, Type: struct FAISenseAffiliationFilter
			constexpr auto AutoSuccessRangeFromLastSeenLocation = 0x60; // Size: 4, Type: float
			constexpr auto PointOfViewBackwardOffset = 0x64; // Size: 4, Type: float
			constexpr auto NearClippingRadius = 0x68; // Size: 4, Type: float
	}
} 
