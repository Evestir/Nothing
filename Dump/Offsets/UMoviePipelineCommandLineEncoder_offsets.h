namespace offsets
{
	namespace UMoviePipelineCommandLineEncoder
	{
			constexpr auto FileNameFormatOverride = 0x48; // Size: 16, Type: struct FString
			constexpr auto Quality = 0x58; // Size: 1, Type: enum class EMoviePipelineEncodeQuality
			constexpr auto AdditionalCommandLineArgs = 0x60; // Size: 16, Type: struct FString
			constexpr auto bDeleteSourceFiles = 0x70; // Size: 1, Type: bool
			constexpr auto bSkipEncodeOnRenderCanceled = 0x71; // Size: 1, Type: bool
	}
} 
