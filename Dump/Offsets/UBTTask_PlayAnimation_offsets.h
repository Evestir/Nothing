namespace offsets
{
	namespace UBTTask_PlayAnimation
	{
			constexpr auto AnimationToPlay = 0x70; // Size: 8, Type: struct UAnimationAsset*
			constexpr auto bLooping = 0x78; // Size: 1, Type: char
			constexpr auto bNonBlocking = 0x78; // Size: 1, Type: char
			constexpr auto MyOwnerComp = 0x80; // Size: 8, Type: struct UBehaviorTreeComponent*
			constexpr auto CachedSkelMesh = 0x88; // Size: 8, Type: struct USkeletalMeshComponent*
	}
} 
