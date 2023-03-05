namespace offsets
{
	namespace USceneComponent
	{
			constexpr auto PhysicsVolume = 0xb8; // Size: 8, Type: struct TWeakObjectPtr<APhysicsVolume>
			constexpr auto AttachParent = 0xc0; // Size: 8, Type: struct USceneComponent*
			constexpr auto AttachSocketName = 0xc8; // Size: 8, Type: struct FName
			constexpr auto AttachChildren = 0xd0; // Size: 16, Type: struct TArray<struct USceneComponent*>
			constexpr auto ClientAttachedChildren = 0xe0; // Size: 16, Type: struct TArray<struct USceneComponent*>
			constexpr auto RelativeLocation = 0x11c; // Size: 12, Type: struct FVector
			constexpr auto RelativeRotation = 0x128; // Size: 12, Type: struct FRotator
			constexpr auto RelativeScale3D = 0x134; // Size: 12, Type: struct FVector
			constexpr auto ComponentVelocity = 0x140; // Size: 12, Type: struct FVector
			constexpr auto bComponentToWorldUpdated = 0x14c; // Size: 1, Type: char
			constexpr auto bAbsoluteLocation = 0x14c; // Size: 1, Type: char
			constexpr auto bAbsoluteRotation = 0x14c; // Size: 1, Type: char
			constexpr auto bAbsoluteScale = 0x14c; // Size: 1, Type: char
			constexpr auto bVisible = 0x14c; // Size: 1, Type: char
			constexpr auto bShouldBeAttached = 0x14c; // Size: 1, Type: char
			constexpr auto bShouldSnapLocationWhenAttached = 0x14c; // Size: 1, Type: char
			constexpr auto bShouldSnapRotationWhenAttached = 0x14d; // Size: 1, Type: char
			constexpr auto bShouldUpdatePhysicsVolume = 0x14d; // Size: 1, Type: char
			constexpr auto bHiddenInGame = 0x14d; // Size: 1, Type: char
			constexpr auto bIsExceptMobile = 0x14d; // Size: 1, Type: char
			constexpr auto bBoundsChangeTriggersStreamingDataRebuild = 0x14d; // Size: 1, Type: char
			constexpr auto bUseAttachParentBound = 0x14d; // Size: 1, Type: char
			constexpr auto Mobility = 0x14f; // Size: 1, Type: enum class EComponentMobility
			constexpr auto DetailMode = 0x150; // Size: 1, Type: enum class EDetailMode
			constexpr auto MirrorDetailLevel = 0x154; // Size: 4, Type: int32_t
			constexpr auto PhysicsVolumeChangedDelegate = 0x158; // Size: 1, Type: struct FMulticastSparseDelegate
	}
} 
