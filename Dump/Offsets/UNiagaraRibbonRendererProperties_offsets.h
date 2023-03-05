namespace offsets
{
	namespace UNiagaraRibbonRendererProperties
	{
			constexpr auto Material = 0x78; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto MaterialUserParamBinding = 0x80; // Size: 32, Type: struct FNiagaraUserParameterBinding
			constexpr auto FacingMode = 0xa0; // Size: 1, Type: enum class ENiagaraRibbonFacingMode
			constexpr auto UV0Settings = 0xa4; // Size: 36, Type: struct FNiagaraRibbonUVSettings
			constexpr auto UV1Settings = 0xc8; // Size: 36, Type: struct FNiagaraRibbonUVSettings
			constexpr auto DrawDirection = 0xec; // Size: 1, Type: enum class ENiagaraRibbonDrawDirection
			constexpr auto Shape = 0xed; // Size: 1, Type: enum class ENiagaraRibbonShapeMode
			constexpr auto bEnableAccurateGeometry = 0xee; // Size: 1, Type: bool
			constexpr auto WidthSegmentationCount = 0xf0; // Size: 4, Type: int32_t
			constexpr auto MultiPlaneCount = 0xf4; // Size: 4, Type: int32_t
			constexpr auto TubeSubdivisions = 0xf8; // Size: 4, Type: int32_t
			constexpr auto CustomVertices = 0x100; // Size: 16, Type: struct TArray<struct FNiagaraRibbonShapeCustomVertex>
			constexpr auto CurveTension = 0x110; // Size: 4, Type: float
			constexpr auto TessellationMode = 0x114; // Size: 1, Type: enum class ENiagaraRibbonTessellationMode
			constexpr auto TessellationFactor = 0x118; // Size: 4, Type: int32_t
			constexpr auto bUseConstantFactor = 0x11c; // Size: 1, Type: bool
			constexpr auto TessellationAngle = 0x120; // Size: 4, Type: float
			constexpr auto bScreenSpaceTessellation = 0x124; // Size: 1, Type: bool
			constexpr auto PositionBinding = 0x128; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto ColorBinding = 0x180; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto VelocityBinding = 0x1d8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto NormalizedAgeBinding = 0x230; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto RibbonTwistBinding = 0x288; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto RibbonWidthBinding = 0x2e0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto RibbonFacingBinding = 0x338; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto RibbonIdBinding = 0x390; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto RibbonLinkOrderBinding = 0x3e8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto MaterialRandomBinding = 0x440; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterialBinding = 0x498; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterial1Binding = 0x4f0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterial2Binding = 0x548; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterial3Binding = 0x5a0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto RibbonUVDistance = 0x5f8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto U0OverrideBinding = 0x650; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto V0RangeOverrideBinding = 0x6a8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto U1OverrideBinding = 0x700; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto V1RangeOverrideBinding = 0x758; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto MaterialParameterBindings = 0x7b0; // Size: 16, Type: struct TArray<struct FNiagaraMaterialAttributeBinding>
	}
} 
