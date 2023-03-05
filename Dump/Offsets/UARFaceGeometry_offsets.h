namespace offsets
{
	namespace UARFaceGeometry
	{
			constexpr auto LookAtTarget = 0xf8; // Size: 12, Type: struct FVector
			constexpr auto bIsTracked = 0x104; // Size: 1, Type: bool
			constexpr auto BlendShapes = 0x108; // Size: 80, Type: struct TMap<enum class EARFaceBlendShape, float>
			constexpr auto LeftEyeTransform = 0x190; // Size: 48, Type: struct FTransform
			constexpr auto RightEyeTransform = 0x1c0; // Size: 48, Type: struct FTransform
	}
} 
