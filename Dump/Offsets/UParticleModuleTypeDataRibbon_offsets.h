namespace offsets
{
	namespace UParticleModuleTypeDataRibbon
	{
			constexpr auto MaxTessellationBetweenParticles = 0x30; // Size: 4, Type: int32_t
			constexpr auto SheetsPerTrail = 0x34; // Size: 4, Type: int32_t
			constexpr auto MaxTrailCount = 0x38; // Size: 4, Type: int32_t
			constexpr auto MaxParticleInTrailCount = 0x3c; // Size: 4, Type: int32_t
			constexpr auto bDeadTrailsOnDeactivate = 0x40; // Size: 1, Type: char
			constexpr auto bDeadTrailsOnSourceLoss = 0x40; // Size: 1, Type: char
			constexpr auto bClipSourceSegement = 0x40; // Size: 1, Type: char
			constexpr auto bEnablePreviousTangentRecalculation = 0x40; // Size: 1, Type: char
			constexpr auto bTangentRecalculationEveryFrame = 0x40; // Size: 1, Type: char
			constexpr auto bSpawnInitialParticle = 0x40; // Size: 1, Type: char
			constexpr auto RenderAxis = 0x44; // Size: 1, Type: enum class ETrailsRenderAxisOption
			constexpr auto TangentSpawningScalar = 0x48; // Size: 4, Type: float
			constexpr auto bRenderGeometry = 0x4c; // Size: 1, Type: char
			constexpr auto bRenderSpawnPoints = 0x4c; // Size: 1, Type: char
			constexpr auto bRenderTangents = 0x4c; // Size: 1, Type: char
			constexpr auto bRenderTessellation = 0x4c; // Size: 1, Type: char
			constexpr auto TilingDistance = 0x50; // Size: 4, Type: float
			constexpr auto DistanceTessellationStepSize = 0x54; // Size: 4, Type: float
			constexpr auto bEnableTangentDiffInterpScale = 0x58; // Size: 1, Type: char
			constexpr auto bUseLocalRender = 0x58; // Size: 1, Type: char
			constexpr auto TangentTessellationScalar = 0x5c; // Size: 4, Type: float
	}
} 
