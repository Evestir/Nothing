namespace offsets
{
	namespace UARPin
	{
			constexpr auto TrackedGeometry = 0x28; // Size: 8, Type: struct UARTrackedGeometry*
			constexpr auto PinnedComponent = 0x30; // Size: 8, Type: struct USceneComponent*
			constexpr auto LocalToTrackingTransform = 0x40; // Size: 48, Type: struct FTransform
			constexpr auto LocalToAlignedTrackingTransform = 0x70; // Size: 48, Type: struct FTransform
			constexpr auto TrackingState = 0xa0; // Size: 1, Type: enum class EARTrackingState
			constexpr auto OnARTrackingStateChanged = 0xc0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnARTransformUpdated = 0xd0; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
