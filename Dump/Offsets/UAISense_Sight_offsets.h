namespace offsets
{
	namespace UAISense_Sight
	{
			constexpr auto MaxTracesPerTick = 0x148; // Size: 4, Type: int32_t
			constexpr auto MinQueriesPerTimeSliceCheck = 0x14c; // Size: 4, Type: int32_t
			constexpr auto MaxTimeSlicePerTick = 0x150; // Size: 8, Type: double
			constexpr auto HighImportanceQueryDistanceThreshold = 0x158; // Size: 4, Type: float
			constexpr auto MaxQueryImportance = 0x160; // Size: 4, Type: float
			constexpr auto SightLimitQueryImportance = 0x164; // Size: 4, Type: float
	}
} 
