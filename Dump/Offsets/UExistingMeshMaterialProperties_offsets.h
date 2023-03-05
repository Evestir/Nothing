namespace offsets
{
	namespace UExistingMeshMaterialProperties
	{
			constexpr auto MaterialMode = 0x60; // Size: 1, Type: enum class ESetMeshMaterialMode
			constexpr auto CheckerDensity = 0x64; // Size: 4, Type: float
			constexpr auto OverrideMaterial = 0x68; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto CheckerMaterial = 0x70; // Size: 8, Type: struct UMaterialInstanceDynamic*
	}
} 
