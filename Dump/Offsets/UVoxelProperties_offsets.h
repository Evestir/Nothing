namespace offsets
{
	namespace UVoxelProperties
	{
			constexpr auto VoxelCount = 0x60; // Size: 4, Type: int32_t
			constexpr auto bAutoSimplify = 0x64; // Size: 1, Type: bool
			constexpr auto bRemoveInternalSurfaces = 0x65; // Size: 1, Type: bool
			constexpr auto SimplifyMaxErrorFactor = 0x68; // Size: 8, Type: double
			constexpr auto CubeRootMinComponentVolume = 0x70; // Size: 8, Type: double
	}
} 
