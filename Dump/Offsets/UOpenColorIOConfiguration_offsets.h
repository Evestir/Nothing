namespace offsets
{
	namespace UOpenColorIOConfiguration
	{
			constexpr auto ConfigurationFile = 0x28; // Size: 16, Type: struct FFilePath
			constexpr auto DesiredColorSpaces = 0x38; // Size: 16, Type: struct TArray<struct FOpenColorIOColorSpace>
			constexpr auto ColorTransforms = 0x48; // Size: 16, Type: struct TArray<struct UOpenColorIOColorTransform*>
	}
} 
