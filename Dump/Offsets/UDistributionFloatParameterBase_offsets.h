namespace offsets
{
	namespace UDistributionFloatParameterBase
	{
			constexpr auto ParameterName = 0x40; // Size: 8, Type: struct FName
			constexpr auto MinInput = 0x48; // Size: 4, Type: float
			constexpr auto MaxInput = 0x4c; // Size: 4, Type: float
			constexpr auto MinOutput = 0x50; // Size: 4, Type: float
			constexpr auto MaxOutput = 0x54; // Size: 4, Type: float
			constexpr auto ParamMode = 0x58; // Size: 1, Type: enum class DistributionParamMode
	}
} 
