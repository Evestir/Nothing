namespace offsets
{
	namespace UBlendSpaceBase
	{
			constexpr auto bRotationBlendInMeshSpace = 0x88; // Size: 1, Type: bool
			constexpr auto AnimLength = 0x8c; // Size: 4, Type: float
			constexpr auto InterpolationParam[3] = 0x90; // Size: 24, Type: struct FInterpolationParameter
			constexpr auto TargetWeightInterpolationSpeedPerSec = 0xa8; // Size: 4, Type: float
			constexpr auto NotifyTriggerMode = 0xac; // Size: 1, Type: enum class ENotifyTriggerMode
			constexpr auto PerBoneBlend = 0xb0; // Size: 16, Type: struct TArray<struct FPerBoneInterpolation>
			constexpr auto SampleIndexWithMarkers = 0xc0; // Size: 4, Type: int32_t
			constexpr auto SampleData = 0xc8; // Size: 16, Type: struct TArray<struct FBlendSample>
			constexpr auto GridSamples = 0xd8; // Size: 16, Type: struct TArray<struct FEditorElement>
			constexpr auto BlendParameters[3] = 0xe8; // Size: 96, Type: struct FBlendParameter
	}
} 
