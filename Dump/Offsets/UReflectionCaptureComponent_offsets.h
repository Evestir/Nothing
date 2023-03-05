namespace offsets
{
	namespace UReflectionCaptureComponent
	{
			constexpr auto CaptureOffsetComponent = 0x208; // Size: 8, Type: struct UBillboardComponent*
			constexpr auto ReflectionSourceType = 0x210; // Size: 1, Type: enum class EReflectionSourceType
			constexpr auto MobileReflectionCompression = 0x211; // Size: 1, Type: enum class EMobileReflectionCompression
			constexpr auto Cubemap = 0x218; // Size: 8, Type: struct UTextureCube*
			constexpr auto SourceCubemapAngle = 0x220; // Size: 4, Type: float
			constexpr auto Brightness = 0x224; // Size: 4, Type: float
			constexpr auto bModifyMaxValueRGBM = 0x228; // Size: 1, Type: bool
			constexpr auto MaxValueRGBM = 0x22c; // Size: 4, Type: float
			constexpr auto CaptureOffset = 0x230; // Size: 12, Type: struct FVector
			constexpr auto MapBuildDataId = 0x23c; // Size: 16, Type: struct FGuid
			constexpr auto bUseDiffuseIndirect = 0x24c; // Size: 1, Type: bool
			constexpr auto DiffuseSH[7] = 0x250; // Size: 112, Type: struct FVector4
			constexpr auto CachedEncodedHDRCubemap = 0x2d0; // Size: 8, Type: struct UTextureCube*
	}
} 
