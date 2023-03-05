namespace offsets
{
	namespace USoundNodeEnveloper
	{
			constexpr auto LoopStart = 0x48; // Size: 4, Type: float
			constexpr auto LoopEnd = 0x4c; // Size: 4, Type: float
			constexpr auto DurationAfterLoop = 0x50; // Size: 4, Type: float
			constexpr auto LoopCount = 0x54; // Size: 4, Type: int32_t
			constexpr auto bLoopIndefinitely = 0x58; // Size: 1, Type: char
			constexpr auto bLoop = 0x58; // Size: 1, Type: char
			constexpr auto VolumeInterpCurve = 0x60; // Size: 8, Type: struct UDistributionFloatConstantCurve*
			constexpr auto PitchInterpCurve = 0x68; // Size: 8, Type: struct UDistributionFloatConstantCurve*
			constexpr auto VolumeCurve = 0x70; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto PitchCurve = 0xf8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto PitchMin = 0x180; // Size: 4, Type: float
			constexpr auto PitchMax = 0x184; // Size: 4, Type: float
			constexpr auto VolumeMin = 0x188; // Size: 4, Type: float
			constexpr auto VolumeMax = 0x18c; // Size: 4, Type: float
	}
} 
