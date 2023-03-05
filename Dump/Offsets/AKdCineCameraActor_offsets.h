namespace offsets
{
	namespace AKdCineCameraActor
	{
			constexpr auto LookAtActorType = 0x880; // Size: 1, Type: enum class ECineCameraActorType
			constexpr auto LookAtCharacter = 0x881; // Size: 1, Type: bool
			constexpr auto FOV = 0x884; // Size: 4, Type: float
			constexpr auto UseUserFOV = 0x888; // Size: 1, Type: bool
			constexpr auto bAttachToDriveCamera = 0x889; // Size: 1, Type: bool
			constexpr auto PrevLookAtActorType = 0x88a; // Size: 1, Type: enum class ECineCameraActorType
			constexpr auto LookAtActor = 0x890; // Size: 8, Type: struct AActor*
			constexpr auto DriveCameraActor = 0x898; // Size: 8, Type: struct AActor*
			constexpr auto PrevLookAtActorLocation = 0x8a0; // Size: 12, Type: struct FVector
			constexpr auto bUseLookAtActorByTransfromOriginActor = 0x8ac; // Size: 1, Type: bool
			constexpr auto TransformOrigin = 0x8b0; // Size: 48, Type: struct FTransform
			constexpr auto bPrevUseLookAtActorByTransformOriginActor = 0x8e0; // Size: 1, Type: bool
			constexpr auto PrevTransformOrigin = 0x8f0; // Size: 48, Type: struct FTransform
	}
} 
