namespace offsets
{
	namespace UNiagaraComponent
	{
			constexpr auto Asset = 0x470; // Size: 8, Type: struct UNiagaraSystem*
			constexpr auto TickBehavior = 0x478; // Size: 1, Type: enum class ENiagaraTickBehavior
			constexpr auto RandomSeedOffset = 0x47c; // Size: 4, Type: int32_t
			constexpr auto OverrideParameters = 0x480; // Size: 200, Type: struct FNiagaraUserRedirectionParameterStore
			constexpr auto bForceSolo = 0x548; // Size: 1, Type: char
			constexpr auto bEnableGpuComputeDebug = 0x548; // Size: 1, Type: char
			constexpr auto bAutoDestroy = 0x578; // Size: 1, Type: char
			constexpr auto bRenderingEnabled = 0x578; // Size: 1, Type: char
			constexpr auto bAutoManageAttachment = 0x578; // Size: 1, Type: char
			constexpr auto bAutoAttachWeldSimulatedBodies = 0x578; // Size: 1, Type: char
			constexpr auto MaxTimeBeforeForceUpdateTransform = 0x57c; // Size: 4, Type: float
			constexpr auto EmitterMaterials = 0x580; // Size: 16, Type: struct TArray<struct FNiagaraMaterialOverride>
			constexpr auto OnSystemFinished = 0x598; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto AutoAttachParent = 0x5a8; // Size: 8, Type: struct TWeakObjectPtr<USceneComponent>
			constexpr auto AutoAttachSocketName = 0x5b0; // Size: 8, Type: struct FName
			constexpr auto AutoAttachLocationRule = 0x5b8; // Size: 1, Type: enum class EAttachmentRule
			constexpr auto AutoAttachRotationRule = 0x5b9; // Size: 1, Type: enum class EAttachmentRule
			constexpr auto AutoAttachScaleRule = 0x5ba; // Size: 1, Type: enum class EAttachmentRule
	}
} 
