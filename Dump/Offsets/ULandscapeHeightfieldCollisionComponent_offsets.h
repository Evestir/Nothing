namespace offsets
{
	namespace ULandscapeHeightfieldCollisionComponent
	{
			constexpr auto ComponentLayerInfos = 0x470; // Size: 16, Type: struct TArray<struct ULandscapeLayerInfoObject*>
			constexpr auto SectionBaseX = 0x480; // Size: 4, Type: int32_t
			constexpr auto SectionBaseY = 0x484; // Size: 4, Type: int32_t
			constexpr auto CollisionSizeQuads = 0x488; // Size: 4, Type: int32_t
			constexpr auto CollisionScale = 0x48c; // Size: 4, Type: float
			constexpr auto SimpleCollisionSizeQuads = 0x490; // Size: 4, Type: int32_t
			constexpr auto CollisionQuadFlags = 0x498; // Size: 16, Type: struct TArray<char>
			constexpr auto HeightfieldGuid = 0x4a8; // Size: 16, Type: struct FGuid
			constexpr auto CachedLocalBox = 0x4b8; // Size: 28, Type: struct FBox
			constexpr auto RenderComponent = 0x4d4; // Size: 28, Type: 
			constexpr auto CookedPhysicalMaterials = 0x500; // Size: 16, Type: struct TArray<struct UPhysicalMaterial*>
	}
} 
