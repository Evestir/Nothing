namespace offsets
{
	namespace UStudioLogicComponent
	{
			constexpr auto TransformState = 0x180; // Size: 1, Type: enum class EStudioTransformState
			constexpr auto TransformLength = 0x184; // Size: 4, Type: float
			constexpr auto OrgCubeTexture = 0x188; // Size: 8, Type: struct UTexture*
			constexpr auto InputLimit = 0x190; // Size: 16, Type: struct FInputLimitValue
			constexpr auto CurrentStudioMode = 0x1a0; // Size: 1, Type: enum class EStudioMode
			constexpr auto PawnOriginalRotator = 0x1a4; // Size: 12, Type: struct FRotator
			constexpr auto PawnOriginalLoc = 0x1b0; // Size: 12, Type: struct FVector
			constexpr auto PawnOrginalScale = 0x1bc; // Size: 12, Type: struct FVector
			constexpr auto FloorMeshs = 0x1c8; // Size: 16, Type: struct TArray<struct TSoftObjectPtr<UStaticMesh>>
			constexpr auto BgCubes = 0x1d8; // Size: 16, Type: struct TArray<struct TSoftObjectPtr<UTextureCube>>
	}
} 
