namespace offsets
{
	namespace UPhysicsHandleComponent
	{
			constexpr auto GrabbedComponent = 0xb0; // Size: 8, Type: struct UPrimitiveComponent*
			constexpr auto bSoftAngularConstraint = 0xc0; // Size: 1, Type: char
			constexpr auto bSoftLinearConstraint = 0xc0; // Size: 1, Type: char
			constexpr auto bInterpolateTarget = 0xc0; // Size: 1, Type: char
			constexpr auto LinearDamping = 0xc4; // Size: 4, Type: float
			constexpr auto LinearStiffness = 0xc8; // Size: 4, Type: float
			constexpr auto AngularDamping = 0xcc; // Size: 4, Type: float
			constexpr auto AngularStiffness = 0xd0; // Size: 4, Type: float
			constexpr auto InterpolationSpeed = 0x140; // Size: 4, Type: float
	}
} 
