namespace offsets
{
	namespace UItemCubesComponent
	{
			constexpr auto bEnableItemCubes = 0xb0; // Size: 1, Type: bool
			constexpr auto ItemCubeList = 0xb8; // Size: 16, Type: struct TArray<struct AGoItem_Cube*>
			constexpr auto AnimCubes = 0xd0; // Size: 16, Type: struct TArray<struct AGoItem_Cube*>
			constexpr auto AnimCurve = 0xf0; // Size: 8, Type: struct UCurveFloat*
	}
} 
