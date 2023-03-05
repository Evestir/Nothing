namespace offsets
{
	namespace UMovementComponent
	{
			constexpr auto UpdatedComponent = 0xb0; // Size: 8, Type: struct USceneComponent*
			constexpr auto UpdatedPrimitive = 0xb8; // Size: 8, Type: struct UPrimitiveComponent*
			constexpr auto Velocity = 0xc4; // Size: 12, Type: struct FVector
			constexpr auto PlaneConstraintNormal = 0xd0; // Size: 12, Type: struct FVector
			constexpr auto PlaneConstraintOrigin = 0xdc; // Size: 12, Type: struct FVector
			constexpr auto bUpdateOnlyIfRendered = 0xe8; // Size: 1, Type: char
			constexpr auto bAutoUpdateTickRegistration = 0xe8; // Size: 1, Type: char
			constexpr auto bTickBeforeOwner = 0xe8; // Size: 1, Type: char
			constexpr auto bAutoRegisterUpdatedComponent = 0xe8; // Size: 1, Type: char
			constexpr auto bConstrainToPlane = 0xe8; // Size: 1, Type: char
			constexpr auto bSnapToPlaneAtStart = 0xe8; // Size: 1, Type: char
			constexpr auto bAutoRegisterPhysicsVolumeUpdates = 0xe8; // Size: 1, Type: char
			constexpr auto bComponentShouldUpdatePhysicsVolume = 0xe8; // Size: 1, Type: char
			constexpr auto PlaneConstraintAxisSetting = 0xeb; // Size: 1, Type: enum class EPlaneConstraintAxisSetting
	}
} 
