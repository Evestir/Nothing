namespace offsets
{
	namespace UParticleModuleRequired
	{
			constexpr auto Material = 0x30; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto MinFacingCameraBlendDistance = 0x38; // Size: 4, Type: float
			constexpr auto MaxFacingCameraBlendDistance = 0x3c; // Size: 4, Type: float
			constexpr auto EmitterOrigin = 0x40; // Size: 12, Type: struct FVector
			constexpr auto EmitterRotation = 0x4c; // Size: 12, Type: struct FRotator
			constexpr auto ScreenAlignment = 0x58; // Size: 1, Type: enum class EParticleScreenAlignment
			constexpr auto bUseLocalSpace = 0x59; // Size: 1, Type: char
			constexpr auto bKillOnDeactivate = 0x59; // Size: 1, Type: char
			constexpr auto bKillOnCompleted = 0x59; // Size: 1, Type: char
			constexpr auto SortMode = 0x5a; // Size: 1, Type: enum class EParticleSortMode
			constexpr auto bUseLegacyEmitterTime = 0x5b; // Size: 1, Type: char
			constexpr auto bRemoveHMDRoll = 0x5b; // Size: 1, Type: char
			constexpr auto bEmitterDurationUseRange = 0x5b; // Size: 1, Type: char
			constexpr auto EmitterDuration = 0x5c; // Size: 4, Type: float
			constexpr auto SpawnRate = 0x60; // Size: 48, Type: struct FRawDistributionFloat
			constexpr auto BurstList = 0x90; // Size: 16, Type: struct TArray<struct FParticleBurst>
			constexpr auto EmitterDelay = 0xa0; // Size: 4, Type: float
			constexpr auto EmitterDelayLow = 0xa4; // Size: 4, Type: float
			constexpr auto bDelayFirstLoopOnly = 0xa8; // Size: 1, Type: char
			constexpr auto InterpolationMethod = 0xa9; // Size: 1, Type: enum class EParticleSubUVInterpMethod
			constexpr auto bScaleUV = 0xaa; // Size: 1, Type: char
			constexpr auto bEmitterDelayUseRange = 0xaa; // Size: 1, Type: char
			constexpr auto ParticleBurstMethod = 0xab; // Size: 1, Type: enum class EParticleBurstMethod
			constexpr auto bOverrideSystemMacroUV = 0xac; // Size: 1, Type: char
			constexpr auto bUseMaxDrawCount = 0xac; // Size: 1, Type: char
			constexpr auto OpacitySourceMode = 0xad; // Size: 1, Type: enum class EOpacitySourceMode
			constexpr auto EmitterNormalsMode = 0xae; // Size: 1, Type: enum class EEmitterNormalsMode
			constexpr auto bOrbitModuleAffectsVelocityAlignment = 0xaf; // Size: 1, Type: char
			constexpr auto SubImages_Horizontal = 0xb0; // Size: 4, Type: int32_t
			constexpr auto SubImages_Vertical = 0xb4; // Size: 4, Type: int32_t
			constexpr auto RandomImageTime = 0xb8; // Size: 4, Type: float
			constexpr auto RandomImageChanges = 0xbc; // Size: 4, Type: int32_t
			constexpr auto MacroUVPosition = 0xc0; // Size: 12, Type: struct FVector
			constexpr auto MacroUVRadius = 0xcc; // Size: 4, Type: float
			constexpr auto UVFlippingMode = 0xd0; // Size: 1, Type: enum class EParticleUVFlipMode
			constexpr auto BoundingMode = 0xd1; // Size: 1, Type: enum class ESubUVBoundingVertexCount
			constexpr auto bDurationRecalcEachLoop = 0xd2; // Size: 1, Type: char
			constexpr auto NormalsSphereCenter = 0xd4; // Size: 12, Type: struct FVector
			constexpr auto AlphaThreshold = 0xe0; // Size: 4, Type: float
			constexpr auto EmitterLoops = 0xe4; // Size: 4, Type: int32_t
			constexpr auto CutoutTexture = 0xe8; // Size: 8, Type: struct UTexture2D*
			constexpr auto MaxDrawCount = 0xf0; // Size: 4, Type: int32_t
			constexpr auto EmitterDurationLow = 0xf4; // Size: 4, Type: float
			constexpr auto NormalsCylinderDirection = 0xf8; // Size: 12, Type: struct FVector
			constexpr auto NamedMaterialOverrides = 0x108; // Size: 16, Type: struct TArray<struct FName>
	}
} 
