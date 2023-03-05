namespace offsets
{
	namespace USmoothHoleFillProperties
	{
			constexpr auto bConstrainToHoleInterior = 0x60; // Size: 1, Type: bool
			constexpr auto RemeshingExteriorRegionWidth = 0x64; // Size: 4, Type: int32_t
			constexpr auto SmoothingExteriorRegionWidth = 0x68; // Size: 4, Type: int32_t
			constexpr auto SmoothingInteriorRegionWidth = 0x6c; // Size: 4, Type: int32_t
			constexpr auto InteriorSmoothness = 0x70; // Size: 4, Type: float
			constexpr auto FillDensityScalar = 0x78; // Size: 8, Type: double
			constexpr auto bProjectDuringRemesh = 0x80; // Size: 1, Type: bool
	}
} 
