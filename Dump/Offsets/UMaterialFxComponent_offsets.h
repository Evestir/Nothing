namespace offsets
{
	namespace UMaterialFxComponent
	{
			constexpr auto MaterialFxStopped = 0xe8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto MaterialMap = 0xf8; // Size: 80, Type: struct TMap<struct UMeshComponent*, struct FMaterialFxArray>
			constexpr auto CachedMaterials = 0x148; // Size: 16, Type: struct TArray<struct UMaterialInterface*>
			constexpr auto MaterialsForUpdate = 0x158; // Size: 16, Type: struct TArray<struct FMaterialFxSeqIndex>
			constexpr auto bUseFastSetMaterial = 0x168; // Size: 1, Type: bool
			constexpr auto WeightCurve = 0x198; // Size: 8, Type: struct UCurveFloat*
			constexpr auto CycleCurve = 0x1a8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto DataAsset = 0x1b0; // Size: 8, Type: struct UMaterialFxDataAsset*
	}
} 
