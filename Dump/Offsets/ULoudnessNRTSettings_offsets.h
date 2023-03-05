namespace offsets
{
	namespace ULoudnessNRTSettings
	{
			constexpr auto AnalysisPeriod = 0x28; // Size: 4, Type: float
			constexpr auto MinimumFrequency = 0x2c; // Size: 4, Type: float
			constexpr auto MaximumFrequency = 0x30; // Size: 4, Type: float
			constexpr auto CurveType = 0x34; // Size: 1, Type: enum class ELoudnessNRTCurveTypeEnum
			constexpr auto NoiseFloorDb = 0x38; // Size: 4, Type: float
	}
} 
