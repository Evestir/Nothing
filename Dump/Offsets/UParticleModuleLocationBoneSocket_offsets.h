namespace offsets
{
	namespace UParticleModuleLocationBoneSocket
	{
			constexpr auto SourceType = 0x30; // Size: 1, Type: enum class ELocationBoneSocketSource
			constexpr auto UniversalOffset = 0x34; // Size: 12, Type: struct FVector
			constexpr auto SourceLocations = 0x40; // Size: 16, Type: struct TArray<struct FLocationBoneSocketInfo>
			constexpr auto SelectionMethod = 0x50; // Size: 1, Type: enum class ELocationBoneSocketSelectionMethod
			constexpr auto bUpdatePositionEachFrame = 0x54; // Size: 1, Type: char
			constexpr auto bOrientMeshEmitters = 0x54; // Size: 1, Type: char
			constexpr auto bInheritBoneVelocity = 0x54; // Size: 1, Type: char
			constexpr auto InheritVelocityScale = 0x58; // Size: 4, Type: float
			constexpr auto SkelMeshActorParamName = 0x5c; // Size: 8, Type: struct FName
			constexpr auto NumPreSelectedIndices = 0x64; // Size: 4, Type: int32_t
	}
} 
