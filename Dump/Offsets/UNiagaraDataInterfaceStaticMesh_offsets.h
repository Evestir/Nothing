namespace offsets
{
	namespace UNiagaraDataInterfaceStaticMesh
	{
			constexpr auto SourceMode = 0x38; // Size: 1, Type: enum class ENDIStaticMesh_SourceMode
			constexpr auto DefaultMesh = 0x40; // Size: 8, Type: struct UStaticMesh*
			constexpr auto Source = 0x48; // Size: 8, Type: struct AActor*
			constexpr auto SourceComponent = 0x50; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto SectionFilter = 0x58; // Size: 16, Type: struct FNDIStaticMeshSectionFilter
			constexpr auto bUsePhysicsBodyVelocity = 0x68; // Size: 1, Type: bool
			constexpr auto FilteredSockets = 0x70; // Size: 16, Type: struct TArray<struct FName>
	}
} 
