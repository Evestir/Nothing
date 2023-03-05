namespace offsets
{
	namespace UMotoSynthSource
	{
			constexpr auto bConvertTo8Bit = 0x28; // Size: 1, Type: bool
			constexpr auto DownSampleFactor = 0x2c; // Size: 4, Type: float
			constexpr auto RPMCurve = 0x30; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto SourceData = 0xb8; // Size: 16, Type: struct TArray<float>
			constexpr auto SourceDataPCM = 0xc8; // Size: 16, Type: struct TArray<int16_t>
			constexpr auto SourceSampleRate = 0xd8; // Size: 4, Type: int32_t
			constexpr auto GrainTable = 0xe0; // Size: 16, Type: struct TArray<struct FGrainTableEntry>
	}
} 
