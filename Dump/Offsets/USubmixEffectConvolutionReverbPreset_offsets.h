namespace offsets
{
	namespace USubmixEffectConvolutionReverbPreset
	{
			constexpr auto ImpulseResponse = 0x68; // Size: 8, Type: struct UAudioImpulseResponse*
			constexpr auto Settings = 0x70; // Size: 40, Type: struct FSubmixEffectConvolutionReverbSettings
			constexpr auto BlockSize = 0x98; // Size: 1, Type: enum class ESubmixEffectConvolutionReverbBlockSize
			constexpr auto bEnableHardwareAcceleration = 0x99; // Size: 1, Type: bool
	}
} 
