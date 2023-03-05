namespace offsets
{
	namespace UWaveScalar
	{
			constexpr auto Magnitude = 0xb0; // Size: 4, Type: float
			constexpr auto position = 0xb4; // Size: 12, Type: struct FVector
			constexpr auto Wavelength = 0xc0; // Size: 4, Type: float
			constexpr auto Period = 0xc4; // Size: 4, Type: float
			constexpr auto Function = 0xc8; // Size: 1, Type: enum class EWaveFunctionType
			constexpr auto Falloff = 0xc9; // Size: 1, Type: enum class EFieldFalloffType
	}
} 
