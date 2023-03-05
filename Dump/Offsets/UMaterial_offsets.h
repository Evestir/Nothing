namespace offsets
{
	namespace UMaterial
	{
			constexpr auto PhysMaterial = 0x98; // Size: 8, Type: struct UPhysicalMaterial*
			constexpr auto PhysMaterialMask = 0xa0; // Size: 8, Type: struct UPhysicalMaterialMask*
			constexpr auto PhysicalMaterialMap[8] = 0xa8; // Size: 64, Type: struct UPhysicalMaterial*
			constexpr auto Metallic = 0xe8; // Size: 20, Type: struct FScalarMaterialInput
			constexpr auto Specular = 0xfc; // Size: 20, Type: struct FScalarMaterialInput
			constexpr auto Anisotropy = 0x110; // Size: 20, Type: struct FScalarMaterialInput
			constexpr auto Normal = 0x124; // Size: 20, Type: struct FVectorMaterialInput
			constexpr auto Tangent = 0x138; // Size: 20, Type: struct FVectorMaterialInput
			constexpr auto EmissiveColor = 0x14c; // Size: 20, Type: struct FColorMaterialInput
			constexpr auto MaterialDomain = 0x160; // Size: 1, Type: enum class EMaterialDomain
			constexpr auto BlendMode = 0x161; // Size: 1, Type: enum class EBlendMode
			constexpr auto DecalBlendMode = 0x162; // Size: 1, Type: enum class EDecalBlendMode
			constexpr auto MaterialDecalResponse = 0x163; // Size: 1, Type: enum class EMaterialDecalResponse
			constexpr auto ShadingModel = 0x164; // Size: 1, Type: enum class EMaterialShadingModel
			constexpr auto bCastDynamicShadowAsMasked = 0x165; // Size: 1, Type: char
			constexpr auto ShadingModels = 0x166; // Size: 2, Type: struct FMaterialShadingModelField
			constexpr auto OpacityMaskClipValue = 0x168; // Size: 4, Type: float
			constexpr auto WorldPositionOffset = 0x16c; // Size: 20, Type: struct FVectorMaterialInput
			constexpr auto Refraction = 0x180; // Size: 20, Type: struct FScalarMaterialInput
			constexpr auto MaterialAttributes = 0x194; // Size: 24, Type: struct FMaterialAttributesInput
			constexpr auto PixelDepthOffset = 0x1ac; // Size: 20, Type: struct FScalarMaterialInput
			constexpr auto ShadingModelFromMaterialExpression = 0x1c0; // Size: 20, Type: struct FShadingModelMaterialInput
			constexpr auto bEnableSeparateTranslucency = 0x1d4; // Size: 1, Type: char
			constexpr auto bEnableResponsiveAA = 0x1d4; // Size: 1, Type: char
			constexpr auto bScreenSpaceReflections = 0x1d4; // Size: 1, Type: char
			constexpr auto bContactShadows = 0x1d4; // Size: 1, Type: char
			constexpr auto TwoSided = 0x1d4; // Size: 1, Type: char
			constexpr auto CastShadowCullMode = 0x1d5; // Size: 1, Type: enum class ECastShadowCullMode
			constexpr auto DitheredLODTransition = 0x1d6; // Size: 1, Type: char
			constexpr auto DitherOpacityMask = 0x1d6; // Size: 1, Type: char
			constexpr auto bAllowNegativeEmissiveColor = 0x1d6; // Size: 1, Type: char
			constexpr auto TranslucencyLightingMode = 0x1d7; // Size: 1, Type: enum class ETranslucencyLightingMode
			constexpr auto bEnableMobileSeparateTranslucency = 0x1d8; // Size: 1, Type: char
			constexpr auto NumCustomizedUVs = 0x1dc; // Size: 4, Type: int32_t
			constexpr auto TranslucencyDirectionalLightingIntensity = 0x1e0; // Size: 4, Type: float
			constexpr auto TranslucentShadowDensityScale = 0x1e4; // Size: 4, Type: float
			constexpr auto TranslucentSelfShadowDensityScale = 0x1e8; // Size: 4, Type: float
			constexpr auto TranslucentSelfShadowSecondDensityScale = 0x1ec; // Size: 4, Type: float
			constexpr auto TranslucentSelfShadowSecondOpacity = 0x1f0; // Size: 4, Type: float
			constexpr auto TranslucentBackscatteringExponent = 0x1f4; // Size: 4, Type: float
			constexpr auto TranslucentMultipleScatteringExtinction = 0x1f8; // Size: 16, Type: struct FLinearColor
			constexpr auto TranslucentShadowStartOffset = 0x208; // Size: 4, Type: float
			constexpr auto bDisableDepthTest = 0x20c; // Size: 1, Type: char
			constexpr auto bWriteOnlyAlpha = 0x20c; // Size: 1, Type: char
			constexpr auto bGenerateSphericalParticleNormals = 0x20c; // Size: 1, Type: char
			constexpr auto bTangentSpaceNormal = 0x20c; // Size: 1, Type: char
			constexpr auto bUseEmissiveForDynamicAreaLighting = 0x20c; // Size: 1, Type: char
			constexpr auto bBlockGI = 0x20c; // Size: 1, Type: char
			constexpr auto bUsedAsSpecialEngineMaterial = 0x20c; // Size: 1, Type: char
			constexpr auto bUsedWithSkeletalMesh = 0x20c; // Size: 1, Type: char
			constexpr auto bUsedWithEditorCompositing = 0x20d; // Size: 1, Type: char
			constexpr auto bUsedWithParticleSprites = 0x20d; // Size: 1, Type: char
			constexpr auto bUsedWithBeamTrails = 0x20d; // Size: 1, Type: char
			constexpr auto bUsedWithMeshParticles = 0x20d; // Size: 1, Type: char
			constexpr auto bUsedWithNiagaraSprites = 0x20d; // Size: 1, Type: char
			constexpr auto bUsedWithNiagaraRibbons = 0x20d; // Size: 1, Type: char
			constexpr auto bUsedWithNiagaraMeshParticles = 0x20d; // Size: 1, Type: char
			constexpr auto bUsedWithGeometryCache = 0x20d; // Size: 1, Type: char
			constexpr auto bUsedWithStaticLighting = 0x20e; // Size: 1, Type: char
			constexpr auto bUsedWithMorphTargets = 0x20e; // Size: 1, Type: char
			constexpr auto bUsedWithSplineMeshes = 0x20e; // Size: 1, Type: char
			constexpr auto bUsedWithInstancedStaticMeshes = 0x20e; // Size: 1, Type: char
			constexpr auto bUsedWithGeometryCollections = 0x20e; // Size: 1, Type: char
			constexpr auto bUsesDistortion = 0x20e; // Size: 1, Type: char
			constexpr auto bUsedWithClothing = 0x20e; // Size: 1, Type: char
			constexpr auto bUsedWithWater = 0x210; // Size: 1, Type: char
			constexpr auto bUsedWithHairStrands = 0x210; // Size: 1, Type: char
			constexpr auto bUsedWithLidarPointCloud = 0x210; // Size: 1, Type: char
			constexpr auto bUsedWithVirtualHeightfieldMesh = 0x210; // Size: 1, Type: char
			constexpr auto bUsedWithUI = 0x214; // Size: 1, Type: char
			constexpr auto bAutomaticallySetUsageInEditor = 0x214; // Size: 1, Type: char
			constexpr auto bFullyRough = 0x214; // Size: 1, Type: char
			constexpr auto bFullyRoughOnMobile = 0x214; // Size: 1, Type: char
			constexpr auto bMicroShadowing = 0x218; // Size: 1, Type: char
			constexpr auto bSimpleAO = 0x218; // Size: 1, Type: char
			constexpr auto bMinRoughnessToSpecularScale = 0x218; // Size: 1, Type: char
			constexpr auto bForwardScreenSpaceReflection = 0x218; // Size: 1, Type: char
			constexpr auto bTranslucentForwardSSR = 0x218; // Size: 1, Type: char
			constexpr auto bDrawDecalWithLightingOnMobile = 0x218; // Size: 1, Type: char
			constexpr auto bForceSingleScatteringBRDF = 0x218; // Size: 1, Type: char
			constexpr auto bUseFullPrecision = 0x21c; // Size: 1, Type: char
			constexpr auto bUseLightmapDirectionality = 0x21c; // Size: 1, Type: char
			constexpr auto bUseAlphaToCoverage = 0x21c; // Size: 1, Type: char
			constexpr auto bForwardRenderUsePreintegratedGFForSimpleIBL = 0x220; // Size: 1, Type: char
			constexpr auto bUseHQForwardReflections = 0x224; // Size: 1, Type: char
			constexpr auto bForceLQForwardReflectionsOnMobile = 0x224; // Size: 1, Type: char
			constexpr auto bUseTranslucentDepth = 0x224; // Size: 1, Type: char
			constexpr auto bForwardBlendsSkyLightCubemaps = 0x224; // Size: 1, Type: char
			constexpr auto bUsePlanarForwardReflections = 0x224; // Size: 1, Type: char
			constexpr auto bForceNoPlanarReflectionsOnMobile = 0x224; // Size: 1, Type: char
			constexpr auto bNormalCurvatureToRoughness = 0x224; // Size: 1, Type: char
			constexpr auto D3D11TessellationMode = 0x225; // Size: 1, Type: enum class EMaterialTessellationMode
			constexpr auto bEnableCrackFreeDisplacement = 0x226; // Size: 1, Type: char
			constexpr auto bEnableAdaptiveTessellation = 0x226; // Size: 1, Type: char
			constexpr auto AllowTranslucentCustomDepthWrites = 0x226; // Size: 1, Type: char
			constexpr auto Wireframe = 0x226; // Size: 1, Type: char
			constexpr auto WriteDepthToTranslucentMaterial = 0x226; // Size: 1, Type: char
			constexpr auto ShadingRate = 0x227; // Size: 1, Type: enum class EMaterialShadingRate
			constexpr auto bCanMaskedBeAssumedOpaque = 0x228; // Size: 1, Type: char
			constexpr auto bIsMasked = 0x228; // Size: 1, Type: char
			constexpr auto bIsPreviewMaterial = 0x228; // Size: 1, Type: char
			constexpr auto bIsFunctionPreviewMaterial = 0x228; // Size: 1, Type: char
			constexpr auto bUseMaterialAttributes = 0x228; // Size: 1, Type: char
			constexpr auto bCastRayTracedShadows = 0x228; // Size: 1, Type: char
			constexpr auto bUseTranslucencyVertexFog = 0x228; // Size: 1, Type: char
			constexpr auto bApplyCloudFogging = 0x228; // Size: 1, Type: char
			constexpr auto bIsSky = 0x229; // Size: 1, Type: char
			constexpr auto bComputeFogPerPixel = 0x229; // Size: 1, Type: char
			constexpr auto bOutputTranslucentVelocity = 0x229; // Size: 1, Type: char
			constexpr auto bAllowDevelopmentShaderCompile = 0x229; // Size: 1, Type: char
			constexpr auto bIsMaterialEditorStatsMaterial = 0x229; // Size: 1, Type: char
			constexpr auto BlendableLocation = 0x22a; // Size: 1, Type: enum class EBlendableLocation
			constexpr auto BlendableOutputAlpha = 0x22b; // Size: 1, Type: char
			constexpr auto bEnableStencilTest = 0x22b; // Size: 1, Type: char
			constexpr auto StencilCompare = 0x22c; // Size: 1, Type: enum class EMaterialStencilCompare
			constexpr auto StencilRefValue = 0x22d; // Size: 1, Type: char
			constexpr auto RefractionMode = 0x22e; // Size: 1, Type: enum class ERefractionMode
			constexpr auto BlendablePriority = 0x230; // Size: 4, Type: int32_t
			constexpr auto bIsBlendable = 0x234; // Size: 1, Type: char
			constexpr auto UsageFlagWarnings = 0x238; // Size: 4, Type: uint32_t
			constexpr auto RefractionDepthBias = 0x23c; // Size: 4, Type: float
			constexpr auto StateId = 0x240; // Size: 16, Type: struct FGuid
			constexpr auto MaxDisplacement = 0x250; // Size: 4, Type: float
			constexpr auto CachedExpressionData = 0x288; // Size: 472, Type: struct FMaterialCachedExpressionData
	}
} 
