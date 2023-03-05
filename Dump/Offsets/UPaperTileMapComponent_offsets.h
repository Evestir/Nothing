namespace offsets
{
	namespace UPaperTileMapComponent
	{
			constexpr auto MapWidth = 0x4a8; // Size: 4, Type: int32_t
			constexpr auto MapHeight = 0x4ac; // Size: 4, Type: int32_t
			constexpr auto TileWidth = 0x4b0; // Size: 4, Type: int32_t
			constexpr auto TileHeight = 0x4b4; // Size: 4, Type: int32_t
			constexpr auto DefaultLayerTileSet = 0x4b8; // Size: 8, Type: struct UPaperTileSet*
			constexpr auto Material = 0x4c0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto TileLayers = 0x4c8; // Size: 16, Type: struct TArray<struct UPaperTileLayer*>
			constexpr auto TileMapColor = 0x4d8; // Size: 16, Type: struct FLinearColor
			constexpr auto UseSingleLayerIndex = 0x4e8; // Size: 4, Type: int32_t
			constexpr auto bUseSingleLayer = 0x4ec; // Size: 1, Type: bool
			constexpr auto TileMap = 0x4f0; // Size: 8, Type: struct UPaperTileMap*
	}
} 
