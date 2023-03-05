namespace offsets
{
	namespace UPawnNoiseEmitterComponent
	{
			constexpr auto bAIPerceptionSystemCompatibilityMode = 0xb0; // Size: 1, Type: char
			constexpr auto LastRemoteNoisePosition = 0xb4; // Size: 12, Type: struct FVector
			constexpr auto NoiseLifetime = 0xc0; // Size: 4, Type: float
			constexpr auto LastRemoteNoiseVolume = 0xc4; // Size: 4, Type: float
			constexpr auto LastRemoteNoiseTime = 0xc8; // Size: 4, Type: float
			constexpr auto LastLocalNoiseVolume = 0xcc; // Size: 4, Type: float
			constexpr auto LastLocalNoiseTime = 0xd0; // Size: 4, Type: float
	}
} 
