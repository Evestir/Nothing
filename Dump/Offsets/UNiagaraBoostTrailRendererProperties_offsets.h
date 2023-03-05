namespace offsets
{
	namespace UNiagaraBoostTrailRendererProperties
	{
			constexpr auto Material = 0x78; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto MaterialUserParamBinding = 0x80; // Size: 32, Type: struct FNiagaraUserParameterBinding
			constexpr auto CurveTension = 0xa0; // Size: 4, Type: float
			constexpr auto TessellationMode = 0xa4; // Size: 1, Type: enum class ENiagaraBoostTrailTessellationMode
			constexpr auto TessellationFactor = 0xa8; // Size: 4, Type: int32_t
			constexpr auto bUseConstantFactor = 0xac; // Size: 1, Type: bool
			constexpr auto TessellationAngle = 0xb0; // Size: 4, Type: float
			constexpr auto bScreenSpaceTessellation = 0xb4; // Size: 1, Type: bool
			constexpr auto PositionBinding = 0xb8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto ColorBinding = 0x110; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto VelocityBinding = 0x168; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto NormalizedAgeBinding = 0x1c0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto BoostTrailWidthBinding = 0x218; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto BoostTrailIdBinding = 0x270; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto BoostTrailLinkOrderBinding = 0x2c8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto MaterialRandomBinding = 0x320; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterialBinding = 0x378; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterial1Binding = 0x3d0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterial2Binding = 0x428; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterial3Binding = 0x480; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto BoostTrailUVDistance = 0x4d8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto MaterialParameterBindings = 0x530; // Size: 16, Type: struct TArray<struct FNiagaraMaterialAttributeBinding>
	}
} 
