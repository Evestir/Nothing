namespace offsets
{
	namespace UNiagaraSystem
	{
			constexpr auto bDumpDebugSystemInfo = 0x30; // Size: 1, Type: bool
			constexpr auto bDumpDebugEmitterInfo = 0x31; // Size: 1, Type: bool
			constexpr auto bRequireCurrentFrameData = 0x33; // Size: 1, Type: bool
			constexpr auto bFixedBounds = 0x34; // Size: 1, Type: char
			constexpr auto EffectType = 0x38; // Size: 8, Type: struct UNiagaraEffectType*
			constexpr auto bOverrideScalabilitySettings = 0x40; // Size: 1, Type: bool
			constexpr auto ScalabilityOverrides = 0x48; // Size: 16, Type: struct TArray<struct FNiagaraSystemScalabilityOverride>
			constexpr auto SystemScalabilityOverrides = 0x58; // Size: 16, Type: struct FNiagaraSystemScalabilityOverrides
			constexpr auto EmitterHandles = 0x68; // Size: 16, Type: struct TArray<struct FNiagaraEmitterHandle>
			constexpr auto ParameterCollectionOverrides = 0x78; // Size: 16, Type: struct TArray<struct UNiagaraParameterCollectionInstance*>
			constexpr auto SystemSpawnScript = 0x88; // Size: 8, Type: struct UNiagaraScript*
			constexpr auto SystemUpdateScript = 0x90; // Size: 8, Type: struct UNiagaraScript*
			constexpr auto SystemCompiledData = 0xa8; // Size: 536, Type: struct FNiagaraSystemCompiledData
			constexpr auto ExposedParameters = 0x2c0; // Size: 200, Type: struct FNiagaraUserRedirectionParameterStore
			constexpr auto FixedBounds = 0x388; // Size: 28, Type: struct FBox
			constexpr auto bAutoDeactivate = 0x3a4; // Size: 1, Type: bool
			constexpr auto WarmupTime = 0x3a8; // Size: 4, Type: float
			constexpr auto WarmupTickCount = 0x3ac; // Size: 4, Type: int32_t
			constexpr auto WarmupTickDelta = 0x3b0; // Size: 4, Type: float
			constexpr auto bHasSystemScriptDIsWithPerInstanceData = 0x3b4; // Size: 1, Type: bool
			constexpr auto bNeedsGPUContextInitForDataInterfaces = 0x3b5; // Size: 1, Type: bool
			constexpr auto UserDINamesReadInSystemScripts = 0x3b8; // Size: 16, Type: struct TArray<struct FName>
	}
} 
