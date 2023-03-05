namespace offsets
{
	namespace UAISenseConfig_Hearing
	{
			constexpr auto Implementation = 0x48; // Size: 8, Type: UAISense_Hearing*
			constexpr auto HearingRange = 0x50; // Size: 4, Type: float
			constexpr auto LoSHearingRange = 0x54; // Size: 4, Type: float
			constexpr auto bUseLoSHearing = 0x58; // Size: 1, Type: char
			constexpr auto DetectionByAffiliation = 0x5c; // Size: 4, Type: struct FAISenseAffiliationFilter
	}
} 
