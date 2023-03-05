namespace offsets
{
	namespace UGroomComponent
	{
			constexpr auto GroomAsset = 0x4b0; // Size: 8, Type: struct UGroomAsset*
			constexpr auto GroomCache = 0x4b8; // Size: 8, Type: struct UGroomCache*
			constexpr auto NiagaraComponents = 0x4c0; // Size: 16, Type: struct TArray<struct UNiagaraComponent*>
			constexpr auto SourceSkeletalMesh = 0x4d0; // Size: 8, Type: struct USkeletalMesh*
			constexpr auto BindingAsset = 0x4d8; // Size: 8, Type: struct UGroomBindingAsset*
			constexpr auto PhysicsAsset = 0x4e0; // Size: 8, Type: struct UPhysicsAsset*
			constexpr auto Strands_DebugMaterial = 0x4e8; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto Strands_DefaultMaterial = 0x4f0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto Cards_DefaultMaterial = 0x4f8; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto Meshes_DefaultMaterial = 0x500; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto AngularSpringsSystem = 0x508; // Size: 8, Type: struct UNiagaraSystem*
			constexpr auto CosseratRodsSystem = 0x510; // Size: 8, Type: struct UNiagaraSystem*
			constexpr auto AttachmentName = 0x518; // Size: 16, Type: struct FString
			constexpr auto GroomGroupsDesc = 0x570; // Size: 16, Type: struct TArray<struct FHairGroupDesc>
			constexpr auto bRunning = 0x580; // Size: 1, Type: bool
			constexpr auto bLooping = 0x581; // Size: 1, Type: bool
			constexpr auto bManualTick = 0x582; // Size: 1, Type: bool
			constexpr auto ElapsedTime = 0x584; // Size: 4, Type: float
	}
} 
