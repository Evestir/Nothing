namespace offsets
{
	namespace UMotionControllerComponent
	{
			constexpr auto PlayerIndex = 0x470; // Size: 4, Type: int32_t
			constexpr auto Hand = 0x474; // Size: 1, Type: enum class EControllerHand
			constexpr auto MotionSource = 0x478; // Size: 8, Type: struct FName
			constexpr auto bDisableLowLatencyUpdate = 0x480; // Size: 1, Type: char
			constexpr auto CurrentTrackingStatus = 0x484; // Size: 1, Type: enum class ETrackingStatus
			constexpr auto bDisplayDeviceModel = 0x485; // Size: 1, Type: bool
			constexpr auto DisplayModelSource = 0x488; // Size: 8, Type: struct FName
			constexpr auto CustomDisplayMesh = 0x490; // Size: 8, Type: struct UStaticMesh*
			constexpr auto DisplayMeshMaterialOverrides = 0x498; // Size: 16, Type: struct TArray<struct UMaterialInterface*>
			constexpr auto DisplayComponent = 0x510; // Size: 8, Type: struct UPrimitiveComponent*
	}
} 
