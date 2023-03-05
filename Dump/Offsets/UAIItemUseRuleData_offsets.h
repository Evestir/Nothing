namespace offsets
{
	namespace UAIItemUseRuleData
	{
			constexpr auto AIItemUseRule = 0x30; // Size: 80, Type: struct TMap<enum class EItemType, struct FAIItemUseRule>
			constexpr auto Timeout = 0x80; // Size: 4, Type: float
			constexpr auto IgnoreTimeOutRemainDistance = 0x84; // Size: 4, Type: float
			constexpr auto WaterlockEscapeSetting = 0x88; // Size: 8, Type: struct FAIItemWaterlockEscapeSetting
			constexpr auto Shield_Probability = 0x90; // Size: 4, Type: float
			constexpr auto Angel_Probability = 0x94; // Size: 4, Type: float
			constexpr auto EMP_Probability = 0x98; // Size: 4, Type: float
	}
} 
