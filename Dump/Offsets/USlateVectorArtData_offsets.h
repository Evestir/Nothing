namespace offsets
{
	namespace USlateVectorArtData
	{
			constexpr auto VertexData = 0x28; // Size: 16, Type: struct TArray<struct FSlateMeshVertex>
			constexpr auto IndexData = 0x38; // Size: 16, Type: struct TArray<uint32_t>
			constexpr auto Material = 0x48; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto ExtentMin = 0x50; // Size: 8, Type: struct FVector2D
			constexpr auto ExtentMax = 0x58; // Size: 8, Type: struct FVector2D
	}
} 
