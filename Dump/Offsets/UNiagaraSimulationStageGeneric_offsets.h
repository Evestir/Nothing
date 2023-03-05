namespace offsets
{
	namespace UNiagaraSimulationStageGeneric
	{
			constexpr auto IterationSource = 0x40; // Size: 1, Type: enum class ENiagaraIterationSource
			constexpr auto Iterations = 0x44; // Size: 4, Type: int32_t
			constexpr auto bSpawnOnly = 0x48; // Size: 1, Type: char
			constexpr auto bDisablePartialParticleUpdate = 0x48; // Size: 1, Type: char
			constexpr auto DataInterface = 0x50; // Size: 32, Type: struct FNiagaraVariableDataInterfaceBinding
	}
} 
