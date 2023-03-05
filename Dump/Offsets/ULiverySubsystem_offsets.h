namespace offsets
{
	namespace ULiverySubsystem
	{
			constexpr auto SVGMeshActor = 0x30; // Size: 8, Type: struct ASVGToolsMeshActor*
			constexpr auto ReservedCaptureList = 0x38; // Size: 16, Type: struct TArray<struct FLiveryCaptureInfo>
			constexpr auto bIsCapturing = 0x48; // Size: 1, Type: bool
			constexpr auto PaintCollection = 0x50; // Size: 8, Type: struct ULiveryPaintCollection*
			constexpr auto SVGMeshPool = 0x68; // Size: 80, Type: struct TMap<struct FString, struct USVGToolsMesh*>
			constexpr auto LiveryTexturePool = 0xb8; // Size: 16, Type: struct TArray<struct FLiveryTextureInfo>
			constexpr auto LiveryPaintTransformMap = 0x118; // Size: 80, Type: struct TMap<enum class ELiveryPaintType, struct FLiveryPaintTransform>
			constexpr auto DrawLiveryFrameSkipIndex = 0x168; // Size: 4, Type: int32_t
	}
} 
