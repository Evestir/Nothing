namespace offsets
{
	namespace UAnimSet
	{
			constexpr auto bAnimRotationOnly = 0x28; // Size: 1, Type: char
			constexpr auto TrackBoneNames = 0x30; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto LinkupCache = 0x40; // Size: 16, Type: struct TArray<struct FAnimSetMeshLinkup>
			constexpr auto BoneUseAnimTranslation = 0x50; // Size: 16, Type: struct TArray<char>
			constexpr auto ForceUseMeshTranslation = 0x60; // Size: 16, Type: struct TArray<char>
			constexpr auto UseTranslationBoneNames = 0x70; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto ForceMeshTranslationBoneNames = 0x80; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto PreviewSkelMeshName = 0x90; // Size: 8, Type: struct FName
			constexpr auto BestRatioSkelMeshName = 0x98; // Size: 8, Type: struct FName
	}
} 
