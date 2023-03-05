namespace offsets
{
	namespace UPaperTileMap
	{
			constexpr auto MapWidth = 0x28; // Size: 4, Type: int32_t
			constexpr auto MapHeight = 0x2c; // Size: 4, Type: int32_t
			constexpr auto TileWidth = 0x30; // Size: 4, Type: int32_t
			constexpr auto TileHeight = 0x34; // Size: 4, Type: int32_t
			constexpr auto PixelsPerUnrealUnit = 0x38; // Size: 4, Type: float
			constexpr auto SeparationPerTileX = 0x3c; // Size: 4, Type: float
			constexpr auto SeparationPerTileY = 0x40; // Size: 4, Type: float
			constexpr auto SeparationPerLayer = 0x44; // Size: 4, Type: float
			constexpr auto SelectedTileSet = 0x48; // Size: 40, Type: struct TSoftObjectPtr<UPaperTileSet>
			constexpr auto Material = 0x70; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto TileLayers = 0x78; // Size: 16, Type: struct TArray<struct UPaperTileLayer*>
			constexpr auto CollisionThickness = 0x88; // Size: 4, Type: float
			constexpr auto SpriteCollisionDomain = 0x8c; // Size: 1, Type: enum class ESpriteCollisionMode
			constexpr auto ProjectionMode = 0x8d; // Size: 1, Type: enum class ETileMapProjectionMode
			constexpr auto HexSideLength = 0x90; // Size: 4, Type: int32_t
			constexpr auto BodySetup = 0x98; // Size: 8, Type: struct UBodySetup*
			constexpr auto LayerNameIndex = 0xa0; // Size: 4, Type: int32_t
	}
} 
