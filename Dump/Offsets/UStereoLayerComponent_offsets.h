namespace offsets
{
	namespace UStereoLayerComponent
	{
			constexpr auto bLiveTexture = 0x208; // Size: 1, Type: char
			constexpr auto bSupportsDepth = 0x208; // Size: 1, Type: char
			constexpr auto bNoAlphaChannel = 0x208; // Size: 1, Type: char
			constexpr auto Texture = 0x210; // Size: 8, Type: struct UTexture*
			constexpr auto LeftTexture = 0x218; // Size: 8, Type: struct UTexture*
			constexpr auto bQuadPreserveTextureRatio = 0x220; // Size: 1, Type: char
			constexpr auto QuadSize = 0x224; // Size: 8, Type: struct FVector2D
			constexpr auto UVRect = 0x22c; // Size: 20, Type: struct FBox2D
			constexpr auto CylinderRadius = 0x240; // Size: 4, Type: float
			constexpr auto CylinderOverlayArc = 0x244; // Size: 4, Type: float
			constexpr auto CylinderHeight = 0x248; // Size: 4, Type: int32_t
			constexpr auto EquirectProps = 0x24c; // Size: 72, Type: struct FEquirectProps
			constexpr auto StereoLayerType = 0x294; // Size: 1, Type: enum class EStereoLayerType
			constexpr auto StereoLayerShape = 0x295; // Size: 1, Type: enum class EStereoLayerShape
			constexpr auto Shape = 0x298; // Size: 8, Type: struct UStereoLayerShape*
			constexpr auto Priority = 0x2a0; // Size: 4, Type: int32_t
	}
} 
