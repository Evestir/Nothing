namespace offsets
{
	namespace UAnimCompress_PerTrackCompression
	{
			constexpr auto MaxZeroingThreshold = 0x60; // Size: 4, Type: float
			constexpr auto MaxPosDiffBitwise = 0x64; // Size: 4, Type: float
			constexpr auto MaxAngleDiffBitwise = 0x68; // Size: 4, Type: float
			constexpr auto MaxScaleDiffBitwise = 0x6c; // Size: 4, Type: float
			constexpr auto AllowedRotationFormats = 0x70; // Size: 16, Type: struct TArray<enum class AnimationCompressionFormat>
			constexpr auto AllowedTranslationFormats = 0x80; // Size: 16, Type: struct TArray<enum class AnimationCompressionFormat>
			constexpr auto AllowedScaleFormats = 0x90; // Size: 16, Type: struct TArray<enum class AnimationCompressionFormat>
			constexpr auto bResampleAnimation = 0xa0; // Size: 1, Type: char
			constexpr auto ResampledFramerate = 0xa4; // Size: 4, Type: float
			constexpr auto MinKeysForResampling = 0xa8; // Size: 4, Type: int32_t
			constexpr auto bUseAdaptiveError = 0xac; // Size: 1, Type: char
			constexpr auto bUseOverrideForEndEffectors = 0xac; // Size: 1, Type: char
			constexpr auto TrackHeightBias = 0xb0; // Size: 4, Type: int32_t
			constexpr auto ParentingDivisor = 0xb4; // Size: 4, Type: float
			constexpr auto ParentingDivisorExponent = 0xb8; // Size: 4, Type: float
			constexpr auto bUseAdaptiveError2 = 0xbc; // Size: 1, Type: char
			constexpr auto RotationErrorSourceRatio = 0xc0; // Size: 4, Type: float
			constexpr auto TranslationErrorSourceRatio = 0xc4; // Size: 4, Type: float
			constexpr auto ScaleErrorSourceRatio = 0xc8; // Size: 4, Type: float
			constexpr auto MaxErrorPerTrackRatio = 0xcc; // Size: 4, Type: float
			constexpr auto PerturbationProbeSize = 0xd0; // Size: 4, Type: float
	}
} 
