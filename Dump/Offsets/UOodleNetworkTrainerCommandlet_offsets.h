namespace offsets
{
	namespace UOodleNetworkTrainerCommandlet
	{
			constexpr auto bCompressionTest = 0x80; // Size: 1, Type: bool
			constexpr auto HashTableSize = 0x84; // Size: 4, Type: int32_t
			constexpr auto DictionarySize = 0x88; // Size: 4, Type: int32_t
			constexpr auto DictionaryTrials = 0x8c; // Size: 4, Type: int32_t
			constexpr auto TrialRandomness = 0x90; // Size: 4, Type: int32_t
			constexpr auto TrialGenerations = 0x94; // Size: 4, Type: int32_t
			constexpr auto bNoTrials = 0x98; // Size: 1, Type: bool
	}
} 
