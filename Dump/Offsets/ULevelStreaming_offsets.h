namespace offsets
{
	namespace ULevelStreaming
	{
			constexpr auto WorldAsset = 0x28; // Size: 40, Type: struct TSoftObjectPtr<UWorld>
			constexpr auto PackageNameToLoad = 0x50; // Size: 8, Type: struct FName
			constexpr auto LODPackageNames = 0x58; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto LevelTransform = 0x80; // Size: 48, Type: struct FTransform
			constexpr auto LevelLODIndex = 0xb0; // Size: 4, Type: int32_t
			constexpr auto StreamingPriority = 0xb4; // Size: 4, Type: int32_t
			constexpr auto bShouldBeVisible = 0xba; // Size: 1, Type: char
			constexpr auto bShouldBeLoaded = 0xba; // Size: 1, Type: char
			constexpr auto bLocked = 0xba; // Size: 1, Type: char
			constexpr auto bIsStatic = 0xba; // Size: 1, Type: char
			constexpr auto bShouldBlockOnLoad = 0xba; // Size: 1, Type: char
			constexpr auto bShouldBlockOnUnload = 0xbb; // Size: 1, Type: char
			constexpr auto bDisableDistanceStreaming = 0xbb; // Size: 1, Type: char
			constexpr auto bDrawOnLevelStatusMap = 0xbb; // Size: 1, Type: char
			constexpr auto LevelColor = 0xbc; // Size: 16, Type: struct FLinearColor
			constexpr auto EditorStreamingVolumes = 0xd0; // Size: 16, Type: struct TArray<struct ALevelStreamingVolume*>
			constexpr auto MinTimeBetweenVolumeUnloadRequests = 0xe0; // Size: 4, Type: float
			constexpr auto LevelStreamingType = 0xe4; // Size: 1, Type: enum class ELevelStreamingType
			constexpr auto LevelDetailMode = 0xe5; // Size: 1, Type: enum class EDetailMode
			constexpr auto OnLevelLoaded = 0xf0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnLevelUnloaded = 0x100; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnLevelShown = 0x110; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnLevelHidden = 0x120; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto LoadedLevel = 0x130; // Size: 8, Type: struct ULevel*
			constexpr auto PendingUnloadLevel = 0x138; // Size: 8, Type: struct ULevel*
	}
} 
