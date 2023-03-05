namespace offsets
{
	namespace UNiagaraMeshRendererProperties
	{
			constexpr auto Meshes = 0x78; // Size: 16, Type: struct TArray<struct FNiagaraMeshRendererMeshProperties>
			constexpr auto SourceMode = 0x88; // Size: 1, Type: enum class ENiagaraRendererSourceDataMode
			constexpr auto SortMode = 0x89; // Size: 1, Type: enum class ENiagaraSortMode
			constexpr auto bOverrideMaterials = 0x8c; // Size: 1, Type: char
			constexpr auto bSortOnlyWhenTranslucent = 0x8c; // Size: 1, Type: char
			constexpr auto bGpuLowLatencyTranslucency = 0x8c; // Size: 1, Type: char
			constexpr auto bSubImageBlend = 0x8c; // Size: 1, Type: char
			constexpr auto bEnableFrustumCulling = 0x8c; // Size: 1, Type: char
			constexpr auto bEnableCameraDistanceCulling = 0x8c; // Size: 1, Type: char
			constexpr auto bEnableMeshFlipbook = 0x8c; // Size: 1, Type: char
			constexpr auto OverrideMaterials = 0x90; // Size: 16, Type: struct TArray<struct FNiagaraMeshMaterialOverride>
			constexpr auto SubImageSize = 0xa0; // Size: 8, Type: struct FVector2D
			constexpr auto FacingMode = 0xa8; // Size: 1, Type: enum class ENiagaraMeshFacingMode
			constexpr auto bLockedAxisEnable = 0xac; // Size: 1, Type: char
			constexpr auto LockedAxis = 0xb0; // Size: 12, Type: struct FVector
			constexpr auto LockedAxisSpace = 0xbc; // Size: 1, Type: enum class ENiagaraMeshLockedAxisSpace
			constexpr auto MinCameraDistance = 0xc0; // Size: 4, Type: float
			constexpr auto MaxCameraDistance = 0xc4; // Size: 4, Type: float
			constexpr auto RendererVisibility = 0xc8; // Size: 4, Type: uint32_t
			constexpr auto PositionBinding = 0xd0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto ColorBinding = 0x128; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto VelocityBinding = 0x180; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto MeshOrientationBinding = 0x1d8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto ScaleBinding = 0x230; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto SubImageIndexBinding = 0x288; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterialBinding = 0x2e0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterial1Binding = 0x338; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterial2Binding = 0x390; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto DynamicMaterial3Binding = 0x3e8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto MaterialRandomBinding = 0x440; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto CustomSortingBinding = 0x498; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto NormalizedAgeBinding = 0x4f0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto CameraOffsetBinding = 0x548; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto RendererVisibilityTagBinding = 0x5a0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto MeshIndexBinding = 0x5f8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto MaterialParameterBindings = 0x650; // Size: 16, Type: struct TArray<struct FNiagaraMaterialAttributeBinding>
			constexpr auto PrevPositionBinding = 0x660; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto PrevScaleBinding = 0x6b8; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto PrevMeshOrientationBinding = 0x710; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto PrevCameraOffsetBinding = 0x768; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto PrevVelocityBinding = 0x7c0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto ParticleMesh = 0x880; // Size: 8, Type: struct UStaticMesh*
			constexpr auto PivotOffset = 0x888; // Size: 12, Type: struct FVector
			constexpr auto PivotOffsetSpace = 0x894; // Size: 1, Type: enum class ENiagaraMeshPivotOffsetSpace
	}
} 
