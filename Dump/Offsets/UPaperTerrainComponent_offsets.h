namespace offsets
{
	namespace UPaperTerrainComponent
	{
			constexpr auto TerrainMaterial = 0x470; // Size: 8, Type: struct UPaperTerrainMaterial*
			constexpr auto bClosedSpline = 0x478; // Size: 1, Type: bool
			constexpr auto bFilledSpline = 0x479; // Size: 1, Type: bool
			constexpr auto AssociatedSpline = 0x480; // Size: 8, Type: struct UPaperTerrainSplineComponent*
			constexpr auto RandomSeed = 0x488; // Size: 4, Type: int32_t
			constexpr auto SegmentOverlapAmount = 0x48c; // Size: 4, Type: float
			constexpr auto TerrainColor = 0x490; // Size: 16, Type: struct FLinearColor
			constexpr auto ReparamStepsPerSegment = 0x4a0; // Size: 4, Type: int32_t
			constexpr auto SpriteCollisionDomain = 0x4a4; // Size: 1, Type: enum class ESpriteCollisionMode
			constexpr auto CollisionThickness = 0x4a8; // Size: 4, Type: float
			constexpr auto CachedBodySetup = 0x4b0; // Size: 8, Type: struct UBodySetup*
	}
} 
