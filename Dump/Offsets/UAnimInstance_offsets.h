namespace offsets
{
	namespace UAnimInstance
	{
			constexpr auto CurrentSkeleton = 0x28; // Size: 8, Type: struct USkeleton*
			constexpr auto RootMotionMode = 0x30; // Size: 1, Type: enum class ERootMotionMode
			constexpr auto bUseMultiThreadedAnimationUpdate = 0x31; // Size: 1, Type: char
			constexpr auto bUsingCopyPoseFromMesh = 0x31; // Size: 1, Type: char
			constexpr auto bReceiveNotifiesFromLinkedInstances = 0x31; // Size: 1, Type: char
			constexpr auto bPropagateNotifiesToLinkedInstances = 0x31; // Size: 1, Type: char
			constexpr auto bQueueMontageEvents = 0x31; // Size: 1, Type: char
			constexpr auto OnMontageBlendingOut = 0x38; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMontageStarted = 0x48; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMontageEnded = 0x58; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAllMontageInstancesEnded = 0x68; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto NotifyQueue = 0x100; // Size: 112, Type: struct FAnimNotifyQueue
			constexpr auto ActiveAnimNotifyState = 0x170; // Size: 16, Type: struct TArray<struct FAnimNotifyEvent>
	}
} 
