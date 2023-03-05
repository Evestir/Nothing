namespace offsets
{
	namespace USoundNodeOscillator
	{
			constexpr auto bModulateVolume = 0x48; // Size: 1, Type: char
			constexpr auto bModulatePitch = 0x48; // Size: 1, Type: char
			constexpr auto AmplitudeMin = 0x4c; // Size: 4, Type: float
			constexpr auto AmplitudeMax = 0x50; // Size: 4, Type: float
			constexpr auto FrequencyMin = 0x54; // Size: 4, Type: float
			constexpr auto FrequencyMax = 0x58; // Size: 4, Type: float
			constexpr auto OffsetMin = 0x5c; // Size: 4, Type: float
			constexpr auto OffsetMax = 0x60; // Size: 4, Type: float
			constexpr auto CenterMin = 0x64; // Size: 4, Type: float
			constexpr auto CenterMax = 0x68; // Size: 4, Type: float
	}
} 
