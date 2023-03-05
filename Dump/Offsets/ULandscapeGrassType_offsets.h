namespace offsets
{
	namespace ULandscapeGrassType
	{
			constexpr auto GrassVarieties = 0x28; // Size: 16, Type: struct TArray<struct FGrassVariety>
			constexpr auto bEnableDensityScaling = 0x38; // Size: 1, Type: char
			constexpr auto GrassMesh = 0x40; // Size: 8, Type: struct UStaticMesh*
			constexpr auto GrassDensity = 0x48; // Size: 4, Type: float
			constexpr auto PlacementJitter = 0x4c; // Size: 4, Type: float
			constexpr auto StartCullDistance = 0x50; // Size: 4, Type: int32_t
			constexpr auto EndCullDistance = 0x54; // Size: 4, Type: int32_t
			constexpr auto RandomRotation = 0x58; // Size: 1, Type: bool
			constexpr auto AlignToSurface = 0x59; // Size: 1, Type: bool
	}
} 
