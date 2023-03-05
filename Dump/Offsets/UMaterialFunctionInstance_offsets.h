namespace offsets
{
	namespace UMaterialFunctionInstance
	{
			constexpr auto Parent = 0x40; // Size: 8, Type: struct UMaterialFunctionInterface*
			constexpr auto Base = 0x48; // Size: 8, Type: struct UMaterialFunctionInterface*
			constexpr auto ScalarParameterValues = 0x50; // Size: 16, Type: struct TArray<struct FScalarParameterValue>
			constexpr auto VectorParameterValues = 0x60; // Size: 16, Type: struct TArray<struct FVectorParameterValue>
			constexpr auto TextureParameterValues = 0x70; // Size: 16, Type: struct TArray<struct FTextureParameterValue>
			constexpr auto FontParameterValues = 0x80; // Size: 16, Type: struct TArray<struct FFontParameterValue>
			constexpr auto StaticSwitchParameterValues = 0x90; // Size: 16, Type: struct TArray<struct FStaticSwitchParameter>
			constexpr auto StaticComponentMaskParameterValues = 0xa0; // Size: 16, Type: struct TArray<struct FStaticComponentMaskParameter>
			constexpr auto RuntimeVirtualTextureParameterValues = 0xb0; // Size: 16, Type: struct TArray<struct FRuntimeVirtualTextureParameterValue>
	}
} 
