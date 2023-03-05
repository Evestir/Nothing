namespace offsets
{
	namespace UNavCollision
	{
			constexpr auto CylinderCollision = 0x80; // Size: 16, Type: struct TArray<struct FNavCollisionCylinder>
			constexpr auto BoxCollision = 0x90; // Size: 16, Type: struct TArray<struct FNavCollisionBox>
			constexpr auto AreaClass = 0xa0; // Size: 8, Type: UNavArea*
			constexpr auto bGatherConvexGeometry = 0xa8; // Size: 1, Type: char
			constexpr auto bCreateOnClient = 0xa8; // Size: 1, Type: char
	}
} 
