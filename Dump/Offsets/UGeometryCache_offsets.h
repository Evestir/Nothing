namespace offsets
{
	namespace UGeometryCache
	{
			constexpr auto Materials = 0x30; // Size: 16, Type: struct TArray<struct UMaterialInterface*>
			constexpr auto Tracks = 0x40; // Size: 16, Type: struct TArray<struct UGeometryCacheTrack*>
			constexpr auto StartFrame = 0x60; // Size: 4, Type: int32_t
			constexpr auto EndFrame = 0x64; // Size: 4, Type: int32_t
			constexpr auto Hash = 0x68; // Size: 8, Type: uint64_t
	}
} 
