namespace offsets
{
	namespace UNiagaraBaselineController
	{
			constexpr auto TestDuration = 0x28; // Size: 4, Type: float
			constexpr auto EffectType = 0x30; // Size: 8, Type: struct UNiagaraEffectType*
			constexpr auto Owner = 0x38; // Size: 8, Type: struct ANiagaraPerfBaselineActor*
			constexpr auto System = 0x40; // Size: 40, Type: struct TSoftObjectPtr<UNiagaraSystem>
	}
} 
