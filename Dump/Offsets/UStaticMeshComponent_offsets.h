namespace offsets
{
	namespace UStaticMeshComponent
	{
			constexpr auto ForcedLodModel = 0x4a8; // Size: 4, Type: int32_t
			constexpr auto PreviousLODLevel = 0x4ac; // Size: 4, Type: int32_t
			constexpr auto MinLOD = 0x4b0; // Size: 4, Type: int32_t
			constexpr auto SubDivisionStepSize = 0x4b4; // Size: 4, Type: int32_t
			constexpr auto StaticMesh = 0x4b8; // Size: 8, Type: struct UStaticMesh*
			constexpr auto WireframeColorOverride = 0x4c0; // Size: 4, Type: struct FColor
			constexpr auto bEvaluateWorldPositionOffset = 0x4c4; // Size: 1, Type: char
			constexpr auto bOverrideWireframeColor = 0x4c4; // Size: 1, Type: char
			constexpr auto bOverrideMinLod = 0x4c4; // Size: 1, Type: char
			constexpr auto bOverrideNavigationExport = 0x4c4; // Size: 1, Type: char
			constexpr auto bForceNavigationObstacle = 0x4c4; // Size: 1, Type: char
			constexpr auto bDisallowMeshPaintPerInstance = 0x4c4; // Size: 1, Type: char
			constexpr auto bIgnoreInstanceForTextureStreaming = 0x4c4; // Size: 1, Type: char
			constexpr auto bOverrideLightMapRes = 0x4c4; // Size: 1, Type: char
			constexpr auto bCastDistanceFieldIndirectShadow = 0x4c5; // Size: 1, Type: char
			constexpr auto bOverrideDistanceFieldSelfShadowBias = 0x4c5; // Size: 1, Type: char
			constexpr auto bUseSubDivisions = 0x4c5; // Size: 1, Type: char
			constexpr auto bUseDefaultCollision = 0x4c5; // Size: 1, Type: char
			constexpr auto bReverseCulling = 0x4c5; // Size: 1, Type: char
			constexpr auto OverriddenLightMapRes = 0x4c8; // Size: 4, Type: int32_t
			constexpr auto DistanceFieldIndirectShadowMinVisibility = 0x4cc; // Size: 4, Type: float
			constexpr auto DistanceFieldSelfShadowBias = 0x4d0; // Size: 4, Type: float
			constexpr auto StreamingDistanceMultiplier = 0x4d4; // Size: 4, Type: float
			constexpr auto LODData = 0x4d8; // Size: 16, Type: struct TArray<struct FStaticMeshComponentLODInfo>
			constexpr auto StreamingTextureData = 0x4e8; // Size: 16, Type: struct TArray<struct FStreamingTextureBuildInfo>
			constexpr auto bUseMovableStaticMeshLightmass = 0x4f8; // Size: 1, Type: char
			constexpr auto LightmassSettings = 0x4fc; // Size: 24, Type: struct FLightmassPrimitiveSettings
	}
} 
