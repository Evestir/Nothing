namespace offsets
{
	namespace UConstantQNRTSettings
	{
			constexpr auto StartingFrequency = 0x28; // Size: 4, Type: float
			constexpr auto NumBands = 0x2c; // Size: 4, Type: int32_t
			constexpr auto NumBandsPerOctave = 0x30; // Size: 4, Type: float
			constexpr auto AnalysisPeriod = 0x34; // Size: 4, Type: float
			constexpr auto bDownmixToMono = 0x38; // Size: 1, Type: bool
			constexpr auto FFTSize = 0x39; // Size: 1, Type: enum class EConstantQFFTSizeEnum
			constexpr auto WindowType = 0x3a; // Size: 1, Type: enum class EFFTWindowType
			constexpr auto SpectrumType = 0x3b; // Size: 1, Type: enum class EAudioSpectrumType
			constexpr auto BandWidthStretch = 0x3c; // Size: 4, Type: float
			constexpr auto CQTNormalization = 0x40; // Size: 1, Type: enum class EConstantQNormalizationEnum
			constexpr auto NoiseFloorDb = 0x44; // Size: 4, Type: float
	}
} 
