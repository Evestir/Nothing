namespace offsets
{
	namespace USpineSkeletonAnimationComponent
	{
			constexpr auto animationStart = 0x108; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto AnimationInterrupt = 0x118; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto AnimationEvent = 0x128; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto AnimationComplete = 0x138; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto animationEnd = 0x148; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto AnimationDispose = 0x158; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto PreviewAnimation = 0x168; // Size: 16, Type: struct FString
			constexpr auto PreviewSkin = 0x178; // Size: 16, Type: struct FString
			constexpr auto trackEntries = 0x190; // Size: 80, Type: struct TSet<struct UTrackEntry*>
			constexpr auto bAutoPlaying = 0x1e0; // Size: 1, Type: bool
	}
} 
