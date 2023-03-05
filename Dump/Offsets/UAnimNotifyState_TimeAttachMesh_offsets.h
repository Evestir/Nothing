namespace offsets
{
	namespace UAnimNotifyState_TimeAttachMesh
	{
			constexpr auto AttachingItems = 0x30; // Size: 16, Type: struct TArray<struct USkeletalMesh*>
			constexpr auto AttachingItemsAnim = 0x40; // Size: 16, Type: struct TArray<struct UAnimSequenceBase*>
			constexpr auto DefaultAttachIndex = 0x50; // Size: 4, Type: int32_t
			constexpr auto Additional_PrimitiveComponent = 0x58; // Size: 8, Type: struct USkeletalMesh*
			constexpr auto Additional_Animations = 0x60; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto bLoop = 0x68; // Size: 1, Type: bool
			constexpr auto SocketName = 0x6c; // Size: 8, Type: struct FName
			constexpr auto LocationOffset = 0x74; // Size: 12, Type: struct FVector
			constexpr auto RotationOffset = 0x80; // Size: 12, Type: struct FRotator
			constexpr auto bUseCustomDepth = 0x8c; // Size: 1, Type: bool
			constexpr auto CustomDepthStencilValue = 0x90; // Size: 4, Type: int32_t
			constexpr auto RendererStencilMask = 0x94; // Size: 1, Type: enum class ERendererStencilMask
			constexpr auto AnimTime = 0x98; // Size: 4, Type: float
			constexpr auto CurveValue = 0xa0; // Size: 16, Type: struct TArray<struct FAttachedMeshCurveData>
	}
} 
