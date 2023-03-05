namespace offsets
{
	namespace UNiagaraDataInterfaceCurveBase
	{
			constexpr auto ShaderLUT = 0x38; // Size: 16, Type: struct TArray<float>
			constexpr auto LUTMinTime = 0x48; // Size: 4, Type: float
			constexpr auto LUTMaxTime = 0x4c; // Size: 4, Type: float
			constexpr auto LUTInvTimeRange = 0x50; // Size: 4, Type: float
			constexpr auto LUTNumSamplesMinusOne = 0x54; // Size: 4, Type: float
			constexpr auto bUseLUT = 0x58; // Size: 1, Type: char
			constexpr auto bExposeCurve = 0x58; // Size: 1, Type: char
			constexpr auto ExposedName = 0x5c; // Size: 8, Type: struct FName
			constexpr auto ExposedTexture = 0x68; // Size: 8, Type: struct UTexture2D*
	}
} 
