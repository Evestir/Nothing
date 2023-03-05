namespace offsets
{
	namespace UNiagaraDataInterfaceSkeletalMesh
	{
			constexpr auto SourceMode = 0x38; // Size: 1, Type: enum class ENDISkeletalMesh_SourceMode
			constexpr auto Source = 0x40; // Size: 8, Type: struct AActor*
			constexpr auto MeshUserParameter = 0x48; // Size: 32, Type: struct FNiagaraUserParameterBinding
			constexpr auto SourceComponent = 0x68; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto SkinningMode = 0x70; // Size: 1, Type: enum class ENDISkeletalMesh_SkinningMode
			constexpr auto SamplingRegions = 0x78; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto WholeMeshLOD = 0x88; // Size: 4, Type: int32_t
			constexpr auto FilteredBones = 0x90; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto FilteredSockets = 0xa0; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto ExcludeBoneName = 0xb0; // Size: 8, Type: struct FName
			constexpr auto bExcludeBone = 0xb8; // Size: 1, Type: char
			constexpr auto UvSetIndex = 0xbc; // Size: 4, Type: int32_t
			constexpr auto bRequireCurrentFrameData = 0xc0; // Size: 1, Type: bool
	}
} 
