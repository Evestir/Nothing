namespace offsets
{
	namespace UDisplaceMeshCommonProperties
	{
			constexpr auto DisplacementType = 0x60; // Size: 1, Type: enum class EDisplaceMeshToolDisplaceType
			constexpr auto DisplaceIntensity = 0x64; // Size: 4, Type: float
			constexpr auto RandomSeed = 0x68; // Size: 4, Type: int32_t
			constexpr auto Subdivisions = 0x6c; // Size: 4, Type: int32_t
			constexpr auto WeightMap = 0x70; // Size: 8, Type: struct FName
			constexpr auto WeightMapsList = 0x78; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto bInvertWeightMap = 0x88; // Size: 1, Type: bool
			constexpr auto bDisableSizeWarning = 0x89; // Size: 1, Type: bool
	}
} 
