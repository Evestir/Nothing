namespace offsets
{
	namespace UNiagaraSpriteRendererProperties
	{
			constexpr auto Material = 0x78; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto SourceMode = 0x80; // Size: 1, Type: enum class ENiagaraRendererSourceDataMode
			constexpr auto MaterialUserParamBinding = 0x88; // Size: 32, Type: struct FNiagaraUserParameterBinding
			constexpr auto Alignment = 0xa8; // Size: 1, Type: enum class ENiagaraSpriteAlignment
			constexpr auto FacingMode = 0xa9; // Size: 1, Type: enum class ENiagaraSpriteFacingMode
			constexpr auto PivotInUVSpace = 0xac; // Size: 8, Type: struct FVector2D
			constexpr auto SortMode = 0xb4; // Size: 1, Type: enum class ENiagaraSortMode
			constexpr auto SubImageSize = 0xb8; // Size: 8, Type: struct FVector2D
			constexpr auto bSubImageBlend = 0xc0; // Size: 1, Type: char
			constexpr auto bRemoveHMDRollInVR = 0xc0; // Size: 1, Type: char
			constexpr auto bSortOnlyWhenTranslucent = 0xc0; // Size: 1, Type: char
			constexpr auto bGpuLowLatencyTranslucency = 0xc0; // Size: 1, Type: char
			constexpr auto MinFacingCameraBlendDistance = 0xc4; // Size: 4, Type: float
			constexpr auto MaxFacingCameraBlendDistance = 0xc8; // Size: 4, Type: float
			constexpr auto bEnableCameraDistanceCulling = 0xcc; // Size: 1, Type: char
			constexpr auto MinCameraDistance = 0xd0; // Size: 4, Type: float
			constexpr auto MaxCameraDistance = 0xd4; // Size: 4, Type: float
			constexpr auto RendererVisibility = 0xd8; // Size: 4, Type: uint32_t
			constexpr auto PositionBinding = 0xe0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto ColorBinding = 0x138; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto VelocityBinding = 0x190; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto SpriteRotationBinding = 0x1e8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto SpriteSizeBinding = 0x240; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto SpriteFacingBinding = 0x298; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto SpriteAlignmentBinding = 0x2f0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto SubImageIndexBinding = 0x348; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterialBinding = 0x3a0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterial1Binding = 0x3f8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterial2Binding = 0x450; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterial3Binding = 0x4a8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto CameraOffsetBinding = 0x500; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto UVScaleBinding = 0x558; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto PivotOffsetBinding = 0x5b0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto MaterialRandomBinding = 0x608; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto CustomSortingBinding = 0x660; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto NormalizedAgeBinding = 0x6b8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto RendererVisibilityTagBinding = 0x710; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto MaterialParameterBindings = 0x768; // Size: 16, Type: struct TArray<struct FNiagaraMaterialAttributeBinding>
			constexpr auto PrevPositionBinding = 0x778; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto PrevVelocityBinding = 0x7d0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto PrevSpriteRotationBinding = 0x828; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto PrevSpriteSizeBinding = 0x880; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto PrevSpriteFacingBinding = 0x8d8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto PrevSpriteAlignmentBinding = 0x930; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto PrevCameraOffsetBinding = 0x988; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto PrevPivotOffsetBinding = 0x9e0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
	}
} 
