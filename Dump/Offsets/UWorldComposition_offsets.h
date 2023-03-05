namespace offsets
{
	namespace UWorldComposition
	{
			constexpr auto TilesStreaming = 0x48; // Size: 16, Type: struct TArray<struct ULevelStreaming*>
			constexpr auto TilesStreamingTimeThreshold = 0x58; // Size: 8, Type: double
			constexpr auto bLoadAllTilesDuringCinematic = 0x60; // Size: 1, Type: bool
			constexpr auto bRebaseOriginIn3DSpace = 0x61; // Size: 1, Type: bool
			constexpr auto RebaseOriginDistance = 0x64; // Size: 4, Type: float
	}
} 
