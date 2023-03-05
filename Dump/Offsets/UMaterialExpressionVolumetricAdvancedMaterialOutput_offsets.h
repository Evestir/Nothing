namespace offsets
{
	namespace UMaterialExpressionVolumetricAdvancedMaterialOutput
	{
			constexpr auto PhaseG = 0x40; // Size: 20, Type: struct FExpressionInput
			constexpr auto PhaseG2 = 0x54; // Size: 20, Type: struct FExpressionInput
			constexpr auto PhaseBlend = 0x68; // Size: 20, Type: struct FExpressionInput
			constexpr auto MultiScatteringContribution = 0x7c; // Size: 20, Type: struct FExpressionInput
			constexpr auto MultiScatteringOcclusion = 0x90; // Size: 20, Type: struct FExpressionInput
			constexpr auto MultiScatteringEccentricity = 0xa4; // Size: 20, Type: struct FExpressionInput
			constexpr auto ConservativeDensity = 0xb8; // Size: 20, Type: struct FExpressionInput
			constexpr auto ConstPhaseG = 0xcc; // Size: 4, Type: float
			constexpr auto ConstPhaseG2 = 0xd0; // Size: 4, Type: float
			constexpr auto ConstPhaseBlend = 0xd4; // Size: 4, Type: float
			constexpr auto PerSamplePhaseEvaluation = 0xd8; // Size: 1, Type: bool
			constexpr auto MultiScatteringApproximationOctaveCount = 0xdc; // Size: 4, Type: uint32_t
			constexpr auto ConstMultiScatteringContribution = 0xe0; // Size: 4, Type: float
			constexpr auto ConstMultiScatteringOcclusion = 0xe4; // Size: 4, Type: float
			constexpr auto ConstMultiScatteringEccentricity = 0xe8; // Size: 4, Type: float
			constexpr auto bGroundContribution = 0xec; // Size: 1, Type: bool
			constexpr auto bGrayScaleMaterial = 0xed; // Size: 1, Type: bool
			constexpr auto bRayMarchVolumeShadow = 0xee; // Size: 1, Type: bool
	}
} 
