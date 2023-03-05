namespace offsets
{
	namespace USpineSkeletonDataAsset
	{
			constexpr auto DefaultMix = 0x28; // Size: 4, Type: float
			constexpr auto MixData = 0x30; // Size: 16, Type: struct TArray<struct FSpineAnimationStateMixData>
			constexpr auto Bones = 0x40; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto Slots = 0x50; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto Skins = 0x60; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto Animations = 0x70; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto events = 0x80; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto rawData = 0x90; // Size: 16, Type: struct TArray<char>
			constexpr auto skeletonDataFileName = 0xa0; // Size: 8, Type: struct FName
	}
} 
