namespace offsets
{
	namespace USceneCaptureTexureComponent
	{
			constexpr auto RenderMaterial = 0xc0; // Size: 8, Type: struct UMaterial*
			constexpr auto MaterialInstanceList = 0xc8; // Size: 80, Type: struct TMap<struct TWeakObjectPtr<ASceneCapture2D>, struct FMaterialInfoArray>
			constexpr auto AttachedSceneCaptureMaterials = 0x118; // Size: 80, Type: struct TMap<struct TWeakObjectPtr<USceneCaptureComponent2D>, struct FMaterialInfo>
	}
} 
