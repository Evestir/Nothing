namespace offsets
{
	namespace UOpenXRHandTrackingLiveLinkRemapAsset
	{
			constexpr auto bHasMetacarpals = 0x28; // Size: 1, Type: bool
			constexpr auto bRetargetRotationOnly = 0x29; // Size: 1, Type: bool
			constexpr auto SwizzleX = 0x2a; // Size: 1, Type: enum class EQuatSwizzleAxisB
			constexpr auto SwizzleY = 0x2b; // Size: 1, Type: enum class EQuatSwizzleAxisB
			constexpr auto SwizzleZ = 0x2c; // Size: 1, Type: enum class EQuatSwizzleAxisB
			constexpr auto SwizzleW = 0x2d; // Size: 1, Type: enum class EQuatSwizzleAxisB
			constexpr auto HandTrackingBoneNameMap = 0x30; // Size: 80, Type: struct TMap<struct FName, struct FName>
	}
} 
