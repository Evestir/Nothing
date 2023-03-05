namespace offsets
{
	namespace UNavMovementComponent
	{
			constexpr auto NavAgentProps = 0xf0; // Size: 48, Type: struct FNavAgentProperties
			constexpr auto FixedPathBrakingDistance = 0x120; // Size: 4, Type: float
			constexpr auto bUpdateNavAgentWithOwnersCollision = 0x124; // Size: 1, Type: char
			constexpr auto bUseAccelerationForPaths = 0x124; // Size: 1, Type: char
			constexpr auto bUseFixedBrakingDistanceForPaths = 0x124; // Size: 1, Type: char
			constexpr auto MovementState = 0x125; // Size: 1, Type: struct FMovementProperties
			constexpr auto PathFollowingComp = 0x128; // Size: 8, Type: struct UObject*
	}
} 
