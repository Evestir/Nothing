namespace offsets
{
	namespace UParticleSystem
	{
			constexpr auto UpdateTime_FPS = 0x30; // Size: 4, Type: float
			constexpr auto UpdateTime_Delta = 0x34; // Size: 4, Type: float
			constexpr auto WarmupTime = 0x38; // Size: 4, Type: float
			constexpr auto WarmupTickRate = 0x3c; // Size: 4, Type: float
			constexpr auto Emitters = 0x40; // Size: 16, Type: struct TArray<struct UParticleEmitter*>
			constexpr auto PreviewComponent = 0x50; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto CurveEdSetup = 0x58; // Size: 8, Type: struct UInterpCurveEdSetup*
			constexpr auto LODDistanceCheckTime = 0x60; // Size: 4, Type: float
			constexpr auto MacroUVRadius = 0x64; // Size: 4, Type: float
			constexpr auto LODDistances = 0x68; // Size: 16, Type: struct TArray<float>
			constexpr auto LODSettings = 0x78; // Size: 16, Type: struct TArray<struct FParticleSystemLOD>
			constexpr auto FixedRelativeBoundingBox = 0x88; // Size: 28, Type: struct FBox
			constexpr auto SecondsBeforeInactive = 0xa4; // Size: 4, Type: float
			constexpr auto Delay = 0xa8; // Size: 4, Type: float
			constexpr auto DelayLow = 0xac; // Size: 4, Type: float
			constexpr auto bOrientZAxisTowardCamera = 0xb0; // Size: 1, Type: char
			constexpr auto bUseFixedRelativeBoundingBox = 0xb0; // Size: 1, Type: char
			constexpr auto bShouldResetPeakCounts = 0xb0; // Size: 1, Type: char
			constexpr auto bHasPhysics = 0xb0; // Size: 1, Type: char
			constexpr auto bUseRealtimeThumbnail = 0xb0; // Size: 1, Type: char
			constexpr auto ThumbnailImageOutOfDate = 0xb0; // Size: 1, Type: char
			constexpr auto bUseDelayRange = 0xb1; // Size: 1, Type: char
			constexpr auto bAllowManagedTicking = 0xb1; // Size: 1, Type: char
			constexpr auto bInfluencedLocalPawnActive = 0xb1; // Size: 1, Type: char
			constexpr auto bInfluencedLocalPawnDetail = 0xb1; // Size: 1, Type: char
			constexpr auto bAutoDeactivate = 0xb1; // Size: 1, Type: char
			constexpr auto bRegenerateLODDuplicate = 0xb1; // Size: 1, Type: char
			constexpr auto SystemUpdateMode = 0xb2; // Size: 1, Type: enum class EParticleSystemUpdateMode
			constexpr auto LODMethod = 0xb3; // Size: 1, Type: enum class ParticleSystemLODMethod
			constexpr auto InsignificantReaction = 0xb4; // Size: 1, Type: enum class EParticleSystemInsignificanceReaction
			constexpr auto OcclusionBoundsMethod = 0xb5; // Size: 1, Type: enum class EParticleSystemOcclusionBoundsMethod
			constexpr auto MaxSignificanceLevel = 0xb7; // Size: 1, Type: enum class EParticleSignificanceLevel
			constexpr auto MinTimeBetweenTicks = 0xb8; // Size: 4, Type: uint32_t
			constexpr auto InsignificanceDelay = 0xbc; // Size: 4, Type: float
			constexpr auto MacroUVPosition = 0xc0; // Size: 12, Type: struct FVector
			constexpr auto CustomOcclusionBounds = 0xcc; // Size: 28, Type: struct FBox
			constexpr auto SoloTracking = 0xe8; // Size: 16, Type: struct TArray<struct FLODSoloTrack>
			constexpr auto NamedMaterialSlots = 0xf8; // Size: 16, Type: struct TArray<struct FNamedEmitterMaterial>
	}
} 
