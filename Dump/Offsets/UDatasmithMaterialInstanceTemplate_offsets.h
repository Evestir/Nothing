namespace offsets
{
	namespace UDatasmithMaterialInstanceTemplate
	{
			constexpr auto ParentMaterial = 0x30; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto ScalarParameterValues = 0x58; // Size: 80, Type: struct TMap<struct FName, float>
			constexpr auto VectorParameterValues = 0xa8; // Size: 80, Type: struct TMap<struct FName, struct FLinearColor>
			constexpr auto TextureParameterValues = 0xf8; // Size: 80, Type: struct TMap<struct FName, struct TSoftObjectPtr<UTexture>>
			constexpr auto StaticParameters = 0x148; // Size: 80, Type: struct FDatasmithStaticParameterSetTemplate
	}
} 
