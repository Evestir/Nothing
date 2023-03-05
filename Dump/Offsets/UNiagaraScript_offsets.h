namespace offsets
{
	namespace UNiagaraScript
	{
			constexpr auto Usage = 0x28; // Size: 1, Type: enum class ENiagaraScriptUsage
			constexpr auto UsageId = 0x2c; // Size: 16, Type: struct FGuid
			constexpr auto RapidIterationParameters = 0x40; // Size: 120, Type: struct FNiagaraParameterStore
			constexpr auto ScriptExecutionParamStore = 0xb8; // Size: 152, Type: struct FNiagaraScriptExecutionParameterStore
			constexpr auto ScriptExecutionBoundParameters = 0x150; // Size: 16, Type: struct TArray<struct FNiagaraBoundParameter>
			constexpr auto CachedScriptVMId = 0x160; // Size: 88, Type: struct FNiagaraVMExecutableDataId
			constexpr auto CachedScriptVM = 0x1c8; // Size: 240, Type: struct FNiagaraVMExecutableData
			constexpr auto CachedParameterCollectionReferences = 0x2b8; // Size: 16, Type: struct TArray<struct UNiagaraParameterCollection*>
			constexpr auto CachedDefaultDataInterfaces = 0x2c8; // Size: 16, Type: struct TArray<struct FNiagaraScriptDataInterfaceInfo>
	}
} 
