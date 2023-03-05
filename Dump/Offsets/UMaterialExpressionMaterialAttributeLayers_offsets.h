namespace offsets
{
	namespace UMaterialExpressionMaterialAttributeLayers
	{
			constexpr auto ParameterName = 0x40; // Size: 8, Type: struct FName
			constexpr auto ExpressionGUID = 0x48; // Size: 16, Type: struct FGuid
			constexpr auto Input = 0x58; // Size: 24, Type: struct FMaterialAttributesInput
			constexpr auto DefaultLayers = 0x70; // Size: 64, Type: struct FMaterialLayersFunctions
			constexpr auto LayerCallers = 0xb0; // Size: 16, Type: struct TArray<struct UMaterialExpressionMaterialFunctionCall*>
			constexpr auto NumActiveLayerCallers = 0xc0; // Size: 4, Type: int32_t
			constexpr auto BlendCallers = 0xc8; // Size: 16, Type: struct TArray<struct UMaterialExpressionMaterialFunctionCall*>
			constexpr auto NumActiveBlendCallers = 0xd8; // Size: 4, Type: int32_t
			constexpr auto bIsLayerGraphBuilt = 0xdc; // Size: 1, Type: bool
	}
} 
