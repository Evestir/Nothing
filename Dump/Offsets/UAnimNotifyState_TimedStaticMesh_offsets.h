namespace offsets
{
	namespace UAnimNotifyState_TimedStaticMesh
	{
			constexpr auto AttachingItems = 0x30; // Size: 16, Type: struct TArray<struct UStaticMesh*>
			constexpr auto DefaultAttachIndex = 0x40; // Size: 4, Type: int32_t
			constexpr auto Additional_PrimitiveComponent = 0x48; // Size: 8, Type: struct UStaticMesh*
			constexpr auto SocketName = 0x50; // Size: 8, Type: struct FName
			constexpr auto LocationOffset = 0x58; // Size: 12, Type: struct FVector
			constexpr auto RotationOffset = 0x64; // Size: 12, Type: struct FRotator
			constexpr auto AnimTime = 0x70; // Size: 4, Type: float
			constexpr auto bUseCustomDepth = 0x74; // Size: 1, Type: bool
			constexpr auto CustomDepthStencilValue = 0x78; // Size: 4, Type: int32_t
			constexpr auto RendererStencilMask = 0x7c; // Size: 1, Type: enum class ERendererStencilMask
			constexpr auto bUseVisibleCurve = 0x7d; // Size: 1, Type: bool
			constexpr auto CurveName = 0x80; // Size: 8, Type: struct FName
			constexpr auto OverlayMaterial = 0x88; // Size: 40, Type: struct FOverlayMaterialData
	}
} 
