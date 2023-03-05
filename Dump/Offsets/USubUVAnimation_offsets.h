namespace offsets
{
	namespace USubUVAnimation
	{
			constexpr auto SubUVTexture = 0x28; // Size: 8, Type: struct UTexture2D*
			constexpr auto SubImages_Horizontal = 0x30; // Size: 4, Type: int32_t
			constexpr auto SubImages_Vertical = 0x34; // Size: 4, Type: int32_t
			constexpr auto BoundingMode = 0x38; // Size: 1, Type: enum class ESubUVBoundingVertexCount
			constexpr auto OpacitySourceMode = 0x39; // Size: 1, Type: enum class EOpacitySourceMode
			constexpr auto AlphaThreshold = 0x3c; // Size: 4, Type: float
	}
} 
