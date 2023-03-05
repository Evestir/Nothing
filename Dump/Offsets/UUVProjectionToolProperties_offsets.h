namespace offsets
{
	namespace UUVProjectionToolProperties
	{
			constexpr auto UVProjectionMethod = 0x60; // Size: 1, Type: enum class EUVProjectionMethod
			constexpr auto ProjectionPrimitiveScale = 0x64; // Size: 12, Type: struct FVector
			constexpr auto CylinderProjectToTopOrBottomAngleThreshold = 0x70; // Size: 4, Type: float
			constexpr auto UVScale = 0x74; // Size: 8, Type: struct FVector2D
			constexpr auto UVOffset = 0x7c; // Size: 8, Type: struct FVector2D
			constexpr auto bWorldSpaceUVScale = 0x84; // Size: 1, Type: bool
	}
} 
