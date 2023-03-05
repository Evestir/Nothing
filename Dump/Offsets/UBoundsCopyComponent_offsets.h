namespace offsets
{
	namespace UBoundsCopyComponent
	{
			constexpr auto BoundsSourceActor = 0xb0; // Size: 40, Type: struct TSoftObjectPtr<AActor>
			constexpr auto bUseCollidingComponentsForSourceBounds = 0xd8; // Size: 1, Type: bool
			constexpr auto bKeepOwnBoundsScale = 0xd9; // Size: 1, Type: bool
			constexpr auto bUseCollidingComponentsForOwnBounds = 0xda; // Size: 1, Type: bool
			constexpr auto PostTransform = 0xe0; // Size: 48, Type: struct FTransform
			constexpr auto bCopyXBounds = 0x110; // Size: 1, Type: bool
			constexpr auto bCopyYBounds = 0x111; // Size: 1, Type: bool
			constexpr auto bCopyZBounds = 0x112; // Size: 1, Type: bool
	}
} 
