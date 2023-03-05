namespace offsets
{
	namespace ULiveLinkTransformAxisSwitchPreProcessor
	{
			constexpr auto FrontAxis = 0x28; // Size: 1, Type: enum class ELiveLinkAxis
			constexpr auto RightAxis = 0x29; // Size: 1, Type: enum class ELiveLinkAxis
			constexpr auto UpAxis = 0x2a; // Size: 1, Type: enum class ELiveLinkAxis
			constexpr auto bUseOffsetPosition = 0x2b; // Size: 1, Type: bool
			constexpr auto bUseOffsetOrientation = 0x2c; // Size: 1, Type: bool
			constexpr auto OffsetPosition = 0x30; // Size: 12, Type: struct FVector
			constexpr auto OffsetOrientation = 0x3c; // Size: 12, Type: struct FRotator
	}
} 
