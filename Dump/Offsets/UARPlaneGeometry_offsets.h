namespace offsets
{
	namespace UARPlaneGeometry
	{
			constexpr auto Orientation = 0xf8; // Size: 1, Type: enum class EARPlaneOrientation
			constexpr auto Center = 0xfc; // Size: 12, Type: struct FVector
			constexpr auto Extent = 0x108; // Size: 12, Type: struct FVector
			constexpr auto BoundaryPolygon = 0x118; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto SubsumedBy = 0x128; // Size: 8, Type: struct UARPlaneGeometry*
	}
} 
