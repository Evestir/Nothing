namespace offsets
{
	namespace UDistributionVectorParameterBase
	{
			constexpr auto ParameterName = 0x50; // Size: 8, Type: struct FName
			constexpr auto MinInput = 0x58; // Size: 12, Type: struct FVector
			constexpr auto MaxInput = 0x64; // Size: 12, Type: struct FVector
			constexpr auto MinOutput = 0x70; // Size: 12, Type: struct FVector
			constexpr auto MaxOutput = 0x7c; // Size: 12, Type: struct FVector
			constexpr auto ParamModes[3] = 0x88; // Size: 3, Type: enum class DistributionParamMode
	}
} 
