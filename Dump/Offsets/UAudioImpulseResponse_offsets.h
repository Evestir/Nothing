namespace offsets
{
	namespace UAudioImpulseResponse
	{
			constexpr auto ImpulseResponse = 0x28; // Size: 16, Type: struct TArray<float>
			constexpr auto NumChannels = 0x38; // Size: 4, Type: int32_t
			constexpr auto SampleRate = 0x3c; // Size: 4, Type: int32_t
			constexpr auto NormalizationVolumeDb = 0x40; // Size: 4, Type: float
			constexpr auto bTrueStereo = 0x44; // Size: 1, Type: bool
			constexpr auto IRData = 0x48; // Size: 16, Type: struct TArray<float>
	}
} 
