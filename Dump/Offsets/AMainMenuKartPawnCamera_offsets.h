namespace offsets
{
	namespace AMainMenuKartPawnCamera
	{
			constexpr auto CameraType = 0x880; // Size: 1, Type: enum class EPawnCameraType
			constexpr auto CameraBlendInfo = 0x884; // Size: 16, Type: struct FCameraBlendInfo
			constexpr auto SequenceInfo = 0x898; // Size: 80, Type: struct FSquenceInfo
			constexpr auto TargetRotationAnimInfo = 0x8e8; // Size: 80, Type: struct TMap<enum class EOutGamePawnType, struct FTargetRotatorAnimInfo>
			constexpr auto TargetLocationAnimInfo = 0x938; // Size: 80, Type: struct TMap<enum class EOutGamePawnType, struct FTargetVectorAnimInfo>
			constexpr auto TargetScaleAnimInfo = 0x988; // Size: 80, Type: struct TMap<enum class EOutGamePawnType, struct FTargetVectorAnimInfo>
			constexpr auto LevelSequencePlayer = 0x9d8; // Size: 8, Type: struct TWeakObjectPtr<ULevelSequencePlayer>
			constexpr auto PreCacheAssetContainer = 0x9f0; // Size: 80, Type: struct TSet<struct UObject*>
	}
} 
