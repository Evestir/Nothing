namespace offsets
{
	namespace UPhysicsObjectToolPropertySet
	{
			constexpr auto ObjectName = 0x60; // Size: 16, Type: struct FString
			constexpr auto CollisionType = 0x70; // Size: 4, Type: enum class ECollisionGeometryMode
			constexpr auto Spheres = 0x78; // Size: 16, Type: struct TArray<struct FPhysicsSphereData>
			constexpr auto Boxes = 0x88; // Size: 16, Type: struct TArray<struct FPhysicsBoxData>
			constexpr auto Capsules = 0x98; // Size: 16, Type: struct TArray<struct FPhysicsCapsuleData>
			constexpr auto Convexes = 0xa8; // Size: 16, Type: struct TArray<struct FPhysicsConvexData>
	}
} 
