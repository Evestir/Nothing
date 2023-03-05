namespace offsets
{
	namespace UAnimBlueprint
	{
			constexpr auto TargetSkeleton = 0xa8; // Size: 8, Type: struct USkeleton*
			constexpr auto Groups = 0xb0; // Size: 16, Type: struct TArray<struct FAnimGroupInfo>
			constexpr auto bUseMultiThreadedAnimationUpdate = 0xc0; // Size: 1, Type: bool
			constexpr auto bWarnAboutBlueprintUsage = 0xc1; // Size: 1, Type: bool
	}
} 
