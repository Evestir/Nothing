namespace offsets
{
	namespace UParticleSystemComponent
	{
			constexpr auto Template = 0x470; // Size: 8, Type: struct UParticleSystem*
			constexpr auto EmitterMaterials = 0x478; // Size: 16, Type: struct TArray<struct UMaterialInterface*>
			constexpr auto SkelMeshComponents = 0x488; // Size: 16, Type: struct TArray<struct USkeletalMeshComponent*>
			constexpr auto bResetOnDetach = 0x499; // Size: 1, Type: char
			constexpr auto bUpdateOnDedicatedServer = 0x499; // Size: 1, Type: char
			constexpr auto bAllowRecycling = 0x499; // Size: 1, Type: char
			constexpr auto bAutoManageAttachment = 0x499; // Size: 1, Type: char
			constexpr auto bAutoAttachWeldSimulatedBodies = 0x499; // Size: 1, Type: char
			constexpr auto bWarmingUp = 0x49a; // Size: 1, Type: char
			constexpr auto bOverrideLODMethod = 0x49a; // Size: 1, Type: char
			constexpr auto bSkipUpdateDynamicDataDuringTick = 0x49a; // Size: 1, Type: char
			constexpr auto LODMethod = 0x4a5; // Size: 1, Type: enum class ParticleSystemLODMethod
			constexpr auto RequiredSignificance = 0x4a6; // Size: 1, Type: enum class EParticleSignificanceLevel
			constexpr auto InstanceParameters = 0x4a8; // Size: 16, Type: struct TArray<struct FParticleSysParam>
			constexpr auto OnParticleSpawn = 0x4b8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnParticleBurst = 0x4c8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnParticleDeath = 0x4d8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnParticleCollide = 0x4e8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto bOldPositionValid = 0x4f8; // Size: 1, Type: bool
			constexpr auto OldPosition = 0x4fc; // Size: 12, Type: struct FVector
			constexpr auto PartSysVelocity = 0x508; // Size: 12, Type: struct FVector
			constexpr auto WarmupTime = 0x514; // Size: 4, Type: float
			constexpr auto WarmupTickRate = 0x518; // Size: 4, Type: float
			constexpr auto SecondsBeforeInactive = 0x520; // Size: 4, Type: float
			constexpr auto MaxTimeBeforeForceUpdateTransform = 0x528; // Size: 4, Type: float
			constexpr auto ReplayClips = 0x548; // Size: 16, Type: struct TArray<struct UParticleSystemReplay*>
			constexpr auto CustomTimeDilation = 0x560; // Size: 4, Type: float
			constexpr auto AutoAttachParent = 0x5b8; // Size: 8, Type: struct TWeakObjectPtr<USceneComponent>
			constexpr auto AutoAttachSocketName = 0x5c0; // Size: 8, Type: struct FName
			constexpr auto AutoAttachLocationRule = 0x5c8; // Size: 1, Type: enum class EAttachmentRule
			constexpr auto AutoAttachRotationRule = 0x5c9; // Size: 1, Type: enum class EAttachmentRule
			constexpr auto AutoAttachScaleRule = 0x5ca; // Size: 1, Type: enum class EAttachmentRule
			constexpr auto OnSystemFinished = 0x5f8; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
