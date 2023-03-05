namespace offsets
{
	namespace UBakeMeshAttributeMapsToolProperties
	{
			constexpr auto MapType = 0x60; // Size: 4, Type: enum class EBakeMapType
			constexpr auto Resolution = 0x64; // Size: 4, Type: enum class EBakeTextureResolution
			constexpr auto bUseWorldSpace = 0x68; // Size: 1, Type: bool
			constexpr auto Thickness = 0x6c; // Size: 4, Type: float
			constexpr auto UVLayer = 0x70; // Size: 16, Type: struct FString
			constexpr auto UVLayerNamesList = 0x80; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto Result = 0x90; // Size: 16, Type: struct TArray<struct UTexture2D*>
	}
} 
