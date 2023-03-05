namespace offsets
{
	namespace UNiagaraParameterCollection
	{
			constexpr auto Namespace = 0x28; // Size: 8, Type: struct FName
			constexpr auto Parameters = 0x30; // Size: 16, Type: struct TArray<struct FNiagaraVariable>
			constexpr auto SourceMaterialCollection = 0x40; // Size: 8, Type: struct UMaterialParameterCollection*
			constexpr auto DefaultInstance = 0x48; // Size: 8, Type: struct UNiagaraParameterCollectionInstance*
			constexpr auto CompileId = 0x50; // Size: 16, Type: struct FGuid
	}
} 
