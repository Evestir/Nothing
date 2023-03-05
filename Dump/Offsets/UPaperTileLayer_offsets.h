namespace offsets
{
	namespace UPaperTileLayer
	{
			constexpr auto LayerName = 0x28; // Size: 24, Type: struct FText
			constexpr auto LayerWidth = 0x40; // Size: 4, Type: int32_t
			constexpr auto LayerHeight = 0x44; // Size: 4, Type: int32_t
			constexpr auto bHiddenInGame = 0x48; // Size: 1, Type: char
			constexpr auto bLayerCollides = 0x48; // Size: 1, Type: char
			constexpr auto bOverrideCollisionThickness = 0x48; // Size: 1, Type: char
			constexpr auto bOverrideCollisionOffset = 0x48; // Size: 1, Type: char
			constexpr auto CollisionThicknessOverride = 0x4c; // Size: 4, Type: float
			constexpr auto CollisionOffsetOverride = 0x50; // Size: 4, Type: float
			constexpr auto LayerColor = 0x54; // Size: 16, Type: struct FLinearColor
			constexpr auto AllocatedWidth = 0x64; // Size: 4, Type: int32_t
			constexpr auto AllocatedHeight = 0x68; // Size: 4, Type: int32_t
			constexpr auto AllocatedCells = 0x70; // Size: 16, Type: struct TArray<struct FPaperTileInfo>
			constexpr auto TileSet = 0x80; // Size: 8, Type: struct UPaperTileSet*
			constexpr auto AllocatedGrid = 0x88; // Size: 16, Type: struct TArray<int32_t>
	}
} 
