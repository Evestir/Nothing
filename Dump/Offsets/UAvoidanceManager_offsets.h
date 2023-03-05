namespace offsets
{
	namespace UAvoidanceManager
	{
			constexpr auto DefaultTimeToLive = 0x30; // Size: 4, Type: float
			constexpr auto LockTimeAfterAvoid = 0x34; // Size: 4, Type: float
			constexpr auto LockTimeAfterClean = 0x38; // Size: 4, Type: float
			constexpr auto DeltaTimeToPredict = 0x3c; // Size: 4, Type: float
			constexpr auto ArtificialRadiusExpansion = 0x40; // Size: 4, Type: float
			constexpr auto TestHeightDifference = 0x44; // Size: 4, Type: float
			constexpr auto HeightCheckMargin = 0x48; // Size: 4, Type: float
	}
} 
