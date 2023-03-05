namespace offsets
{
	namespace UCompositionGraphCaptureProtocol
	{
			constexpr auto IncludeRenderPasses = 0x58; // Size: 16, Type: struct FCompositionGraphCapturePasses
			constexpr auto bCaptureFramesInHDR = 0x68; // Size: 1, Type: bool
			constexpr auto HDRCompressionQuality = 0x6c; // Size: 4, Type: int32_t
			constexpr auto CaptureGamut = 0x70; // Size: 1, Type: enum class EHDRCaptureGamut
			constexpr auto PostProcessingMaterial = 0x78; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto bDisableScreenPercentage = 0x90; // Size: 1, Type: bool
			constexpr auto PostProcessingMaterialPtr = 0x98; // Size: 8, Type: struct UMaterialInterface*
	}
} 
