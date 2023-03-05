namespace offsets
{
	namespace UParticleModuleLocationSkelVertSurface
	{
			constexpr auto SourceType = 0x30; // Size: 1, Type: enum class ELocationSkelVertSurfaceSource
			constexpr auto UniversalOffset = 0x34; // Size: 12, Type: struct FVector
			constexpr auto bUpdatePositionEachFrame = 0x40; // Size: 1, Type: char
			constexpr auto bOrientMeshEmitters = 0x40; // Size: 1, Type: char
			constexpr auto bInheritBoneVelocity = 0x40; // Size: 1, Type: char
			constexpr auto InheritVelocityScale = 0x44; // Size: 4, Type: float
			constexpr auto SkelMeshActorParamName = 0x48; // Size: 8, Type: struct FName
			constexpr auto ValidAssociatedBones = 0x50; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto bEnforceNormalCheck = 0x60; // Size: 1, Type: char
			constexpr auto NormalToCompare = 0x64; // Size: 12, Type: struct FVector
			constexpr auto NormalCheckToleranceDegrees = 0x70; // Size: 4, Type: float
			constexpr auto NormalCheckTolerance = 0x74; // Size: 4, Type: float
			constexpr auto ValidMaterialIndices = 0x78; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto bInheritVertexColor = 0x88; // Size: 1, Type: char
			constexpr auto bInheritUV = 0x88; // Size: 1, Type: char
			constexpr auto InheritUVChannel = 0x8c; // Size: 4, Type: uint32_t
	}
} 
