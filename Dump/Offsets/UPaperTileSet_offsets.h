namespace offsets
{
	namespace UPaperTileSet
	{
			constexpr auto TileSize = 0x28; // Size: 8, Type: struct FIntPoint
			constexpr auto TileSheet = 0x30; // Size: 8, Type: struct UTexture2D*
			constexpr auto AdditionalSourceTextures = 0x38; // Size: 16, Type: struct TArray<struct UTexture*>
			constexpr auto BorderMargin = 0x48; // Size: 16, Type: struct FIntMargin
			constexpr auto PerTileSpacing = 0x58; // Size: 8, Type: struct FIntPoint
			constexpr auto DrawingOffset = 0x60; // Size: 8, Type: struct FIntPoint
			constexpr auto WidthInTiles = 0x68; // Size: 4, Type: int32_t
			constexpr auto HeightInTiles = 0x6c; // Size: 4, Type: int32_t
			constexpr auto AllocatedWidth = 0x70; // Size: 4, Type: int32_t
			constexpr auto AllocatedHeight = 0x74; // Size: 4, Type: int32_t
			constexpr auto PerTileData = 0x78; // Size: 16, Type: struct TArray<struct FPaperTileMetadata>
			constexpr auto Terrains = 0x88; // Size: 16, Type: struct TArray<struct FPaperTileSetTerrain>
			constexpr auto TileWidth = 0x98; // Size: 4, Type: int32_t
			constexpr auto TileHeight = 0x9c; // Size: 4, Type: int32_t
			constexpr auto Margin = 0xa0; // Size: 4, Type: int32_t
			constexpr auto Spacing = 0xa4; // Size: 4, Type: int32_t
	}
} 
