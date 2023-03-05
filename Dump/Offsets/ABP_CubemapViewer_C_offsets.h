namespace offsets
{
	namespace ABP_CubemapViewer_C
	{
			constexpr auto UberGraphFrame = 0x230; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto SkyDome = 0x238; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto SceneComponent = 0x240; // Size: 8, Type: struct USceneComponent*
			constexpr auto Cubemap = 0x248; // Size: 8, Type: struct UTextureCube*
			constexpr auto Intensity = 0x250; // Size: 4, Type: float
			constexpr auto Size = 0x254; // Size: 4, Type: float
			constexpr auto LightingDistanceFactor = 0x258; // Size: 4, Type: float
			constexpr auto UseCameraProjection = 0x25c; // Size: 1, Type: bool
			constexpr auto Mesh = 0x260; // Size: 8, Type: struct UStaticMesh*
			constexpr auto HDR_Angle = 0x268; // Size: 4, Type: float
			constexpr auto HDRI_Color = 0x26c; // Size: 16, Type: struct FLinearColor
			constexpr auto ProjectionCenter = 0x27c; // Size: 12, Type: struct FVector
	}
} 
