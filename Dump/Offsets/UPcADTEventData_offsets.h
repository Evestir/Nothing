namespace offsets
{
	namespace UPcADTEventData
	{
			constexpr auto EventID = 0x30; // Size: 16, Type: struct FString
			constexpr auto durationTime = 0x40; // Size: 4, Type: int32_t
			constexpr auto currentStep = 0x44; // Size: 4, Type: int32_t
			constexpr auto RewardedSteps = 0x48; // Size: 16, Type: struct TArray<char>
	}
} 
