namespace offsets
{
	namespace UPoseAsset
	{
			constexpr auto PoseContainer = 0x80; // Size: 144, Type: struct FPoseDataContainer
			constexpr auto bAdditivePose = 0x110; // Size: 1, Type: bool
			constexpr auto BasePoseIndex = 0x114; // Size: 4, Type: int32_t
			constexpr auto RetargetSource = 0x118; // Size: 8, Type: struct FName
			constexpr auto RetargetSourceAssetReferencePose = 0x120; // Size: 16, Type: struct TArray<struct FTransform>
	}
} 
